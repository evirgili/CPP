#include "Span.hpp"
#include <unistd.h>
#include <chrono>
#include <thread>
# define DEBUG 1

typedef std::chrono::steady_clock::time_point timepoint;

static void	normalSpan(Span* span_arr)	{

	int64_t longest;
	int64_t shortest;
	try
	{
		longest = span_arr->longestSpan();
		shortest = span_arr->shortestSpan();
		if (!DEBUG)	{
			std::cout << "Longest span is " << longest << std::endl;
			std::cout << "Shortest span is " << shortest << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static double	timeFunction(int n_tests, void (*f)(Span *))	{

	timepoint	stop;
	timepoint	start;
	Span		*new_span = nullptr;
	start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < n_tests; ++i)	{
		new_span = new Span(200000);
		new_span->fillContainer(std::rand() % 200000);
		f(new_span);
		delete new_span;
	}
	stop = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> fp_ms = stop - start;
	return fp_ms.count();
}

void	testAllSpans(int n_tests)	{
	std::cout << "normal took\t" << timeFunction(n_tests, &normalSpan) << " ms" << std::endl;
}

int main(void)	{

	// testAllSpans(200);
	// testAllSpans(1000);
	testAllSpans(5000);
	return 0;
}

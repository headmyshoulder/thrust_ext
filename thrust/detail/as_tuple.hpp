/*
 * as_tuple.hpp
 *
 *  Created on: Dec 13, 2010
 *      Author: karsten
 */

#ifndef AS_TUPLE_HPP_
#define AS_TUPLE_HPP_

#include <boost/fusion/sequence.hpp>
#include <thrust/tuple.h>

namespace thrust {
namespace result_of {
namespace detail {

	template< class Seq , size_t size >
	struct as_tuple;

	template< class Seq >
	struct as_tuple< Seq , 0 >
	{
		typedef thrust::tuple<> type;

		static type call( Seq &seq )
		{
			return type();
		}

	};

	template< class Seq >
	struct as_tuple< Seq , 1 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type
			> type;

		static type call( Seq &seq )
		{
			return type( boost::fusion::at_c< 0 >( seq ) );
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 2 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 3 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 4 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 3 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq ) ,
					boost::fusion::at_c< 3 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 5 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 3 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 4 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq ) ,
					boost::fusion::at_c< 3 >( seq ) ,
					boost::fusion::at_c< 4 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 6 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 3 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 4 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 5 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq ) ,
					boost::fusion::at_c< 3 >( seq ) ,
					boost::fusion::at_c< 4 >( seq ) ,
					boost::fusion::at_c< 5 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 7 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 3 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 4 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 5 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 6 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq ) ,
					boost::fusion::at_c< 3 >( seq ) ,
					boost::fusion::at_c< 4 >( seq ) ,
					boost::fusion::at_c< 5 >( seq ) ,
					boost::fusion::at_c< 6 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 8 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 3 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 4 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 5 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 6 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 7 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq ) ,
					boost::fusion::at_c< 3 >( seq ) ,
					boost::fusion::at_c< 4 >( seq ) ,
					boost::fusion::at_c< 5 >( seq ) ,
					boost::fusion::at_c< 6 >( seq ) ,
					boost::fusion::at_c< 7 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 9 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 3 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 4 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 5 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 6 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 7 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 8 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq ) ,
					boost::fusion::at_c< 3 >( seq ) ,
					boost::fusion::at_c< 4 >( seq ) ,
					boost::fusion::at_c< 5 >( seq ) ,
					boost::fusion::at_c< 6 >( seq ) ,
					boost::fusion::at_c< 7 >( seq ) ,
					boost::fusion::at_c< 8 >( seq )
					);
		}
	};

	template< class Seq >
	struct as_tuple< Seq , 10 >
	{
		typedef thrust::tuple<
			typename boost::fusion::result_of::value_at_c< Seq , 0 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 1 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 2 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 3 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 4 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 5 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 6 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 7 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 8 >::type ,
			typename boost::fusion::result_of::value_at_c< Seq , 9 >::type
			> type;

		static type call( Seq &seq )
		{
			return type(
					boost::fusion::at_c< 0 >( seq ) ,
					boost::fusion::at_c< 1 >( seq ) ,
					boost::fusion::at_c< 2 >( seq ) ,
					boost::fusion::at_c< 3 >( seq ) ,
					boost::fusion::at_c< 4 >( seq ) ,
					boost::fusion::at_c< 5 >( seq ) ,
					boost::fusion::at_c< 6 >( seq ) ,
					boost::fusion::at_c< 7 >( seq ) ,
					boost::fusion::at_c< 8 >( seq ) ,
					boost::fusion::at_c< 9 >( seq )
					);
		}
	};
}
}
}



#endif /* AS_TUPLE_HPP_ */

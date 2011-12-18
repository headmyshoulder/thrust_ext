/*
 * fusion_sequence_to_tuple.hpp
 *
 *  Created on: Dec 13, 2010
 *      Author: karsten
 */

#ifndef CONVERT_TUPLE_HPP_
#define CONVERT_TUPLE_HPP_

#include <boost/static_assert.hpp>
#include <boost/fusion/support.hpp>

#include <thrust/detail/as_tuple.hpp>


namespace thrust {

namespace result_of {

	template< class Sequence >
	struct as_tuple
	{
		BOOST_STATIC_ASSERT(( boost::fusion::traits::is_sequence< Sequence >::value ));

		typedef typename detail::as_tuple
		<
			Sequence ,
			boost::fusion::result_of::size< Sequence >::type::value
		> gen;
		typedef typename gen::type type;
	};
}

	template< class Sequence >
	typename result_of::as_tuple< Sequence >::type
	as_tuple( Sequence& seq )
	{
        typedef typename result_of::as_tuple< Sequence >::gen gen;
        return gen::call( seq );
	}

	template< class Sequence >
	typename result_of::as_tuple< Sequence const >::type
	as_tuple( Sequence const& seq )
	{
        typedef typename result_of::as_tuple< Sequence const >::gen gen;
        return gen::call( seq );
	}




}


#endif /* CONVERT_TUPLE_HPP_ */

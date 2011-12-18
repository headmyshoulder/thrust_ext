/*
 * tuple_for_each.hpp
 *
 *  Created on: Dec 15, 2010
 *      Author: karsten
 */

#ifndef TUPLE_FOR_EACH_HPP_
#define TUPLE_FOR_EACH_HPP_

namespace thrust
{

template< typename Fun >
inline __host__ __device__
void tuple_for_each( thrust::null_type , Fun f )
{
}


template< typename Tuple , typename Fun >
inline __host__ __device__
void tuple_for_each( Tuple& t , Fun f )
{
	f( t.get_head() );
	tuple_for_each( t.get_tail() , f );
}

} // namespace thrust


#endif /* TUPLE_FOR_EACH_HPP_ */

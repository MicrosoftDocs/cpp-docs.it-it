---
title: Struttura short_vector_traits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- short_vector_traits
- AMP_SHORT_VECTORS/short_vector_traits
- AMP_SHORT_VECTORS/Concurrency::graphics::short_vector_traits::short_vector_traits
- AMP_SHORT_VECTORS/Concurrency::graphics::short_vector_traits::size Constant
dev_langs:
- C++
ms.assetid: cd9492da-9e02-4a6e-9d50-b61252cdb460
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 22ba62ab8b3b4f9d14953dbab3edd8228ea85193
ms.openlocfilehash: aa123da5dfb5675a4b44d386224bf17e79df40a3
ms.lasthandoff: 02/24/2017

---
# <a name="shortvectortraits-structure"></a>Struttura short_vector_traits
short_vector_traits consente il recupero di un tipo scalare e un tipo scalare di un tipo di short vector o la lunghezza del vettore sottostante  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<
    typename T  
>  
struct short_vector_traits;  
template<>  
struct short_vector_traits<unsigned int>;  
template<>  
struct short_vector_traits<uint_2>;  
template<>  
struct short_vector_traits<uint_3>;  
template<>  
struct short_vector_traits<uint_4>;  
template<>  
struct short_vector_traits<int>;  
template<>  
struct short_vector_traits<int_2>;  
template<>  
struct short_vector_traits<int_3>;  
template<>  
struct short_vector_traits<int_4>;  
template<>  
struct short_vector_traits<float>;  
template<>  
struct short_vector_traits<float_2>;  
template<>  
struct short_vector_traits<float_3>;  
template<>  
struct short_vector_traits<float_4>;  
template<>  
struct short_vector_traits<unorm>;  
template<>  
struct short_vector_traits<unorm_2>;  
template<>  
struct short_vector_traits<unorm_3>;  
template<>  
struct short_vector_traits<unorm_4>;  
template<>  
struct short_vector_traits<norm>;  
template<>  
struct short_vector_traits<norm_2>;  
template<>  
struct short_vector_traits<norm_3>;  
template<>  
struct short_vector_traits<norm_4>;  
template<>  
struct short_vector_traits<double>;  
template<>  
struct short_vector_traits<double_2>;  
template<>  
struct short_vector_traits<double_3>;  
template<>  
struct short_vector_traits<double_4>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`||  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore short_vector_traits:: short_vector_traits](#ctor)||  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante short_vector_traits:: Size](#size)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `short_vector_traits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="ctor"></a>Costruttore short_vector_traits:: short_vector_traits  
  
```  
short_vector_traits();
```  
  
##  <a name="size"></a>Costante short_vector_traits:: Size  
  
```  
static int const size = 1;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)


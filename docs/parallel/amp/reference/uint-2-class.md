---
title: Classe uint_2 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_short_vectors/Concurrency::graphics::uint_2::set_xy
- amp_short_vectors/Concurrency::graphics::uint_2::y
- amp_short_vectors/Concurrency::graphics::uint_2::gr
- amp_short_vectors/Concurrency::graphics::uint_2::operator-
- amp_short_vectors/Concurrency::graphics::uint_2::get_x
- amp_short_vectors/Concurrency::graphics::uint_2::operator-=
- amp_short_vectors/Concurrency::graphics::uint_2::r
- amp_short_vectors/Concurrency::graphics::uint_2::yx
- amp_short_vectors/Concurrency::graphics::uint_2::operator--
- amp_short_vectors/Concurrency::graphics::uint_2::set_yx
- amp_short_vectors/Concurrency::graphics::uint_2::operator=
- amp_short_vectors/Concurrency::graphics::uint_2::set_x
- amp_short_vectors/Concurrency::graphics::uint_2::operator+=
- amp_short_vectors/Concurrency::graphics::uint_2::get_y
- amp_short_vectors/Concurrency::graphics::uint_2::xy
- amp_short_vectors/Concurrency::graphics::uint_2::x
- amp_short_vectors/Concurrency::graphics::uint_2::get_xy
- amp_short_vectors/Concurrency::graphics::uint_2::set_y
- amp_short_vectors/Concurrency::graphics::uint_2
- amp_short_vectors/Concurrency::graphics::uint_2::operator*=
- amp_short_vectors/Concurrency::graphics::uint_2::get_yx
- amp_short_vectors/Concurrency::graphics::uint_2::operator/=
- amp_short_vectors/Concurrency::graphics::uint_2::g
- amp_short_vectors/Concurrency::graphics::uint_2::operator++
- amp_short_vectors/Concurrency::graphics::uint_2::rg
dev_langs:
- C++
ms.assetid: 9fcc9129-72b1-4da7-9012-4d3be15f1c52
caps.latest.revision: 11
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 1116be21d4f65b67ab967b7acedf4859df54a6e7
ms.lasthandoff: 02/24/2017

---
# <a name="uint2-class"></a>Classe uint_2
Rappresenta un vettore short di due interi senza segno.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class uint_2;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`||  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore uint_2](#ctor)|Di overload. Predefinito costruttore inizializza tutti gli elementi con 0.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|uint_2::get_X (metodo)||  
|uint_2::get_xy (metodo)||  
|uint_2::get_y (metodo)||  
|uint_2::get_yx (metodo)||  
|uint_2::ref_g_Method||  
|uint_2::ref_r_Method||  
|uint_2::ref_x_Method||  
|uint_2::ref_y_Method||  
|uint_2::set_X (metodo)||  
|uint_2::set_xy (metodo)||  
|uint_2::set_y (metodo)||  
|uint_2::set_yx (metodo)||  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|uint_2::operator - operatore||  
|uint_2::operator % = (operatore)||  
|uint_2::operator / = (operatore)||  
|uint_2::operator * = (operatore)||  
|uint_2::operator / = (operatore)||  
|uint_2::operator ^ = (operatore)||  
|uint_2::operator | = (operatore)||  
|uint_2::operator ~ (operatore)||  
|uint_2::operator + + (operatore)||  
|uint_2::operator + = (operatore)||  
|uint_2::operator\<= (operatore)||  
|uint_2::operator = (operatore)||  
|uint_2::operator-= (operatore)||  
|uint_2::operator >> = (operatore)||  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[dimensioni (costante)](#uint_2__size)||  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Membro dati uint_2::g||  
|Membro dati uint_2::GR||  
|Membro dati uint_2::r||  
|Membro dati uint_2::RG||  
|Membro dati uint_2::x||  
|Membro dati uint_2::XY||  
|Membro dati uint_2::y||  
|Membro dati uint_2::YX||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `uint_2`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="a-namectora-uint2"></a><a name="ctor"></a>uint_2 

 Predefinito costruttore inizializza tutti gli elementi con 0.  
  
```  
uint_2() restrict(amp,
    cpu);

 
uint_2(
    unsigned int _V0,  
    unsigned int _V1) restrict(amp,
    cpu);

 
uint_2(
    unsigned int _V) restrict(amp,
    cpu);

 
uint_2(
    const uint_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const int_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const float_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const norm_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const double_2& _Other) restrict(amp,
    cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_V0`  
 Il valore per inizializzare l'elemento 0.  
  
 `_V1`  
 Il valore per inizializzare l'elemento 1.  
  
 `_V`  
 Il valore per l'inizializzazione.  
  
 `_Other`  
 Utilizzato per inizializzare l'oggetto.  
  
##  <a name="a-nameuint2sizea-size"></a><a name="uint_2__size"></a>dimensioni 

```  
static const int size = 2;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)


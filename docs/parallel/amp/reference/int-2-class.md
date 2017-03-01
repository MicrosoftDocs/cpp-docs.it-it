---
title: Classe int_2 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_short_vectors/Concurrency::graphics::int_2::y
- amp_short_vectors/Concurrency::graphics::int_2::set_x
- amp_short_vectors/Concurrency::graphics::int_2::set_y
- amp_short_vectors/Concurrency::graphics::int_2::get_yx
- amp_short_vectors/Concurrency::graphics::int_2::operator++
- amp_short_vectors/Concurrency::graphics::int_2::x
- amp_short_vectors/Concurrency::graphics::int_2::set_yx
- amp_short_vectors/Concurrency::graphics::int_2::operator/=
- amp_short_vectors/Concurrency::graphics::int_2::get_y
- amp_short_vectors/Concurrency::graphics::int_2::gr
- amp_short_vectors/Concurrency::graphics::int_2::operator*=
- amp_short_vectors/Concurrency::graphics::int_2::r
- amp_short_vectors/Concurrency::graphics::int_2::get_xy
- amp_short_vectors/Concurrency::graphics::int_2::operator=
- amp_short_vectors/Concurrency::graphics::int_2::g
- amp_short_vectors/Concurrency::graphics::int_2::rg
- amp_short_vectors/Concurrency::graphics::int_2::xy
- amp_short_vectors/Concurrency::graphics::int_2::operator-=
- amp_short_vectors/Concurrency::graphics::int_2::get_x
- amp_short_vectors/Concurrency::graphics::int_2::yx
- amp_short_vectors/Concurrency::graphics::int_2
- amp_short_vectors/Concurrency::graphics::int_2::operator-
- amp_short_vectors/Concurrency::graphics::int_2::set_xy
- amp_short_vectors/Concurrency::graphics::int_2::operator+=
- amp_short_vectors/Concurrency::graphics::int_2::operator--
dev_langs:
- C++
ms.assetid: 258b02e9-f1ee-46c2-8edd-dc9f69184846
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 1fb9eba97f469aa407dfe3287a216ceb8f707faf
ms.lasthandoff: 02/24/2017

---
# <a name="int2-class"></a>Classe int_2
Rappresenta un vettore short tra due numeri interi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class int_2;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`||  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore int_2](#ctor)|Di overload. Predefinito costruttore inizializza tutti gli elementi con 0.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|int_2::get_X (metodo)||  
|int_2::get_xy (metodo)||  
|int_2::get_y (metodo)||  
|int_2::get_yx (metodo)||  
|int_2::ref_g (metodo)||  
|int_2::ref_r (metodo)||  
|int_2::ref_x (metodo)||  
|int_2::ref_y (metodo)||  
|int_2::set_X (metodo)||  
|int_2::set_xy (metodo)||  
|int_2::set_y (metodo)||  
|int_2::set_yx (metodo)||  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|int_2::operator-(operatore)||  
|int_2::operator - operatore||  
|int_2::operator % = (operatore)||  
|int_2::operator / = (operatore)||  
|int_2::operator * = (operatore)||  
|int_2::operator / = (operatore)||  
|int_2::operator ^ = (operatore)||  
|int_2::operator | = (operatore)||  
|int_2::operator ~ (operatore)||  
|int_2::operator + + (operatore)||  
|int_2::operator + = (operatore)||  
|int_2::operator\<= (operatore)||  
|int_2::operator = (operatore)||  
|int_2::operator-= (operatore)||  
|int_2::operator >> = (operatore)||  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[dimensioni (costante)](#int_2__size)||  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Membro dati int_2::g||  
|Membro dati int_2::GR||  
|Membro dati int_2::r||  
|Membro dati int_2::RG||  
|Membro dati int_2::x||  
|Membro dati int_2::XY||  
|Membro dati int_2::y||  
|Membro dati int_2::YX||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `int_2`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="a-namectora-int2"></a><a name="ctor"></a>int_2 

 Predefinito costruttore inizializza tutti gli elementi con 0.  
  
```  
int_2() restrict(amp,
    cpu);

 
int_2(
    int _V0,  
    int _V1) restrict(amp,
    cpu);

 
int_2(
    int _V) restrict(amp,
    cpu);

 
int_2(
    const int_2& _Other) restrict(amp,
    cpu);

 
explicit inline int_2(
    const uint_2& _Other) restrict(amp,
    cpu);

 
explicit inline int_2(
    const float_2& _Other) restrict(amp,
    cpu);

 
explicit inline int_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

 
explicit inline int_2(
    const norm_2& _Other) restrict(amp,
    cpu);

 
explicit inline int_2(
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
  
##  <a name="a-nameint2sizea-size"></a><a name="int_2__size"></a>dimensioni 

```  
static const int size = 2;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)


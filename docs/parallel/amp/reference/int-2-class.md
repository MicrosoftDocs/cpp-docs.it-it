---
title: Classe int_2 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
ms.assetid: 258b02e9-f1ee-46c2-8edd-dc9f69184846
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 57b6903568f635ec2f92512c922fc7c8460e7d07
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="int2-class"></a>Classe int_2
Rappresenta un vettore short di due numeri interi.  
  
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
|[Costruttore int_2](#ctor)|Di overload. Predefinito, costruttore inizializza tutti gli elementi con 0.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|int_2::get_X||  
|int_2::get_xy||  
|int_2::get_y||  
|int_2::get_yx||  
|int_2::ref_g||  
|int_2::ref_r||  
|int_2::ref_x||  
|int_2::ref_y||  
|int_2::set_X||  
|int_2::set_xy||  
|int_2::set_y||  
|int_2::set_yx||  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|int_2::operator-||  
|int_2::operator:||  
|% int_2::operator =||  
|int_2::operator & =||  
|int_2::operator * =||  
|int_2::operator / =||  
|int_2::operator ^ =||  
|int_2::operator &#124; =||  
|int_2::operator ~||  
|int_2::operator + +||  
|+ = int_2::operator||  
|int_2::operator <\<=||  
|int_2::operator =||  
|int_2::operator =||  
|int_2::operator >> =||  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[dimensioni (costante)](#int_2__size)||  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|int_2::g||  
|int_2::GR||  
|int_2::r||  
|int_2::RG||  
|int_2::x||  
|int_2::XY||  
|int_2::y||  
|int_2::YX||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `int_2`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="ctor"></a>int_2 

 Predefinito, costruttore inizializza tutti gli elementi con 0.  
  
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
 Oggetto utilizzato per inizializzare.  
  
##  <a name="int_2__size"></a>dimensioni 

```  
static const int size = 2;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)

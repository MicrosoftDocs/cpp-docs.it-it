---
title: Classe float_2 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_short_vectors/Concurrency::graphics::float_2::yx
- amp_short_vectors/Concurrency::graphics::float_2::operator-=
- amp_short_vectors/Concurrency::graphics::float_2::operator++
- amp_short_vectors/Concurrency::graphics::float_2::operator-
- amp_short_vectors/Concurrency::graphics::float_2::r
- amp_short_vectors/Concurrency::graphics::float_2::get_yx
- amp_short_vectors/Concurrency::graphics::float_2::get_xy
- amp_short_vectors/Concurrency::graphics::float_2::operator/=
- amp_short_vectors/Concurrency::graphics::float_2::set_yx
- amp_short_vectors/Concurrency::graphics::float_2::x
- amp_short_vectors/Concurrency::graphics::float_2::get_y
- amp_short_vectors/Concurrency::graphics::float_2::operator+=
- amp_short_vectors/Concurrency::graphics::float_2::gr
- amp_short_vectors/Concurrency::graphics::float_2::operator=
- amp_short_vectors/Concurrency::graphics::float_2::set_x
- amp_short_vectors/Concurrency::graphics::float_2::operator--
- amp_short_vectors/Concurrency::graphics::float_2::get_x
- amp_short_vectors/Concurrency::graphics::float_2::operator*=
- amp_short_vectors/Concurrency::graphics::float_2::rg
- amp_short_vectors/Concurrency::graphics::float_2::set_xy
- amp_short_vectors/Concurrency::graphics::float_2::xy
- amp_short_vectors/Concurrency::graphics::float_2
- amp_short_vectors/Concurrency::graphics::float_2::set_y
- amp_short_vectors/Concurrency::graphics::float_2::y
- amp_short_vectors/Concurrency::graphics::float_2::g
dev_langs: C++
ms.assetid: b3ebd48e-f8c8-4f00-a640-357f702f0cae
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3c963d55bd87dc84d48f8aafedbd6ba8cfa54d3a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="float2-class"></a>Classe float_2
Rappresenta un vettore short di due elementi mobili.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class float_2;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`||  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore float_2](#ctor)|Di overload. Predefinito, costruttore inizializza tutti gli elementi con 0.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|float_2::get_X||  
|float_2::get_xy||  
|float_2::get_y||  
|float_2::get_yx||  
|float_2::ref_g||  
|float_2::ref_r||  
|float_2::ref_x||  
|float_2::ref_y||  
|float_2::set_X||  
|float_2::set_xy||  
|float_2::set_y||  
|float_2::set_yx||  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|float_2::operator-||  
|float_2::operator:||  
|float_2::operator * =||  
|float_2::operator / =||  
|float_2::operator + +||  
|+ = float_2::operator||  
|float_2::operator =||  
|float_2::operator =||  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[dimensioni (costante)](#float_2__size)||  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|float_2::g||  
|float_2::GR||  
|float_2::r||  
|float_2::RG||  
|float_2::x||  
|float_2::XY||  
|float_2::y||  
|float_2::YX||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `float_2`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="ctor"></a>float_2 

 Predefinito, costruttore inizializza tutti gli elementi con 0.  
  
```  
float_2() restrict(amp,
    cpu);

 
float_2(
    float _V0,  
    float _V1) restrict(amp,
    cpu);

 
float_2(
    float _V) restrict(amp,
    cpu);

 
float_2(
    const float_2& _Other) restrict(amp,
    cpu);

 
explicit inline float_2(
    const uint_2& _Other) restrict(amp,
    cpu);

 
explicit inline float_2(
    const int_2& _Other) restrict(amp,
    cpu);

 
explicit inline float_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

 
explicit inline float_2(
    const norm_2& _Other) restrict(amp,
    cpu);

 
explicit inline float_2(
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
  
##  <a name="float_2__size"></a>dimensioni 

```  
static const int size = 2;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)

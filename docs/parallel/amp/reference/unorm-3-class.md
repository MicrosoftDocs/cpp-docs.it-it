---
title: Classe unorm_3 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_short_vectors/Concurrency::graphics::unorm_3::set_zy
- amp_short_vectors/Concurrency::graphics::unorm_3::zxy
- amp_short_vectors/Concurrency::graphics::unorm_3::set_zyx
- amp_short_vectors/Concurrency::graphics::unorm_3::operator-=
- amp_short_vectors/Concurrency::graphics::unorm_3::xzy
- amp_short_vectors/Concurrency::graphics::unorm_3::get_xzy
- amp_short_vectors/Concurrency::graphics::unorm_3::zyx
- amp_short_vectors/Concurrency::graphics::unorm_3::rgb
- amp_short_vectors/Concurrency::graphics::unorm_3::set_xz
- amp_short_vectors/Concurrency::graphics::unorm_3::set_yxz
- amp_short_vectors/Concurrency::graphics::unorm_3::set_yx
- amp_short_vectors/Concurrency::graphics::unorm_3::br
- amp_short_vectors/Concurrency::graphics::unorm_3::get_zy
- amp_short_vectors/Concurrency::graphics::unorm_3::set_zx
- amp_short_vectors/Concurrency::graphics::unorm_3::get_xyz
- amp_short_vectors/Concurrency::graphics::unorm_3::b
- amp_short_vectors/Concurrency::graphics::unorm_3::set_xyz
- amp_short_vectors/Concurrency::graphics::unorm_3
- amp_short_vectors/Concurrency::graphics::unorm_3::set_z
- amp_short_vectors/Concurrency::graphics::unorm_3::set_xy
- amp_short_vectors/Concurrency::graphics::unorm_3::get_zyx
- amp_short_vectors/Concurrency::graphics::unorm_3::get_xy
- amp_short_vectors/Concurrency::graphics::unorm_3::x
- amp_short_vectors/Concurrency::graphics::unorm_3::get_zxy
- amp_short_vectors/Concurrency::graphics::unorm_3::z
- amp_short_vectors/Concurrency::graphics::unorm_3::get_x
- amp_short_vectors/Concurrency::graphics::unorm_3::operator=
- amp_short_vectors/Concurrency::graphics::unorm_3::yxz
- amp_short_vectors/Concurrency::graphics::unorm_3::get_yx
- amp_short_vectors/Concurrency::graphics::unorm_3::gbr
- amp_short_vectors/Concurrency::graphics::unorm_3::get_yxz
- amp_short_vectors/Concurrency::graphics::unorm_3::operator--
- amp_short_vectors/Concurrency::graphics::unorm_3::operator/=
- amp_short_vectors/Concurrency::graphics::unorm_3::brg
- amp_short_vectors/Concurrency::graphics::unorm_3::gb
- amp_short_vectors/Concurrency::graphics::unorm_3::zy
- amp_short_vectors/Concurrency::graphics::unorm_3::set_xzy
- amp_short_vectors/Concurrency::graphics::unorm_3::get_yzx
- amp_short_vectors/Concurrency::graphics::unorm_3::rb
- amp_short_vectors/Concurrency::graphics::unorm_3::gr
- amp_short_vectors/Concurrency::graphics::unorm_3::zx
- amp_short_vectors/Concurrency::graphics::unorm_3::r
- amp_short_vectors/Concurrency::graphics::unorm_3::xyz
- amp_short_vectors/Concurrency::graphics::unorm_3::grb
- amp_short_vectors/Concurrency::graphics::unorm_3::bg
- amp_short_vectors/Concurrency::graphics::unorm_3::get_y
- amp_short_vectors/Concurrency::graphics::unorm_3::g
- amp_short_vectors/Concurrency::graphics::unorm_3::yz
- amp_short_vectors/Concurrency::graphics::unorm_3::yx
- amp_short_vectors/Concurrency::graphics::unorm_3::get_xz
- amp_short_vectors/Concurrency::graphics::unorm_3::set_zxy
- amp_short_vectors/Concurrency::graphics::unorm_3::get_z
- amp_short_vectors/Concurrency::graphics::unorm_3::bgr
- amp_short_vectors/Concurrency::graphics::unorm_3::set_x
- amp_short_vectors/Concurrency::graphics::unorm_3::operator-
- amp_short_vectors/Concurrency::graphics::unorm_3::y
- amp_short_vectors/Concurrency::graphics::unorm_3::set_yzx
- amp_short_vectors/Concurrency::graphics::unorm_3::get_zx
- amp_short_vectors/Concurrency::graphics::unorm_3::yzx
- amp_short_vectors/Concurrency::graphics::unorm_3::operator++
- amp_short_vectors/Concurrency::graphics::unorm_3::set_yz
- amp_short_vectors/Concurrency::graphics::unorm_3::operator+=
- amp_short_vectors/Concurrency::graphics::unorm_3::xz
- amp_short_vectors/Concurrency::graphics::unorm_3::rg
- amp_short_vectors/Concurrency::graphics::unorm_3::xy
- amp_short_vectors/Concurrency::graphics::unorm_3::operator*=
- amp_short_vectors/Concurrency::graphics::unorm_3::set_y
- amp_short_vectors/Concurrency::graphics::unorm_3::get_yz
- amp_short_vectors/Concurrency::graphics::unorm_3::rbg
dev_langs:
- C++
ms.assetid: ea4e7a17-5256-464c-af28-8b01962564c0
caps.latest.revision: 10
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
ms.openlocfilehash: ce64e15c062f04df6c9f7671bd820ee188af0111
ms.lasthandoff: 02/24/2017

---
# <a name="unorm3-class"></a>Classe unorm_3
Rappresenta un vettore di tre numeri normali unsigned short.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class unorm_3;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`||  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore unorm_3](#ctor)|Di overload. Predefinito costruttore inizializza tutti gli elementi con 0.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|unorm_3::get_X (metodo)||  
|unorm_3::get_xy (metodo)||  
|unorm_3::get_xyz (metodo)||  
|unorm_3::get_xz (metodo)||  
|unorm_3::get_xzy (metodo)||  
|unorm_3::get_y (metodo)||  
|unorm_3::get_yx (metodo)||  
|unorm_3::get_yxz (metodo)||  
|unorm_3::get_yz (metodo)||  
|unorm_3::get_yzx (metodo)||  
|unorm_3::get_z (metodo)||  
|unorm_3::get_zx (metodo)||  
|unorm_3::get_zxy (metodo)||  
|unorm_3::get_zy (metodo)||  
|unorm_3::get_zyx (metodo)||  
|Metodo unorm_3::ref_b||  
|Metodo Unorm_3::ref_g||  
|Metodo Unorm_3::ref_r||  
|Metodo Unorm_3::ref_x||  
|Metodo Unorm_3::ref_y||  
|Metodo Unorm_3::ref_z||  
|unorm_3::set_X (metodo)||  
|unorm_3::set_xy (metodo)||  
|unorm_3::set_xyz (metodo)||  
|unorm_3::set_xz (metodo)||  
|unorm_3::set_xzy (metodo)||  
|unorm_3::set_y (metodo)||  
|unorm_3::set_yx (metodo)||  
|unorm_3::set_yxz (metodo)||  
|unorm_3::set_yz (metodo)||  
|unorm_3::set_yzx (metodo)||  
|unorm_3::set_z (metodo)||  
|unorm_3::set_zx (metodo)||  
|unorm_3::set_zxy (metodo)||  
|unorm_3::set_zy (metodo)||  
|unorm_3::set_zyx (metodo)||  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|unorm_3::operator - operatore||  
|unorm_3::operator * = (operatore)||  
|unorm_3::operator / = (operatore)||  
|unorm_3::operator + + (operatore)||  
|unorm_3::operator + = (operatore)||  
|unorm_3::operator = (operatore)||  
|unorm_3::operator-= (operatore)||  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[dimensioni (costante)](#unorm_3__size)||  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Membro dati unorm_3::b||  
|Membro dati unorm_3::BG||  
|Membro dati unorm_3::BGR||  
|Membro dati unorm_3::br||  
|Membro dati unorm_3::brg||  
|Membro dati unorm_3::g||  
|Membro dati unorm_3::GB||  
|Membro dati unorm_3::GBR||  
|Membro dati unorm_3::GR||  
|Membro dati unorm_3::grb||  
|Membro dati unorm_3::r||  
|Membro dati unorm_3::RB||  
|Membro dati unorm_3::RBG||  
|Membro dati unorm_3::RG||  
|Membro dati unorm_3::RGB||  
|Membro dati unorm_3::x||  
|Membro dati unorm_3::XY||  
|Membro dati unorm_3::XYZ||  
|Membro dati unorm_3::XZ||  
|Membro dati unorm_3::xzy||  
|Membro dati unorm_3::y||  
|Membro dati unorm_3::YX||  
|Membro dati unorm_3::yxz||  
|Membro dati unorm_3::YZ||  
|Membro dati unorm_3::yzx||  
|Membro dati unorm_3::z||  
|Membro dati unorm_3::ZX||  
|Membro dati unorm_3::zxy||  
|Membro dati unorm_3::ZY||  
|Membro dati unorm_3::zyx||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `unorm_3`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="a-namectora-unorm3"></a><a name="ctor"></a>unorm_3 

 Predefinito costruttore inizializza tutti gli elementi con 0.  
  
```  
unorm_3() restrict(amp,
    cpu);

 
unorm_3(
    unorm _V0,  
    unorm _V1,  
    unorm _V2) restrict(amp,
    cpu);

 
unorm_3(
    float _V0,  
    float _V1,  
    float _V2) restrict(amp,
    cpu);

 
unorm_3(
    unorm _V) restrict(amp,
    cpu);

 
explicit unorm_3(
    float _V) restrict(amp,
    cpu);

 
unorm_3(
    const unorm_3& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_3(
    const uint_3& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_3(
    const int_3& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_3(
    const float_3& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_3(
    const norm_3& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_3(
    const double_3& _Other) restrict(amp,
    cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_V0`  
 Il valore per inizializzare l'elemento 0.  
  
 `_V1`  
 Il valore per inizializzare l'elemento 1.  
  
 `_V2`  
 Il valore per inizializzare l'elemento 2.  
  
 `_V`  
 Il valore per l'inizializzazione.  
  
 `_Other`  
 Utilizzato per inizializzare l'oggetto.  
  
##  <a name="a-nameunorm3sizea-size"></a><a name="unorm_3__size"></a>dimensioni 

```  
static const int size = 3;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)


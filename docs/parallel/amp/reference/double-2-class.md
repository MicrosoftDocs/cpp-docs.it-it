---
title: Classe double_2 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_short_vectors/Concurrency::graphics::double_2::set_x
- amp_short_vectors/Concurrency::graphics::double_2::operator+=
- amp_short_vectors/Concurrency::graphics::double_2::operator=
- amp_short_vectors/Concurrency::graphics::double_2::operator/=
- amp_short_vectors/Concurrency::graphics::double_2::operator*=
- amp_short_vectors/Concurrency::graphics::double_2::yx
- amp_short_vectors/Concurrency::graphics::double_2::y
- amp_short_vectors/Concurrency::graphics::double_2::xy
- amp_short_vectors/Concurrency::graphics::double_2::set_xy
- amp_short_vectors/Concurrency::graphics::double_2::get_yx
- amp_short_vectors/Concurrency::graphics::double_2::set_yx
- amp_short_vectors/Concurrency::graphics::double_2::get_xy
- amp_short_vectors/Concurrency::graphics::double_2::operator++
- amp_short_vectors/Concurrency::graphics::double_2::get_x
- amp_short_vectors/Concurrency::graphics::double_2::operator-=
- amp_short_vectors/Concurrency::graphics::double_2::rg
- amp_short_vectors/Concurrency::graphics::double_2::gr
- amp_short_vectors/Concurrency::graphics::double_2::get_y
- amp_short_vectors/Concurrency::graphics::double_2::x
- amp_short_vectors/Concurrency::graphics::double_2::r
- amp_short_vectors/Concurrency::graphics::double_2::operator--
- amp_short_vectors/Concurrency::graphics::double_2
- amp_short_vectors/Concurrency::graphics::double_2::operator-
- amp_short_vectors/Concurrency::graphics::double_2::g
- amp_short_vectors/Concurrency::graphics::double_2::set_y
dev_langs:
- C++
ms.assetid: c19c2d21-3cbf-4ce5-b460-3b8253688f82
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
ms.openlocfilehash: 003cf8a4e1803154b4224c30524f8a302f10ea8f
ms.lasthandoff: 02/24/2017

---
# <a name="double2-class"></a>Classe double_2
Rappresenta un vettore short di 2 double.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class double_2;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`||  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore double_2](#ctor)|Di overload. Predefinito costruttore inizializza tutti gli elementi con 0.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|double_2::get_X (metodo)||  
|double_2::get_xy (metodo)||  
|double_2::get_y (metodo)||  
|double_2::get_yx (metodo)||  
|double_2::ref_g (metodo)||  
|double_2::ref_r (metodo)||  
|double_2::ref_x (metodo)||  
|double_2::ref_y (metodo)||  
|double_2::set_X (metodo)||  
|double_2::set_xy (metodo)||  
|double_2::set_y (metodo)||  
|double_2::set_yx (metodo)||  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|double_2::operator-(operatore)||  
|double_2::operator - operatore||  
|double_2::operator * = (operatore)||  
|double_2::operator / = (operatore)||  
|double_2::operator + + (operatore)||  
|double_2::operator + = (operatore)||  
|double_2::operator = (operatore)||  
|double_2::operator-= (operatore)||  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Costante double_2::size||  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Membro dati double_2::g||  
|Membro dati double_2::GR||  
|Membro dati double_2::r||  
|Membro dati double_2::RG||  
|Membro dati double_2::x||  
|Membro dati double_2::XY||  
|Membro dati double_2::y||  
|Membro dati double_2::YX||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `double_2`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="a-namectora-double2"></a><a name="ctor"></a>double_2 

 Predefinito costruttore inizializza tutti gli elementi con 0.  
  
```  
double_2() restrict(amp,
    cpu);

 
double_2(
    double _V0,  
    double _V1) restrict(amp,
    cpu);

 
double_2(
    double _V) restrict(amp,
    cpu);

 
double_2(
    const double_2& _Other) restrict(amp,
    cpu);

 
explicit inline double_2(
    const uint_2& _Other) restrict(amp,
    cpu);

 
explicit inline double_2(
    const int_2& _Other) restrict(amp,
    cpu);

 
explicit inline double_2(
    const float_2& _Other) restrict(amp,
    cpu);

 
explicit inline double_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

 
explicit inline double_2(
    const norm_2& _Other) restrict(amp,
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
  
##  <a name="a-namedouble2sizea-size"></a><a name="double_2__size"></a>dimensioni 

```  
static const int size = 2;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)


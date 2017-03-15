---
title: Classe unorm | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_short_vectors/Concurrency::graphics::unorm
- amp/Concurrency::graphics::unorm
dev_langs:
- C++
ms.assetid: bc30bd20-6452-4d5f-9158-3b11c4c16ed2
caps.latest.revision: 8
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
ms.openlocfilehash: aae5de80bed3b2d3d5c15285c2d12f2f6771a251
ms.lasthandoff: 02/24/2017

---
# <a name="unorm-class"></a>Classe unorm
Rappresenta un numero unorm. Ogni elemento è a virgola mobile punto numero compreso nell'intervallo [0,0 f, 1.0 f].  
  
## <a name="syntax"></a>Sintassi  
  
```  
class unorm;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore unorm](#ctor)|Di overload. Costruttore predefinito. Inizializzare a 0,0 f.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|unorm::operator - operatore||  
|float unorm::operator (operatore)|Operatore di conversione. Convertire il numero di unorm mobile valore.|  
|unorm::operator * = (operatore)||  
|unorm::operator / = (operatore)||  
|unorm::operator + + (operatore)||  
|unorm::operator + = (operatore)||  
|unorm::operator = (operatore)||  
|unorm::operator-= (operatore)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `unorm`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="a-namectora-unorm"></a><a name="ctor"></a>unorm 

 Costruttore predefinito. Inizializzare a 0,0 f.  
  
```  
unorm(
    void) restrict(amp,
    cpu);

 
explicit unorm(
    float _V) restrict(amp,
    cpu);

 
explicit unorm(
    unsigned int _V) restrict(amp,
    cpu);

 
explicit unorm(
    int _V) restrict(amp,
    cpu);

 
explicit unorm(
    double _V) restrict(amp,
    cpu);

 
unorm(
    const unorm& _Other) restrict(amp,
    cpu);

 
inline explicit unorm(
    const norm& _Other) restrict(amp,
    cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_V`  
 Il valore utilizzato per inizializzare.  
  
 `_Other`  
 L'oggetto di norma utilizzato per inizializzare.  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)


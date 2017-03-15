---
title: Classe Norm | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_short_vectors/Concurrency::graphics::norm
dev_langs:
- C++
ms.assetid: 73002f3d-c25e-4119-bcd3-4c46c9b6abf1
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
ms.openlocfilehash: 8ff5a99136a75d17d914783496205f1dd1eb4a06
ms.lasthandoff: 02/24/2017

---
# <a name="norm-class"></a>Classe norm
Rappresenta un numero di norma. Ogni elemento è a virgola mobile punto numero compreso nell'intervallo [-1.0 f, 1.0 f].  
  
## <a name="syntax"></a>Sintassi  
  
```  
class norm;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Norm](#ctor)|Di overload. Costruttore predefinito. Inizializzare a 0,0 f.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|NORM::operator-(operatore)||  
|NORM::operator - operatore||  
|float Norm::operator (operatore)|Operatore di conversione. Convertire il numero di norma a virgola mobile valore.|  
|NORM::operator * = (operatore)||  
|NORM::operator / = (operatore)||  
|NORM::operator + + (operatore)||  
|NORM::operator + = (operatore)||  
|NORM::operator = (operatore)||  
|NORM::operator-= (operatore)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `norm`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="a-namectora-norm"></a><a name="ctor"></a>Norm 

 Costruttore predefinito. Inizializzare a 0,0 f.  
  
```  
norm(
    void) restrict(amp,
    cpu);

 
explicit norm(
    float _V) restrict(amp,
    cpu);

 
explicit norm(
    unsigned int _V) restrict(amp,
    cpu);

 
explicit norm(
    int _V) restrict(amp,
    cpu);

 
explicit norm(
    double _V) restrict(amp,
    cpu);

 
norm(
    const norm& _Other) restrict(amp,
    cpu);

 
norm(
    const unorm& _Other) restrict(amp,
    cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_V`  
 Il valore utilizzato per inizializzare.  
  
 `_Other`  
 Utilizzato per inizializzare l'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)


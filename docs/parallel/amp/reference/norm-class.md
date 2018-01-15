---
title: Classe Norm | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- norm
- AMP_SHORT_VECTORS/norm
- AMP_SHORT_VECTORS/Concurrency::graphics::norm Constructor
dev_langs: C++
ms.assetid: 73002f3d-c25e-4119-bcd3-4c46c9b6abf1
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 785c214ed904d1591c5d532ec9f09d42c93dc2ca
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="norm-class"></a>Classe norm
Rappresenta un numero di norma. Ogni elemento è mobile punto numero compreso nell'intervallo [-1.0 f, 1.0 f].  
  
## <a name="syntax"></a>Sintassi  
  
```  
class norm;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Norm](#ctor)|Di overload. Costruttore predefinito. L'inizializzazione su 0, 0F.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|NORM::operator-||  
|NORM::operator:||  
|NORM::operator float|Operatore di conversione. Convertire il numero di norma mobile valore punto.|  
|NORM::operator * =||  
|NORM::operator / =||  
|NORM::operator + +||  
|+ = NORM::operator||  
|NORM::operator =||  
|NORM::operator =||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `norm`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_short_vectors.h  
  
 **Namespace:** Concurrency:: Graphics  
  
##  <a name="ctor"></a>Norm 

 Costruttore predefinito. L'inizializzazione su 0, 0F.  
  
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
 Oggetto utilizzato per inizializzare.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)

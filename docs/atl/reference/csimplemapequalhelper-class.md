---
title: Classe CSimpleMapEqualHelper | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleMapEqualHelper
dev_langs:
- C++
helpviewer_keywords:
- CSimpleMapEqualHelper class
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
caps.latest.revision: 20
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: ddb793889748446b9613c91ce6fcefe28da32eb3
ms.lasthandoff: 02/24/2017

---
# <a name="csimplemapequalhelper-class"></a>Classe CSimpleMapEqualHelper
Questa classe è un supporto per il [CSimpleMap](../../atl/reference/csimplemap-class.md) (classe).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class TKey, class TVal>  
class CSimpleMapEqualHelper
```  
  
#### <a name="parameters"></a>Parametri  
 `TKey`  
 L'elemento principale.  
  
 `TVal`  
 L'elemento valore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMapEqualHelper::IsEqualKey](#isequalkey)|(Statico) Verifica l'uguaglianza delle due chiavi.|  
|[CSimpleMapEqualHelper::IsEqualValue](#isequalvalue)|(Statico) Test di uguaglianza dei due valori.|  
  
## <a name="remarks"></a>Note  
 Questa classe di tratti è sostituisca la `CSimpleMap` classe. Fornisce metodi per il confronto di due `CSimpleMap` elementi (in particolare, i componenti chiave e valore) per verificarne l'uguaglianza dell'oggetto. Per impostazione predefinita, le chiavi e valori vengono confrontati mediante `operator==()`, ma se la mappa contiene tipi di dati complessi che non dispongono di propri operatore di uguaglianza, è possibile eseguire l'override di questa classe per fornire le funzionalità aggiuntive richieste.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
##  <a name="a-nameisequalkeya--csimplemapequalhelperisequalkey"></a><a name="isequalkey"></a>CSimpleMapEqualHelper::IsEqualKey  
 Verifica l'uguaglianza delle due chiavi.  
  
```
static bool IsEqualKey(const TKey& k1, const TKey& k2);
```  
  
### <a name="parameters"></a>Parametri  
 `k1`  
 La prima chiave.  
  
 `k2`  
 La seconda chiave.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se le chiavi sono uguali, false in caso contrario.  
  
##  <a name="a-nameisequalvaluea--csimplemapequalhelperisequalvalue"></a><a name="isequalvalue"></a>CSimpleMapEqualHelper::IsEqualValue  
 Test di uguaglianza dei due valori.  
  
```
static bool IsEqualValue(const TVal& v1, const TVal& v2);
```  
  
### <a name="parameters"></a>Parametri  
 *V1*  
 Primo valore.  
  
 *v2*  
 Secondo valore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se i valori sono uguali, false in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSimpleMapEqualHelperFalse](../../atl/reference/csimplemapequalhelperfalse-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


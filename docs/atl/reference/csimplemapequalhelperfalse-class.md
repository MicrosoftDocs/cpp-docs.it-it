---
title: Classe CSimpleMapEqualHelperFalse | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CSimpleMapEqualHelperFalse
- CSimpleMapEqualHelperFalse
- ATL.CSimpleMapEqualHelperFalse
dev_langs:
- C++
helpviewer_keywords:
- CSimpleMapEqualHelperFalse class
ms.assetid: a873eea3-e130-45cc-a476-61ee79511c3b
caps.latest.revision: 19
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
ms.openlocfilehash: 68a08ffc0ba126c523a779e3d1a72217dead6235
ms.lasthandoff: 02/24/2017

---
# <a name="csimplemapequalhelperfalse-class"></a>Classe CSimpleMapEqualHelperFalse
Questa classe è un supporto per il [CSimpleMap](../../atl/reference/csimplemap-class.md) (classe).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class TKey, class TVal>  
class CSimpleMapEqualHelperFalse
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMapEqualHelperFalse::IsEqualKey](#isequalkey)|(Statico) Verifica l'uguaglianza delle due chiavi.|  
|[CSimpleMapEqualHelperFalse::IsEqualValue](#isequalvalue)|(Statico) Restituisce false.|  
  
## <a name="remarks"></a>Note  
 Questa classe di tratti è sostituisca la `CSimpleMap` classe. Fornisce un metodo per il confronto di due elementi contenuti nel `CSimpleMap` oggetto, in particolare due elementi di valore o due elementi principali.  
  
 Confronto del valore restituirà sempre false e, inoltre, verrà chiamato `ATLASSERT` con un argomento di false se vi è mai fatto riferimento. In situazioni in cui non è definito sufficientemente i test di uguaglianza, questa classe consente a una mappa che contiene coppie chiave/valore per funzionare correttamente per la maggior parte dei metodi ma funziona in modo ben definito per i metodi che dipendono da confronti, ad esempio [CSimpleMap::FindVal](../../atl/reference/csimplemap-class.md#findval).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
##  <a name="a-nameisequalkeya--csimplemapequalhelperfalseisequalkey"></a><a name="isequalkey"></a>CSimpleMapEqualHelperFalse::IsEqualKey  
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
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md).  
  
##  <a name="a-nameisequalvaluea--csimplemapequalhelperfalseisequalvalue"></a><a name="isequalvalue"></a>CSimpleMapEqualHelperFalse::IsEqualValue  
 Restituisce false.  
  
```
static bool IsEqualValue(const TVal&, const TVal&);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce false.  
  
### <a name="remarks"></a>Note  
 Questo metodo sempre restituisce false e chiamerà `ATLASSERT` con un argomento di false se vi è mai fatto riferimento. Lo scopo di `CSimpleMapEqualHelperFalse::IsEqualValue` consiste nel forzare metodi utilizzano confronti per avere esito negativo in modo ben definito quando il test di uguaglianza non è stato definito in modo adeguato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


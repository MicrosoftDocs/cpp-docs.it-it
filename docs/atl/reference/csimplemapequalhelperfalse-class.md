---
title: Classe CSimpleMapEqualHelperFalse | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleMapEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualKey
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelperFalse::IsEqualValue
dev_langs: C++
helpviewer_keywords: CSimpleMapEqualHelperFalse class
ms.assetid: a873eea3-e130-45cc-a476-61ee79511c3b
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1dda098f54b0589a610e10713cc2f936172e26e1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="csimplemapequalhelperfalse-class"></a>Classe CSimpleMapEqualHelperFalse
Questa classe è un supporto per il [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.  
  
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
 Questa classe di tratti è un supplemento di `CSimpleMap` classe. Fornisce un metodo per il confronto tra due elementi contenuti nella `CSimpleMap` oggetto, in particolare due elementi di valore o due elementi principali.  
  
 Confronto del valore restituirà sempre false e inoltre chiamerà `ATLASSERT` con un argomento di false se vi viene mai fatto riferimento. In situazioni in cui non è definito sufficientemente i test di uguaglianza, questa classe consente a una mappa contenente coppie chiave/valore per funzionare correttamente per la maggior parte dei metodi, ma non in modo ben definito per i metodi che dipendono da confronti, ad esempio [CSimpleMap:: FindVal](../../atl/reference/csimplemap-class.md#findval).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
##  <a name="isequalkey"></a>CSimpleMapEqualHelperFalse::IsEqualKey  
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
  
##  <a name="isequalvalue"></a>CSimpleMapEqualHelperFalse::IsEqualValue  
 Restituisce false.  
  
```
static bool IsEqualValue(const TVal&, const TVal&);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce false.  
  
### <a name="remarks"></a>Note  
 Questo metodo sempre restituisce false e chiamerà `ATLASSERT` con un argomento di false se vi viene mai fatto riferimento. Lo scopo di `CSimpleMapEqualHelperFalse::IsEqualValue` consiste nel forzare metodi mediante i confronti esito negativo in modo ben definito quando il test di uguaglianza non è stato definito in modo adeguato.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

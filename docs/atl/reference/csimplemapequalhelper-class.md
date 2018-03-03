---
title: Classe CSimpleMapEqualHelper | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualKey
- ATLSIMPCOLL/ATL::CSimpleMapEqualHelper::IsEqualValue
dev_langs:
- C++
helpviewer_keywords:
- CSimpleMapEqualHelper class
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ecc32dc8e6e9b249b0b8b334ec3d08bf26cbd1ed
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="csimplemapequalhelper-class"></a>Classe CSimpleMapEqualHelper
Questa classe è un supporto per il [CSimpleMap](../../atl/reference/csimplemap-class.md) classe.  
  
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
|[CSimpleMapEqualHelper::IsEqualValue](#isequalvalue)|(Statico) Verifica due valori per verificarne l'uguaglianza.|  
  
## <a name="remarks"></a>Note  
 Questa classe di tratti è un supplemento di `CSimpleMap` classe. Fornisce metodi per il confronto di due `CSimpleMap` elementi (in particolare, i componenti chiave e valore) per verificarne l'uguaglianza dell'oggetto. Per impostazione predefinita, le chiavi e valori vengono confrontati mediante `operator==()`, ma se la mappa contiene i tipi di dati complessi che non dispongono di propri operatore di uguaglianza, è possibile eseguire l'override di questa classe per fornire funzionalità aggiuntive necessarie.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpcoll. h  
  
##  <a name="isequalkey"></a>CSimpleMapEqualHelper::IsEqualKey  
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
  
##  <a name="isequalvalue"></a>CSimpleMapEqualHelper::IsEqualValue  
 Verifica due valori per verificarne l'uguaglianza.  
  
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

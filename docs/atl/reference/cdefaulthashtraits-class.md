---
title: Classe CDefaultHashTraits | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CDefaultHashTraits
- ATLCOLL/ATL::CDefaultHashTraits
- ATLCOLL/ATL::CDefaultHashTraits::Hash
dev_langs:
- C++
helpviewer_keywords:
- CDefaultHashTraits class
ms.assetid: d8ec4b37-6d58-447b-a0c1-8580c5b1ab85
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 85cf9e27211763559617715a6c025055b25379fa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cdefaulthashtraits-class"></a>Classe CDefaultHashTraits
Questa classe fornisce una funzione statica per il calcolo dei valori hash.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CDefaultHashTraits
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDefaultHashTraits::Hash](#hash)|(Statico) Chiamare questa funzione per calcolare un valore hash per l'elemento specificato.|  
  
## <a name="remarks"></a>Note  
 Questa classe contiene una singola funzione statica che restituisce un valore hash per l'elemento specificato. Questa classe viene utilizzata per la [CDefaultElementTraits classe](../../atl/reference/cdefaultelementtraits-class.md).  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="hash"></a>  CDefaultHashTraits::Hash  
 Chiamare questa funzione per calcolare un valore hash per l'elemento specificato.  
  
```
static ULONG Hash(const T& element) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `element`  
 Elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore hash.  
  
### <a name="remarks"></a>Note  
 L'algoritmo hash predefinito è molto semplice: il valore restituito è il numero di elementi. Eseguire l'override di questa funzione se è richiesto un algoritmo più complesso.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

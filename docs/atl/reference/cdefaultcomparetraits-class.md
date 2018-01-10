---
title: Classe CDefaultCompareTraits | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElements
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElementsOrdered
dev_langs: C++
helpviewer_keywords: CDefaultCompareTraits class
ms.assetid: a17e2740-e7b4-48f2-aeb7-c80ce84b63f7
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 13c8bfd8ac02979f82e205ec86269b7ac40c8b08
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdefaultcomparetraits-class"></a>Classe CDefaultCompareTraits
Questa classe fornisce funzioni di confronto di elemento predefinite.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CDefaultCompareTraits
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDefaultCompareTraits::CompareElements](#compareelements)|(Statico) Chiamare questa funzione per confrontare due elementi per stabilirne l'uguaglianza.|  
|[CDefaultCompareTraits::CompareElementsOrdered](#compareelementsordered)|(Statico) Chiamare questa funzione per determinare l'elemento superiore e inferiore.|  
  
## <a name="remarks"></a>Note  
 Questa classe contiene due funzioni statiche per il confronto di elementi archiviati in un oggetto di classe di raccolta. Questa classe viene utilizzata per la [CDefaultElementTraits classe](../../atl/reference/cdefaultelementtraits-class.md).  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="compareelements"></a>CDefaultCompareTraits::CompareElements  
 Chiamare questa funzione per confrontare due elementi per stabilirne l'uguaglianza.  
  
```
static bool CompareElements(const T& element1, const T& element2);
```  
  
### <a name="parameters"></a>Parametri  
 `element1`  
 Primo elemento.  
  
 `element2`  
 Il secondo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se gli elementi sono uguali, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione è l'uguaglianza ( `==`) (operatore). Per gli oggetti diversi dai tipi di dati semplice, questa funzione potrebbe essere necessario eseguire l'override.  
  
##  <a name="compareelementsordered"></a>CDefaultCompareTraits::CompareElementsOrdered  
 Chiamare questa funzione per determinare l'elemento superiore e inferiore.  
  
```
static int CompareElementsOrdered(const T& element1, const T& element2);
```  
  
### <a name="parameters"></a>Parametri  
 `element1`  
 Primo elemento.  
  
 `element2`  
 Il secondo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un intero in base alla tabella seguente:  
  
|Condizione|Valore restituito|  
|---------------|------------------|  
|`element1` < `element2`|<0|  
|`element1` == `element2`|0|  
|`element1` > `element2`|>0|  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione utilizza il `==`,  **\<** , e  **>**  operatori. Per gli oggetti diversi dai tipi di dati semplice, questa funzione potrebbe essere necessario eseguire l'override.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

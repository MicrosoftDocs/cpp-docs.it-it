---
title: Classe CDefaultCompareTraits | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElements
- ATLCOLL/ATL::CDefaultCompareTraits::CompareElementsOrdered
dev_langs:
- C++
helpviewer_keywords:
- CDefaultCompareTraits class
ms.assetid: a17e2740-e7b4-48f2-aeb7-c80ce84b63f7
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
ms.openlocfilehash: 1d1253b7a7d69024465627cc9fb37fcd2afba693
ms.lasthandoff: 02/24/2017

---
# <a name="cdefaultcomparetraits-class"></a>Classe CDefaultCompareTraits
Questa classe fornisce funzioni di confronto elemento predefinite.  
  
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
|[CDefaultCompareTraits::CompareElementsOrdered](#compareelementsordered)|(Statico) Chiamare questa funzione per determinare l'elemento supera e inferiore.|  
  
## <a name="remarks"></a>Note  
 Questa classe contiene due funzioni statiche per il confronto di elementi archiviati in un oggetto classe di raccolta. Questa classe viene utilizzata per la [CDefaultElementTraits classe](../../atl/reference/cdefaultelementtraits-class.md).  
  
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
 L'implementazione predefinita di questa funzione è l'uguaglianza ( `==`) (operatore). Per gli oggetti diversi dai tipi di dati semplici, questa funzione potrebbe essere necessario eseguire l'override.  
  
##  <a name="compareelementsordered"></a>CDefaultCompareTraits::CompareElementsOrdered  
 Chiamare questa funzione per determinare l'elemento supera e inferiore.  
  
```
static int CompareElementsOrdered(const T& element1, const T& element2);
```  
  
### <a name="parameters"></a>Parametri  
 `element1`  
 Primo elemento.  
  
 `element2`  
 Il secondo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore integer in base alla tabella seguente:  
  
|Condizione|Valore restituito|  
|---------------|------------------|  
|`element1` < `element2`|<0|  
|`element1` == `element2`|0|  
|`element1` > `element2`|>0|  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione utilizza il `==`, ** \< **, e ** > ** operatori. Per gli oggetti diversi dai tipi di dati semplici, questa funzione potrebbe essere necessario eseguire l'override.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


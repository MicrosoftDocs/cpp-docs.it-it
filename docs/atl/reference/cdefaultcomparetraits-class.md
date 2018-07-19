---
title: Classe CDefaultCompareTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5ed197cc1f18821b65c249ee15a7e75f54fc7a32
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884766"
---
# <a name="cdefaultcomparetraits-class"></a>Classe CDefaultCompareTraits
Questa classe fornisce funzioni di confronto di elemento predefinite.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CDefaultCompareTraits
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDefaultCompareTraits::CompareElements](#compareelements)|(Statico) Chiamare questa funzione per confrontare due elementi per verificarne l'uguaglianza.|  
|[CDefaultCompareTraits::CompareElementsOrdered](#compareelementsordered)|(Statico) Chiamare questa funzione per determinare l'elemento supera e inferiore.|  
  
## <a name="remarks"></a>Note  
 Questa classe contiene due funzioni statiche per il confronto di elementi archiviati in un oggetto di classe di raccolta. Questa classe viene utilizzata per la [classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md).  
  
 Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="compareelements"></a>  CDefaultCompareTraits::CompareElements  
 Chiamare questa funzione per confrontare due elementi per verificarne l'uguaglianza.  
  
```
static bool CompareElements(const T& element1, const T& element2);
```  
  
### <a name="parameters"></a>Parametri  
 *Element1*  
 Primo elemento.  
  
 *Elemento2*  
 Il secondo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se gli elementi sono uguali e false in caso contrario.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione è l'uguaglianza (**==**) operatore. Per gli oggetti diversi da tipi di dati semplici, questa funzione potrebbe essere necessario eseguire l'override.  
  
##  <a name="compareelementsordered"></a>  CDefaultCompareTraits::CompareElementsOrdered  
 Chiamare questa funzione per determinare l'elemento supera e inferiore.  
  
```
static int CompareElementsOrdered(const T& element1, const T& element2);
```  
  
### <a name="parameters"></a>Parametri  
 *Element1*  
 Primo elemento.  
  
 *Elemento2*  
 Il secondo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un intero in base alla tabella seguente:  
  
|Condizione|Valore restituito|  
|---------------|------------------|  
|*element1* < *Elemento2*|<0|  
|*element1* == *Elemento2*|0|  
|*element1* > *Elemento2*|>0|  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione utilizza il **==**, **\<**, e **>** operatori. Per gli oggetti diversi da tipi di dati semplici, questa funzione potrebbe essere necessario eseguire l'override.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)

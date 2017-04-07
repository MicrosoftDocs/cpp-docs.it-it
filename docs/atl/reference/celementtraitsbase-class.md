---
title: Classe CElementTraitsBase | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CElementTraitsBase
- ATLCOLL/ATL::CElementTraitsBase
- ATLCOLL/ATL::CElementTraitsBase::INARGTYPE
- ATLCOLL/ATL::CElementTraitsBase::OUTARGTYPE
- ATLCOLL/ATL::CElementTraitsBase::CopyElements
- ATLCOLL/ATL::CElementTraitsBase::RelocateElements
dev_langs:
- C++
helpviewer_keywords:
- CElementTraitsBase class
ms.assetid: 75284caf-347e-4355-a7d8-efc708dd514a
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: a06af7698afb24c1c2391b762673c7e3633018d4
ms.lasthandoff: 02/24/2017

---
# <a name="celementtraitsbase-class"></a>Classe CElementTraitsBase
Questa classe fornisce copia predefinita e sposta i metodi per una classe di raccolte.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CElementTraitsBase
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati da archiviare nella raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CElementTraitsBase::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|  
|[CElementTraitsBase::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare elementi dall'oggetto classe di insiemi.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CElementTraitsBase::CopyElements](#copyelements)|Chiamare questo metodo per copiare gli elementi archiviati in un oggetto classe di raccolta.|  
|[CElementTraitsBase::RelocateElements](#relocateelements)|Chiamare questo metodo per spostare gli elementi archiviati in un oggetto classe di raccolta.|  
  
## <a name="remarks"></a>Note  
 Questa classe di base definisce i metodi per la copia e spostamento di elementi in una classe di raccolta. Utilizzato dalle classi [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md), [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md), e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="copyelements"></a>CElementTraitsBase::CopyElements  
 Chiamare questo metodo per copiare gli elementi archiviati in un oggetto classe di raccolta.  
  
```
static void CopyElements(
    T* pDest,
    const T* pSrc,
    size_t nElements);
```  
  
### <a name="parameters"></a>Parametri  
 `pDest`  
 Puntatore al primo elemento che riceverà i dati copiati.  
  
 `pSrc`  
 Puntatore al primo elemento da copiare.  
  
 `nElements`  
 Numero degli elementi da copiare.  
  
### <a name="remarks"></a>Note  
 Gli elementi di origine e di destinazione non devono sovrapporsi.  
  
##  <a name="inargtype"></a>CElementTraitsBase::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi alla raccolta.  
  
```
typedef const T& INARGTYPE;
```  
  
##  <a name="outargtype"></a>CElementTraitsBase::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare elementi dalla raccolta.  
  
```
typedef T& OUTARGTYPE;
```  
  
##  <a name="relocateelements"></a>CElementTraitsBase::RelocateElements  
 Chiamare questo metodo per spostare gli elementi archiviati in un oggetto classe di raccolta.  
  
```
static void RelocateElements(
    T* pDest,
    T* pSrc,
    size_t nElements);
```  
  
### <a name="parameters"></a>Parametri  
 `pDest`  
 Puntatore al primo elemento che riceverà i dati spostati.  
  
 `pSrc`  
 Puntatore al primo elemento da spostare.  
  
 `nElements`  
 Il numero di elementi da spostare.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti da spostare contengono puntatori ai rispettivi membri, sarà necessario eseguire l'override di questo metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


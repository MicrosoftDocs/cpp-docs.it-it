---
title: Classe CElementTraitsBase | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7a0b9f3945d9bcfa0c77855c94ec7247cb9804cb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="celementtraitsbase-class"></a>Classe CElementTraitsBase
Questa classe fornisce copia predefinita e sposta i metodi per una classe di raccolta.  
  
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
|[CElementTraitsBase::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto della classe di raccolta.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CElementTraitsBase::CopyElements](#copyelements)|Chiamare questo metodo per copiare gli elementi archiviati in un oggetto di classe di raccolta.|  
|[CElementTraitsBase::RelocateElements](#relocateelements)|Chiamare questo metodo per spostare elementi archiviati in un oggetto di classe di raccolta.|  
  
## <a name="remarks"></a>Note  
 Questa classe di base definisce i metodi per la copia e il riposizionamento di elementi in una classe di raccolta. Viene utilizzato dalle classi [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md), [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md), e [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="copyelements"></a>  CElementTraitsBase::CopyElements  
 Chiamare questo metodo per copiare gli elementi archiviati in un oggetto di classe di raccolta.  
  
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
  
##  <a name="inargtype"></a>  CElementTraitsBase::INARGTYPE  
 Il tipo di dati da usare per aggiungere elementi alla raccolta.  
  
```
typedef const T& INARGTYPE;
```  
  
##  <a name="outargtype"></a>  CElementTraitsBase::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare elementi dalla raccolta.  
  
```
typedef T& OUTARGTYPE;
```  
  
##  <a name="relocateelements"></a>  CElementTraitsBase::RelocateElements  
 Chiamare questo metodo per spostare elementi archiviati in un oggetto di classe di raccolta.  
  
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
 Questo metodo chiama [memmove](../../c-runtime-library/reference/memmove-wmemmove.md), che è sufficiente per la maggior parte dei tipi di dati. Se gli oggetti da spostare contengono puntatori ai rispettivi membri, è necessario eseguire l'override di questo metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

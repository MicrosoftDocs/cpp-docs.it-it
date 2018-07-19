---
title: Classe CPrimitiveElementTraits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CPrimitiveElementTraits
- ATLCOLL/ATL::CPrimitiveElementTraits
- ATLCOLL/ATL::CPrimitiveElementTraits::INARGTYPE
- ATLCOLL/ATL::CPrimitiveElementTraits::OUTARGTYPE
dev_langs:
- C++
helpviewer_keywords:
- CPrimitiveElementTraits class
ms.assetid: 21c1cea8-2c5a-486c-b65c-85490f3ed4e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2219be699e879afb6ec19ad84acc50f18d93a9a9
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37885809"
---
# <a name="cprimitiveelementtraits-class"></a>Classe CPrimitiveElementTraits
Questa classe fornisce metodi predefiniti e le funzioni per una classe di raccolta è costituita da tipi di dati primitivi.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CPrimitiveElementTraits : public CDefaultElementTraits<T>
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo di dati da archiviare nell'oggetto classe di raccolta.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrimitiveElementTraits::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|  
|[CPrimitiveElementTraits::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni statiche predefinito e i metodi per lo spostamento, copia, il confronto e gli elementi di tipo di dati primitivi archiviati in un oggetto di classe di raccolta di hash.  
  
 Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CDefaultCompareTraits](../../atl/reference/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../../atl/reference/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)  
  
 `CPrimitiveElementTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="inargtype"></a>  CPrimitiveElementTraits::INARGTYPE  
 Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.  
  
```
typedef T INARGTYPE;
```  
  
##  <a name="outargtype"></a>  CPrimitiveElementTraits::OUTARGTYPE  
 Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.  
  
```
typedef T& OUTARGTYPE;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDefaultElementTraits](../../atl/reference/cdefaultelementtraits-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)

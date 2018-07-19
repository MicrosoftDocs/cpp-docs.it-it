---
title: Classe CAutoPtrList | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAutoPtrList
- ATLCOLL/ATL::CAutoPtrList
- ATLCOLL/ATL::CAutoPtrList::CAutoPtrList
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtrList class
ms.assetid: 11de4aca-28b0-4ff2-a74a-cb602312ffbd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5d942c0611b408303922f3e6ab91000630ce8774
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37883593"
---
# <a name="cautoptrlist-class"></a>Classe CAutoPtrList
Questa classe fornisce metodi utili quando si crea un elenco di puntatori intelligenti.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename E>  
class CAutoPtrList : 
   public CAtlList<ATL::CAutoPtr<E>, CAutoPtrElementTraits<E>>
```  
  
#### <a name="parameters"></a>Parametri  
 *E*  
 Il tipo di puntatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtrList::CAutoPtrList](#cautoptrlist)|Costruttore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce un costruttore e metodi da deriva [CAtlList](../../atl/reference/catllist-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto elenco archiviare i puntatori intelligenti. La classe [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) fornisce una funzione simile per un oggetto matrice.  
  
 Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CAutoPtrList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="cautoptrlist"></a>  CAutoPtrList::CAutoPtrList  
 Costruttore.  
  
```
CAutoPtrList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nBlockSize*  
 Dimensione del blocco, con valore predefinito è 10.  
  
### <a name="remarks"></a>Note  
 La dimensione del blocco è una misura della quantità di memoria allocata quando un nuovo elemento è obbligatorio. Blocchi di dimensioni maggiori riducono le chiamate alle routine di allocazione della memoria, ma usano più risorse.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlList](../../atl/reference/catllist-class.md)   
 [Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)

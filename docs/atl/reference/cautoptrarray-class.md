---
title: Classe CAutoPtrArray | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray::CAutoPtrArray
dev_langs: C++
helpviewer_keywords: CAutoPtrArray class
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 952f6a6d9fa06c0f0c34e5769b4302c6230abb43
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cautoptrarray-class"></a>Classe CAutoPtrArray
Questa classe fornisce metodi utili quando si crea una matrice di puntatori intelligenti.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename E>
class CAutoPtrArray : public CAtlArray<
                        ATL::CAutoPtr<E>,
                        CAutoPtrElementTraits<E>>
```  
  
#### <a name="parameters"></a>Parametri  
 `E`  
 Il tipo di puntatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtrArray::CAutoPtrArray](#cautoptrarray)|Costruttore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce un costruttore e metodi da deriva [CAtlArray](../../atl/reference/catlarray-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto di classe collection archiviare i puntatori intelligenti.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CAtlArray`  
  
 `CAutoPtrArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="cautoptrarray"></a>CAutoPtrArray::CAutoPtrArray  
 Costruttore.  
  
```
CAutoPtrArray() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza una matrice di puntatore intelligente.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlArray](../../atl/reference/catlarray-class.md)   
 [Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)   
 [Classe CAutoPtrList](../../atl/reference/cautoptrlist-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

---
title: Classe CAutoPtrArray | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray
- ATLCOLL/ATL::CAutoPtrArray::CAutoPtrArray
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtrArray class
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
caps.latest.revision: 21
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 58ee329c7a3925fe3a29cf9738670cfa71df6777
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cautoptrarray-class"></a>Classe CAutoPtrArray
Questa classe fornisce metodi utili per la costruzione di una matrice di puntatori intelligenti.  
  
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
 Questa classe fornisce un costruttore e deriva da metodi [CAtlArray](../../atl/reference/catlarray-class.md) e [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per facilitare la creazione di un oggetto classe di raccolta archiviare i puntatori intelligenti.  
  
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
 Consente di inizializzare la matrice di puntatore intelligente.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlArray](../../atl/reference/catlarray-class.md)   
 [Classe CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md)   
 [Classe CAutoPtrList](../../atl/reference/cautoptrlist-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


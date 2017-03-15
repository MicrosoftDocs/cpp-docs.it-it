---
title: Classe CInterfaceArray | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CInterfaceArray
- CInterfaceArray
- ATL::CInterfaceArray
dev_langs:
- C++
helpviewer_keywords:
- CInterfaceArray class
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
caps.latest.revision: 18
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
ms.openlocfilehash: a2a99eb3cff4f2381d4c58e4d1a7aaa167e83896
ms.lasthandoff: 02/24/2017

---
# <a name="cinterfacearray-class"></a>Classe CInterfaceArray
Questa classe fornisce metodi utili per la costruzione di una matrice di puntatori a interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class I, const IID* piid=& __uuidof(I)>  
class CInterfaceArray : 
   public CAtlArray<ATL::CComQIPtr<I, piid>,
                    CComQIPtrElementTraits<I, piid>>
```  
  
#### <a name="parameters"></a>Parametri  
 `I`  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
 `piid`  
 Un puntatore a IID del `I`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInterfaceArray::CInterfaceArray](#cinterfacearray)|Il costruttore per la matrice di interfaccia.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce un costruttore e i metodi derivati per la creazione di una matrice di puntatori a interfaccia COM. Utilizzare [CInterfaceList](../../atl/reference/cinterfacelist-class.md) quando è necessario un elenco.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CAtlArray`  
  
 `CInterfaceArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="a-namecinterfacearraya--cinterfacearraycinterfacearray"></a><a name="cinterfacearray"></a>CInterfaceArray::CInterfaceArray  
 Costruttore.  
  
```
CInterfaceArray() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di inizializzare la matrice di puntatore intelligente.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlArray](../../atl/reference/catlarray-class.md)   
 [Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)   
 [Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


---
title: Classe CInterfaceArray | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray
- ATLCOLL/ATL::CInterfaceArray::CInterfaceArray
dev_langs:
- C++
helpviewer_keywords:
- CInterfaceArray class
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 36a24eadea87d0d34adf0f577b321fa16a7cfc86
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cinterfacearray-class"></a>Classe CInterfaceArray
Questa classe fornisce metodi utili quando si crea una matrice di puntatori a interfaccia COM.  
  
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
 Un puntatore per l'IID del `I`.  
  
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
  
##  <a name="cinterfacearray"></a>  CInterfaceArray::CInterfaceArray  
 Costruttore.  
  
```
CInterfaceArray() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza una matrice di puntatore intelligente.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlArray](../../atl/reference/catlarray-class.md)   
 [Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)   
 [Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

---
title: Classe CInterfaceList | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CInterfaceList
- ATLCOLL/ATL::CInterfaceList
- ATLCOLL/ATL::CInterfaceList::CInterfaceList
dev_langs:
- C++
helpviewer_keywords:
- CInterfaceList class
ms.assetid: 2077764d-25e5-4b3d-96c8-08a287bbcd25
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1fc523b1eccc88678cda48a0c7e429ea0fc09f9b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cinterfacelist-class"></a>Classe CInterfaceList
Questa classe fornisce metodi utili durante la costruzione di un elenco di puntatori a interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class I, const IID* piid =& __uuidof(I)>  
class CInterfaceList 
   : public CAtlList<ATL::CComQIPtr<I, piid>,
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
|[CInterfaceList::CInterfaceList](#cinterfacelist)|Il costruttore per l'elenco di interfacce.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce un costruttore e i metodi derivati per la creazione di un elenco di puntatori a interfaccia COM. Utilizzare [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) quando una matrice è obbligatoria.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CInterfaceList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="cinterfacelist"></a>  CInterfaceList::CInterfaceList  
 Il costruttore per l'elenco di interfacce.  
  
```
CInterfaceList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 Dimensione del blocco, con valore predefinito è 10.  
  
### <a name="remarks"></a>Note  
 La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Blocchi di dimensioni maggiori di ridurre ulteriormente le chiamate alle routine di allocazione di memoria, ma usano più risorse.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlList](../../atl/reference/catllist-class.md)   
 [Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)   
 [Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

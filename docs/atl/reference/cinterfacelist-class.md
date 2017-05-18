---
title: Classe CInterfaceList | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 50d86163080c5a0d0a7bb9ed6d77a40ac73722e7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cinterfacelist-class"></a>Classe CInterfaceList
Questa classe fornisce metodi utili per la creazione di un elenco di puntatori a interfaccia COM.  
  
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
 Un puntatore a IID del `I`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInterfaceList::CInterfaceList](#cinterfacelist)|Il costruttore per l'elenco di interfacce.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce un costruttore e i metodi derivati per la creazione di un elenco di puntatori a interfaccia COM. Utilizzare [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) quando è necessaria una matrice.  
  
 Per ulteriori informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CInterfaceList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcoll. h  
  
##  <a name="cinterfacelist"></a>CInterfaceList::CInterfaceList  
 Il costruttore per l'elenco di interfacce.  
  
```
CInterfaceList(UINT nBlockSize = 10) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBlockSize`  
 Dimensione del blocco, con valore predefinito è 10.  
  
### <a name="remarks"></a>Note  
 La dimensione del blocco è una misura della quantità di memoria allocata quando è necessario un nuovo elemento. Dimensioni blocco ridurre le chiamate alle routine di allocazione della memoria, ma utilizzano più risorse.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlList](../../atl/reference/catllist-class.md)   
 [Classe CComQIPtr](../../atl/reference/ccomqiptr-class.md)   
 [Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


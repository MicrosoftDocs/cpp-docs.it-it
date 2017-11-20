---
title: Classe IConnectionPointContainerImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IConnectionPointContainerImpl
- ATLCOM/ATL::IConnectionPointContainerImpl
- ATLCOM/ATL::IConnectionPointContainerImpl::EnumConnectionPoints
- ATLCOM/ATL::IConnectionPointContainerImpl::FindConnectionPoint
dev_langs: C++
helpviewer_keywords:
- connectable objects
- connection points [C++], container
- IConnectionPointContainerImpl class
ms.assetid: 10db5a8d-8be9-4d9d-8a82-8ab9ffe3e9d6
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8c76ded677c7aa49c9c9135d098b00f21f6d8098
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="iconnectionpointcontainerimpl-class"></a>Classe IConnectionPointContainerImpl
Questa classe implementa un contenitore del punto di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class ATL_NO_VTABLE IConnectionPointContainerImpl 
   : public IConnectionPointContainer
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IConnectionPointContainerImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IConnectionPointContainerImpl::EnumConnectionPoints](#enumconnectionpoints)|Crea un enumeratore per scorrere i punti di connessione nell'oggetto collegabile è supportati.|  
|[IConnectionPointContainerImpl::FindConnectionPoint](#findconnectionpoint)|Recupera un puntatore a interfaccia per il punto di connessione che supporta l'IID specificato.|  
  
## <a name="remarks"></a>Note  
 `IConnectionPointContainerImpl`implementa un contenitore del punto di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti. `IConnectionPointContainerImpl`fornisce due metodi che un client può chiamare per recuperare ulteriori informazioni su un oggetto collegabile:  
  
- `EnumConnectionPoints`consente al client determinare l'oggetto supporta interfacce di cui in uscita.  
  
- `FindConnectionPoint`consente al client determinare se l'oggetto supporta una specifica interfaccia in uscita.  
  
 Per informazioni sull'utilizzo di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IConnectionPointContainer`  
  
 `IConnectionPointContainerImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="enumconnectionpoints"></a>IConnectionPointContainerImpl::EnumConnectionPoints  
 Crea un enumeratore per scorrere i punti di connessione nell'oggetto collegabile è supportati.  
  
```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IConnectionPointContainer:: EnumConnectionPoints](http://msdn.microsoft.com/library/windows/desktop/ms682460) in Windows SDK.  
  
##  <a name="findconnectionpoint"></a>IConnectionPointContainerImpl::FindConnectionPoint  
 Recupera un puntatore a interfaccia per il punto di connessione che supporta l'IID specificato.  
  
```
STDMETHOD(FindConnectionPoint)(REFIID riid, IConnectionPoint** ppCP);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IConnectionPointContainer:: FindConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms692476) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

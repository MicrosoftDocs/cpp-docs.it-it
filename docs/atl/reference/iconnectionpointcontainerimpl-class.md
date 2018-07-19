---
title: Classe IConnectionPointContainerImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IConnectionPointContainerImpl
- ATLCOM/ATL::IConnectionPointContainerImpl
- ATLCOM/ATL::IConnectionPointContainerImpl::EnumConnectionPoints
- ATLCOM/ATL::IConnectionPointContainerImpl::FindConnectionPoint
dev_langs:
- C++
helpviewer_keywords:
- connectable objects
- connection points [C++], container
- IConnectionPointContainerImpl class
ms.assetid: 10db5a8d-8be9-4d9d-8a82-8ab9ffe3e9d6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d70989be8e8535336c831cb59fb9422c6e2c63e0
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37886232"
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
 *T*  
 La classe, derivata da `IConnectionPointContainerImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IConnectionPointContainerImpl::EnumConnectionPoints](#enumconnectionpoints)|Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.|  
|[IConnectionPointContainerImpl::FindConnectionPoint](#findconnectionpoint)|Recupera un puntatore a interfaccia per il punto di connessione che supporta l'IID specificato.|  
  
## <a name="remarks"></a>Note  
 `IConnectionPointContainerImpl` implementa un contenitore del punto di connessione per gestire una raccolta di [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) oggetti. `IConnectionPointContainerImpl` fornisce due metodi che un client può chiamare per recuperare ulteriori informazioni sull'oggetto collegabile:  
  
- `EnumConnectionPoints` consente al client determinare quali in uscita interfacce supporta l'oggetto.  
  
- `FindConnectionPoint` consente al client determinare se l'oggetto supporta una specifica interfaccia in uscita.  
  
 Per informazioni sull'uso di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IConnectionPointContainer`  
  
 `IConnectionPointContainerImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="enumconnectionpoints"></a>  IConnectionPointContainerImpl::EnumConnectionPoints  
 Crea un enumeratore per scorrere i punti di connessione supportati nell'oggetto collegabile.  
  
```
STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints** ppEnum);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IConnectionPointContainer:: EnumConnectionPoints](http://msdn.microsoft.com/library/windows/desktop/ms682460) in Windows SDK.  
  
##  <a name="findconnectionpoint"></a>  IConnectionPointContainerImpl::FindConnectionPoint  
 Recupera un puntatore a interfaccia per il punto di connessione che supporta l'IID specificato.  
  
```
STDMETHOD(FindConnectionPoint)(REFIID riid, IConnectionPoint** ppCP);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IConnectionPointContainer:: FindConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms692476) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)   
 [Panoramica della classe](../../atl/atl-class-overview.md)

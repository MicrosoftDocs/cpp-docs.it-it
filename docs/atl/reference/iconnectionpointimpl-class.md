---
title: Classe IConnectionPointImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IConnectionPointImpl
- ATLCOM/ATL::IConnectionPointImpl
- ATLCOM/ATL::IConnectionPointImpl::Advise
- ATLCOM/ATL::IConnectionPointImpl::EnumConnections
- ATLCOM/ATL::IConnectionPointImpl::GetConnectionInterface
- ATLCOM/ATL::IConnectionPointImpl::GetConnectionPointContainer
- ATLCOM/ATL::IConnectionPointImpl::Unadvise
- ATLCOM/ATL::IConnectionPointImpl::m_vec
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], implementing
- IConnectionPointImpl class
ms.assetid: 27992115-3b86-45dd-bc9e-54f32876c557
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: c9788496bbed3734b959d0ab4c49c89a176ea199
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="iconnectionpointimpl-class"></a>Classe IConnectionPointImpl
Questa classe implementa un punto di connessione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, const IID* piid, class CDV = CComDynamicUnkArray>  
class ATL_NO_VTABLE IConnectionPointImpl : public _ICPLocator<piid>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IConnectionPointImpl`.  
  
 `piid`  
 Un puntatore all'IID dell'interfaccia rappresentata dall'oggetto punto di connessione.  
  
 `CDV`  
 Una classe che gestisce le connessioni. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente un numero illimitato di connessioni. È inoltre possibile utilizzare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso di connessioni.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IConnectionPointImpl::Advise](#advise)|Stabilisce una connessione tra il punto di connessione e un sink.|  
|[IConnectionPointImpl::EnumConnections](#enumconnections)|Crea un enumeratore per scorrere le connessioni per il punto di connessione.|  
|[IConnectionPointImpl::GetConnectionInterface](#getconnectioninterface)|Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.|  
|[IConnectionPointImpl::GetConnectionPointContainer](#getconnectionpointcontainer)|Recupera un puntatore a interfaccia per l'oggetto collegabile.|  
|[IConnectionPointImpl::Unadvise](#unadvise)|Termina una connessione stabilita in precedenza tramite `Advise`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IConnectionPointImpl::m_vec](#m_vec)|Gestisce le connessioni per il punto di connessione.|  
  
## <a name="remarks"></a>Note  
 `IConnectionPointImpl`implementa un punto di connessione, che consente di esporre un'interfaccia in uscita al client un oggetto. Il client implementa questa interfaccia in un oggetto denominato sink.  
  
 ATL utilizza [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) per implementare l'oggetto collegabile. Ogni punto di connessione all'interno dell'oggetto collegabile rappresenta un'interfaccia in uscita, identificata da `piid`. Classe *CDV* gestisce le connessioni tra il punto di connessione e un sink. Ogni connessione è identificata da un "cookie".  
  
 Per ulteriori informazioni sull'utilizzo di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_ICPLocator`  
  
 `IConnectionPointImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="advise"></a>IConnectionPointImpl::Advise  
 Stabilisce una connessione tra il punto di connessione e un sink.  
  
```
STDMETHOD(Advise)(
    IUnknown* pUnkSink,
    DWORD* pdwCookie);
```  
  
### <a name="remarks"></a>Note  
 Utilizzare [Unadvise](#unadvise) per terminare la chiamata della connessione.  
  
 Vedere [IConnectionPoint::](http://msdn.microsoft.com/library/windows/desktop/ms678815) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="enumconnections"></a>IConnectionPointImpl::EnumConnections  
 Crea un enumeratore per scorrere le connessioni per il punto di connessione.  
  
```
STDMETHOD(EnumConnections)(IEnumConnections** ppEnum);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IConnectionPoint:: EnumConnections](http://msdn.microsoft.com/library/windows/desktop/ms680755) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getconnectioninterface"></a>IConnectionPointImpl::GetConnectionInterface  
 Recupera l'IID dell'interfaccia rappresentata dal punto di connessione.  
  
```
STDMETHOD(GetConnectionInterface)(IID* piid2);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IConnectionPoint:: GetConnectionInterface](http://msdn.microsoft.com/library/windows/desktop/ms693468) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getconnectionpointcontainer"></a>IConnectionPointImpl::GetConnectionPointContainer  
 Recupera un puntatore a interfaccia per l'oggetto collegabile.  
  
```
STDMETHOD(GetConnectionPointContainer)(IConnectionPointContainer** ppCPC);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IConnectionPoint:: GetConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms679669) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="m_vec"></a>IConnectionPointImpl::m_vec  
 Gestisce le connessioni tra l'oggetto punto di connessione e un sink.  
  
```
CDV m_vec;
```     
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `m_vec` è di tipo [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md).  
  
##  <a name="unadvise"></a>IConnectionPointImpl::Unadvise  
 Termina una connessione stabilita in precedenza tramite [Advise](#advise).  
  
```
STDMETHOD(Unadvise)(DWORD dwCookie);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IConnectionPoint:: Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms686608) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


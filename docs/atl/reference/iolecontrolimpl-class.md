---
title: Classe IOleControlImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IOleControlImpl
- ATLCTL/ATL::IOleControlImpl
- ATLCTL/ATL::IOleControlImpl::FreezeEvents
- ATLCTL/ATL::IOleControlImpl::GetControlInfo
- ATLCTL/ATL::IOleControlImpl::OnAmbientPropertyChange
- ATLCTL/ATL::IOleControlImpl::OnMnemonic
dev_langs:
- C++
helpviewer_keywords:
- IOleControlImpl class
ms.assetid: 5a4255ad-ede4-49ca-ba9a-07c2e919fa85
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 34bdb0af5965b300e77a02858af3708c90fa63d0
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37879283"
---
# <a name="iolecontrolimpl-class"></a>Classe IOleControlImpl
Questa classe fornisce un'implementazione predefinita del `IOleControl` interfaccia e implementa `IUnknown`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IOleControlImpl
```   
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `IOleControlImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleControlImpl::FreezeEvents](#freezeevents)|Indica se il contenitore Ignora o accetta eventi dal controllo.|  
|[IOleControlImpl::GetControlInfo](#getcontrolinfo)|Compila informazioni sul comportamento della tastiera del controllo. L'implementazione di ATL restituisce E_NOTIMPL.|  
|[IOleControlImpl::OnAmbientPropertyChange](#onambientpropertychange)|Informa un controllo che uno o più proprietà di ambiente del contenitore è stato modificato. L'implementazione di ATL restituisce S_OK.|  
|[IOleControlImpl::OnMnemonic](#onmnemonic)|Indica al controllo che un utente ha premuto un tasto specificato. L'implementazione di ATL restituisce E_NOTIMPL.|  
  
## <a name="remarks"></a>Note  
 Classe `IOleControlImpl` fornisce un'implementazione predefinita del [IOleControl](http://msdn.microsoft.com/library/windows/desktop/ms694320) interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleControl`  
  
 `IOleControlImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="freezeevents"></a>  IOleControlImpl::FreezeEvents  
 Nell'implementazione di ATL `FreezeEvents` incrementa la classe di controllo `m_nFreezeEvents` membro dati se `bFreeze` è TRUE e decrementa `m_nFreezeEvents` se `bFreeze` è FALSE.  
  
```
HRESULT FreezeEvents(BOOL bFreeze);
```  
  
### <a name="remarks"></a>Note  
 `FreezeEvents` Restituisce S_OK.  
  
 Visualizzare [IOleControl:: FreezeEvents](http://msdn.microsoft.com/library/windows/desktop/ms678482) in Windows SDK.  
  
##  <a name="getcontrolinfo"></a>  IOleControlImpl::GetControlInfo  
 Compila informazioni sul comportamento della tastiera del controllo.  
  
```
HRESULT GetControlInfo(LPCONTROLINFO pCI);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleControl:GetControlInfo](http://msdn.microsoft.com/library/windows/desktop/ms693730) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce E_NOTIMPL.  
  
##  <a name="onambientpropertychange"></a>  IOleControlImpl::OnAmbientPropertyChange  
 Informa un controllo che uno o più proprietà di ambiente del contenitore è stato modificato.  
  
```
HRESULT OnAmbientPropertyChange(DISPID dispid);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleControl::OnAmbientPropertyChange](http://msdn.microsoft.com/library/windows/desktop/ms690175) in Windows SDK.  
  
##  <a name="onmnemonic"></a>  IOleControlImpl::OnMnemonic  
 Indica al controllo che un utente ha premuto un tasto specificato.  
  
```
HRESULT OnMnemonic(LPMSG pMsg);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce E_NOTIMPL.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleControl::OnMnemonic](http://msdn.microsoft.com/library/windows/desktop/ms680699) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)   
 [Interfacce di controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Panoramica della classe](../../atl/atl-class-overview.md)

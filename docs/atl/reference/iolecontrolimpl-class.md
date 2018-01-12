---
title: Classe IOleControlImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IOleControlImpl
- ATLCTL/ATL::IOleControlImpl
- ATLCTL/ATL::IOleControlImpl::FreezeEvents
- ATLCTL/ATL::IOleControlImpl::GetControlInfo
- ATLCTL/ATL::IOleControlImpl::OnAmbientPropertyChange
- ATLCTL/ATL::IOleControlImpl::OnMnemonic
dev_langs: C++
helpviewer_keywords: IOleControlImpl class
ms.assetid: 5a4255ad-ede4-49ca-ba9a-07c2e919fa85
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 23375f8f76e1a58bf29e3e3e269077fea4ae8d61
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iolecontrolimpl-class"></a>Classe IOleControlImpl
Questa classe fornisce un'implementazione predefinita del **IOleControl** interfaccia e implementa **IUnknown**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IOleControlImpl
```   
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IOleControlImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleControlImpl::FreezeEvents](#freezeevents)|Indica se il contenitore Ignora o accetta eventi dal controllo.|  
|[IOleControlImpl::GetControlInfo](#getcontrolinfo)|Compila informazioni sul comportamento di tastiera del controllo. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IOleControlImpl::OnAmbientPropertyChange](#onambientpropertychange)|Indica un controllo che uno o più proprietà di ambiente del contenitore è stato modificato. Restituisce l'implementazione di ATL `S_OK`.|  
|[IOleControlImpl::OnMnemonic](#onmnemonic)|Indica al controllo che un utente ha premuto un tasto di scelta rapida specificato. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
  
## <a name="remarks"></a>Note  
 Classe `IOleControlImpl` fornisce un'implementazione predefinita del [IOleControl](http://msdn.microsoft.com/library/windows/desktop/ms694320) interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleControl`  
  
 `IOleControlImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="freezeevents"></a>IOleControlImpl::FreezeEvents  
 Nell'implementazione di ATL, `FreezeEvents` incrementa la classe di controllo `m_nFreezeEvents` membro dati se `bFreeze` è **TRUE**e decrementa `m_nFreezeEvents` se `bFreeze` è **FALSE**.  
  
```
HRESULT FreezeEvents(BOOL bFreeze);
```  
  
### <a name="remarks"></a>Note  
 `FreezeEvents`Restituisce quindi `S_OK`.  
  
 Vedere [IOleControl:: FreezeEvents](http://msdn.microsoft.com/library/windows/desktop/ms678482) in Windows SDK.  
  
##  <a name="getcontrolinfo"></a>IOleControlImpl::GetControlInfo  
 Compila informazioni sul comportamento di tastiera del controllo.  
  
```
HRESULT GetControlInfo(LPCONTROLINFO pCI);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleControl:GetControlInfo](http://msdn.microsoft.com/library/windows/desktop/ms693730) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
##  <a name="onambientpropertychange"></a>IOleControlImpl::OnAmbientPropertyChange  
 Indica un controllo che uno o più proprietà di ambiente del contenitore è stato modificato.  
  
```
HRESULT OnAmbientPropertyChange(DISPID dispid);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleControl::OnAmbientPropertyChange](http://msdn.microsoft.com/library/windows/desktop/ms690175) in Windows SDK.  
  
##  <a name="onmnemonic"></a>IOleControlImpl::OnMnemonic  
 Indica al controllo che un utente ha premuto un tasto di scelta rapida specificato.  
  
```
HRESULT OnMnemonic(LPMSG pMsg);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleControl::OnMnemonic](http://msdn.microsoft.com/library/windows/desktop/ms680699) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)   
 [Interfacce di controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

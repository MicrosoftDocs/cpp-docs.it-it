---
title: Classe IOleControlImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IOleControlImpl
dev_langs:
- C++
helpviewer_keywords:
- IOleControlImpl class
ms.assetid: 5a4255ad-ede4-49ca-ba9a-07c2e919fa85
caps.latest.revision: 22
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 5e63849a504b931de30141dd91af557f16c67fd8
ms.lasthandoff: 02/24/2017

---
# <a name="iolecontrolimpl-class"></a>Classe IOleControlImpl
Questa classe fornisce un'implementazione predefinita di **IOleControl** interfaccia e implementa **IUnknown**.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IOleControlImpl
```   
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IOleControlImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleControlImpl::FreezeEvents](#freezeevents)|Indica se il contenitore Ignora o accetta gli eventi del controllo.|  
|[IOleControlImpl::GetControlInfo](#getcontrolinfo)|Compila informazioni sul comportamento della tastiera del controllo. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleControlImpl::OnAmbientPropertyChange](#onambientpropertychange)|Indica un controllo che uno o più proprietà di ambiente del contenitore è stato modificato. L'implementazione ATL restituisce `S_OK`.|  
|[IOleControlImpl::OnMnemonic](#onmnemonic)|Indica al controllo che un utente ha premuto un tasto specificato. L'implementazione ATL restituisce **E_NOTIMPL**.|  
  
## <a name="remarks"></a>Note  
 Classe `IOleControlImpl` fornisce un'implementazione predefinita di [IOleControl](http://msdn.microsoft.com/library/windows/desktop/ms694320) interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleControl`  
  
 `IOleControlImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="a-namefreezeeventsa--iolecontrolimplfreezeevents"></a><a name="freezeevents"></a>IOleControlImpl::FreezeEvents  
 Nell'implementazione di ATL, `FreezeEvents` incrementa la classe control `m_nFreezeEvents` (membro dati) se `bFreeze` è **TRUE**e decrementa `m_nFreezeEvents` se `bFreeze` è **FALSE**.  
  
```
HRESULT FreezeEvents(BOOL bFreeze);
```  
  
### <a name="remarks"></a>Note  
 `FreezeEvents`Restituisce quindi `S_OK`.  
  
 Vedere [IOleControl:: FreezeEvents](http://msdn.microsoft.com/library/windows/desktop/ms678482) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetcontrolinfoa--iolecontrolimplgetcontrolinfo"></a><a name="getcontrolinfo"></a>IOleControlImpl::GetControlInfo  
 Compila informazioni sul comportamento della tastiera del controllo.  
  
```
HRESULT GetControlInfo(LPCONTROLINFO pCI);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleControl:GetControlInfo](http://msdn.microsoft.com/library/windows/desktop/ms693730) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
##  <a name="a-nameonambientpropertychangea--iolecontrolimplonambientpropertychange"></a><a name="onambientpropertychange"></a>IOleControlImpl::OnAmbientPropertyChange  
 Indica un controllo che uno o più proprietà di ambiente del contenitore è stato modificato.  
  
```
HRESULT OnAmbientPropertyChange(DISPID dispid);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleControl::OnAmbientPropertyChange](http://msdn.microsoft.com/library/windows/desktop/ms690175) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonmnemonica--iolecontrolimplonmnemonic"></a><a name="onmnemonic"></a>IOleControlImpl::OnMnemonic  
 Indica al controllo che un utente ha premuto un tasto specificato.  
  
```
HRESULT OnMnemonic(LPMSG pMsg);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleControl::OnMnemonic](http://msdn.microsoft.com/library/windows/desktop/ms680699) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)   
 [Interfacce di controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


---
title: Classe IOleInPlaceActiveObjectImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IOleInPlaceActiveObjectImpl
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ContextSensitiveHelp
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::EnableModeless
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::GetWindow
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnDocWindowActivate
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnFrameWindowActivate
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ResizeBorder
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::TranslateAccelerator
dev_langs:
- C++
helpviewer_keywords:
- IOleInPlaceActiveObjectImpl class
- ActiveX controls [C++], communication between container and control
- IOleInPlaceActiveObject, ATL implementation
ms.assetid: 44e6cc6d-a2dc-4187-98e3-73cf0320dea9
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 766ac40bb0a09902914feab1acc54a960261a768
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ioleinplaceactiveobjectimpl-class"></a>Classe IOleInPlaceActiveObjectImpl
Questa classe fornisce metodi per facilitare la comunicazione tra un controllo sul posto e il relativo contenitore.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IOleInPlaceActiveObjectImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IOleInPlaceActiveObjectImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleInPlaceActiveObjectImpl::ContextSensitiveHelp](#contextsensitivehelp)|Consente la Guida sensibile al contesto. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleInPlaceActiveObjectImpl::EnableModeless](#enablemodeless)|Abilita finestre di dialogo non modale. L'implementazione ATL restituisce `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::GetWindow](#getwindow)|Ottiene un handle di finestra.|  
|[IOleInPlaceActiveObjectImpl::OnDocWindowActivate](#ondocwindowactivate)|Notifica al controllo quando la finestra di documento del contenitore è attivata o disattivata. L'implementazione ATL restituisce `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::OnFrameWindowActivate](#onframewindowactivate)|Notifica al controllo quando una finestra cornice principale del contenitore è attivata o disattivata. Restituisce l'implementazione di ATL|  
|[IOleInPlaceActiveObjectImpl::ResizeBorder](#resizeborder)|Informa il controllo che è necessario ridimensionare i bordi. L'implementazione ATL restituisce `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::TranslateAccelerator](#translateaccelerator)|Elabora i messaggi di tasto di scelta rapida di menu dal contenitore. L'implementazione ATL restituisce **E_NOTIMPL**.|  
  
  
## <a name="remarks"></a>Note  
 Il [IOleInPlaceActiveObject](http://msdn.microsoft.com/library/windows/desktop/ms691299) interfaccia consente la comunicazione tra un controllo sul posto e il relativo contenitore, ad esempio, comunicare lo stato attivo del controllo e contenitore e informare il controllo è necessario ridimensionare. Classe `IOleInPlaceActiveObjectImpl` fornisce un'implementazione predefinita di `IOleInPlaceActiveObject` e supporta **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleInPlaceActiveObject`  
  
 `IOleInPlaceActiveObjectImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="contextsensitivehelp"></a>IOleInPlaceActiveObjectImpl::ContextSensitiveHelp  
 Consente la Guida sensibile al contesto.  
  
```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleWindow::ContextSensitiveHelp](http://msdn.microsoft.com/library/windows/desktop/ms680059) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="enablemodeless"></a>IOleInPlaceActiveObjectImpl::EnableModeless  
 Abilita finestre di dialogo non modale.  
  
```
HRESULT EnableModeless(BOOL fEnable);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceActiveObject::EnableModeless](http://msdn.microsoft.com/library/windows/desktop/ms680115) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getwindow"></a>IOleInPlaceActiveObjectImpl::GetWindow  
 Il contenitore chiama questa funzione per ottenere l'handle della finestra del controllo.  
  
```
HRESULT GetWindow(HWND* phwnd);
```  
  
### <a name="remarks"></a>Note  
 Alcuni contenitori non funzionerà con un controllo che è stata privi di finestra, anche se è attualmente finestra. Nell'implementazione di ATL, se il **CComControl::m_bWasOnceWindowless** membro dati è **TRUE**, la funzione restituisce **E_FAIL**. In caso contrario, se \* *phwnd* non **NULL**, `GetWindow` assegna *phwnd* al membro dati della classe control `m_hWnd` e restituisce `S_OK`.  
  
 Vedere [IOleWindow::GetWindow](http://msdn.microsoft.com/library/windows/desktop/ms687282) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ondocwindowactivate"></a>IOleInPlaceActiveObjectImpl::OnDocWindowActivate  
 Notifica al controllo quando la finestra di documento del contenitore è attivata o disattivata.  
  
```
HRESULT OnDocWindowActivate(BOOL fActivate);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceActiveObject::OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="onframewindowactivate"></a>IOleInPlaceActiveObjectImpl::OnFrameWindowActivate  
 Notifica al controllo quando una finestra cornice principale del contenitore è attivata o disattivata.  
  
```
HRESULT OnFrameWindowActivate(BOOL fActivate);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceActiveObject::OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="resizeborder"></a>IOleInPlaceActiveObjectImpl::ResizeBorder  
 Informa il controllo che è necessario ridimensionare i bordi.  
  
```
HRESULT ResizeBorder(
    LPRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fFrameWindow);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="translateaccelerator"></a>IOleInPlaceActiveObjectImpl::TranslateAccelerator  
 Elabora i messaggi di tasto di scelta rapida di menu dal contenitore.  
  
```
HRESULT TranslateAccelerator(LPMSG lpmsg);
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo supporta i valori restituiti riportati di seguito:  
  
 `S_OK`Se il messaggio è stato convertito correttamente.  
  
 **S_FALSE** se il messaggio non è stato convertito.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceActiveObject::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)  
 [Interfacce di controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms692724)  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


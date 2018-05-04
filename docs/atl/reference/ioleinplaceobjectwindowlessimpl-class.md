---
title: Classe IOleInPlaceObjectWindowlessImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IOleInPlaceObjectWindowlessImpl
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::GetDropTarget
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::GetWindow
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::OnWindowMessage
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::SetObjectRects
- ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::UIDeactivate
dev_langs:
- C++
helpviewer_keywords:
- IOleInPlaceObjectWindowless, ATL implementation
- activation [C++], ATL
- IOleInPlaceObjectWindowlessImpl class
- ActiveX controls [C++], communication between container and control
- controls [ATL], windowless
- deactivating ATL
ms.assetid: a2e0feb4-bc59-4adf-aab2-105457bbdbb4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f5616258405eb8346132d32b8f7fd71d0b4794d6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ioleinplaceobjectwindowlessimpl-class"></a>Classe IOleInPlaceObjectWindowlessImpl
Questa classe implementa **IUnknown** e fornisce metodi che consentono un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IOleInPlaceObjectWindowlessImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IOleInPlaceObjectWindowlessImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp](#contextsensitivehelp)|Abilita Guida sensibile al contesto. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetDropTarget](#getdroptarget)|Fornisce il `IDropTarget` interfaccia per un oggetto di active, privi di finestra sul posto che supporta trascinamento della selezione. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetWindow](#getwindow)|Ottiene un handle di finestra.|  
|[IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate](#inplacedeactivate)|Disattiva un controllo sul posto attivo.|  
|[IOleInPlaceObjectWindowlessImpl::OnWindowMessage](#onwindowmessage)|Invia un messaggio dal contenitore a un controllo senza finestra attiva.|  
|[IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo](#reactivateandundo)|Riattiva un controllo disattivato in precedenza. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::SetObjectRects](#setobjectrects)|Indica quale parte del controllo sul posto è visibile.|  
|[IOleInPlaceObjectWindowlessImpl::UIDeactivate](#uideactivate)|Disattiva e rimuove l'interfaccia utente che supporta l'attivazione sul posto.|  
  
## <a name="remarks"></a>Note  
 Il [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) interfaccia gestisce la riattivazione, la disattivazione sul posto i controlli e determina la quantità del controllo deve essere visibile. Il [IOleInPlaceObjectWindowless](http://msdn.microsoft.com/library/windows/desktop/ms687304) interfaccia consente a un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio. Classe `IOleInPlaceObjectWindowlessImpl` fornisce un'implementazione predefinita di `IOleInPlaceObject` e `IOleInPlaceObjectWindowless` e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleInPlaceObjectWindowless`  
  
 `IOleInPlaceObjectWindowlessImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="contextsensitivehelp"></a>  IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp  
 Restituisce **E_NOTIMPL**.  
  
```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleWindow::ContextSensitiveHelp](http://msdn.microsoft.com/library/windows/desktop/ms680059) in Windows SDK.  
  
##  <a name="getdroptarget"></a>  IOleInPlaceObjectWindowlessImpl::GetDropTarget  
 Restituisce **E_NOTIMPL**.  
  
```
HRESULT GetDropTarget(IDropTarget** ppDropTarget);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceObjectWindowless::GetDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms678535) in Windows SDK.  
  
##  <a name="getwindow"></a>  IOleInPlaceObjectWindowlessImpl::GetWindow  
 Il contenitore chiama questa funzione per ottenere l'handle della finestra del controllo.  
  
```
HRESULT GetWindow(HWND* phwnd);
```  
  
### <a name="remarks"></a>Note  
 Alcuni contenitori non funzionerà con un controllo che è stata privi di finestra, anche se è attualmente finestra. Nell'implementazione di ATL, se il controllo del membro dati classe `m_bWasOnceWindowless` è **TRUE**, la funzione restituisce **E_FAIL**. In caso contrario, se *phwnd* non **NULL**, `GetWindow` imposta \* *phwnd* e il membro della classe del controllo dati `m_hWnd` e restituisce `S_OK`.  
  
 Vedere [IOleWindow::GetWindow](http://msdn.microsoft.com/library/windows/desktop/ms687282) in Windows SDK.  
  
##  <a name="inplacedeactivate"></a>  IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate  
 Chiamato dal contenitore per disattivare un controllo attivo sul posto.  
  
```
HRESULT InPlaceDeactivate(HWND* phwnd);
```  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue una disattivazione completa o parziale, a seconda dello stato del controllo. Se necessario, viene disattivato l'interfaccia utente del controllo e la finestra del controllo, se presente, viene eliminato definitivamente. Il contenitore viene notificato che il controllo non è più attivo sul posto. Il **IOleInPlaceUIWindow** interfaccia utilizzata dal contenitore per negoziare i menu e il bordo dello spazio viene rilasciato.  
  
 Vedere [IOleInPlaceObject::InPlaceDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms679700) in Windows SDK.  
  
##  <a name="onwindowmessage"></a>  IOleInPlaceObjectWindowlessImpl::OnWindowMessage  
 Invia un messaggio da un contenitore a un controllo senza finestra attiva.  
  
```
HRESULT OnWindowMessage(
    UINT msg,
    WPARAM WParam,
    LPARAM LParam,
    LRESULT plResultParam);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceObjectWindowless::OnWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms693783) in Windows SDK.  
  
##  <a name="reactivateandundo"></a>  IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo  
 Restituisce **E_NOTIMPL**.  
  
```
HRESULT ReactivateAndUndo();
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceObject::ReactivateAndUndo](http://msdn.microsoft.com/library/windows/desktop/ms691372) in Windows SDK.  
  
##  <a name="setobjectrects"></a>  IOleInPlaceObjectWindowlessImpl::SetObjectRects  
 Chiamato dal contenitore per informare il controllo che è stata modificata la dimensione e/o posizione.  
  
```
HRESULT SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
```  
  
### <a name="remarks"></a>Note  
 Aggiorna il controllo `m_rcPos` (membro dati) e la visualizzazione del controllo. Viene visualizzata solo la parte del controllo che si interseca l'area di ritaglio. Se la visualizzazione del controllo è stata troncata in precedenza, ma è stato rimosso il ritaglio, questa funzione può essere chiamata per ridisegnare una visualizzazione completa del controllo.  
  
 Vedere [IOleInPlaceObject::SetObjectRects](http://msdn.microsoft.com/library/windows/desktop/ms683767) in Windows SDK.  
  
##  <a name="uideactivate"></a>  IOleInPlaceObjectWindowlessImpl::UIDeactivate  
 Disattiva e rimuove l'interfaccia utente del controllo che supporta l'attivazione sul posto.  
  
```
HRESULT UIDeactivate();
```  
  
### <a name="remarks"></a>Note  
 Imposta il controllo del membro dati classe `m_bUIActive` a **FALSE**. L'implementazione di ATL di questo risultato della funzione sempre `S_OK`.  
  
 Vedere [IOleInPlaceObject::UIDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms693348) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

---
title: Classe IOleInPlaceObjectWindowlessImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IOleInPlaceObjectWindowlessImpl
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
caps.latest.revision: 20
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
ms.openlocfilehash: 06ce03a896c9948bff14b4f91ae48000d07c3edd
ms.lasthandoff: 02/24/2017

---
# <a name="ioleinplaceobjectwindowlessimpl-class"></a>Classe IOleInPlaceObjectWindowlessImpl
Questa classe implementa **IUnknown** e fornisce metodi che consentono un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IOleInPlaceObjectWindowlessImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IOleInPlaceObjectWindowlessImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp](#contextsensitivehelp)|Consente la Guida sensibile al contesto. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetDropTarget](#getdroptarget)|Fornisce la `IDropTarget` interfaccia per un oggetto di active, privi di finestra sul posto che supporta il trascinamento. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetWindow](#getwindow)|Ottiene un handle di finestra.|  
|[IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate](#inplacedeactivate)|Disattiva un controllo attivo sul posto.|  
|[IOleInPlaceObjectWindowlessImpl::OnWindowMessage](#onwindowmessage)|Invia un messaggio dal contenitore a un controllo senza finestra attiva.|  
|[IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo](#reactivateandundo)|Riattiva un controllo precedentemente disattivato. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::SetObjectRects](#setobjectrects)|Indica quale parte del controllo sul posto è visibile.|  
|[IOleInPlaceObjectWindowlessImpl::UIDeactivate](#uideactivate)|Disattiva e rimuove l'interfaccia utente che supporta l'attivazione sul posto.|  
  
## <a name="remarks"></a>Note  
 Il [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) interfaccia gestisce l'attivazione e disattivazione di inserito controlli e determina la quantità del controllo deve essere visibile. Il [IOleInPlaceObjectWindowless](http://msdn.microsoft.com/library/windows/desktop/ms687304) interfaccia consente a un controllo senza finestra per ricevere i messaggi della finestra e partecipare alle operazioni di trascinamento e rilascio. Classe `IOleInPlaceObjectWindowlessImpl` fornisce un'implementazione predefinita di `IOleInPlaceObject` e `IOleInPlaceObjectWindowless` e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleInPlaceObjectWindowless`  
  
 `IOleInPlaceObjectWindowlessImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="a-namecontextsensitivehelpa--ioleinplaceobjectwindowlessimplcontextsensitivehelp"></a><a name="contextsensitivehelp"></a>IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp  
 Restituisce **E_NOTIMPL**.  
  
```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleWindow::ContextSensitiveHelp](http://msdn.microsoft.com/library/windows/desktop/ms680059) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetdroptargeta--ioleinplaceobjectwindowlessimplgetdroptarget"></a><a name="getdroptarget"></a>IOleInPlaceObjectWindowlessImpl::GetDropTarget  
 Restituisce **E_NOTIMPL**.  
  
```
HRESULT GetDropTarget(IDropTarget** ppDropTarget);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceObjectWindowless::GetDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms678535) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetwindowa--ioleinplaceobjectwindowlessimplgetwindow"></a><a name="getwindow"></a>IOleInPlaceObjectWindowlessImpl::GetWindow  
 Il contenitore chiama questa funzione per ottenere l'handle della finestra del controllo.  
  
```
HRESULT GetWindow(HWND* phwnd);
```  
  
### <a name="remarks"></a>Note  
 Alcuni contenitori non funzionerà con un controllo che è stata privi di finestra, anche se è attualmente finestra. Nell'implementazione di ATL, se il controllo del membro dati classe `m_bWasOnceWindowless` è **TRUE**, la funzione restituisce **E_FAIL**. In caso contrario, se *phwnd* non **NULL**, `GetWindow` imposta \* *phwnd* al membro dati della classe control `m_hWnd` e restituisce `S_OK`.  
  
 Vedere [IOleWindow::GetWindow](http://msdn.microsoft.com/library/windows/desktop/ms687282) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameinplacedeactivatea--ioleinplaceobjectwindowlessimplinplacedeactivate"></a><a name="inplacedeactivate"></a>IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate  
 Chiamato dal contenitore di disattivare un controllo attivo sul posto.  
  
```
HRESULT InPlaceDeactivate(HWND* phwnd);
```  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue una disattivazione completa o parziale, a seconda dello stato del controllo. Se necessario, l'interfaccia del controllo utente viene disattivato e la finestra del controllo, se presente, viene eliminata. Il contenitore viene notificato che il controllo non è più attivo sul posto. Il **IOleInPlaceUIWindow** interfaccia utilizzata dal contenitore per negoziare i menu e il bordo dello spazio viene rilasciato.  
  
 Vedere [IOleInPlaceObject::InPlaceDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms679700) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonwindowmessagea--ioleinplaceobjectwindowlessimplonwindowmessage"></a><a name="onwindowmessage"></a>IOleInPlaceObjectWindowlessImpl::OnWindowMessage  
 Invia un messaggio da un contenitore a un controllo senza finestra attiva.  
  
```
HRESULT OnWindowMessage(
    UINT msg,
    WPARAM WParam,
    LPARAM LParam,
    LRESULT plResultParam);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceObjectWindowless::OnWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms693783) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namereactivateandundoa--ioleinplaceobjectwindowlessimplreactivateandundo"></a><a name="reactivateandundo"></a>IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo  
 Restituisce **E_NOTIMPL**.  
  
```
HRESULT ReactivateAndUndo();
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleInPlaceObject::ReactivateAndUndo](http://msdn.microsoft.com/library/windows/desktop/ms691372) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetobjectrectsa--ioleinplaceobjectwindowlessimplsetobjectrects"></a><a name="setobjectrects"></a>IOleInPlaceObjectWindowlessImpl::SetObjectRects  
 Chiamato dal contenitore per informare il controllo che ha modificato le dimensioni e/o posizione.  
  
```
HRESULT SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
```  
  
### <a name="remarks"></a>Note  
 Aggiorna il controllo `m_rcPos` (membro dati) e la visualizzazione del controllo. Viene visualizzata solo la parte del controllo che si interseca l'area di ritaglio. Se la visualizzazione del controllo è stata troncata in precedenza, ma è stato rimosso il ritaglio, questa funzione può essere chiamata per ridisegnare una visualizzazione completa del controllo.  
  
 Vedere [IOleInPlaceObject::SetObjectRects](http://msdn.microsoft.com/library/windows/desktop/ms683767) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameuideactivatea--ioleinplaceobjectwindowlessimpluideactivate"></a><a name="uideactivate"></a>IOleInPlaceObjectWindowlessImpl::UIDeactivate  
 Disattiva e rimuove l'interfaccia utente del controllo che supporta l'attivazione sul posto.  
  
```
HRESULT UIDeactivate();
```  
  
### <a name="remarks"></a>Note  
 Imposta il controllo del membro dati classe `m_bUIActive` a **FALSE**. L'implementazione ATL funzione sempre restituisce `S_OK`.  
  
 Vedere [IOleInPlaceObject::UIDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms693348) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


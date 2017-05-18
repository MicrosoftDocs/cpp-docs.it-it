---
title: Classe IOleObjectImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IOleObjectImpl
- ATLCTL/ATL::IOleObjectImpl
- ATLCTL/ATL::IOleObjectImpl::Advise
- ATLCTL/ATL::IOleObjectImpl::Close
- ATLCTL/ATL::IOleObjectImpl::DoVerb
- ATLCTL/ATL::IOleObjectImpl::DoVerbDiscardUndo
- ATLCTL/ATL::IOleObjectImpl::DoVerbHide
- ATLCTL/ATL::IOleObjectImpl::DoVerbInPlaceActivate
- ATLCTL/ATL::IOleObjectImpl::DoVerbOpen
- ATLCTL/ATL::IOleObjectImpl::DoVerbPrimary
- ATLCTL/ATL::IOleObjectImpl::DoVerbShow
- ATLCTL/ATL::IOleObjectImpl::DoVerbUIActivate
- ATLCTL/ATL::IOleObjectImpl::EnumAdvise
- ATLCTL/ATL::IOleObjectImpl::EnumVerbs
- ATLCTL/ATL::IOleObjectImpl::GetClientSite
- ATLCTL/ATL::IOleObjectImpl::GetClipboardData
- ATLCTL/ATL::IOleObjectImpl::GetExtent
- ATLCTL/ATL::IOleObjectImpl::GetMiscStatus
- ATLCTL/ATL::IOleObjectImpl::GetMoniker
- ATLCTL/ATL::IOleObjectImpl::GetUserClassID
- ATLCTL/ATL::IOleObjectImpl::GetUserType
- ATLCTL/ATL::IOleObjectImpl::InitFromData
- ATLCTL/ATL::IOleObjectImpl::IsUpToDate
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbDiscardUndo
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbHide
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbInPlaceActivate
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbOpen
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbShow
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbUIActivate
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbDiscardUndo
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbHide
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbInPlaceActivate
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbOpen
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbShow
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbUIActivate
- ATLCTL/ATL::IOleObjectImpl::SetClientSite
- ATLCTL/ATL::IOleObjectImpl::SetColorScheme
- ATLCTL/ATL::IOleObjectImpl::SetExtent
- ATLCTL/ATL::IOleObjectImpl::SetHostNames
- ATLCTL/ATL::IOleObjectImpl::SetMoniker
- ATLCTL/ATL::IOleObjectImpl::Unadvise
- ATLCTL/ATL::IOleObjectImpl::Update
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [C++], communication between container and control
- IOleObject, ATL implementation
- IOleObjectImpl class
ms.assetid: 59750b2d-1633-4a51-a4c2-6455b6b90c45
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: b0b471b997bfdb4062f00b40864c347db78b114a
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ioleobjectimpl-class"></a>Classe IOleObjectImpl
Questa classe implementa **IUnknown** ed è l'interfaccia principale da un contenitore per comunicare con un controllo.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class ATL_NO_VTABLE IOleObjectImpl : public IOleObject
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IOleObjectImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleObjectImpl::Advise](#advise)|Stabilisce una connessione consultiva con il controllo.|  
|[IOleObjectImpl::Close](#close)|Modifica lo stato del controllo da esecuzione a caricato.|  
|[IOleObjectImpl::DoVerb](#doverb)|Indica al controllo di eseguire una delle azioni enumerate.|  
|[IOleObjectImpl::DoVerbDiscardUndo](#doverbdiscardundo)|Indica al controllo per eliminare qualsiasi stato di annullamento che gestisce.|  
|[IOleObjectImpl::DoVerbHide](#doverbhide)|Indica al controllo per rimuovere la relativa interfaccia utente dalla visualizzazione.|  
|[IOleObjectImpl::DoVerbInPlaceActivate](#doverbinplaceactivate)|Esegue il controllo e la relativa finestra, ma non installa l'interfaccia utente del controllo.|  
|[IOleObjectImpl::DoVerbOpen](#doverbopen)|Determina il controllo essere modificato aperto in una finestra separata.|  
|[IOleObjectImpl::DoVerbPrimary](#doverbprimary)|Esegue l'azione specificata quando l'utente fa doppio clic sul controllo. Il controllo definisce l'azione, in genere per attivare il controllo sul posto.|  
|[IOleObjectImpl::DoVerbShow](#doverbshow)|Visualizza un nuovo controllo all'utente.|  
|[IOleObjectImpl::DoVerbUIActivate](#doverbuiactivate)|Attiva il controllo sul posto e Mostra interfaccia utente del controllo, ad esempio menu e barre degli strumenti.|  
|[IOleObjectImpl::EnumAdvise](#enumadvise)|Enumera le connessioni consultive del controllo.|  
|[IOleObjectImpl::EnumVerbs](#enumverbs)|Enumera le azioni per il controllo.|  
|[IOleObjectImpl::GetClientSite](#getclientsite)|Recupera il sito di client del controllo.|  
|[IOleObjectImpl::GetClipboardData](#getclipboarddata)|Recupera i dati dagli Appunti. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleObjectImpl::GetExtent](#getextent)|Recupera l'extent dell'area di visualizzazione del controllo.|  
|[IOleObjectImpl::GetMiscStatus](#getmiscstatus)|Recupera lo stato del controllo.|  
|[IOleObjectImpl::GetMoniker](#getmoniker)|Recupera il moniker del controllo. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleObjectImpl::GetUserClassID](#getuserclassid)|Recupera l'identificatore di classe del controllo.|  
|[IOleObjectImpl::GetUserType](#getusertype)|Recupera il nome del controllo utente tipo.|  
|[IOleObjectImpl::InitFromData](#initfromdata)|Inizializza il controllo dai dati selezionati. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleObjectImpl::IsUpToDate](#isuptodate)|Controlla se il controllo è aggiornato. L'implementazione ATL restituisce `S_OK`.|  
|[IOleObjectImpl::OnPostVerbDiscardUndo](#onpostverbdiscardundo)|Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) dopo lo stato di annullamento.|  
|[IOleObjectImpl::OnPostVerbHide](#onpostverbhide)|Chiamato da [DoVerbHide](#doverbhide) dopo il controllo è nascosto.|  
|[IOleObjectImpl::OnPostVerbInPlaceActivate](#onpostverbinplaceactivate)|Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) dopo il controllo è attivato sul posto.|  
|[IOleObjectImpl::OnPostVerbOpen](#onpostverbopen)|Chiamato da [DoVerbOpen](#doverbopen) dopo il controllo è stata aperta per la modifica in una finestra separata.|  
|[IOleObjectImpl::OnPostVerbShow](#onpostverbshow)|Chiamato da [DoVerbShow](#doverbshow) dopo il controllo è stato reso visibile.|  
|[IOleObjectImpl::OnPostVerbUIActivate](#onpostverbuiactivate)|Chiamato da [DoVerbUIActivate](#doverbuiactivate) dopo l'attivazione dell'interfaccia utente del controllo.|  
|[IOleObjectImpl::OnPreVerbDiscardUndo](#onpreverbdiscardundo)|Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) prima l'operazione di annullamento viene eliminato lo stato.|  
|[IOleObjectImpl::OnPreVerbHide](#onpreverbhide)|Chiamato da [DoVerbHide](#doverbhide) prima che il controllo è nascosto.|  
|[IOleObjectImpl::OnPreVerbInPlaceActivate](#onpreverbinplaceactivate)|Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) prima che il controllo è attivato sul posto.|  
|[IOleObjectImpl::OnPreVerbOpen](#onpreverbopen)|Chiamato da [DoVerbOpen](#doverbopen) prima che il controllo è stata aperta per la modifica in una finestra separata.|  
|[IOleObjectImpl::OnPreVerbShow](#onpreverbshow)|Chiamato da [DoVerbShow](#doverbshow) prima che il controllo è stato reso visibile.|  
|[IOleObjectImpl::OnPreVerbUIActivate](#onpreverbuiactivate)|Chiamato da [DoVerbUIActivate](#doverbuiactivate) prima di interfaccia utente del controllo è stata attivata.|  
|[IOleObjectImpl::SetClientSite](#setclientsite)|Indica al controllo sul relativo sito client nel contenitore.|  
|[IOleObjectImpl::SetColorScheme](#setcolorscheme)|Si consiglia una combinazione di colori all'applicazione del controllo, se presente. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleObjectImpl::SetExtent](#setextent)|Imposta l'estensione dell'area di visualizzazione del controllo.|  
|[IOleObjectImpl::SetHostNames](#sethostnames)|Indica al controllo i nomi dell'applicazione contenitore e il documento contenitore.|  
|[IOleObjectImpl::SetMoniker](#setmoniker)|Indica al controllo che cos'è il moniker. L'implementazione ATL restituisce **E_NOTIMPL**.|  
|[IOleObjectImpl::Unadvise](#unadvise)|Elimina una connessione consultiva con il controllo.|  
|[IOleObjectImpl::Update](#update)|Aggiorna il controllo. L'implementazione ATL restituisce `S_OK`.|  
  
## <a name="remarks"></a>Note  
 Il [IOleObject](http://msdn.microsoft.com/library/windows/desktop/dd542709) è l'interfaccia principale da un contenitore per comunicare con un controllo. Classe `IOleObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleObject`  
  
 `IOleObjectImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="advise"></a>IOleObjectImpl::Advise  
 Stabilisce una connessione consultiva con il controllo.  
  
```
STDMETHOD(Advise)(
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::Advise](http://msdn.microsoft.com/library/windows/desktop/ms686573) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="close"></a>IOleObjectImpl::Close  
 Modifica lo stato del controllo da esecuzione a caricato.  
  
```
STDMETHOD(Close)(DWORD dwSaveOption);
```  
  
### <a name="remarks"></a>Note  
 Disattiva il controllo ed elimina la finestra di controllo, se presente. Se il controllo dati membro della classe [CComControlBase::m_bRequiresSave](../../atl/reference/ccomcontrolbase-class.md#m_brequiressave) è **TRUE** e `dwSaveOption` parametro `OLECLOSE_SAVEIFDIRTY` o `OLECLOSE_PROMPTSAVE`, proprietà del controllo vengono salvate prima della chiusura.  
  
 I puntatori contenute nei membri dati di classe di controllo [CComControlBase::m_spInPlaceSite](../../atl/reference/ccomcontrolbase-class.md#m_spinplacesite) e [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink) vengono rilasciati e i membri dati [CComControlBase::m_bNegotiatedWnd](../../atl/reference/ccomcontrolbase-class.md#m_bnegotiatedwnd), [CComControlBase::m_bWndless](../../atl/reference/ccomcontrolbase-class.md#m_bwndless), e [CComControlBase::m_bInPlaceSiteEx](../../atl/reference/ccomcontrolbase-class.md#m_binplacesiteex) sono impostate su **FALSE**.  
  
 Vedere [IOleObject::Close](http://msdn.microsoft.com/library/windows/desktop/ms683922) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="doverb"></a>IOleObjectImpl::DoVerb  
 Indica al controllo di eseguire una delle azioni enumerate.  
  
```
STDMETHOD(DoVerb)(
    LONG iVerb,
    LPMSG /* pMsg */,
    IOleClientSite* pActiveSite,
    LONG /* lindex */,
    HWND hwndParent,
    LPCRECT lprcPosRect);
```  
  
### <a name="remarks"></a>Note  
 A seconda del valore di `iVerb`, uno dei ATL `DoVerb` funzioni di supporto viene chiamato come segue:  
  
|*iVerb* valore|Funzione di supporto DoVerb denominata|  
|-------------------|-----------------------------------|  
|**OLEIVERB_DISCARDUNDOSTATE**|[DoVerbDiscardUndo](#doverbdiscardundo)|  
|`OLEIVERB_HIDE`|[DoVerbHide](#doverbhide)|  
|**OLEIVERB_INPLACEACTIVATE**|[DoVerbInPlaceActivate](#doverbinplaceactivate)|  
|`OLEIVERB_OPEN`|[DoVerbOpen](#doverbopen)|  
|`OLEIVERB_PRIMARY`|[DoVerbPrimary](#doverbprimary)|  
|**OLEIVERB_PROPERTIES**|[CComControlBase::DoVerbProperties](../../atl/reference/ccomcontrolbase-class.md#doverbproperties)|  
|`OLEIVERB_SHOW`|[DoVerbShow](#doverbshow)|  
|`OLEIVERB_UIACTIVATE`|[DoVerbUIActivate](#doverbuiactivate)|  
  
 Vedere [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="doverbdiscardundo"></a>IOleObjectImpl::DoVerbDiscardUndo  
 Indica al controllo per eliminare qualsiasi stato di annullamento che gestisce.  
  
```
HRESULT DoVerbDiscardUndo(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 [in] Puntatore al rettangolo contenitore desidera il controllo in cui disegnare.  
  
 *hwndParent*  
 [in] Handle della finestra che contiene il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
##  <a name="doverbhide"></a>IOleObjectImpl::DoVerbHide  
 Disattiva e rimuove l'interfaccia utente del controllo e nasconde il controllo.  
  
```
HRESULT DoVerbHide(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 [in] Puntatore al rettangolo contenitore desidera il controllo in cui disegnare.  
  
 *hwndParent*  
 [in] Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
##  <a name="doverbinplaceactivate"></a>IOleObjectImpl::DoVerbInPlaceActivate  
 Esegue il controllo e la relativa finestra, ma non installa l'interfaccia utente del controllo.  
  
```
HRESULT DoVerbInPlaceActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 [in] Puntatore al rettangolo contenitore desidera il controllo in cui disegnare.  
  
 *hwndParent*  
 [in] Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 Attiva il controllo posto chiamando [CComControlBase::InPlaceActivate](../../atl/reference/ccomcontrolbase-class.md#inplaceactivate). A meno che il controllo del membro dati classe `m_bWindowOnly` è **TRUE**, `DoVerbInPlaceActivate` tenta innanzitutto di attivare il controllo come controllo senza finestra (possibile solo se il contenitore supporta [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300)). Se ha esito negativo, la funzione tenta di attivare il controllo con funzionalità estese (possibile solo se il contenitore supporta [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461)). Se ha esito negativo, la funzione tenta di attivare il controllo con alcuna funzionalità estese (possibile solo se il contenitore supporta [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586)). Se l'attivazione ha esito positivo, la funzione notifica al contenitore che è stato attivato il controllo.  
  
##  <a name="doverbopen"></a>IOleObjectImpl::DoVerbOpen  
 Determina il controllo essere modificato aperto in una finestra separata.  
  
```
HRESULT DoVerbOpen(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 [in] Puntatore al rettangolo contenitore desidera il controllo in cui disegnare.  
  
 *hwndParent*  
 [in] Handle della finestra che contiene il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
##  <a name="doverbprimary"></a>IOleObjectImpl::DoVerbPrimary  
 Definisce l'azione eseguita quando l'utente fa doppio clic sul controllo.  
  
```
HRESULT DoVerbPrimary(LPCRECT prcPosRect, HWND hwndParent);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 [in] Puntatore al rettangolo contenitore desidera il controllo in cui disegnare.  
  
 *hwndParent*  
 [in] Handle della finestra che contiene il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, impostare per visualizzare le pagine delle proprietà. È possibile ignorare questa nella classe del controllo per richiamare un comportamento diverso con doppio clic; ad esempio, riprodurre un video o passare attivo sul posto.  
  
##  <a name="doverbshow"></a>IOleObjectImpl::DoVerbShow  
 Indica al contenitore di rendere visibile il controllo.  
  
```
HRESULT DoVerbShow(LPCRECT prcPosRect, HWND /* hwndParent */);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 [in] Puntatore al rettangolo contenitore desidera il controllo in cui disegnare.  
  
 *hwndParent*  
 [in] Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
##  <a name="doverbuiactivate"></a>IOleObjectImpl::DoVerbUIActivate  
 Attiva l'interfaccia utente del controllo e notifica al contenitore che vengono sostituiti i menu con menu compositi.  
  
```
HRESULT DoVerbUIActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 [in] Puntatore al rettangolo contenitore desidera il controllo in cui disegnare.  
  
 *hwndParent*  
 [in] Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
##  <a name="enumadvise"></a>IOleObjectImpl::EnumAdvise  
 Fornisce un'enumerazione di connessioni consultive registrate per questo controllo.  
  
```
STDMETHOD(EnumAdvise)(IEnumSTATDATA** ppenumAdvise);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::EnumAdvise](http://msdn.microsoft.com/library/windows/desktop/ms682355) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="enumverbs"></a>IOleObjectImpl::EnumVerbs  
 Fornisce un'enumerazione delle azioni registrate (verbi) per questo controllo chiamando **OleRegEnumVerbs**.  
  
```
STDMETHOD(EnumVerbs)(IEnumOLEVERB** ppEnumOleVerb);
```  
  
### <a name="remarks"></a>Note  
 È possibile aggiungere verbi al file con estensione RGS del progetto. Ad esempio, vedere CIRCCTL. RGS nel [CIRC](../../visual-cpp-samples.md) esempio.  
  
 Vedere [IOleObject:: EnumVerbs](http://msdn.microsoft.com/library/windows/desktop/ms692781) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getclientsite"></a>IOleObjectImpl::GetClientSite  
 Consente di posizionare il puntatore nel membro dati classe controllo [CComControlBase::m_spClientSite](../../atl/reference/ccomcontrolbase-class.md#m_spclientsite) in *ppClientSite* e incrementa il conteggio dei riferimenti del puntatore.  
  
```
STDMETHOD(GetClientSite)(IOleClientSite** ppClientSite);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::GetClientSite](http://msdn.microsoft.com/library/windows/desktop/ms692603) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getclipboarddata"></a>IOleObjectImpl::GetClipboardData  
 Recupera i dati dagli Appunti.  
  
```
STDMETHOD(GetClipboardData)(    
    DWORD /* dwReserved */,
    IDataObject** /* ppDataObject */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/ms682288) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getextent"></a>IOleObjectImpl::GetExtent  
 Recupera le dimensioni di visualizzazione del controllo in esecuzione in unità HIMETRIC (0,01 millimetri per unità).  
  
```
STDMETHOD(GetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```  
  
### <a name="remarks"></a>Note  
 La dimensione viene archiviata nel membro dati classe controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).  
  
 Vedere [IOleObject::GetExtent](http://msdn.microsoft.com/library/windows/desktop/ms692325) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getmiscstatus"></a>IOleObjectImpl::GetMiscStatus  
 Restituisce un puntatore alle informazioni di stato di registrazione per il controllo chiamando **OleRegGetMiscStatus**.  
  
```
STDMETHOD(GetMiscStatus)(
    DWORD dwAspect,
    DWORD* pdwStatus);
```  
  
### <a name="remarks"></a>Note  
 Le informazioni sullo stato includono i comportamenti supportati dai dati di controllo e la presentazione. È possibile aggiungere informazioni sullo stato per il file del progetto con estensione RGS.  
  
 Vedere [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getmoniker"></a>IOleObjectImpl::GetMoniker  
 Recupera il moniker del controllo.  
  
```
STDMETHOD(GetMoniker)(
    DWORD /* dwAssign */,
    DWORD /* dwWhichMoniker */,
    IMoniker** /* ppmk */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::GetMoniker](http://msdn.microsoft.com/library/windows/desktop/ms686576) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getuserclassid"></a>IOleObjectImpl::GetUserClassID  
 Restituisce l'identificatore di classe del controllo.  
  
```
STDMETHOD(GetUserClassID)(CLSID* pClsid);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::GetUserClassID](http://msdn.microsoft.com/library/windows/desktop/ms682313) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getusertype"></a>IOleObjectImpl::GetUserType  
 Restituisce il nome del controllo utente tipo chiamando **OleRegGetUserType**.  
  
```
STDMETHOD(GetUserType)(
    DWORD dwFormOfType,
    LPOLESTR* pszUserType);
```  
  
### <a name="remarks"></a>Note  
 Il nome del tipo di utente è utilizzato per la visualizzazione degli elementi di interfacce utente, ad esempio menu e finestre di dialogo. È possibile modificare il nome del tipo di utente nel file con estensione RGS del progetto.  
  
 Vedere [IOleObject::GetUserType](http://msdn.microsoft.com/library/windows/desktop/ms688643) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="initfromdata"></a>IOleObjectImpl::InitFromData  
 Inizializza il controllo dai dati selezionati.  
  
```
STDMETHOD(InitFromData)(
    IDataObject* /* pDataObject */,
    BOOL /* fCreation */,
    DWORD /* dwReserved */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::InitFromData](http://msdn.microsoft.com/library/windows/desktop/ms688510) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="isuptodate"></a>IOleObjectImpl::IsUpToDate  
 Controlla se il controllo è aggiornato.  
  
```
STDMETHOD(IsUpToDate)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::IsUpToDate](http://msdn.microsoft.com/library/windows/desktop/ms686624) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="onpostverbdiscardundo"></a>IOleObjectImpl::OnPostVerbDiscardUndo  
 Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) dopo lo stato di annullamento.  
  
```
HRESULT OnPostVerbDiscardUndo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo con codice che si desidera eseguito dopo che lo stato di annullamento viene scartato.  
  
##  <a name="onpostverbhide"></a>IOleObjectImpl::OnPostVerbHide  
 Chiamato da [DoVerbHide](#doverbhide) dopo il controllo è nascosto.  
  
```
HRESULT OnPostVerbHide();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo con codice da eseguire dopo il controllo è nascosto.  
  
##  <a name="onpostverbinplaceactivate"></a>IOleObjectImpl::OnPostVerbInPlaceActivate  
 Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) dopo il controllo è attivato sul posto.  
  
```
HRESULT OnPostVerbInPlaceActivate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo con codice che si desidera eseguito dopo che il controllo è attivato sul posto.  
  
##  <a name="onpostverbopen"></a>IOleObjectImpl::OnPostVerbOpen  
 Chiamato da [DoVerbOpen](#doverbopen) dopo il controllo è stata aperta per la modifica in una finestra separata.  
  
```
HRESULT OnPostVerbOpen();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo con codice che si desidera eseguire il controllo è stata aperta per la modifica in una finestra separata.  
  
##  <a name="onpostverbshow"></a>IOleObjectImpl::OnPostVerbShow  
 Chiamato da [DoVerbShow](#doverbshow) dopo il controllo è stato reso visibile.  
  
```
HRESULT OnPostVerbShow();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo con codice da eseguire dopo il controllo è stato reso visibile.  
  
##  <a name="onpostverbuiactivate"></a>IOleObjectImpl::OnPostVerbUIActivate  
 Chiamato da [DoVerbUIActivate](#doverbuiactivate) dopo l'attivazione dell'interfaccia utente del controllo.  
  
```
HRESULT OnPostVerbUIActivate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo con codice da eseguire dopo l'attivazione dell'interfaccia utente del controllo.  
  
##  <a name="onpreverbdiscardundo"></a>IOleObjectImpl::OnPreVerbDiscardUndo  
 Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) prima l'operazione di annullamento viene eliminato lo stato.  
  
```
HRESULT OnPreVerbDiscardUndo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Per impedire che lo stato di annullamento vengano eliminati, eseguire l'override del metodo per restituire un errore HRESULT.  
  
##  <a name="onpreverbhide"></a>IOleObjectImpl::OnPreVerbHide  
 Chiamato da [DoVerbHide](#doverbhide) prima che il controllo è nascosto.  
  
```
HRESULT OnPreVerbHide();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Per impedire che il controllo viene nascosto, l'override del metodo per restituire un errore HRESULT.  
  
##  <a name="onpreverbinplaceactivate"></a>IOleObjectImpl::OnPreVerbInPlaceActivate  
 Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) prima che il controllo è attivato sul posto.  
  
```
HRESULT OnPreVerbInPlaceActivate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Per impedire che il controllo viene attivato sul posto, l'override del metodo per restituire un errore HRESULT.  
  
##  <a name="onpreverbopen"></a>IOleObjectImpl::OnPreVerbOpen  
 Chiamato da [DoVerbOpen](#doverbopen) prima che il controllo è stata aperta per la modifica in una finestra separata.  
  
```
HRESULT OnPreVerbOpen();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Per impedire che il controllo viene aperto per la modifica in una finestra separata, l'override del metodo per restituire un errore HRESULT.  
  
##  <a name="onpreverbshow"></a>IOleObjectImpl::OnPreVerbShow  
 Chiamato da [DoVerbShow](#doverbshow) prima che il controllo è stato reso visibile.  
  
```
HRESULT OnPreVerbShow();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Per impedire che venga visualizzato il controllo, l'override del metodo per restituire un errore HRESULT.  
  
##  <a name="onpreverbuiactivate"></a>IOleObjectImpl::OnPreVerbUIActivate  
 Chiamato da [DoVerbUIActivate](#doverbuiactivate) prima di interfaccia utente del controllo è stata attivata.  
  
```
HRESULT OnPreVerbUIActivate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Per impedire l'interfaccia utente del controllo, l'override del metodo per restituire un errore HRESULT.  
  
##  <a name="setclientsite"></a>IOleObjectImpl::SetClientSite  
 Indica al controllo sul relativo sito client nel contenitore.  
  
```
STDMETHOD(SetClientSite)(IOleClientSite* pClientSite);
```  
  
### <a name="remarks"></a>Note  
 Il metodo restituisce quindi `S_OK`.  
  
 Vedere [IOleObject::SetClientSite](http://msdn.microsoft.com/library/windows/desktop/ms684013) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setcolorscheme"></a>IOleObjectImpl::SetColorScheme  
 Si consiglia una combinazione di colori all'applicazione del controllo, se presente.  
  
```
STDMETHOD(SetColorScheme)(LOGPALETTE* /* pLogPal */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::SetColorScheme](http://msdn.microsoft.com/library/windows/desktop/ms683971) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setextent"></a>IOleObjectImpl::SetExtent  
 Imposta l'estensione dell'area di visualizzazione del controllo.  
  
```
STDMETHOD(SetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```  
  
### <a name="remarks"></a>Note  
 In caso contrario, `SetExtent` archivia il valore a cui puntato `psizel` nel membro dati classe controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent). Questo valore è in unità HIMETRIC (0,01 millimetri per unità).  
  
 Se il controllo dati membro della classe [CComControlBase::m_bResizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_bresizenatural) è **TRUE**, `SetExtent` consente inoltre di archiviare il valore a cui puntato `psizel` nel membro dati classe controllo [CComControlBase::m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural).  
  
 Se il controllo dati membro della classe [CComControlBase::m_bRecomposeOnResize](../../atl/reference/ccomcontrolbase-class.md#m_brecomposeonresize) è **TRUE**, `SetExtent` chiamate `SendOnDataChange` e `SendOnViewChange` per notificare a sink consultivi tutti registrato con il titolare di notifica che la dimensione di controllo è stato modificato.  
  
 Vedere [IOleObject::SetExtent](http://msdn.microsoft.com/library/windows/desktop/ms694330) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="sethostnames"></a>IOleObjectImpl::SetHostNames  
 Indica al controllo i nomi dell'applicazione contenitore e il documento contenitore.  
  
```
STDMETHOD(SetHostNames)(LPCOLESTR /* szContainerApp */, LPCOLESTR /* szContainerObj */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::SetHostNames](http://msdn.microsoft.com/library/windows/desktop/ms680642) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setmoniker"></a>IOleObjectImpl::SetMoniker  
 Indica al controllo che cos'è il moniker.  
  
```
STDMETHOD(SetMoniker)(
    DWORD /* dwWhichMoniker */,
    IMoniker** /* pmk */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::SetMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679671) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="unadvise"></a>IOleObjectImpl::Unadvise  
 Elimina la connessione consultiva archiviata nella classe del controllo `m_spOleAdviseHolder` (membro dati).  
  
```
STDMETHOD(Unadvise)(DWORD dwConnection);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms693749) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="update"></a>IOleObjectImpl::Update  
 Aggiorna il controllo.  
  
```
STDMETHOD(Update)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IOleObject::Update](http://msdn.microsoft.com/library/windows/desktop/ms679699) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Interfacce di controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


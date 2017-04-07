---
title: Classe CWindowImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWindowImpl
- ATLWIN/ATL::CWindowImpl
- ATLWIN/ATL::CWindowImpl::Create
- ATLWIN/ATL::DefWindowProc
- ATLWIN/ATL::GetCurrentMessage
- ATLWIN/ATL::GetWindowProc
- ATLWIN/ATL::OnFinalMessage
- ATLWIN/ATL::SubclassWindow
- ATLWIN/ATL::UnsubclassWindow
- ATLWIN/ATL::GetWndClassInfo
- ATLWIN/ATL::WindowProc
- ATLWIN/ATL::m_pfnSuperWindowProc
dev_langs:
- C++
helpviewer_keywords:
- CWindowImpl class
- subclassing windows, ATL
ms.assetid: 02eefd45-a0a6-4d1b-99f6-dbf627e2cc2f
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 76827682e96d2aea80880fa7d70c267abe02ee1c
ms.lasthandoff: 02/24/2017

---
# <a name="cwindowimpl-class"></a>CWindowImpl (classe)
Fornisce metodi per la creazione di una finestra o di una sottoclasse di finestra.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class TBase = CWindow, class TWinTraits = CControlWinTraits>  
class ATL_NO_VTABLE CWindowImpl : public CWindowImplBaseT<TBase, TWinTraits>
```    
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La nuova classe, derivata da `CWindowImpl`.  
  
 *TBase*  
 Classe base della classe. Per impostazione predefinita, la classe base è [CWindow](../../atl/reference/cwindow-class.md).  
  
 `TWinTraits`  
 Oggetto [classe traits](../../atl/understanding-window-traits.md) che definisce gli stili della finestra. Il valore predefinito è `CControlWinTraits`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindowImpl::Create](#create)|Crea una finestra.|  
  
### <a name="cwindowimplbaset-methods"></a>Metodi CWindowImplBaseT  
  
|||  
|-|-|  
|[DefWindowProc](#defwindowproc)|Fornisce l'elaborazione dei messaggi predefinita.|  
|[GetCurrentMessage](#getcurrentmessage)|Restituisce il messaggio corrente.|  
|[GetWindowProc](#getwindowproc)|Restituisce la procedura della finestra corrente.|  
|[OnFinalMessage](#onfinalmessage)|Chiamato dopo aver ricevuto l'ultimo messaggio (in genere `WM_NCDESTROY`).|  
|[SubclassWindow](#subclasswindow)|Crea una sottoclasse di una finestra.|  
|[UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|  
  
### <a name="static-methods"></a>Metodi statici  
  
|||  
|-|-|  
|[GetWndClassInfo](#getwndclassinfo)|Restituisce un'istanza statica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md), che gestisce le informazioni sulla classe di finestra.|  
|[WindowProc](#windowproc)|Elabora i messaggi inviati alla finestra.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare `CWindowImpl` per creare una finestra o una sottoclasse di una finestra esistente. il `CWindowImpl` routine della finestra utilizza una mappa messaggi per indirizzare i messaggi per i gestori appropriati.  
  
 `CWindowImpl::Create`Crea una finestra in base alle informazioni della classe finestra sono gestite da [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `CWindowImpl`contiene il [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) (macro), ovvero `CWndClassInfo` registra una nuova classe di finestra. Se si desidera rendere superclasse di una classe finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) (macro). In questo caso, `CWndClassInfo` registra una classe della finestra basata su una classe esistente, ma utilizza `CWindowImpl::WindowProc`. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing&#43;](../../atl/codesnippet/cpp/cwindowimpl-class_1.h)]  
  
> [!NOTE]
>  Poiché `CWndClassInfo` gestisce le informazioni per una sola classe della finestra, ogni finestra creata tramite un'istanza di `CWindowImpl` è basata sulla stessa classe della finestra.  
  
 `CWindowImpl` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CWindowImpl` e modifica la procedura della finestra in `CWindowImpl::WindowProc`. Ogni istanza di `CWindowImpl` può creare una sottoclasse di una finestra diversa.  
  
> [!NOTE]
>  Per un dato `CWindowImpl` oggetto, chiamare il metodo **crea** o `SubclassWindow`. Non richiamare entrambi i metodi sullo stesso oggetto.  
  
 Oltre a `CWindowImpl`, ATL fornisce [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) per creare una finestra contenuta in un altro oggetto.  
  
 Il distruttore della classe base (~ **CWindowImplRoot**) assicura che la finestra venga rimossa prima dell'eliminazione dell'oggetto.  
  
 `CWindowImpl`deriva da **CWindowImplBaseT**, che deriva da **CWindowImplRoot**, che deriva da **TBase** e [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
|Per altre informazioni su|Vedere|  
|--------------------------------|---------|  
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Uso delle finestre in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMessageMap](../../atl/reference/cmessagemap-class.md)  
  
 `TBase`  
  
 `CWindowImplRoot`  
  
 `CWindowImplBaseT`  
  
 `CWindowImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="create"></a>CWindowImpl::Create  
 Crea una finestra basata su una nuova classe della finestra.  
  
```
HWND Create(
    HWND hWndParent,
    _U_RECT rect = NULL,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 [in] Handle alla finestra padre o proprietaria.  
  
 `rect`  
 [in] Oggetto [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica la posizione della finestra. Il `RECT` può essere passato tramite puntatore o riferimento.  
  
 `szWindowName`  
 [in] Specifica il nome della finestra. Il valore predefinito è **NULL**.  
  
 `dwStyle`  
 [in] Lo stile della finestra. Questo valore viene combinato con lo stile fornito dalla classe di tratti per la finestra. Il valore predefinito fornito i tratti classe il controllo completo sullo stile. Per un elenco di valori possibili, vedere [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwExStyle`  
 [in] Lo stile di finestra esteso. Questo valore viene combinato con lo stile fornito dalla classe di tratti per la finestra. Il valore predefinito fornito i tratti classe il controllo completo sullo stile. Per un elenco di valori possibili, vedere [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `MenuOrID`  
 [in] Per una finestra figlio, l'identificatore di finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.  
  
 `lpCreateParam`  
 [in] Un puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione per il parametro finale per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle di finestra appena creata. In caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 **Creare** registra innanzitutto la classe della finestra se non è ancora stato registrato. La finestra appena creata viene associata automaticamente al `CWindowImpl` oggetto.  
  
> [!NOTE]
>  Non chiamare **crea** se è già stato chiamato [SubclassWindow](#subclasswindow).  
  
 Per utilizzare una classe della finestra che si basa su una classe finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) (macro). Procedura della finestra della classe finestra esistente viene salvato [m_pfnSuperWindowProc](#m_pfnsuperwindowproc). Per ulteriori informazioni, vedere il [CWindowImpl](../../atl/reference/cwindowimpl-class.md) Panoramica.  
  
> [!NOTE]
>  Se si utilizza 0 come valore per il `MenuOrID` parametro deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.  
  
##  <a name="defwindowproc"></a>CWindowImpl::DefWindowProc  
 Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti da mappa messaggi.  
  
```
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

LRESULT DefWindowProc();
```  
  
### <a name="parameters"></a>Parametri  
 `uMsg`  
 [in] Il messaggio inviato alla finestra.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `DefWindowProc` chiamate di [CallWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633571) funzione Win32 per inviare le informazioni del messaggio alla routine della finestra specificata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
 La funzione senza parametri recupera automaticamente i parametri necessari dal messaggio corrente.  
  
##  <a name="getcurrentmessage"></a>CWindowImpl::GetCurrentMessage  
 Restituisce il messaggio corrente, sotto fornito di `MSG` struttura.  
  
```
const MSG* GetCurrentMessage();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il messaggio corrente.  
  
##  <a name="getwindowproc"></a>CWindowImpl::GetWindowProc  
 Restituisce `WindowProc`, la procedura della finestra corrente.  
  
```
virtual WNDPROC GetWindowProc();
```  
  
### <a name="return-value"></a>Valore restituito  
 La procedura della finestra corrente.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per sostituire la routine della finestra con i propri.  
  
##  <a name="getwndclassinfo"></a>CWindowImpl::GetWndClassInfo  
 Chiamato da [crea](#create) per accedere alle informazioni sulla classe di finestra.  
  
```
static CWndClassInfo& GetWndClassInfo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un'istanza statica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CWindowImpl` ottiene questo metodo tramite il [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) macro, che specifica una nuova classe della finestra.  
  
 Rendere superclasse una classe finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro per eseguire l'override `GetWndClassInfo`. Per ulteriori informazioni, vedere il [CWindowImpl](../../atl/reference/cwindowimpl-class.md) Panoramica.  
  
 Oltre a utilizzare il `DECLARE_WND_CLASS` e `DECLARE_WND_SUPERCLASS` macro, è possibile sostituire `GetWndClassInfo` con la propria implementazione.  
  
##  <a name="m_pfnsuperwindowproc"></a>CWindowImpl::m_pfnSuperWindowProc  
 A seconda della finestra, punta a una delle seguenti procedure di finestra.  
  
```
WNDPROC m_pfnSuperWindowProc;
```  
  
### <a name="remarks"></a>Note  
  
|Tipo di finestra|Routine della finestra|  
|--------------------|----------------------|  
|Una finestra in base a una nuova classe di finestra, specificata tramite il [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) (macro).|Il [DefWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633572) funzione Win32.|  
|Una finestra basata su una classe finestra che consente di modificare una classe esistente, specificata tramite il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) (macro).|Procedura di finestra della classe finestra esistente.|  
|Una finestra con sottoclasse.|Le sottoclassi routine della finestra originale.|  
  
 [CWindowImpl::DefWindowProc](#defwindowproc) invia un messaggio di informazioni alla routine della finestra salvata in `m_pfnSuperWindowProc`.  
  
##  <a name="onfinalmessage"></a>CWindowImpl::OnFinalMessage  
 Chiamato dopo la ricezione dell'ultimo messaggio (in genere `WM_NCDESTROY`).  
  
```
virtual void OnFinalMessage(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra in corso l'eliminazione.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di `OnFinalMessage` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione per la gestione di pulizia prima dell'eliminazione di una finestra. Se si desidera eliminare automaticamente l'oggetto dopo la distruzione di finestre, è possibile chiamare `delete this;` in questa funzione.  
  
##  <a name="subclasswindow"></a>CWindowImpl::SubclassWindow  
 Le sottoclassi finestra identificata da `hWnd` e lo collega al `CWindowImpl` oggetto.  
  
```
BOOL SubclassWindow(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra da una sottoclasse.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la finestra è stato sottoclassato; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Ora utilizza la finestra impostata come sottoclasse [CWindowImpl::](#windowproc). Routine della finestra originale viene salvata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
> [!NOTE]
>  Non chiamare `SubclassWindow` se è già stato chiamato [crea](#create).  
  
##  <a name="unsubclasswindow"></a>CWindowImpl::UnsubclassWindow  
 Disconnette la finestra sottoclassata dal `CWindowImpl` dell'oggetto e ripristina la routine della finestra originale, salvato in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
```
HWND UnsubclassWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra sottoclassata in precedenza.  
  
##  <a name="windowproc"></a>CWindowImpl::  
 Questa funzione statica implementa la procedura della finestra.  
  
```
static LRESULT CALLBACK WindowProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] L'handle della finestra.  
  
 `uMsg`  
 [in] Il messaggio inviato alla finestra.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio.  
  
### <a name="remarks"></a>Note  
 `WindowProc`utilizza la mappa messaggi predefinita (dichiarato con [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)) per indirizzare i messaggi per i gestori appropriati. Se necessario, `WindowProc` chiamate [DefWindowProc](#defwindowproc) per l'elaborazione di messaggi aggiuntivi. Se il messaggio finale non viene gestito, `WindowProc` esegue le operazioni seguenti:  
  
-   Esegue unsubclassing se la finestra è stata unsubclassed.  
  
-   Cancella `m_hWnd`.  
  
-   Chiamate [OnFinalMessage](#onfinalmessage) prima la finestra viene eliminata.  
  
 È possibile eseguire l'override `WindowProc` per fornire un meccanismo diverso per la gestione dei messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)   
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


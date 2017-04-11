---
title: Classe di CWindowImpl | Documenti Microsoft
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
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: e9145c3c91eb9507f6383e8971325e5eaab53c3c
ms.lasthandoff: 03/31/2017

---
# <a name="cwindowimpl-class"></a>Classe di CWindowImpl
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
  
 `CWindowImpl::Create`Crea una finestra sulla base delle informazioni di classe di finestra che viene gestite da [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `CWindowImpl`contiene il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (macro), ovvero `CWndClassInfo` registra una nuova classe della finestra. Se si desidera rendere superclasse la classe di una classe finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) (macro). In questo caso, `CWndClassInfo` registra una classe della finestra basata su una classe esistente, ma utilizza `CWindowImpl::WindowProc`. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing #43](../../atl/codesnippet/cpp/cwindowimpl-class_1.h)]  
  
> [!NOTE]
>  Poiché `CWndClassInfo` gestisce le informazioni per una sola classe della finestra, ogni finestra creata tramite un'istanza di `CWindowImpl` è basata sulla stessa classe della finestra.  
  
 `CWindowImpl` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CWindowImpl` e modifica la procedura della finestra in `CWindowImpl::WindowProc`. Ogni istanza di `CWindowImpl` può creare una sottoclasse di una finestra diversa.  
  
> [!NOTE]
>  Per un dato `CWindowImpl` dell'oggetto, chiamare **crea** o `SubclassWindow`. Non richiamare entrambi i metodi sullo stesso oggetto.  
  
 Oltre a `CWindowImpl`, ATL fornisce [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) per creare una finestra contenuta in un altro oggetto.  
  
 Il distruttore della classe di base (~ **CWindowImplRoot**) assicura che la finestra venga rimossa prima dell'eliminazione dell'oggetto.  
  
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
 Crea una finestra in base a una nuova classe della finestra.  
  
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
 [in] Lo stile della finestra. Questo valore viene combinato con lo stile fornito dalla classe traits per la finestra. Il valore predefinito offre i tratti controllo completo della classe sullo stile. Per un elenco di valori possibili, vedere [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwExStyle`  
 [in] Lo stile della finestra estesi. Questo valore viene combinato con lo stile fornito dalla classe traits per la finestra. Il valore predefinito offre i tratti controllo completo della classe sullo stile. Per un elenco di valori possibili, vedere [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `MenuOrID`  
 [in] Per una finestra figlio, l'identificatore di finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.  
  
 `lpCreateParam`  
 [in] Un puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione per il parametro finale [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle della finestra appena creata. In caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 **Creare** registra innanzitutto la classe della finestra se non è ancora stato registrato. La finestra appena creata viene associata automaticamente al `CWindowImpl` oggetto.  
  
> [!NOTE]
>  Non chiamare **crea** se è già stato chiamato [SubclassWindow](#subclasswindow).  
  
 Per utilizzare una classe della finestra che si basa su una classe finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) (macro). Routine della finestra della classe di finestra esistente viene salvato [m_pfnSuperWindowProc](#m_pfnsuperwindowproc). Per ulteriori informazioni, vedere il [CWindowImpl](../../atl/reference/cwindowimpl-class.md) Panoramica.  
  
> [!NOTE]
>  Se viene utilizzato 0 come valore per il `MenuOrID` parametro deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.  
  
##  <a name="defwindowproc"></a>CWindowImpl::DefWindowProc  
 Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti da una mappa messaggi.  
  
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
 Restituisce il messaggio corrente, inclusi in un pacchetto di `MSG` struttura.  
  
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
 Eseguire l'override di questo metodo per sostituire la routine della finestra con il proprio.  
  
##  <a name="getwndclassinfo"></a>CWindowImpl::GetWndClassInfo  
 Chiamato da [crea](#create) per accedere alle informazioni di classe della finestra.  
  
```
static CWndClassInfo& GetWndClassInfo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un'istanza statica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CWindowImpl` ottiene questo metodo tramite il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (macro), che specifica una nuova classe della finestra.  
  
 Per una classe finestra esistente superclasse, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) (macro) per eseguire l'override `GetWndClassInfo`. Per ulteriori informazioni, vedere il [CWindowImpl](../../atl/reference/cwindowimpl-class.md) Panoramica.  
  
 Oltre a utilizzare il `DECLARE_WND_CLASS` e `DECLARE_WND_SUPERCLASS` macro, è possibile eseguire l'override `GetWndClassInfo` con la propria implementazione.  
  
##  <a name="m_pfnsuperwindowproc"></a>CWindowImpl::m_pfnSuperWindowProc  
 A seconda della finestra, punta a una delle seguenti procedure di finestra.  
  
```
WNDPROC m_pfnSuperWindowProc;
```  
  
### <a name="remarks"></a>Note  
  
|Tipo di finestra|Routine di finestra|  
|--------------------|----------------------|  
|Una finestra in base a una nuova classe di finestra, specificata tramite il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (macro).|Il [DefWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633572) funzione Win32.|  
|Una finestra in base a una classe della finestra di modifica di una classe esistente, specificata tramite il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) (macro).|Procedura di finestra della classe di finestra esistente.|  
|Una finestra impostata come sottoclasse.|La sottoclasse routine della finestra originale.|  
  
 [CWindowImpl::DefWindowProc](#defwindowproc) Invia messaggio di informazioni alla routine della finestra salvata in `m_pfnSuperWindowProc`.  
  
##  <a name="onfinalmessage"></a>CWindowImpl::OnFinalMessage  
 Chiamato dopo la ricezione dell'ultimo messaggio (in genere `WM_NCDESTROY`).  
  
```
virtual void OnFinalMessage(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Un handle alla finestra in corso l'eliminazione.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di `OnFinalMessage` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione per la gestione di pulizia prima dell'eliminazione di una finestra. Se si desidera eliminare automaticamente l'oggetto durante la distruzione di finestre, è possibile chiamare `delete this;` in questa funzione.  
  
##  <a name="subclasswindow"></a>CWindowImpl::SubclassWindow  
 Le sottoclassi finestra identificata da `hWnd` e lo collega al `CWindowImpl` oggetto.  
  
```
BOOL SubclassWindow(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra da una sottoclasse.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la finestra è stata impostata come sottoclasse; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Usa ora la finestra impostata come sottoclasse [CWindowImpl::](#windowproc). La procedura di finestra originale viene salvata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
> [!NOTE]
>  Non chiamare `SubclassWindow` se è già stato chiamato [crea](#create).  
  
##  <a name="unsubclasswindow"></a>CWindowImpl::UnsubclassWindow  
 Scollega la finestra impostata come sottoclasse dal `CWindowImpl` dell'oggetto e ripristina la procedura di finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).  
  
```
HWND UnsubclassWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra una sottoclasse in precedenza.  
  
##  <a name="windowproc"></a>CWindowImpl::  
 Questa funzione statica implementa la routine della finestra.  
  
```
static LRESULT CALLBACK WindowProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] Handle di finestra.  
  
 `uMsg`  
 [in] Il messaggio inviato alla finestra.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio.  
  
### <a name="remarks"></a>Note  
 `WindowProc`utilizza la mappa messaggi predefinita (dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)) per indirizzare i messaggi per i gestori appropriati. Se necessario, `WindowProc` chiamate [DefWindowProc](#defwindowproc) per l'elaborazione aggiuntiva dei messaggi. Se il messaggio finale non viene gestito, `WindowProc` esegue le operazioni seguenti:  
  
-   Esegue unsubclassing se la finestra stato unsubclassed.  
  
-   Cancella `m_hWnd`.  
  
-   Chiamate [OnFinalMessage](#onfinalmessage) prima la finestra viene eliminata.  
  
 È possibile eseguire l'override `WindowProc` per fornire un meccanismo diverso per la gestione dei messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)   
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


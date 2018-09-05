---
title: Classe CWindowImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3582f3fff0ee683889e1b0403554c59835293889
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43756106"
---
# <a name="cwindowimpl-class"></a>Classe CWindowImpl

Fornisce metodi per la creazione di una finestra o di una sottoclasse di finestra.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T, class TBase = CWindow, class TWinTraits = CControlWinTraits>  
class ATL_NO_VTABLE CWindowImpl : public CWindowImplBaseT<TBase, TWinTraits>
```

#### <a name="parameters"></a>Parametri

*T*  
La nuova classe, derivata da `CWindowImpl`.

*TBase*  
Classe base della classe. Per impostazione predefinita, è la classe di base [CWindow](../../atl/reference/cwindow-class.md).

*TWinTraits*  
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
|[OnFinalMessage](#onfinalmessage)|Chiamato dopo la ricezione dell'ultimo messaggio (in genere WM_NCDESTROY).|
|[SubclassWindow](#subclasswindow)|Crea una sottoclasse di una finestra.|
|[UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|

### <a name="static-methods"></a>Metodi statici

|||
|-|-|
|[GetWndClassInfo](#getwndclassinfo)|Restituisce un'istanza statica della [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md), che gestisce le informazioni sulla classe di finestra.|
|[WindowProc](#windowproc)|Elabora i messaggi inviati alla finestra.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|

## <a name="remarks"></a>Note

È possibile usare `CWindowImpl` per creare una finestra o una sottoclasse di una finestra esistente. il `CWindowImpl` routine della finestra Usa una mappa messaggi per indirizzare i messaggi ai gestori appropriati.

`CWindowImpl::Create` Crea una finestra sulla base delle informazioni che sono gestite da classe finestra [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `CWindowImpl` contiene il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) macro, il che significa `CWndClassInfo` registra una nuova classe della finestra. Se si desidera rendere superclasse una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro. In questo caso, `CWndClassInfo` registra una classe della finestra basata su una classe esistente, ma utilizza `CWindowImpl::WindowProc`. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwindowimpl-class_1.h)]

> [!NOTE]
>  Poiché `CWndClassInfo` gestisce le informazioni per una sola classe della finestra, ogni finestra creata tramite un'istanza di `CWindowImpl` è basata sulla stessa classe della finestra.

`CWindowImpl` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CWindowImpl` e modifica la procedura della finestra in `CWindowImpl::WindowProc`. Ogni istanza di `CWindowImpl` può creare una sottoclasse di una finestra diversa.

> [!NOTE]
>  Per qualsiasi dato `CWindowImpl` dell'oggetto, chiamare `Create` o `SubclassWindow`. Non richiamare entrambi i metodi sullo stesso oggetto.

Oltre a `CWindowImpl`, ATL fornisce [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) per creare una finestra contenuta in un altro oggetto.

Il distruttore della classe di base (~ `CWindowImplRoot`) garantisce che la finestra venga rimossa prima dell'eliminazione permanente dell'oggetto.

`CWindowImpl` deriva da `CWindowImplBaseT`, che deriva da `CWindowImplRoot`, che deriva da `TBase` e [CMessageMap](../../atl/reference/cmessagemap-class.md).

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

##  <a name="create"></a>  CWindowImpl::Create

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

*hWndParent*  
[in] Handle alla finestra padre o proprietaria.

*Rect*  
[in] Oggetto [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica la posizione della finestra. Il `RECT` renserlo passabile per puntatore o riferimento.

*szWindowName*  
[in] Specifica il nome della finestra. Il valore predefinito è NULL.

*dwStyle*  
[in] Lo stile della finestra. Questo valore viene combinato con lo stile fornito dalla classe traits per la finestra. Il valore predefinito consente i tratti di classe completo controllare lo stile. Per un elenco di valori possibili, vedere [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) nel SDK di Windows.

*dwExStyle*  
[in] Lo stile della finestra estesi. Questo valore viene combinato con lo stile fornito dalla classe traits per la finestra. Il valore predefinito consente i tratti di classe completo controllare lo stile. Per un elenco di valori possibili, vedere [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*MenuOrID*  
[in] Per una finestra figlio, l'identificatore di finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.

*lpCreateParam*  
[in] Un puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione per il parametro finale [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa).

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, l'handle della finestra appena creata. In caso contrario, NULL.

### <a name="remarks"></a>Note

`Create` Registra la classe della finestra prima di tutto se non è ancora stato registrato. La finestra appena creata viene associata automaticamente al `CWindowImpl` oggetto.

> [!NOTE]
>  Non chiamare `Create` se è già stato chiamato [SubclassWindow](#subclasswindow).

Per usare una classe della finestra che si basa su una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro. Procedura di finestra della classe finestra esistente viene salvato nel [m_pfnSuperWindowProc](#m_pfnsuperwindowproc). Per altre informazioni, vedere la [CWindowImpl](../../atl/reference/cwindowimpl-class.md) Panoramica.

> [!NOTE]
>  Se viene utilizzato 0 come valore per il *MenuOrID* parametro, è necessario specificarlo come 0U (valore predefinito) per evitare un errore del compilatore.

##  <a name="defwindowproc"></a>  CWindowImpl::DefWindowProc

Chiamata eseguita dal [WindowProc](#windowproc) per elaborare i messaggi non gestiti dalla mappa del messaggio.

```
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

LRESULT DefWindowProc();
```

### <a name="parameters"></a>Parametri

*uMsg*  
[in] Il messaggio inviato alla finestra.

*wParam*  
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*  
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Il risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Note

Per impostazione predefinita `DefWindowProc` chiama il [CallWindowProc](https://msdn.microsoft.com/library/windows/desktop/ms633571) funzione Win32 per inviare le informazioni del messaggio alla routine della finestra specificata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

La funzione senza parametri recupera automaticamente i parametri necessari dal messaggio corrente.

##  <a name="getcurrentmessage"></a>  CWindowImpl::GetCurrentMessage

Restituisce il messaggio corrente, inseriti in pacchetti i `MSG` struttura.

```
const MSG* GetCurrentMessage();
```

### <a name="return-value"></a>Valore restituito

Il messaggio corrente.

##  <a name="getwindowproc"></a>  CWindowImpl::GetWindowProc

Restituisce `WindowProc`, la procedura della finestra corrente.

```
virtual WNDPROC GetWindowProc();
```

### <a name="return-value"></a>Valore restituito

La procedura della finestra corrente.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per sostituire la routine della finestra con i propri.

##  <a name="getwndclassinfo"></a>  CWindowImpl::GetWndClassInfo

Chiamata eseguita dal [Create](#create) per accedere alle informazioni sulla classe di finestra.

```
static CWndClassInfo& GetWndClassInfo();
```

### <a name="return-value"></a>Valore restituito

Un'istanza statica della [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).

### <a name="remarks"></a>Note

Per impostazione predefinita `CWindowImpl` ottiene questo metodo tramite i [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (macro), che specifica una nuova classe della finestra.

Rendere superclasse una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro per eseguire l'override `GetWndClassInfo`. Per altre informazioni, vedere la [CWindowImpl](../../atl/reference/cwindowimpl-class.md) Panoramica.

Oltre a utilizzare le macro DECLARE_WND_CLASS e DECLARE_WND_SUPERCLASS, è possibile eseguire l'override `GetWndClassInfo` con la propria implementazione.

##  <a name="m_pfnsuperwindowproc"></a>  CWindowImpl::m_pfnSuperWindowProc

A seconda della finestra, punta a una delle seguenti procedure di finestra.

```
WNDPROC m_pfnSuperWindowProc;
```

### <a name="remarks"></a>Note

|Tipo di finestra|Procedura di finestra|
|--------------------|----------------------|
|Una finestra basata su una nuova classe di finestra, specificata tramite il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) macro.|Il [DefWindowProc](/windows/desktop/api/winuser/nf-winuser-defwindowproca) funzione Win32.|
|Una finestra basata su una classe della finestra che consente di modificare una classe esistente, specificata tramite il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro.|Routine di finestra della classe finestra esistente.|
|Una finestra sottoclassata.|La sottoclasse routine della finestra originale.|

[CWindowImpl::DefWindowProc](#defwindowproc) Invia messaggio di informazioni alla routine della finestra salvata in `m_pfnSuperWindowProc`.

##  <a name="onfinalmessage"></a>  CWindowImpl::OnFinalMessage

Chiamato dopo la ricezione dell'ultimo messaggio (in genere WM_NCDESTROY).

```
virtual void OnFinalMessage(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*  
[in] Handle alla finestra in corso l'eliminazione.

### <a name="remarks"></a>Note

L'implementazione predefinita di `OnFinalMessage` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione per la gestione di pulizia prima dell'eliminazione di una finestra. Se si vuole eliminare automaticamente l'oggetto di distruzione di finestre, è possibile chiamare **elimini;** in questa funzione.

##  <a name="subclasswindow"></a>  CWindowImpl::SubclassWindow

Le sottoclassi di finestra identificata da *hWnd* e lo collega al `CWindowImpl` oggetto.

```
BOOL SubclassWindow(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*  
[in] Handle alla finestra in corso una sottoclasse.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra viene correttamente impostata come sottoclasse; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usa ora la finestra sottoclassata [CWindowImpl::](#windowproc). La procedura di finestra originale viene salvata nel [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
>  Non chiamare `SubclassWindow` se è già stato chiamato [Create](#create).

##  <a name="unsubclasswindow"></a>  CWindowImpl::UnsubclassWindow

Scollega la finestra sottoclassata dal `CWindowImpl` dell'oggetto e ripristina la procedura di finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow();
```

### <a name="return-value"></a>Valore restituito

Handle alla finestra una sottoclasse in precedenza.

##  <a name="windowproc"></a>  CWindowImpl::

Questa funzione statica implementa la procedura della finestra.

```
static LRESULT CALLBACK WindowProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*  
[in] Handle alla finestra.

*uMsg*  
[in] Il messaggio inviato alla finestra.

*wParam*  
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*  
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Il risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Note

`WindowProc` Usa la mappa dei messaggi predefinita (dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)) per indirizzare i messaggi ai gestori appropriati. Se necessario, `WindowProc` chiamate [DefWindowProc](#defwindowproc) per l'elaborazione dei messaggi aggiuntivi. Se il messaggio finale non viene gestito, `WindowProc` esegue le operazioni seguenti:

- Esegue unsubclassing se la finestra è stata unsubclassed.

- Cancella `m_hWnd`.

- Le chiamate [OnFinalMessage](#onfinalmessage) prima la finestra viene eliminata.

È possibile eseguire l'override `WindowProc` per fornire un meccanismo diverso per la gestione dei messaggi.

## <a name="see-also"></a>Vedere anche

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)   
[Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)

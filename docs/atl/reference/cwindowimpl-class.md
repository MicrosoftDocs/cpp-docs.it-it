---
description: 'Altre informazioni su: classe CWindowImpl'
title: Classe CWindowImpl
ms.date: 11/04/2016
f1_keywords:
- CWindowImpl
- ATLWIN/ATL::CWindowImpl
- ATLWIN/ATL::CWindowImpl::Create
- ATLWIN/ATL::CWindowImpl::DefWindowProc
- ATLWIN/ATL::CWindowImpl::GetCurrentMessage
- ATLWIN/ATL::CWindowImpl::GetWindowProc
- ATLWIN/ATL::CWindowImpl::OnFinalMessage
- ATLWIN/ATL::CWindowImpl::SubclassWindow
- ATLWIN/ATL::CWindowImpl::UnsubclassWindow
- ATLWIN/ATL::CWindowImpl::GetWndClassInfo
- ATLWIN/ATL::CWindowImpl::WindowProc
- ATLWIN/ATL::CWindowImpl::m_pfnSuperWindowProc
helpviewer_keywords:
- CWindowImpl class
- subclassing windows, ATL
ms.assetid: 02eefd45-a0a6-4d1b-99f6-dbf627e2cc2f
ms.openlocfilehash: c0736f0c963016fe5f65982c90903bfdce7c382e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140114"
---
# <a name="cwindowimpl-class"></a>Classe CWindowImpl

Fornisce metodi per la creazione di una finestra o di una sottoclasse di finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class TBase = CWindow, class TWinTraits = CControlWinTraits>
class ATL_NO_VTABLE CWindowImpl : public CWindowImplBaseT<TBase, TWinTraits>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La nuova classe, derivata da `CWindowImpl`.

*TBase*<br/>
Classe base della classe. Per impostazione predefinita, la classe base è [CWindow](../../atl/reference/cwindow-class.md).

*TWinTraits*<br/>
[Classe di tratti](../../atl/understanding-window-traits.md) che definisce gli stili per la finestra. Il valore predefinito è `CControlWinTraits`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWindowImpl:: create](#create)|Crea una finestra.|

### <a name="cwindowimplbaset-methods"></a>Metodi CWindowImplBaseT

|Nome|Description|
|-|-|
|[DefWindowProc](#defwindowproc)|Fornisce l'elaborazione dei messaggi predefinita.|
|[GetCurrentMessage](#getcurrentmessage)|Restituisce il messaggio corrente.|
|[GetWindowProc](#getwindowproc)|Restituisce la procedura della finestra corrente.|
|[OnFinalMessage](#onfinalmessage)|Chiamato dopo la ricezione dell'ultimo messaggio, in genere WM_NCDESTROY.|
|[SubclassWindow](#subclasswindow)|Crea una sottoclasse di una finestra.|
|[UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|

### <a name="static-methods"></a>Metodi statici

|Nome|Description|
|-|-|
|[GetWndClassInfo](#getwndclassinfo)|Restituisce un'istanza statica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md), che gestisce le informazioni sulla classe della finestra.|
|[WindowProc](#windowproc)|Elabora i messaggi inviati alla finestra.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|-|-|
|[m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|

## <a name="remarks"></a>Commenti

È possibile usare `CWindowImpl` per creare una finestra o una sottoclasse di una finestra esistente. nella `CWindowImpl` procedura della finestra viene utilizzata una mappa messaggi per indirizzare i messaggi ai gestori appropriati.

`CWindowImpl::Create` Crea una finestra basata sulle informazioni sulla classe della finestra gestita da [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `CWindowImpl` contiene la macro [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) , che significa che `CWndClassInfo` registra una nuova classe di finestra. Se si vuole eseguire la superclasse di una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) . In questo caso, `CWndClassInfo` registra una classe della finestra basata su una classe esistente, ma utilizza `CWindowImpl::WindowProc`. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwindowimpl-class_1.h)]

> [!NOTE]
> Poiché `CWndClassInfo` gestisce le informazioni per una sola classe della finestra, ogni finestra creata tramite un'istanza di `CWindowImpl` è basata sulla stessa classe della finestra.

`CWindowImpl` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CWindowImpl` e modifica la procedura della finestra in `CWindowImpl::WindowProc`. Ogni istanza di `CWindowImpl` può creare una sottoclasse di una finestra diversa.

> [!NOTE]
> Per qualsiasi `CWindowImpl` oggetto specificato, chiamare `Create` o `SubclassWindow` . Non richiamare entrambi i metodi sullo stesso oggetto.

In aggiunta a `CWindowImpl` , ATL fornisce [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) per creare una finestra contenuta in un altro oggetto.

Il distruttore della classe base (~ `CWindowImplRoot` ) assicura che la finestra sia stata eliminata prima dell'eliminazione dell'oggetto.

`CWindowImpl` deriva da `CWindowImplBaseT` , che deriva da `CWindowImplRoot` , che deriva da `TBase` e [CMessageMap](../../atl/reference/cmessagemap-class.md).

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

## <a name="cwindowimplcreate"></a><a name="create"></a> CWindowImpl:: create

Crea una finestra basata su una nuova classe di finestra.

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

*hWndParent*<br/>
in Handle per la finestra padre o proprietario.

*Rect*<br/>
in Struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che specifica la posizione della finestra. L'oggetto `RECT` può essere passato tramite un puntatore o un riferimento.

*szWindowName*<br/>
in Specifica il nome della finestra. Il valore predefinito è NULL.

*dwStyle*<br/>
in Stile della finestra. Questo valore viene combinato con lo stile fornito dalla classe dei tratti per la finestra. Il valore predefinito assegna alla classe dei tratti il controllo completo dello stile. Per un elenco di valori possibili, vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) nel Windows SDK.

*dwExStyle*<br/>
in Stile della finestra estesa. Questo valore viene combinato con lo stile fornito dalla classe dei tratti per la finestra. Il valore predefinito assegna alla classe dei tratti il controllo completo dello stile. Per un elenco di valori possibili, vedere [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*MenuOrID*<br/>
in Per una finestra figlio, l'identificatore della finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.

*lpCreateParam*<br/>
in Puntatore ai dati di creazione di finestre. Per una descrizione completa, vedere la descrizione del parametro finale per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw).

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, l'handle per la finestra appena creata. In caso contrario, NULL.

### <a name="remarks"></a>Commenti

`Create` prima registra la classe della finestra se non è stata ancora registrata. La finestra appena creata viene automaticamente collegata all' `CWindowImpl` oggetto.

> [!NOTE]
> Non chiamare `Create` se è già stato chiamato [SubclassWindow](#subclasswindow).

Per usare una classe della finestra basata su una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) . La routine della finestra della classe della finestra esistente viene salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc). Per ulteriori informazioni, vedere Panoramica di [CWindowImpl](../../atl/reference/cwindowimpl-class.md) .

> [!NOTE]
> Se viene usato 0 come valore per il parametro *MenuOrID* , deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.

## <a name="cwindowimpldefwindowproc"></a><a name="defwindowproc"></a> CWindowImpl::D efWindowProc

Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti dalla mappa messaggi.

```
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

LRESULT DefWindowProc();
```

### <a name="parameters"></a>Parametri

*uMsg*<br/>
in Messaggio inviato alla finestra.

*wParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, `DefWindowProc` chiama la funzione Win32 [CallWindowProc](/windows/win32/api/winuser/nf-winuser-callwindowprocw) per inviare le informazioni sul messaggio alla routine della finestra specificata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

La funzione senza parametri recupera automaticamente i parametri necessari dal messaggio corrente.

## <a name="cwindowimplgetcurrentmessage"></a><a name="getcurrentmessage"></a> CWindowImpl:: GetCurrentMessage

Restituisce il messaggio corrente, incluso nella `MSG` struttura.

```
const MSG* GetCurrentMessage();
```

### <a name="return-value"></a>Valore restituito

Il messaggio corrente.

## <a name="cwindowimplgetwindowproc"></a><a name="getwindowproc"></a> CWindowImpl:: GetWindowProc

Restituisce `WindowProc` , la routine della finestra corrente.

```
virtual WNDPROC GetWindowProc();
```

### <a name="return-value"></a>Valore restituito

Routine della finestra corrente.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo per sostituire la routine della finestra con la propria.

## <a name="cwindowimplgetwndclassinfo"></a><a name="getwndclassinfo"></a> CWindowImpl:: GetWndClassInfo

Chiamato da [create](#create) per accedere alle informazioni sulla classe della finestra.

```
static CWndClassInfo& GetWndClassInfo();
```

### <a name="return-value"></a>Valore restituito

Istanza statica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).

### <a name="remarks"></a>Commenti

Per impostazione predefinita, `CWindowImpl` ottiene questo metodo tramite la macro [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) , che specifica una nuova classe di finestra.

Per superclasse una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) per eseguire l'override `GetWndClassInfo` . Per ulteriori informazioni, vedere Panoramica di [CWindowImpl](../../atl/reference/cwindowimpl-class.md) .

Oltre a usare le macro DECLARE_WND_CLASS e DECLARE_WND_SUPERCLASS, è possibile eseguire l'override `GetWndClassInfo` con la propria implementazione.

## <a name="cwindowimplm_pfnsuperwindowproc"></a><a name="m_pfnsuperwindowproc"></a> CWindowImpl:: m_pfnSuperWindowProc

A seconda della finestra, punta a una delle seguenti routine della finestra.

```
WNDPROC m_pfnSuperWindowProc;
```

### <a name="remarks"></a>Commenti

|Tipo di finestra|Routine della finestra|
|--------------------|----------------------|
|Finestra basata su una nuova classe di finestra, specificata tramite la macro [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) .|Funzione Win32 [DefWindowProc](/windows/win32/api/winuser/nf-winuser-defwindowprocw) .|
|Finestra basata su una classe della finestra che modifica una classe esistente, specificata tramite la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) .|Routine della finestra della classe della finestra esistente.|
|Finestra sottoclassata.|Procedura della finestra originale della finestra sottoclassata.|

[CWindowImpl::D efwindowproc](#defwindowproc) invia informazioni sul messaggio alla routine della finestra salvata in `m_pfnSuperWindowProc` .

## <a name="cwindowimplonfinalmessage"></a><a name="onfinalmessage"></a> CWindowImpl:: OnFinalMessage

Chiamato dopo la ricezione dell'ultimo messaggio, in genere WM_NCDESTROY.

```
virtual void OnFinalMessage(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
in Handle per la finestra da eliminare definitivamente.

### <a name="remarks"></a>Commenti

L'implementazione predefinita di `OnFinalMessage` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione per gestire la pulizia prima di eliminare una finestra. Se si desidera eliminare automaticamente l'oggetto durante la distruzione della finestra, è possibile chiamare **delete this;** in questa funzione.

## <a name="cwindowimplsubclasswindow"></a><a name="subclasswindow"></a> CWindowImpl:: SubclassWindow

Sottoclassi la finestra identificata da *HWND* e la collega all' `CWindowImpl` oggetto.

```
BOOL SubclassWindow(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
in Handle per la finestra sottoclassata.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra è stata sottoclassata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

La finestra sottoclassata ora usa [CWindowImpl:: WindowProc](#windowproc). La procedura della finestra originale viene salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
> Non chiamare `SubclassWindow` se è già stato chiamato [create](#create).

## <a name="cwindowimplunsubclasswindow"></a><a name="unsubclasswindow"></a> CWindowImpl:: UnsubclassWindow

Scollega la finestra sottoclassata dall' `CWindowImpl` oggetto e ripristina la routine della finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow();
```

### <a name="return-value"></a>Valore restituito

Handle della finestra precedentemente sottoclassata.

## <a name="cwindowimplwindowproc"></a><a name="windowproc"></a> CWindowImpl:: WindowProc

Questa funzione statica implementa la routine della finestra.

```
static LRESULT CALLBACK WindowProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
in Handle per la finestra.

*uMsg*<br/>
in Messaggio inviato alla finestra.

*wParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Commenti

`WindowProc` Usa la mappa messaggi predefinita (dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)) per indirizzare i messaggi ai gestori appropriati. Se necessario, `WindowProc` chiama [DefWindowProc](#defwindowproc) per l'elaborazione di messaggi aggiuntiva. Se il messaggio finale non viene gestito, `WindowProc` esegue le operazioni seguenti:

- Esegue la declassazione se è stata annullata la sottoclasse della finestra.

- Cancella `m_hWnd`.

- Chiama [OnFinalMessage](#onfinalmessage) prima che la finestra venga eliminata definitivamente.

È possibile eseguire l'override `WindowProc` di per fornire un meccanismo diverso per la gestione dei messaggi.

## <a name="see-also"></a>Vedi anche

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

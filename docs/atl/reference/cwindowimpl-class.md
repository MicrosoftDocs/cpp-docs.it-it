---
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
ms.openlocfilehash: d7f7f7363eb123181bd6e0389663810346094cba
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330288"
---
# <a name="cwindowimpl-class"></a>Classe CWindowImpl

Fornisce metodi per la creazione di una finestra o di una sottoclasse di finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class TBase = CWindow, class TWinTraits = CControlWinTraits>
class ATL_NO_VTABLE CWindowImpl : public CWindowImplBaseT<TBase, TWinTraits>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La nuova classe, derivata da `CWindowImpl`.

*TBase (informazioni in stato di base*<br/>
Classe base della classe. Per impostazione predefinita, la classe base è [CWindow](../../atl/reference/cwindow-class.md).

*Tratti TWin*<br/>
Una [classe di tratti](../../atl/understanding-window-traits.md) che definisce gli stili per la finestra. Il valore predefinito è `CControlWinTraits`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWindowImpl::Creare](#create)|Crea una finestra.|

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
|[GetWndClassInfo](#getwndclassinfo)|Restituisce un'istanza statica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md), che gestisce le informazioni sulla classe della finestra.|
|[WindowProc](#windowproc)|Elabora i messaggi inviati alla finestra.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|

## <a name="remarks"></a>Osservazioni

È possibile `CWindowImpl` utilizzare per creare una finestra o una sottoclasse di una finestra esistente. La `CWindowImpl` routine della finestra utilizza una mappa messaggi per indirizzare i messaggi ai gestori appropriati.

`CWindowImpl::Create`crea una finestra in base alle informazioni sulla classe finestra gestite da [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `CWindowImpl`contiene la [macro DECLARE_WND_CLASS,](window-class-macros.md#declare_wnd_class) che significa `CWndClassInfo` che registra una nuova classe finestra. Se si desidera eseguire una superclasse di `CWindowImpl` una classe finestra esistente, derivare la classe da e includere la [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro. In questo caso, `CWndClassInfo` registra una classe della finestra basata su una classe esistente, ma utilizza `CWindowImpl::WindowProc`. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwindowimpl-class_1.h)]

> [!NOTE]
> Poiché `CWndClassInfo` gestisce le informazioni per una sola classe della finestra, ogni finestra creata tramite un'istanza di `CWindowImpl` è basata sulla stessa classe della finestra.

`CWindowImpl` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CWindowImpl` e modifica la procedura della finestra in `CWindowImpl::WindowProc`. Ogni istanza di `CWindowImpl` può creare una sottoclasse di una finestra diversa.

> [!NOTE]
> Per un `CWindowImpl` determinato oggetto, `SubclassWindow`chiamare o `Create` . Non richiamare entrambi i metodi sullo stesso oggetto.

Oltre a `CWindowImpl`, ATL fornisce [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) per creare una finestra contenuta in un altro oggetto.

Il distruttore della classe `CWindowImplRoot`base ( ) assicura che la finestra venga eliminata prima che l'oggetto venga eliminato.

`CWindowImpl`deriva da `CWindowImplBaseT`, che `CWindowImplRoot`deriva da , `TBase` che deriva da e [CMessageMap](../../atl/reference/cmessagemap-class.md).

|Per altre informazioni su|Vedere|
|--------------------------------|---------|
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|
|Uso delle finestre in ATL|[Classi finestra ATL](../../atl/atl-window-classes.md)|
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMessageMap](../../atl/reference/cmessagemap-class.md)

`TBase`

`CWindowImplRoot`

`CWindowImplBaseT`

`CWindowImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="cwindowimplcreate"></a><a name="create"></a>CWindowImpl::Creare

Crea una finestra basata su una nuova classe finestra.

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

*hWndPadre*<br/>
[in] Handle per la finestra padre o proprietario.

*Rect*<br/>
[in] Struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che specifica la posizione della finestra. L'oggetto `RECT` può essere passato tramite puntatore o per riferimento.

*szWindowName (nome di comando)*<br/>
[in] Specifica il nome della finestra. Il valore predefinito è NULL.

*DwStyle (in stile dwStyle)*<br/>
[in] Stile della finestra. Questo valore viene combinato con lo stile fornito dalla classe traits per la finestra. Il valore predefinito fornisce alla classe traits il controllo completo sullo stile. Per un elenco dei valori possibili, vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in Windows SDK.

*DwExStyle (in stile dwExStyle)*<br/>
[in] Stile della finestra estesa. Questo valore viene combinato con lo stile fornito dalla classe traits per la finestra. Il valore predefinito fornisce alla classe traits il controllo completo sullo stile. Per un elenco dei valori possibili, vedere [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*IdMenuOr*<br/>
[in] Per una finestra figlio, l'identificatore della finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.

*lpCreateParam (informazioni in base a un'opzione per la*<br/>
[in] Puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione del parametro finale in [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, l'handle per la finestra appena creata. In caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

`Create`registra prima la classe finestra se non è ancora stata registrata. La finestra appena creata viene `CWindowImpl` automaticamente associata all'oggetto.

> [!NOTE]
> Non chiamare `Create` se è già stato chiamato [SubclassWindow](#subclasswindow).

Per utilizzare una classe finestra basata su una classe `CWindowImpl` finestra esistente, derivare la classe da e includere la [macro DECLARE_WND_SUPERCLASS.](window-class-macros.md#declare_wnd_superclass) La routine della finestra della classe finestra esistente viene salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc). Per altre informazioni, vedere i cenni preliminari [su CWindowImpl.For](../../atl/reference/cwindowimpl-class.md) more information, see the CWindowImpl overview.

> [!NOTE]
> Se 0 viene utilizzato come valore per il parametro *MenuOrID,* è necessario specificarlo come 0U (valore predefinito) per evitare un errore del compilatore.

## <a name="cwindowimpldefwindowproc"></a><a name="defwindowproc"></a>CWindowImpl::DefWindowProc

Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti dalla mappa messaggi.

```
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

LRESULT DefWindowProc();
```

### <a name="parameters"></a>Parametri

*Umsg*<br/>
[in] Messaggio inviato alla finestra.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `DefWindowProc` chiama la funzione Win32 [CallWindowProc](/windows/win32/api/winuser/nf-winuser-callwindowprocw) per inviare le informazioni sul messaggio alla routine della finestra specificata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

La funzione senza parametri recupera automaticamente i parametri necessari dal messaggio corrente.

## <a name="cwindowimplgetcurrentmessage"></a><a name="getcurrentmessage"></a>CWindowImpl::GetCurrentMessage

Restituisce il messaggio corrente, `MSG` incluso nella struttura.

```
const MSG* GetCurrentMessage();
```

### <a name="return-value"></a>Valore restituito

Il messaggio corrente.

## <a name="cwindowimplgetwindowproc"></a><a name="getwindowproc"></a>CWindowImpl::GetWindowProc

Restituisce `WindowProc`, la routine della finestra corrente.

```
virtual WNDPROC GetWindowProc();
```

### <a name="return-value"></a>Valore restituito

La routine della finestra corrente.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per sostituire la routine della finestra con il proprio.

## <a name="cwindowimplgetwndclassinfo"></a><a name="getwndclassinfo"></a>CWindowImpl::GetWndClassInfo

Chiamato da [Create](#create) per accedere alle informazioni sulla classe della finestra.

```
static CWndClassInfo& GetWndClassInfo();
```

### <a name="return-value"></a>Valore restituito

Istanza statica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `CWindowImpl` ottiene questo metodo tramite la macro [DECLARE_WND_CLASS,](window-class-macros.md#declare_wnd_class) che specifica una nuova classe finestra.

Per eseguire la superclasse di una `CWindowImpl` classe finestra esistente, `GetWndClassInfo`derivare la classe da e includere la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) per l'override di . Per altre informazioni, vedere i cenni preliminari [su CWindowImpl.For](../../atl/reference/cwindowimpl-class.md) more information, see the CWindowImpl overview.

Oltre a utilizzare le macro DECLARE_WND_CLASS e `GetWndClassInfo` DECLARE_WND_SUPERCLASS, è possibile eseguire l'override con la propria implementazione.

## <a name="cwindowimplm_pfnsuperwindowproc"></a><a name="m_pfnsuperwindowproc"></a>CWindowImpl::m_pfnSuperWindowProc

A seconda della finestra, punta a una delle seguenti routine della finestra.

```
WNDPROC m_pfnSuperWindowProc;
```

### <a name="remarks"></a>Osservazioni

|Tipo di finestra|Procedura finestra|
|--------------------|----------------------|
|Finestra basata su una nuova classe finestra, specificata tramite la macro [DECLARE_WND_CLASS.](window-class-macros.md#declare_wnd_class)|La funzione [Win32 DefWindowProc.](/windows/win32/api/winuser/nf-winuser-defwindowprocw)|
|Finestra basata su una classe finestra che modifica una classe esistente, specificata tramite la [macro DECLARE_WND_SUPERCLASS.](window-class-macros.md#declare_wnd_superclass)|La routine della finestra della classe finestra esistente.|
|Finestra sottoclassata.|La routine della finestra originale della finestra sottoclassata.|

[CWindowImpl::DefWindowProc](#defwindowproc) invia le informazioni sul `m_pfnSuperWindowProc`messaggio alla routine della finestra salvata in .

## <a name="cwindowimplonfinalmessage"></a><a name="onfinalmessage"></a>CWindowImpl::OnFinalMessage

Chiamato dopo aver ricevuto l'ultimo messaggio (in genere WM_NCDESTROY).

```
virtual void OnFinalMessage(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Un handle per la finestra distrutta.

### <a name="remarks"></a>Osservazioni

L'implementazione `OnFinalMessage` predefinita di non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione per gestire la pulizia prima di eliminare una finestra. Se si desidera eliminare automaticamente l'oggetto alla distruzione della finestra, è possibile chiamare **delete this;** in questa funzione.

## <a name="cwindowimplsubclasswindow"></a><a name="subclasswindow"></a>CWindowImpl::SubclassWindow (Finestra Sottoclasse)

Sottoclassi della finestra identificata da *hWnd* `CWindowImpl` e la associa all'oggetto.

```
BOOL SubclassWindow(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle per la finestra da sottoclassare.

### <a name="return-value"></a>Valore restituito

TRUESe la finestra è stata sottoclassata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

La finestra sottoclassata ora utilizza [CWindowImpl::WindowProc](#windowproc). La routine della finestra originale viene salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
> Non chiamare `SubclassWindow` se è già stato chiamato [Create](#create).

## <a name="cwindowimplunsubclasswindow"></a><a name="unsubclasswindow"></a>Finestra di dialogo :CWindowImpl::UnsubclassWindow

Scollega la finestra sottoclassata dall'oggetto `CWindowImpl` e ripristina la routine della finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow();
```

### <a name="return-value"></a>Valore restituito

Handle per la finestra precedentemente sottoclassata.

## <a name="cwindowimplwindowproc"></a><a name="windowproc"></a>CWindowImpl::WindowProc

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
[in] Handle per la finestra.

*Umsg*<br/>
[in] Messaggio inviato alla finestra.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Osservazioni

`WindowProc`utilizza la mappa messaggi predefinita (dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)) per indirizzare i messaggi ai gestori appropriati. Se necessario, `WindowProc` chiama [DefWindowProc](#defwindowproc) per l'elaborazione di messaggi aggiuntivi. Se il messaggio finale non `WindowProc` viene gestito, esegue le operazioni seguenti:

- Esegue la non subclassing se la finestra non è stata sottoclassata.

- Cancella `m_hWnd`.

- Chiama [OnFinalMessage](#onfinalmessage) prima che la finestra venga distrutta.

È possibile `WindowProc` eseguire l'override per fornire un meccanismo diverso per la gestione dei messaggi.

## <a name="see-also"></a>Vedere anche

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

---
title: Classe CContainedWindowT
ms.date: 11/04/2016
f1_keywords:
- CContainedWindowT
- ATLWIN/ATL::CContainedWindowT
- ATLWIN/ATL::CContainedWindowT::CContainedWindowT
- ATLWIN/ATL::CContainedWindowT::Create
- ATLWIN/ATL::CContainedWindowT::DefWindowProc
- ATLWIN/ATL::CContainedWindowT::GetCurrentMessage
- ATLWIN/ATL::CContainedWindowT::RegisterWndSuperclass
- ATLWIN/ATL::CContainedWindowT::SubclassWindow
- ATLWIN/ATL::CContainedWindowT::SwitchMessageMap
- ATLWIN/ATL::CContainedWindowT::UnsubclassWindow
- ATLWIN/ATL::CContainedWindowT::WindowProc
- ATLWIN/ATL::CContainedWindowT::m_dwMsgMapID
- ATLWIN/ATL::CContainedWindowT::m_lpszClassName
- ATLWIN/ATL::CContainedWindowT::m_pfnSuperWindowProc
- ATLWIN/ATL::CContainedWindowT::m_pObject
helpviewer_keywords:
- CContainedWindow class
- contained windows
- CContainedWindowT class
ms.assetid: cde0ca36-9347-4068-995a-d294dae57ca9
ms.openlocfilehash: 7b89346bbc62cdda808b193a199fdf121f052ebb
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747753"
---
# <a name="ccontainedwindowt-class"></a>Classe CContainedWindowT

Questa classe implementa una finestra contenuta all'interno di un altro oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class TBase = CWindow, class TWinTraits = CControlWinTraits>
class CContainedWindowT : public TBase
```

#### <a name="parameters"></a>Parametri

*TBase (informazioni in stato di base*<br/>
La classe base della nuova classe. La classe base `CWindow`predefinita è .

*Tratti TWin*<br/>
Classe di tratti che definisce gli stili della finestra. Il valore predefinito è `CControlWinTraits`.

> [!NOTE]
> [CContainedWindow](ccontainedwindowt-class.md) è una `CContainedWindowT`specializzazione di . Se si desidera modificare la classe o `CContainedWindowT` i tratti di base, utilizzare direttamente.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContainedWindowT::CContainedWindowT](#ccontainedwindowt)|Costruttore. Inizializza i membri dati per specificare quale mappa messaggi elaborerà i messaggi della finestra contenuta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContainedWindowT::CreareCContainedWindowT::Create](#create)|Crea una finestra.|
|[CContainedWindowT::DefWindowProc](#defwindowproc)|Fornisce l'elaborazione dei messaggi predefinita.|
|[CContainedWindowT::GetCurrentMessageCContainedWindowT::GetCurrentMessage](#getcurrentmessage)|Restituisce il messaggio corrente.|
|[CContainedWindowT::RegisterWndSuperclass](#registerwndsuperclass)|Registra la classe finestra della finestra contenuta.|
|[CContainedWindowT::SubclassWindow](#subclasswindow)|Crea una sottoclasse di una finestra.|
|[CContainedWindowT::SwitchMessageMap](#switchmessagemap)|Modifica la mappa messaggi utilizzata per elaborare i messaggi della finestra contenuta.|
|[CContainedWindowT::UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|
|[CContainedWindowT::WindowProc](#windowproc)|(Statico) Elabora i messaggi inviati alla finestra contenuta.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContainedWindowT::m_dwMsgMapID](#m_dwmsgmapid)|Identifica quale mappa messaggi elaborerà i messaggi della finestra contenuta.|
|[CContainedWindowT::m_lpszClassName](#m_lpszclassname)|Specifica il nome di una classe finestra esistente su cui si baserà una nuova classe finestra.|
|[CContainedWindowT::m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|
|[CContainedWindowT::m_pObject](#m_pobject)|Punta all'oggetto che lo contiene.|

## <a name="remarks"></a>Osservazioni

`CContainedWindowT`implementa una finestra contenuta all'interno di un altro oggetto. `CContainedWindowT`La routine della finestra di 'utilizza una mappa messaggi nell'oggetto contenitore per indirizzare i messaggi ai gestori appropriati. Quando si `CContainedWindowT` costruisce un oggetto, si specifica quale mappa messaggi deve essere utilizzata.

`CContainedWindowT`consente di creare una nuova finestra sovraclasse di una classe finestra esistente. Il `Create` metodo registra innanzitutto una classe finestra basata `CContainedWindowT::WindowProc`su una classe esistente ma che utilizza . `Create`quindi crea una finestra basata su questa nuova classe finestra. Ogni istanza `CContainedWindowT` di può superclasse una classe finestra diversa.

`CContainedWindowT` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CContainedWindowT` e modifica la procedura della finestra in `CContainedWindowT::WindowProc`. Ogni istanza di `CContainedWindowT` può creare una sottoclasse di una finestra diversa.

> [!NOTE]
> Per un `CContainedWindowT` determinato oggetto, `SubclassWindow`chiamare o `Create` . Non è necessario richiamare entrambi i metodi sullo stesso oggetto.

Quando si utilizza l'opzione **Aggiungi controllo in base** alla Creazione `CContainedWindowT` guidata progetto ATL, la procedura guidata aggiungerà automaticamente un membro dati alla classe che implementa il controllo. Nell'esempio seguente viene illustrato come viene dichiarata la finestra contenuta:The following example shows how the contained window is declared:

[!code-cpp[NVC_ATL_Windowing#38](../../atl/codesnippet/cpp/ccontainedwindowt-class_1.h)]

[!code-cpp[NVC_ATL_Windowing#39](../../atl/codesnippet/cpp/ccontainedwindowt-class_2.h)]

[!code-cpp[NVC_ATL_Windowing#40](../../atl/codesnippet/cpp/ccontainedwindowt-class_3.h)]

|Per altre informazioni su|Vedere|
|--------------------------------|---------|
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|
|Uso delle finestre in ATL|[Classi finestra ATL](../../atl/atl-window-classes.md)|
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|
|Windows|[Windows](/windows/win32/winmsg/windows) e gli argomenti successivi in Windows SDK|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`CContainedWindowT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="ccontainedwindowtccontainedwindowt"></a><a name="ccontainedwindowt"></a>CContainedWindowT::CContainedWindowT

Il costruttore inizializza i membri dati.

```
CContainedWindowT(
    LPTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);

CContainedWindowT(
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0)
    CContainedWindowT();
```

### <a name="parameters"></a>Parametri

*lpszClassName (nome di classe)*<br/>
[in] Nome di una classe finestra esistente su cui si baserà la finestra contenuta.

*pOggetto*<br/>
[in] Puntatore all'oggetto contenitore che dichiara la mappa messaggi. La classe di questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID (ID dwMsgMapID)*<br/>
[in] Identifica la mappa messaggi che elaborerà i messaggi della finestra contenuta. Il valore predefinito, 0, specifica la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

### <a name="remarks"></a>Osservazioni

Se si desidera creare una nuova finestra tramite [Create](#create), è necessario passare il nome di una classe finestra esistente per il parametro *lpszClassName* . Per un esempio, vedere il [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) panoramica.

Esistono tre costruttori:There are three constructors:

- Il costruttore con tre argomenti è quello in genere chiamato.

- Il costruttore con due argomenti `TBase::GetWndClassName`utilizza il nome della classe from .

- Il costruttore senza argomenti viene utilizzato se si desidera fornire gli argomenti in un secondo momento. È necessario fornire il nome della classe della finestra, l'oggetto mappa messaggi e l'ID della mappa messaggi quando in seguito si chiama `Create`.

Se si fa una sottoclasse di una finestra esistente tramite [SubclassWindow](#subclasswindow), il valore *lpszClassName* non verrà utilizzato; pertanto, è possibile passare NULL per questo parametro.

## <a name="ccontainedwindowtcreate"></a><a name="create"></a>CContainedWindowT::CreareCContainedWindowT::Create

Chiama [RegisterWndSuperclass](#registerwndsuperclass) per registrare una classe finestra basata su una classe esistente ma che utilizza [CContainedWindowT::WindowProc](#windowproc).

```
HWND Create(
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

HWND Create(
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

HWND Create(
    LPCTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```

### <a name="parameters"></a>Parametri

*lpszClassName (nome di classe)*<br/>
[in] Nome di una classe finestra esistente su cui si baserà la finestra contenuta.

*pOggetto*<br/>
[in] Puntatore all'oggetto contenitore che dichiara la mappa messaggi. La classe di questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID (ID dwMsgMapID)*<br/>
[in] Identifica la mappa messaggi che elaborerà i messaggi della finestra contenuta. Il valore predefinito, 0, specifica la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

*hWndPadre*<br/>
[in] Handle per la finestra padre o proprietario.

*Rect*<br/>
[in] Struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che specifica la posizione della finestra. L'oggetto `RECT` può essere passato tramite puntatore o per riferimento.

*szWindowName (nome di comando)*<br/>
[in] Specifica il nome della finestra. Il valore predefinito è NULL.

*DwStyle (in stile dwStyle)*<br/>
[in] Stile della finestra. Il valore predefinito è WS_CHILD &#124; WS_VISIBLE. Per un elenco dei valori possibili, vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in Windows SDK.

*DwExStyle (in stile dwExStyle)*<br/>
[in] Stile della finestra estesa. Il valore predefinito è 0, ovvero nessuno stile esteso. Per un elenco dei valori possibili, vedere [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK.

*IdMenuOr*<br/>
[in] Per una finestra figlio, l'identificatore della finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.

*lpCreateParam (informazioni in base a un'opzione per la*<br/>
[in] Puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione del parametro finale in [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, l'handle per la finestra appena creata; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Il nome della classe finestra esistente viene salvato in [m_lpszClassName](#m_lpszclassname). `Create`quindi crea una finestra basata su questa nuova classe. La finestra appena creata viene `CContainedWindowT` automaticamente associata all'oggetto.

> [!NOTE]
> Non chiamare `Create` se è già stato chiamato [SubclassWindow](#subclasswindow).

> [!NOTE]
> Se 0 viene utilizzato come valore per il parametro *MenuOrID,* è necessario specificarlo come 0U (valore predefinito) per evitare un errore del compilatore.

## <a name="ccontainedwindowtdefwindowproc"></a><a name="defwindowproc"></a>CContainedWindowT::DefWindowProc

Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti dalla mappa messaggi.

```
LRESULT DefWindowProc()
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
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

## <a name="ccontainedwindowtgetcurrentmessage"></a><a name="getcurrentmessage"></a>CContainedWindowT::GetCurrentMessageCContainedWindowT::GetCurrentMessage

Restituisce il`m_pCurrentMsg`messaggio corrente ( ).

```
const _ATL_MSG* GetCurrentMessage();
```

### <a name="return-value"></a>Valore restituito

Messaggio corrente, incluso `MSG` nella struttura.

## <a name="ccontainedwindowtm_dwmsgmapid"></a><a name="m_dwmsgmapid"></a>CContainedWindowT::m_dwMsgMapID

Contiene l'identificatore della mappa messaggi attualmente in uso per la finestra contenuta.

```
DWORD m_dwMsgMapID;
```

### <a name="remarks"></a>Osservazioni

Questa mappa messaggi deve essere dichiarata nell'oggetto contenitore.

La mappa messaggi predefinita, dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), è sempre identificata da zero. Una mappa messaggi alternativa, dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), è identificata da `msgMapID`.

`m_dwMsgMapID`viene inizializzato innanzitutto dal costruttore e può essere modificato chiamando [SwitchMessageMap](#switchmessagemap). Per un esempio, vedere Cenni [preliminari su CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md).

## <a name="ccontainedwindowtm_lpszclassname"></a><a name="m_lpszclassname"></a>CContainedWindowT::m_lpszClassName

Specifica il nome di una classe finestra esistente.

```
LPTSTR m_lpszClassName;
```

### <a name="remarks"></a>Osservazioni

Quando si crea una finestra, [Create](#create) registra una nuova classe finestra basata su questa classe esistente ma che utilizza [CContainedWindowT::WindowProc](#windowproc).

`m_lpszClassName`viene inizializzato dal costruttore. Per un esempio, vedere il [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) cenni preliminari.

## <a name="ccontainedwindowtm_pfnsuperwindowproc"></a><a name="m_pfnsuperwindowproc"></a>CContainedWindowT::m_pfnSuperWindowProc

Se la finestra contenuta `m_pfnSuperWindowProc` è sottoclassata, punta alla routine della finestra originale della classe finestra.

```
WNDPROC m_pfnSuperWindowProc;
```

### <a name="remarks"></a>Osservazioni

Se la finestra contenuta è superclassata, ovvero è basata su `m_pfnSuperWindowProc` una classe finestra che modifica una classe esistente, punta alla routine finestra della classe finestra esistente.

Il metodo [DefWindowProc](#defwindowproc) invia informazioni sul `m_pfnSuperWindowProc`messaggio alla routine della finestra salvata in .

## <a name="ccontainedwindowtm_pobject"></a><a name="m_pobject"></a>CContainedWindowT::m_pObject

Punta all'oggetto `CContainedWindowT` che contiene l'oggetto.

```
CMessageMap* m_pObject;
```

### <a name="remarks"></a>Osservazioni

Questo contenitore, la cui classe deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md), dichiara la mappa messaggi utilizzata dalla finestra contenuta.

`m_pObject`viene inizializzato dal costruttore. Per un esempio, vedere il [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) cenni preliminari.

## <a name="ccontainedwindowtregisterwndsuperclass"></a><a name="registerwndsuperclass"></a>CContainedWindowT::RegisterWndSuperclass

Chiamato da [Create](#create) per registrare la classe finestra della finestra contenuta.

```
ATOM RegisterWndSuperClass();
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un atomo che identifica in modo univoco la classe finestra registrata; in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

Questa classe finestra è basata su una classe esistente, ma utilizza [CContainedWindowT::WindowProc](#windowproc). Il nome e la routine della finestra esistenti vengono salvati in [m_lpszClassName](#m_lpszclassname) e [m_pfnSuperWindowProc](#m_pfnsuperwindowproc), rispettivamente.

## <a name="ccontainedwindowtsubclasswindow"></a><a name="subclasswindow"></a>CContainedWindowT::SubclassWindow

Sottoclassi della finestra identificata da *hWnd* `CContainedWindowT` e la associa all'oggetto.

```
BOOL SubclassWindow(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle per la finestra da sottoclassare.

### <a name="return-value"></a>Valore restituito

TRUESe la finestra è stata sottoclassata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

La finestra sottoclassata utilizza ora [CContainedWindowT::WindowProc](#windowproc). La routine della finestra originale viene salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
> Non chiamare `SubclassWindow` se è già stato chiamato [Create](#create).

## <a name="ccontainedwindowtswitchmessagemap"></a><a name="switchmessagemap"></a>CContainedWindowT::SwitchMessageMap

Modifica la mappa messaggi che verrà utilizzata per elaborare i messaggi della finestra contenuta.

```cpp
void SwitchMessageMap(DWORD dwMsgMapID);
```

### <a name="parameters"></a>Parametri

*dwMsgMapID (ID dwMsgMapID)*<br/>
[in] Identificatore della mappa messaggi. Per utilizzare la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), passare zero. Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

### <a name="remarks"></a>Osservazioni

La mappa messaggi deve essere definita nell'oggetto contenitore.

Inizialmente si specifica l'identificatore della mappa messaggi nel costruttore.

## <a name="ccontainedwindowtunsubclasswindow"></a><a name="unsubclasswindow"></a>CContainedWindowT::UnsubclassWindow

Scollega la finestra sottoclassata dall'oggetto `CContainedWindowT` e ripristina la routine della finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow(BOOL bForce = FALSE);
```

### <a name="parameters"></a>Parametri

*bForza*<br/>
[in] Impostare su TRUE per forzare il ripristino della routine `CContainedWindowT` della finestra originale anche se la routine della finestra per questo oggetto non è attualmente attiva. Se *bForce* è impostato su FALSE `CContainedWindowT` e la routine della finestra per questo oggetto non è attualmente attiva, la routine della finestra originale non verrà ripristinata.

### <a name="return-value"></a>Valore restituito

Handle per la finestra precedentemente sottoclassata. Se *bForce* è impostato su FALSE `CContainedWindowT` e la routine della finestra per questo oggetto non è attualmente attiva, restituisce NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo solo se si desidera ripristinare la routine della finestra originale prima che la finestra venga distrutta. In caso contrario, [WindowProc](#windowproc) eseguirà automaticamente questa operazione quando la finestra viene eliminata.

## <a name="ccontainedwindowtwindowproc"></a><a name="windowproc"></a>CContainedWindowT::WindowProc

Questo metodo statico implementa la routine della finestra.

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

`WindowProc`indirizza i messaggi alla mappa messaggi identificata da [m_dwMsgMapID](#m_dwmsgmapid). Se necessario, `WindowProc` chiama [DefWindowProc](#defwindowproc) per l'elaborazione di messaggi aggiuntivi.

## <a name="see-also"></a>Vedere anche

[Classe CWindow](../../atl/reference/cwindow-class.md)<br/>
[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Classe CMessageMap](../../atl/reference/cmessagemap-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

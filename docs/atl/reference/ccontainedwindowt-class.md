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
ms.openlocfilehash: 2eae6e149cf6f7422d0653c1c15f46985d8d55c8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496851"
---
# <a name="ccontainedwindowt-class"></a>Classe CContainedWindowT

Questa classe implementa una finestra contenuta in un altro oggetto.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class TBase = CWindow, class TWinTraits = CControlWinTraits>
class CContainedWindowT : public TBase
```

#### <a name="parameters"></a>Parametri

*TBase*<br/>
Classe di base della nuova classe. La classe base predefinita è `CWindow`.

*TWinTraits*<br/>
Classe di tratti che definisce gli stili per la finestra. Il valore predefinito è `CControlWinTraits`.

> [!NOTE]
> [CContainedWindow](ccontainedwindowt-class.md) è una specializzazione `CContainedWindowT`di. Se si desidera modificare la classe di base o i tratti, utilizzare `CContainedWindowT` direttamente.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContainedWindowT::CContainedWindowT](#ccontainedwindowt)|Costruttore. Inizializza i membri dati per specificare la mappa messaggi che elaborerà i messaggi della finestra contenuta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CContainedWindowT::Create](#create)|Crea una finestra.|
|[CContainedWindowT::DefWindowProc](#defwindowproc)|Fornisce l'elaborazione dei messaggi predefinita.|
|[CContainedWindowT::GetCurrentMessage](#getcurrentmessage)|Restituisce il messaggio corrente.|
|[CContainedWindowT::RegisterWndSuperclass](#registerwndsuperclass)|Registra la classe della finestra contenuta.|
|[CContainedWindowT::SubclassWindow](#subclasswindow)|Crea una sottoclasse di una finestra.|
|[CContainedWindowT::SwitchMessageMap](#switchmessagemap)|Modifica la mappa messaggi utilizzata per elaborare i messaggi della finestra contenuta.|
|[CContainedWindowT::UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|
|[CContainedWindowT::WindowProc](#windowproc)|Statico Elabora i messaggi inviati alla finestra contenuta.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CContainedWindowT::m_dwMsgMapID](#m_dwmsgmapid)|Identifica la mappa messaggi che elaborerà i messaggi della finestra contenuta.|
|[CContainedWindowT::m_lpszClassName](#m_lpszclassname)|Specifica il nome di una classe di finestra esistente sulla quale sarà basata una nuova classe di finestra.|
|[CContainedWindowT::m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|
|[CContainedWindowT::m_pObject](#m_pobject)|Punta all'oggetto contenitore.|

## <a name="remarks"></a>Note

`CContainedWindowT`implementa una finestra contenuta in un altro oggetto. `CContainedWindowT`la routine della finestra di usa una mappa messaggi nell'oggetto contenitore per indirizzare i messaggi ai gestori appropriati. Quando si crea un `CContainedWindowT` oggetto, è necessario specificare quale mappa dei messaggi usare.

`CContainedWindowT`consente di creare una nuova finestra mediante la superclasse di una classe di finestra esistente. Il `Create` metodo registra prima una classe della finestra basata su una classe esistente ma utilizza `CContainedWindowT::WindowProc`. `Create`Crea quindi una finestra basata sulla nuova classe della finestra. Ogni istanza di `CContainedWindowT` può superclasse un'altra classe di finestra.

`CContainedWindowT` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CContainedWindowT` e modifica la procedura della finestra in `CContainedWindowT::WindowProc`. Ogni istanza di `CContainedWindowT` può creare una sottoclasse di una finestra diversa.

> [!NOTE]
>  Per qualsiasi oggetto `CContainedWindowT` specificato, `Create` chiamare o `SubclassWindow`. Non richiamare entrambi i metodi sullo stesso oggetto.

Quando si utilizza l'opzione **Aggiungi controllo basato su** nella creazione guidata progetto ATL, tramite la procedura guidata viene aggiunto `CContainedWindowT` automaticamente un membro dati alla classe che implementa il controllo. Nell'esempio seguente viene illustrato il modo in cui viene dichiarata la finestra contenuta:

[!code-cpp[NVC_ATL_Windowing#38](../../atl/codesnippet/cpp/ccontainedwindowt-class_1.h)]

[!code-cpp[NVC_ATL_Windowing#39](../../atl/codesnippet/cpp/ccontainedwindowt-class_2.h)]

[!code-cpp[NVC_ATL_Windowing#40](../../atl/codesnippet/cpp/ccontainedwindowt-class_3.h)]

|Per altre informazioni su|Vedere|
|--------------------------------|---------|
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|
|Uso delle finestre in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|
|Windows|[Windows](/windows/win32/winmsg/windows) e gli argomenti successivi nella Windows SDK|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`CContainedWindowT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="ccontainedwindowt"></a>CContainedWindowT:: CContainedWindowT

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

*lpszClassName*<br/>
in Nome di una classe di finestra esistente su cui sarà basata la finestra contenuta.

*pObject*<br/>
in Puntatore all'oggetto contenitore che dichiara la mappa messaggi. La classe di questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
in Identifica la mappa messaggi in cui vengono elaborati i messaggi della finestra contenuta. Il valore predefinito, 0, specifica la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP (msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

### <a name="remarks"></a>Note

Se si desidera creare una nuova finestra tramite [create](#create), è necessario passare il nome di una classe di finestra esistente per il parametro *lpszClassName* . Per un esempio, vedere Panoramica di [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) .

Sono disponibili tre costruttori:

- Il costruttore con tre argomenti è quello comunemente chiamato.

- Il costruttore con due argomenti usa il nome della classe `TBase::GetWndClassName`da.

- Se si desidera fornire gli argomenti in un secondo momento, viene utilizzato il costruttore senza argomenti. È necessario specificare il nome della classe della finestra, l'oggetto della mappa messaggi e l'ID della mappa `Create`messaggi quando si chiama in un secondo momento.

Se si esegue la sottoclasse di una finestra esistente tramite [SubclassWindow](#subclasswindow), il valore di *lpszClassName* non verrà usato; Pertanto, è possibile passare NULL per questo parametro.

##  <a name="create"></a>CContainedWindowT:: create

Chiama [RegisterWndSuperclass](#registerwndsuperclass) per registrare una classe della finestra basata su una classe esistente ma utilizza [CContainedWindowT:: WindowProc](#windowproc).

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

*lpszClassName*<br/>
in Nome di una classe di finestra esistente su cui sarà basata la finestra contenuta.

*pObject*<br/>
in Puntatore all'oggetto contenitore che dichiara la mappa messaggi. La classe di questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
in Identifica la mappa messaggi in cui vengono elaborati i messaggi della finestra contenuta. Il valore predefinito, 0, specifica la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP (msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

*hWndParent*<br/>
in Handle per la finestra padre o proprietario.

*rect*<br/>
in Struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) che specifica la posizione della finestra. L' `RECT` oggetto può essere passato tramite un puntatore o un riferimento.

*szWindowName*<br/>
in Specifica il nome della finestra. Il valore predefinito è NULL.

*dwStyle*<br/>
in Stile della finestra. Il valore predefinito è WS_CHILD &#124; WS_VISIBLE. Per un elenco di valori possibili, vedere [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) nel Windows SDK.

*dwExStyle*<br/>
in Stile della finestra estesa. Il valore predefinito è 0, ovvero nessun stile esteso. Per un elenco di valori possibili, vedere [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nel Windows SDK.

*MenuOrID*<br/>
in Per una finestra figlio, l'identificatore della finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.

*lpCreateParam*<br/>
in Puntatore ai dati di creazione di finestre. Per una descrizione completa, vedere la descrizione del parametro finale per [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw).

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, l'handle per la finestra appena creata; in caso contrario, NULL.

### <a name="remarks"></a>Note

Il nome della classe di finestra esistente viene salvato in [m_lpszClassName](#m_lpszclassname). `Create`Crea quindi una finestra basata sulla nuova classe. La finestra appena creata viene automaticamente collegata all' `CContainedWindowT` oggetto.

> [!NOTE]
>  Non chiamare `Create` se è già stato chiamato [SubclassWindow](#subclasswindow).

> [!NOTE]
>  Se viene usato 0 come valore per il parametro *MenuOrID* , deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.

##  <a name="defwindowproc"></a>  CContainedWindowT::DefWindowProc

Chiamato da [WindowProc](#windowproc) per elaborare i messaggi non gestiti dalla mappa messaggi.

```
LRESULT DefWindowProc()
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
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

### <a name="remarks"></a>Note

Per impostazione predefinita `DefWindowProc` , chiama la funzione Win32 [CallWindowProc](/windows/win32/api/winuser/nf-winuser-callwindowprocw) per inviare le informazioni sul messaggio alla routine della finestra specificata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

##  <a name="getcurrentmessage"></a>CContainedWindowT:: GetCurrentMessage

Restituisce il messaggio corrente (`m_pCurrentMsg`).

```
const _ATL_MSG* GetCurrentMessage();
```

### <a name="return-value"></a>Valore restituito

Messaggio corrente, incluso nella `MSG` struttura.

##  <a name="m_dwmsgmapid"></a>CContainedWindowT:: m_dwMsgMapID

Contiene l'identificatore della mappa messaggi attualmente in uso per la finestra contenuta.

```
DWORD m_dwMsgMapID;
```

### <a name="remarks"></a>Note

Questa mappa messaggi deve essere dichiarata nell'oggetto che lo contiene.

La mappa messaggi predefinita, dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), è sempre identificata da zero. Una mappa messaggi alternativa, dichiarata con [ALT_MSG_MAP (msgMapID)](message-map-macros-atl.md#alt_msg_map), è `msgMapID`identificata da.

`m_dwMsgMapID`viene innanzitutto inizializzato dal costruttore e può essere modificato chiamando [SwitchMessageMap](#switchmessagemap). Per un esempio, vedere [Panoramica di CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md).

##  <a name="m_lpszclassname"></a>CContainedWindowT:: m_lpszClassName

Specifica il nome di una classe di finestra esistente.

```
LPTSTR m_lpszClassName;
```

### <a name="remarks"></a>Note

Quando si crea una finestra, [create](#create) registra una nuova classe della finestra basata su questa classe esistente ma usa [CContainedWindowT:: WindowProc](#windowproc).

`m_lpszClassName`viene inizializzato dal costruttore. Per un esempio, vedere Panoramica di [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) .

##  <a name="m_pfnsuperwindowproc"></a>  CContainedWindowT::m_pfnSuperWindowProc

Se la finestra contenuta è sottoclassata `m_pfnSuperWindowProc` , punta alla routine della finestra originale della classe Window.

```
WNDPROC m_pfnSuperWindowProc;
```

### <a name="remarks"></a>Note

Se la finestra contenuta è superclasse, ovvero si basa su una classe della finestra che modifica una classe esistente, `m_pfnSuperWindowProc` punta alla routine della finestra della classe della finestra esistente.

Il metodo [DefWindowProc](#defwindowproc) invia informazioni sul messaggio alla routine della finestra salvata in `m_pfnSuperWindowProc`.

##  <a name="m_pobject"></a>CContainedWindowT:: m_pObject

Punta all'oggetto contenente l' `CContainedWindowT` oggetto.

```
CMessageMap* m_pObject;
```

### <a name="remarks"></a>Note

Questo contenitore, la cui classe deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md), dichiara la mappa messaggi utilizzata dalla finestra contenuta.

`m_pObject`viene inizializzato dal costruttore. Per un esempio, vedere Panoramica di [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) .

##  <a name="registerwndsuperclass"></a>CContainedWindowT:: RegisterWndSuperclass

Chiamato da [create](#create) per registrare la classe della finestra contenuta.

```
ATOM RegisterWndSuperClass();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un Atom che identifica in modo univoco la classe della finestra da registrare; in caso contrario, zero.

### <a name="remarks"></a>Note

Questa classe della finestra è basata su una classe esistente ma usa [CContainedWindowT:: WindowProc](#windowproc). Il nome e la routine della finestra della classe della finestra esistente vengono salvati rispettivamente in [m_lpszClassName](#m_lpszclassname) e [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

##  <a name="subclasswindow"></a>CContainedWindowT:: SubclassWindow

Sottoclassi la finestra identificata da *HWND* e la collega all' `CContainedWindowT` oggetto.

```
BOOL SubclassWindow(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
in Handle per la finestra sottoclassata.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra è stata sottoclassata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

La finestra sottoclassata ora usa [CContainedWindowT:: WindowProc](#windowproc). La procedura della finestra originale viene salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
>  Non chiamare `SubclassWindow` se è già stato chiamato [create](#create).

##  <a name="switchmessagemap"></a>  CContainedWindowT::SwitchMessageMap

Modifica la mappa messaggi che verrà utilizzata per elaborare i messaggi della finestra contenuta.

```
void SwitchMessageMap(DWORD dwMsgMapID);
```

### <a name="parameters"></a>Parametri

*dwMsgMapID*<br/>
in Identificatore della mappa messaggi. Per usare la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), passare zero. Per utilizzare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP (msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

### <a name="remarks"></a>Note

È necessario definire la mappa messaggi nell'oggetto che lo contiene.

L'identificatore della mappa messaggi viene inizialmente specificato nel costruttore.

##  <a name="unsubclasswindow"></a>CContainedWindowT:: UnsubclassWindow

Scollega la finestra sottoclassata dall' `CContainedWindowT` oggetto e ripristina la routine della finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow(BOOL bForce = FALSE);
```

### <a name="parameters"></a>Parametri

*bForce*<br/>
in Impostare su true per forzare il ripristino della routine della finestra originale, anche se la routine della `CContainedWindowT` finestra per questo oggetto non è attualmente attiva. Se *bForce* è impostato su false e la routine della finestra per `CContainedWindowT` questo oggetto non è attualmente attiva, la routine della finestra originale non verrà ripristinata.

### <a name="return-value"></a>Valore restituito

Handle della finestra precedentemente sottoclassata. Se *bForce* è impostato su false e la routine della finestra per `CContainedWindowT` questo oggetto non è attualmente attiva, restituisce null.

### <a name="remarks"></a>Note

Utilizzare questo metodo solo se si desidera ripristinare la routine della finestra originale prima che la finestra venga distrutta. In caso contrario, [WindowProc](#windowproc) eseguirà questa operazione automaticamente quando la finestra viene distrutta.

##  <a name="windowproc"></a>CContainedWindowT:: WindowProc

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
in Handle per la finestra.

*uMsg*<br/>
in Messaggio inviato alla finestra.

*wParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Note

`WindowProc`indirizza i messaggi alla mappa messaggi identificata da [m_dwMsgMapID](#m_dwmsgmapid). Se necessario, `WindowProc` chiama [DefWindowProc](#defwindowproc) per l'elaborazione di messaggi aggiuntiva.

## <a name="see-also"></a>Vedere anche

[Classe CWindow](../../atl/reference/cwindow-class.md)<br/>
[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Classe CMessageMap](../../atl/reference/cmessagemap-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

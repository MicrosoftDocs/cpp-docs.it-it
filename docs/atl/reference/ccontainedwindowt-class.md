---
title: Classe CContainedWindowT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CContainedWindow class
- contained windows
- CContainedWindowT class
ms.assetid: cde0ca36-9347-4068-995a-d294dae57ca9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e65451fcb506da9072d0dc8031ffba1b30280e6
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861434"
---
# <a name="ccontainedwindowt-class"></a>Classe CContainedWindowT

Questa classe implementa una finestra contenuta all'interno di un altro oggetto.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class TBase = CWindow, class TWinTraits = CControlWinTraits>
class CContainedWindowT : public TBase
```

#### <a name="parameters"></a>Parametri

*TBase*<br/>
Classe di base della nuova classe. La classe base predefinita è `CWindow`.

*TWinTraits*<br/>
Classe traits che definisce gli stili della finestra. Il valore predefinito è `CControlWinTraits`.

> [!NOTE]
> [CContainedWindow](ccontainedwindowt-class.md) è una specializzazione di `CContainedWindowT`. Se si desidera modificare la classe di base o traits, usare `CContainedWindowT` direttamente.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContainedWindowT::CContainedWindowT](#ccontainedwindowt)|Costruttore. Inizializza i membri di dati per specificare il mapping tra i messaggi per elaborare i messaggi della finestra contenuta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContainedWindowT:: Create](#create)|Crea una finestra.|
|[CContainedWindowT::DefWindowProc](#defwindowproc)|Fornisce l'elaborazione dei messaggi predefinita.|
|[CContainedWindowT::GetCurrentMessage](#getcurrentmessage)|Restituisce il messaggio corrente.|
|[CContainedWindowT::RegisterWndSuperclass](#registerwndsuperclass)|Registra la classe della finestra della finestra contenuta.|
|[CContainedWindowT](#subclasswindow)|Crea una sottoclasse di una finestra.|
|[CContainedWindowT::SwitchMessageMap](#switchmessagemap)|Modifica il mapping tra i messaggi viene utilizzato per elaborare i messaggi della finestra contenuta.|
|[CContainedWindowT::UnsubclassWindow](#unsubclasswindow)|Ripristina una finestra precedentemente impostata come sottoclasse.|
|[CContainedWindowT::WindowProc](#windowproc)|(Statico) Elabora i messaggi inviati alla finestra indipendente.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContainedWindowT::m_dwMsgMapID](#m_dwmsgmapid)|Identifica il mapping tra i messaggi per elaborare i messaggi della finestra contenuta.|
|[CContainedWindowT::m_lpszClassName](#m_lpszclassname)|Specifica il nome di una classe finestra esistente su cui basare una nuova classe della finestra.|
|[CContainedWindowT::m_pfnSuperWindowProc](#m_pfnsuperwindowproc)|Punta alla procedura della finestra originale della classe della finestra.|
|[CContainedWindowT::m_pObject](#m_pobject)|Punta all'oggetto che lo contiene.|

## <a name="remarks"></a>Note

`CContainedWindowT` implementa una finestra contenuta all'interno di un altro oggetto. `CContainedWindowT`'s utilizza routine di finestra eseguire il mapping di un messaggio nell'oggetto che contiene per indirizzare i messaggi ai gestori appropriati. Quando si costruisce un `CContainedWindowT` dell'oggetto, si specifica il mapping tra i messaggi deve essere utilizzato.

`CContainedWindowT` Consente di creare una nuova finestra dalla creazione di superclassi una classe di finestra esistente. Il `Create` metodo registra prima di tutto una classe della finestra che si basa su una classe esistente, ma usa `CContainedWindowT::WindowProc`. `Create` Crea quindi una finestra basata su questa nuova classe della finestra. Ogni istanza di `CContainedWindowT` può superclasse una classe di finestre diverse.

`CContainedWindowT` supporta inoltre la creazione di una sottoclasse della finestra. Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CContainedWindowT` e modifica la procedura della finestra in `CContainedWindowT::WindowProc`. Ogni istanza di `CContainedWindowT` può creare una sottoclasse di una finestra diversa.

> [!NOTE]
>  Per qualsiasi dato `CContainedWindowT` dell'oggetto, chiamare `Create` o `SubclassWindow`. Non richiamare entrambi i metodi sullo stesso oggetto.

Quando si usa la **aggiungere il controllo basato su** opzione nella creazione guidata progetto ATL, la procedura guidata aggiungerà automaticamente un `CContainedWindowT` membro dati alla classe che implementa il controllo. L'esempio seguente illustra come viene dichiarata la finestra indipendente:

[!code-cpp[NVC_ATL_Windowing#38](../../atl/codesnippet/cpp/ccontainedwindowt-class_1.h)]

[!code-cpp[NVC_ATL_Windowing#39](../../atl/codesnippet/cpp/ccontainedwindowt-class_2.h)]

[!code-cpp[NVC_ATL_Windowing#40](../../atl/codesnippet/cpp/ccontainedwindowt-class_3.h)]

|Per altre informazioni su|Vedere|
|--------------------------------|---------|
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|
|Uso delle finestre in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|
|WINDOWS|[Windows](/windows/desktop/winmsg/windows) e argomenti successivi nel SDK di Windows|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`CContainedWindowT`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="ccontainedwindowt"></a>  CContainedWindowT::CContainedWindowT

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
[in] Il nome di una classe finestra esistente in cui si baserà finestra contenuta.

*pObject*<br/>
[in] Un puntatore all'oggetto contenitore che dichiara la mappa dei messaggi. Classe dell'oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
[in] Identifica la mappa dei messaggi che elaborerà i messaggi della finestra contenuta. Il valore predefinito, 0, specifica la mappa dei messaggi predefinito dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Usare una mappa messaggi alternativa dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

### <a name="remarks"></a>Note

Se si desidera creare una nuova finestra attraverso [Create](#create), è necessario passare il nome di una classe di finestra esistente per il *lpszClassName* parametro. Per un esempio, vedere la [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) Panoramica.

Esistono tre costruttori:

- Il costruttore con tre argomenti viene in genere viene chiamato.

- Il costruttore con due argomenti Usa il nome della classe da `TBase::GetWndClassName`.

- Se si desidera fornire gli argomenti in un secondo momento, viene utilizzato il costruttore senza argomenti. È necessario specificare il nome di classe della finestra, oggetto mappa del messaggio e ID messaggio mappa quando si chiama in un secondo momento `Create`.

Se si crea una sottoclasse una finestra esistente tramite [SubclassWindow](#subclasswindow), il *lpszClassName* valore non verrà utilizzato; pertanto, è possibile passare NULL per questo parametro.

##  <a name="create"></a>  CContainedWindowT:: Create

Le chiamate [RegisterWndSuperclass](#registerwndsuperclass) per registrare una classe della finestra che si basa su una classe esistente, ma usa [CContainedWindowT::WindowProc](#windowproc).

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
[in] Il nome di una classe finestra esistente in cui si baserà finestra contenuta.

*pObject*<br/>
[in] Un puntatore all'oggetto contenitore che dichiara la mappa dei messaggi. Classe dell'oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
[in] Identifica la mappa dei messaggi che elaborerà i messaggi della finestra contenuta. Il valore predefinito, 0, specifica la mappa dei messaggi predefinito dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Usare una mappa messaggi alternativa dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

*hWndParent*<br/>
[in] Handle alla finestra padre o proprietaria.

*Rect*<br/>
[in] Oggetto [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica la posizione della finestra. Il `RECT` renserlo passabile per puntatore o riferimento.

*szWindowName*<br/>
[in] Specifica il nome della finestra. Il valore predefinito è NULL.

*dwStyle*<br/>
[in] Lo stile della finestra. Il valore predefinito è WS_CHILD &#124; WS_VISIBLE. Per un elenco di valori possibili, vedere [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) nel SDK di Windows.

*dwExStyle*<br/>
[in] Lo stile della finestra estesi. Il valore predefinito è 0, vale a dire nessuno stile esteso. Per un elenco di valori possibili, vedere [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.

*MenuOrID*<br/>
[in] Per una finestra figlio, l'identificatore di finestra. Per una finestra di primo livello, un handle di menu per la finestra. Il valore predefinito è **0U**.

*lpCreateParam*<br/>
[in] Un puntatore ai dati di creazione della finestra. Per una descrizione completa, vedere la descrizione per il parametro finale [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa).

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, l'handle alla finestra appena creato. in caso contrario, NULL.

### <a name="remarks"></a>Note

Il nome della classe finestra esistente viene salvato nel [m_lpszClassName](#m_lpszclassname). `Create` Crea quindi una finestra basata su questa nuova classe. La finestra appena creata viene associata automaticamente al `CContainedWindowT` oggetto.

> [!NOTE]
>  Non chiamare `Create` se è già stato chiamato [SubclassWindow](#subclasswindow).

> [!NOTE]
>  Se viene utilizzato 0 come valore per il *MenuOrID* parametro, è necessario specificarlo come 0U (valore predefinito) per evitare un errore del compilatore.

##  <a name="defwindowproc"></a>  CContainedWindowT::DefWindowProc

Chiamata eseguita dal [WindowProc](#windowproc) per elaborare i messaggi non gestiti dalla mappa del messaggio.

```
LRESULT DefWindowProc()
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*uMsg*<br/>
[in] Il messaggio inviato alla finestra.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Il risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Note

Per impostazione predefinita `DefWindowProc` chiama il [CallWindowProc](https://msdn.microsoft.com/library/windows/desktop/ms633571) funzione Win32 per inviare le informazioni del messaggio alla routine della finestra specificata [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

##  <a name="getcurrentmessage"></a>  CContainedWindowT::GetCurrentMessage

Restituisce il messaggio corrente (`m_pCurrentMsg`).

```
const _ATL_MSG* GetCurrentMessage();
```

### <a name="return-value"></a>Valore restituito

Il messaggio corrente, inseriti in pacchetti i `MSG` struttura.

##  <a name="m_dwmsgmapid"></a>  CContainedWindowT::m_dwMsgMapID

Contiene l'identificatore della mappa messaggi attualmente in uso per la finestra indipendente.

```
DWORD m_dwMsgMapID;
```

### <a name="remarks"></a>Note

Questa mappa del messaggio deve essere dichiarata nell'oggetto che contiene.

Il mapping dei messaggi predefinito, dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), viene sempre identificata da zero. Una mappa messaggi alternativo dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), è identificato da `msgMapID`.

`m_dwMsgMapID` è prima di tutto inizializzati dal costruttore e può essere modificato chiamando [SwitchMessageMap](#switchmessagemap). Per un esempio, vedere la [CContainedWindowT Panoramica](../../atl/reference/ccontainedwindowt-class.md).

##  <a name="m_lpszclassname"></a>  CContainedWindowT::m_lpszClassName

Specifica il nome di una classe di finestra esistente.

```
LPTSTR m_lpszClassName;
```

### <a name="remarks"></a>Note

Quando si crea una finestra [Create](#create) registra una nuova classe della finestra che si basa su questa classe esistente, ma usa [CContainedWindowT::WindowProc](#windowproc).

`m_lpszClassName` viene inizializzato dal costruttore. Per un esempio, vedere la [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) Panoramica.

##  <a name="m_pfnsuperwindowproc"></a>  CContainedWindowT::m_pfnSuperWindowProc

Se viene creata una sottoclasse di finestra contenuta, `m_pfnSuperWindowProc` fa riferimento alla routine della finestra originale della classe della finestra.

```
WNDPROC m_pfnSuperWindowProc;
```

### <a name="remarks"></a>Note

Se la finestra indipendente è impostato come superclasse, vale a dire si basa su una classe della finestra che consente di modificare una classe esistente, `m_pfnSuperWindowProc` punta alla procedura della finestra della classe finestra esistente.

Il [DefWindowProc](#defwindowproc) metodo invia le informazioni sul messaggio alla routine della finestra salvata in `m_pfnSuperWindowProc`.

##  <a name="m_pobject"></a>  CContainedWindowT::m_pObject

Punta all'oggetto contenente il `CContainedWindowT` oggetto.

```
CMessageMap* m_pObject;
```

### <a name="remarks"></a>Note

Questo contenitore, la classe a cui deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md), dichiara la mappa dei messaggi utilizzata dalla finestra indipendente.

`m_pObject` viene inizializzato dal costruttore. Per un esempio, vedere la [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) Panoramica.

##  <a name="registerwndsuperclass"></a>  CContainedWindowT::RegisterWndSuperclass

Chiamata eseguita dal [Create](#create) per registrare la classe della finestra della finestra contenuta.

```
ATOM RegisterWndSuperClass();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un atomo che identifica in modo univoco la classe della finestra in fase di registrazione; in caso contrario, zero.

### <a name="remarks"></a>Note

Questa classe della finestra si basa su una classe esistente, ma utilizza [CContainedWindowT::WindowProc](#windowproc). Procedure di finestra e nome della classe finestra esistente vengono salvati nella [m_lpszClassName](#m_lpszclassname) e [m_pfnSuperWindowProc](#m_pfnsuperwindowproc), rispettivamente.

##  <a name="subclasswindow"></a>  CContainedWindowT

Le sottoclassi di finestra identificata da *hWnd* e lo collega al `CContainedWindowT` oggetto.

```
BOOL SubclassWindow(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle alla finestra in corso una sottoclasse.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra viene correttamente impostata come sottoclasse; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Usa ora la finestra sottoclassata [CContainedWindowT::WindowProc](#windowproc). La procedura di finestra originale viene salvata nel [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

> [!NOTE]
>  Non chiamare `SubclassWindow` se è già stato chiamato [Create](#create).

##  <a name="switchmessagemap"></a>  CContainedWindowT::SwitchMessageMap

Modifica il mapping tra i messaggi da utilizzare per elaborare i messaggi della finestra contenuta.

```
void SwitchMessageMap(DWORD dwMsgMapID);
```

### <a name="parameters"></a>Parametri

*dwMsgMapID*<br/>
[in] L'identificatore della mappa del messaggio. Usare la mappa dei messaggi predefinito dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), passare zero. Usare una mappa messaggi alternativa dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

### <a name="remarks"></a>Note

La mappa dei messaggi deve essere definita nell'oggetto che contiene.

Inizialmente si specifica l'identificatore della mappa del messaggio nel costruttore.

##  <a name="unsubclasswindow"></a>  CContainedWindowT::UnsubclassWindow

Scollega la finestra sottoclassata dal `CContainedWindowT` dell'oggetto e ripristina la procedura di finestra originale, salvata in [m_pfnSuperWindowProc](#m_pfnsuperwindowproc).

```
HWND UnsubclassWindow(BOOL bForce = FALSE);
```

### <a name="parameters"></a>Parametri

*bForce*<br/>
[in] Impostare questa proprietà su true per forzare la procedura di finestra originale deve essere ripristinato anche se la procedura della finestra per questo `CContainedWindowT` oggetto non è attualmente attivo. Se *bForce* è impostata su FALSE e la procedura della finestra per questo `CContainedWindowT` oggetto non è attualmente attivo, la procedura di finestra originale non verrà ripristinata.

### <a name="return-value"></a>Valore restituito

Handle alla finestra una sottoclasse in precedenza. Se *bForce* è impostata su FALSE e la procedura della finestra per questo `CContainedWindowT` object non è attualmente attivo, viene restituito NULL.

### <a name="remarks"></a>Note

Usare questo metodo solo se si desidera ripristinare la procedura di finestra originale prima che la finestra viene eliminata. In caso contrario, [WindowProc](#windowproc) eseguirà automaticamente questa operazione quando la finestra viene eliminata.

##  <a name="windowproc"></a>  CContainedWindowT::WindowProc

Questo metodo statico implementa la procedura della finestra.

```
static LRESULT CALLBACK WindowProc(  
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle alla finestra.

*uMsg*<br/>
[in] Il messaggio inviato alla finestra.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Il risultato dell'elaborazione del messaggio.

### <a name="remarks"></a>Note

`WindowProc` indirizza i messaggi alla mappa messaggi identificato da [m_dwMsgMapID](#m_dwmsgmapid). Se necessario, `WindowProc` chiamate [DefWindowProc](#defwindowproc) per l'elaborazione dei messaggi aggiuntivi.

## <a name="see-also"></a>Vedere anche

[Classe CWindow](../../atl/reference/cwindow-class.md)<br/>
[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Classe CMessageMap](../../atl/reference/cmessagemap-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

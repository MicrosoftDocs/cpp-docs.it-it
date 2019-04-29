---
title: Classe CMiniFrameWnd
ms.date: 11/04/2016
f1_keywords:
- CMiniFrameWnd
- AFXWIN/CMiniFrameWnd
- AFXWIN/CMiniFrameWnd::CMiniFrameWnd
- AFXWIN/CMiniFrameWnd::Create
- AFXWIN/CMiniFrameWnd::CreateEx
helpviewer_keywords:
- CMiniFrameWnd [MFC], CMiniFrameWnd
- CMiniFrameWnd [MFC], Create
- CMiniFrameWnd [MFC], CreateEx
ms.assetid: b8f534ed-0532-4d8e-9657-5595cf677749
ms.openlocfilehash: 70f090e2d9830ccfdd98640b54ff07440064d542
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62337817"
---
# <a name="cminiframewnd-class"></a>Classe CMiniFrameWnd

Rappresenta una finestra cornice di mezza altezza visualizzata in genere intorno alle barre degli strumenti mobili.

## <a name="syntax"></a>Sintassi

```
class CMiniFrameWnd : public CFrameWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMiniFrameWnd::CMiniFrameWnd](#cminiframewnd)|Costruisce un oggetto `CMiniFrameWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMiniFrameWnd::Create](#create)|Crea un `CMiniFrameWnd` oggetto dopo la costruzione.|
|[CMiniFrameWnd::CreateEx](#createex)|Crea un `CMiniFrameWnd` oggetto (con opzioni aggiuntive) dopo la costruzione.|

## <a name="remarks"></a>Note

Queste finestre con mini-cornice si comportano come le finestre cornice normale ad eccezione del fatto che non hanno ingrandire/ridurre al minimo i pulsanti o menu ed è sufficiente fare clic sul menu di sistema per non prenderli in considerazione.

Usare un `CMiniFrameWnd` oggetto, definire innanzitutto l'oggetto. Chiamare quindi il [Create](#create) funzione membro per visualizzare la finestra con mini-cornice.

Per altre informazioni su come usare `CMiniFrameWnd` oggetti, vedere l'articolo [ancoraggio e barre degli strumenti mobile](../../mfc/docking-and-floating-toolbars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMiniFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cminiframewnd"></a>  CMiniFrameWnd::CMiniFrameWnd

Costruisce un `CMiniFrameWnd` dell'oggetto, ma non crea la finestra.

```
CMiniFrameWnd();
```

### <a name="remarks"></a>Note

Per creare la finestra, chiamare [CMiniFrameWnd::Create](#create).

##  <a name="create"></a>  CMiniFrameWnd::Create

Crea la finestra con mini-cornice di Windows e lo collega al `CMiniFrameWnd` oggetto.

```
virtual BOOL Create(
    LPCTSTR lpClassName,
    LPCTSTR lpWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd = NULL,
    UINT nID = 0);
```

### <a name="parameters"></a>Parametri

*lpClassName*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) (funzione). Se NULL, la classe della finestra verrà registrata automaticamente dal framework. MFC fornisce la classe predefinita stili e gli attributi seguenti:

- Stile di visualizzazione di set di bit CS_DBLCLKS, che invia fare doppio clic su messaggi alla routine della finestra quando l'utente fa doppio clic del mouse.

- Imposta i bit di stile CS_HREDRAW e CS_VREDRAW, che indirizzano il contenuto dell'area client ridisegno quando la finestra di modifica delle dimensioni.

- Imposta il cursore di classe IDC_ARROW standard di Windows.

- Imposta il pennello di sfondo della classe su NULL, in modo che la finestra non cancellerà lo sfondo.

- Imposta l'icona di classe per l'icona del logo Windows standard, flag salire.

- Imposta la finestra per le dimensioni predefinite e la posizione, come indicato da Windows.

*lpWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.

*dwStyle*<br/>
Specifica gli attributi di stile di finestra. Questi possono includere gli stili di finestra standard e uno o più degli stili speciali seguenti:

- MFS_MOVEFRAME consente la finestra con mini-cornice da spostare, fare clic su dei bordi della finestra, non solo la didascalia.

- MFS_4THICKFRAME disabilita il ridimensionamento della finestra con mini-cornice.

- MFS_SYNCACTIVE Sincronizza l'attivazione della finestra con mini-cornice per l'attivazione della relativa finestra padre.

- Consente a MFS_THICKFRAME consentono la finestra con mini-cornice essere ridimensionato con dimensioni il contenuto dell'area client.

- Accesso MFS_BLOCKSYSMENU disabilita il menu di sistema e dal menu di controllo e li converte in parte della didascalia (barra del titolo).

Visualizzare [CWnd:: Create](../../mfc/reference/cwnd-class.md#create) per una descrizione dei valori dello stile di finestra possibili. La combinazione di tipica utilizzata per le finestre con mini-cornice è WS_POPUP&#124;WS_CAPTION&#124;WS_SYSMENU.

*rect*<br/>
Oggetto `RECT` struttura che specifica le dimensioni desiderate della finestra.

*pParentWnd*<br/>
Punta alla finestra padre. Utilizzare NULL per finestre di primo livello.

*nID*<br/>
Se la finestra con mini-cornice viene creata come finestra figlio, si tratta dell'identificatore del controllo figlio. in caso contrario 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

`Create` Inizializza il nome di classe della finestra e il nome della finestra e registra i valori predefiniti per lo stile e padre.

##  <a name="createex"></a>  CMiniFrameWnd::CreateEx

Crea un oggetto `CMiniFrameWnd`.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    LPCTSTR lpClassName,
    LPCTSTR lpWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd = NULL,
    UINT nID = 0);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Specifica lo stile esteso del `CMiniFrameWnd` creato. Applicare qualsiasi il [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) alla finestra.

*lpClassName*<br/>
Punta a una stringa di caratteri con terminazione null che corrisponde al nome della classe di Windows (un [WNDCLASS](/windows/desktop/api/winuser/ns-winuser-tagwndclassa) struttura). Il nome della classe può essere qualsiasi nome registrato con globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione o uno dei nomi di classe di controllo predefiniti. Non deve essere NULL.

*lpWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.

*dwStyle*<br/>
Specifica gli attributi di stile di finestra. Visualizzare [stili Window](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CWnd:: Create](../../mfc/reference/cwnd-class.md#create) per una descrizione dei possibili valori.

*rect*<br/>
Le dimensioni e la posizione della finestra, nelle coordinate del client *pParentWnd*.

*pParentWnd*<br/>
Punta all'oggetto finestra padre.

*nID*<br/>
L'identificatore della finestra figlio.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Il `CreateEx` i parametri specificano WNDCLASS, styl okna e (facoltativamente) iniziale posizione e dimensioni della finestra. `CreateEx` Specifica inoltre la finestra padre (se presente) e ID.

Quando `CreateEx` viene eseguito, invia Windows la [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo), [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), e [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate) messaggi nella finestra di.

Per estendere la gestione dei messaggi predefinito, derivare una classe da `CMiniFrameWnd`, aggiungere una mappa messaggi per la nuova classe e forniscono le funzioni membro per i messaggi precedenti. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Eseguire l'override ulteriormente `On` *messaggio* gestori per aggiungere ulteriori funzionalità alla classe derivata del messaggio.

Se si specifica lo stile WS_VISIBLE, Windows invia a finestra di tutti i messaggi necessari per attivare e visualizzare la finestra. Se lo stile della finestra consente di specificare una barra del titolo, il titolo della finestra a cui fa riferimento il *lpszWindowName* parametro viene visualizzato nella barra del titolo.

Il *dwStyle* parametro può essere qualsiasi combinazione delle [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

Il vecchio stile tavolozza della casella degli strumenti di windows non sono più supportate. Lo stile precedente che non aveva un pulsante "X" Chiudi, era supportato durante l'esecuzione di un'applicazione MFC nelle versioni precedenti di Windows, ma non è più supportato in Visual C++ .NET. Ora è supportato solo il nuovo stile WS_EX_TOOLWINDOW; per una descrizione di questo stile, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

## <a name="see-also"></a>Vedere anche

[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)

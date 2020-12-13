---
description: 'Altre informazioni su: classe CMiniFrameWnd'
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
ms.openlocfilehash: f4cb4b04897a2410d7fb81933e0611dde99e9f8d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331611"
---
# <a name="cminiframewnd-class"></a>Classe CMiniFrameWnd

Rappresenta una finestra cornice di mezza altezza visualizzata in genere intorno alle barre degli strumenti mobili.

## <a name="syntax"></a>Sintassi

```
class CMiniFrameWnd : public CFrameWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMiniFrameWnd:: CMiniFrameWnd](#cminiframewnd)|Costruisce un oggetto `CMiniFrameWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMiniFrameWnd:: create](#create)|Crea un `CMiniFrameWnd` oggetto dopo la costruzione.|
|[CMiniFrameWnd:: CreateEx](#createex)|Crea un `CMiniFrameWnd` oggetto (con opzioni aggiuntive) dopo la costruzione.|

## <a name="remarks"></a>Commenti

Queste finestre con mini-cornice si comportano come normali finestre cornice, ad eccezione del fatto che non dispongono di pulsanti o menu Riduci a icona o di ingrandimento ed è sufficiente fare clic sul menu sistema per ignorarli.

Per utilizzare un `CMiniFrameWnd` oggetto, definire innanzitutto l'oggetto. Chiamare quindi la funzione membro [create](#create) per visualizzare la finestra con mini-cornice.

Per ulteriori informazioni sull'utilizzo degli `CMiniFrameWnd` oggetti, vedere l'articolo [ancoraggio e barre degli strumenti mobili](../../mfc/docking-and-floating-toolbars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMiniFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cminiframewndcminiframewnd"></a><a name="cminiframewnd"></a> CMiniFrameWnd:: CMiniFrameWnd

Costruisce un `CMiniFrameWnd` oggetto, ma non crea la finestra.

```
CMiniFrameWnd();
```

### <a name="remarks"></a>Commenti

Per creare la finestra, chiamare [CMiniFrameWnd:: create](#create).

## <a name="cminiframewndcreate"></a><a name="create"></a> CMiniFrameWnd:: create

Crea la finestra con mini-cornice di Windows e la collega all' `CMiniFrameWnd` oggetto.

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
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con la funzione globale [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) . Se è NULL, la classe della finestra verrà registrata dal Framework. MFC assegna alla classe predefinita gli stili e gli attributi seguenti:

- Imposta CS_DBLCLKS bit di stile, che invia messaggi di doppio clic alla routine della finestra quando l'utente fa doppio clic con il mouse.

- Imposta i bit di stile CS_HREDRAW e CS_VREDRAW, che indirizzano il contenuto dell'area client da ricreare quando cambia la dimensione della finestra.

- Imposta il cursore della classe sul IDC_ARROW standard di Windows.

- Imposta il pennello per lo sfondo della classe su NULL, in modo che la finestra non cancelli lo sfondo.

- Imposta l'icona della classe sull'icona del logo Windows standard, sventolando il flag.

- Imposta la finestra sulle dimensioni e la posizione predefinite, come indicato da Windows.

*lpWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.

*dwStyle*<br/>
Specifica gli attributi di stile della finestra. Questi possono includere stili di finestra standard e uno o più degli stili speciali seguenti:

- MFS_MOVEFRAME consente lo spostamento della finestra con mini-cornice facendo clic su qualsiasi bordo della finestra, non solo sulla didascalia.

- MFS_4THICKFRAME Disabilita il ridimensionamento della finestra con mini-cornice.

- MFS_SYNCACTIVE sincronizza l'attivazione della finestra con mini-cornice per l'attivazione della finestra padre.

- MFS_THICKFRAME consente di ridimensionare la finestra con mini-cornice a seconda del contenuto dell'area client.

- MFS_BLOCKSYSMENU Disabilita l'accesso al menu di sistema e al menu di controllo e li converte in parte della didascalia (barra del titolo).

Per una descrizione dei possibili valori dello stile della finestra, vedere [CWnd:: create](../../mfc/reference/cwnd-class.md#create) . La combinazione tipica utilizzata per le finestre con mini-cornice è WS_POPUP&#124;WS_CAPTION&#124;WS_SYSMENU.

*Rect*<br/>
`RECT`Struttura che specifica le dimensioni desiderate della finestra.

*pParentWnd*<br/>
Punta alla finestra padre. Utilizzare NULL per le finestre di primo livello.

*nID*<br/>
Se la finestra con mini-cornice viene creata come finestra figlio, si tratta dell'identificatore del controllo figlio. in caso contrario, 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

`Create` Inizializza il nome della classe della finestra e il nome della finestra e registra i valori predefiniti per lo stile e il padre.

## <a name="cminiframewndcreateex"></a><a name="createex"></a> CMiniFrameWnd:: CreateEx

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
Specifica lo stile esteso dell'oggetto da `CMiniFrameWnd` creare. Applicare uno degli [stili della finestra estesa](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) alla finestra.

*lpClassName*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows (struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) ). Il nome della classe può essere qualsiasi nome registrato con la funzione [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) globale o uno qualsiasi dei nomi di classe di controllo predefiniti. Non deve essere NULL.

*lpWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.

*dwStyle*<br/>
Specifica gli attributi di stile della finestra. Per una descrizione dei valori possibili, vedere [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CWnd:: create](../../mfc/reference/cwnd-class.md#create) .

*Rect*<br/>
Le dimensioni e la posizione della finestra, in coordinate client di *pParentWnd*.

*pParentWnd*<br/>
Punta all'oggetto finestra padre.

*nID*<br/>
Identificatore della finestra figlio.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Commenti

I `CreateEx` parametri specificano il WNDCLASS, lo stile della finestra e, facoltativamente, la posizione e la dimensione iniziali della finestra. `CreateEx` specifica anche l'elemento padre (se presente) della finestra e l'ID.

Quando `CreateEx` viene eseguito, Windows invia i messaggi di [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo), [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate) alla finestra.

Per estendere la gestione dei messaggi predefinita, derivare una classe da `CMiniFrameWnd` , aggiungere una mappa messaggi alla nuova classe e fornire funzioni membro per i messaggi precedenti. Eseguire l'override `OnCreate` , ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Eseguire l'override di altri `On` gestori di messaggi di *messaggi* per aggiungere ulteriori funzionalità alla classe derivata.

Se viene specificato lo stile WS_VISIBLE, Windows invia alla finestra tutti i messaggi necessari per l'attivazione e la visualizzazione della finestra. Se lo stile della finestra specifica una barra del titolo, nella barra del titolo viene visualizzato il titolo della finestra a cui punta il parametro *lpszWindowName* .

Il parametro *dwStyle* può essere costituito da qualsiasi combinazione di [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

Le finestre della casella degli strumenti della tavolozza precedente non sono più supportate. Lo stile precedente, che non disponeva di un pulsante Chiudi "X", era supportato durante l'esecuzione di un'applicazione MFC nelle versioni precedenti di Windows, ma non è più supportato in Visual C++ .NET. È ora supportato solo il nuovo stile WS_EX_TOOLWINDOW. per una descrizione di questo stile, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

## <a name="see-also"></a>Vedi anche

[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)

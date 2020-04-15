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
ms.openlocfilehash: e9b91161f4207f4d2215d8777beade93617ddfac
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319810"
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
|[CMiniFrameWnd::Create](#create)|Crea `CMiniFrameWnd` un oggetto dopo la costruzione.|
|[CMiniFrameWnd::CreateEx](#createex)|Crea `CMiniFrameWnd` un oggetto (con opzioni aggiuntive) dopo la costruzione.|

## <a name="remarks"></a>Osservazioni

Queste finestre mini-frame si comportano come normali finestre cornice, tranne che non hanno pulsanti di riduzione a icona / ingrandire o menu e basta fare clic sul menu di sistema per chiuderli.

Per utilizzare `CMiniFrameWnd` un oggetto, definire innanzitutto l'oggetto. Chiamare quindi la funzione membro [Create](#create) per visualizzare la finestra cornice mini.

Per ulteriori informazioni sull'utilizzo `CMiniFrameWnd` degli oggetti, vedere l'articolo [Ancoraggio e barre degli strumenti mobili](../../mfc/docking-and-floating-toolbars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

`CMiniFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cminiframewndcminiframewnd"></a><a name="cminiframewnd"></a>CMiniFrameWnd::CMiniFrameWnd

Costruisce un `CMiniFrameWnd` oggetto, ma non crea la finestra.

```
CMiniFrameWnd();
```

### <a name="remarks"></a>Osservazioni

Per creare la finestra, chiamare [CMiniFrameWnd::Create](#create).

## <a name="cminiframewndcreate"></a><a name="create"></a>CMiniFrameWnd::Create

Crea la finestra cornice minicenna di `CMiniFrameWnd` Windows e la associa all'oggetto.

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

*LpClassName (Nome classe)*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con la funzione [globale AfxRegisterWndClass.](application-information-and-management.md#afxregisterwndclass) Se NULL, la classe finestra verrà registrata dal framework. MFC fornisce alla classe predefinita gli stili e gli attributi seguenti:

- Imposta il bit di stile CS_DBLCLKS, che invia messaggi doppio clic alla routine della finestra quando l'utente fa doppio clic con il mouse.

- Imposta i bit di stile CS_HREDRAW e CS_VREDRAW, che indirizzano il contenuto dell'area client da ridisegnare quando le dimensioni della finestra cambiano.

- Imposta il cursore di classe sul IDC_ARROW standard di Windows.

- Imposta il pennello di sfondo della classe su NULL, in modo che la finestra non cancellerà lo sfondo.

- Imposta l'icona della classe sull'icona del logo di Windows con flag di pagina.

- Imposta la finestra sulle dimensioni e sulla posizione predefinite, come indicato da Windows.

*LpWindowName (Nome finestra)*<br/>
Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.

*DwStyle (in stile dwStyle)*<br/>
Specifica gli attributi di stile della finestra. Questi possono includere stili di finestra standard e uno o più dei seguenti stili speciali:

- MFS_MOVEFRAME Consente di spostare la finestra cornice piccola facendo clic su qualsiasi bordo della finestra, non solo sulla didascalia.

- MFS_4THICKFRAME Disabilita il ridimensionamento della finestra cornice piccola.

- MFS_SYNCACTIVE Sincronizza l'attivazione della finestra cornice piccola con l'attivazione della finestra padre.

- MFS_THICKFRAME Consente di ridimensionare la finestra cornice ridotta come il contenuto dell'area client.

- MFS_BLOCKSYSMENU disabilita l'accesso al menu di sistema e al menu di controllo e li converte in parte della didascalia (barra del titolo).

Vedere [CWnd::Create](../../mfc/reference/cwnd-class.md#create) per una descrizione dei possibili valori di stile della finestra. La combinazione tipica utilizzata per le finestre cornice piccola è WS_POPUP&#124;WS_CAPTION&#124;WS_SYSMENU.

*Rect*<br/>
Struttura `RECT` che specifica le dimensioni desiderate della finestra.

*pParentWnd (informazioni in due)*<br/>
Punta alla finestra padre. Utilizzare NULL per le finestre di primo livello.

*nID*<br/>
Se la finestra cornice mini viene creata come finestra figlio, questo è l'identificatore del controllo figlio; in caso contrario 0.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

`Create`inizializza il nome della classe della finestra e il nome della finestra e registra i valori predefiniti per lo stile e l'elemento padre.

## <a name="cminiframewndcreateex"></a><a name="createex"></a>CMiniFrameWnd::CreateEx

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

*DwExStyle (in stile dwExStyle)*<br/>
Specifica lo stile esteso della `CMiniFrameWnd` creazione. Applicare uno degli stili di [finestra estesa](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) alla finestra.

*LpClassName (Nome classe)*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows (una struttura [WNDCLASS).](/windows/win32/api/winuser/ns-winuser-wndclassw) Il nome della classe può essere qualsiasi nome registrato con la funzione [Globale AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) o uno dei nomi di classe di controllo predefiniti. Non deve essere NULL.

*LpWindowName (Nome finestra)*<br/>
Punta a una stringa di caratteri con terminazione null che contiene il nome della finestra.

*DwStyle (in stile dwStyle)*<br/>
Specifica gli attributi di stile della finestra. Vedere [Stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CWnd::Creare](../../mfc/reference/cwnd-class.md#create) per una descrizione dei valori possibili.

*Rect*<br/>
Dimensioni e posizione della finestra, nelle coordinate client di *pParentWnd*.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre.

*nID*<br/>
Identificatore della finestra figlio.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

I `CreateEx` parametri specificano wnDCLASS, lo stile della finestra e (facoltativamente) la posizione iniziale e le dimensioni della finestra. `CreateEx`specifica anche l'elemento padre (se presente) e l'ID della finestra.

Durante `CreateEx` l'esecuzione, Windows invia i messaggi [di WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo), [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize)e [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate) alla finestra.

Per estendere la gestione dei messaggi `CMiniFrameWnd`predefinita, derivare una classe da , aggiungere una mappa messaggi alla nuova classe e fornire funzioni membro per i messaggi precedenti. Eseguire `OnCreate`l'override, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.

Eseguire `On`l'override di ulteriori gestori di messaggi *di messaggio* per aggiungere ulteriori funzionalità alla classe derivata.

Se viene fornito lo stile WS_VISIBLE, Windows invia alla finestra tutti i messaggi necessari per attivare e visualizzare la finestra. Se lo stile della finestra specifica una barra del titolo, il titolo della finestra a cui fa riferimento il *lpszWindowName* parametro viene visualizzato nella barra del titolo.

Il parametro *dwStyle* può essere qualsiasi combinazione di stili di [finestra.](../../mfc/reference/styles-used-by-mfc.md#window-styles)

Le finestre della casella degli strumenti Tavolozza vecchio stile non sono più supportate. Lo stile precedente, che non disponeva di un pulsante "X" Chiudi, era supportato durante l'esecuzione di un'applicazione MFC nelle versioni precedenti di Windows, ma non è più supportato in Visual C . Solo il nuovo stile WS_EX_TOOLWINDOW è ora supportato; per una descrizione di questo stile, vedere [Stili di finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

## <a name="see-also"></a>Vedere anche

[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)

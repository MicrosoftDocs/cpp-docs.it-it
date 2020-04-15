---
title: Classe CCtrlView
ms.date: 11/04/2016
f1_keywords:
- CCtrlView
- AFXWIN/CCtrlView
- AFXWIN/CCtrlView::CCtrlView
- AFXWIN/CCtrlView::OnDraw
- AFXWIN/CCtrlView::PreCreateWindow
- AFXWIN/CCtrlView::m_dwDefaultStyle
- AFXWIN/CCtrlView::m_strClass
helpviewer_keywords:
- CCtrlView [MFC], CCtrlView
- CCtrlView [MFC], OnDraw
- CCtrlView [MFC], PreCreateWindow
- CCtrlView [MFC], m_dwDefaultStyle
- CCtrlView [MFC], m_strClass
ms.assetid: ff488596-1e71-451f-8fec-b0831a7b44e0
ms.openlocfilehash: f77f1c265920bd160da790647ef754c55e6dbda3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369348"
---
# <a name="cctrlview-class"></a>Classe CCtrlView

Adatta l'architettura documento/visualizzazione ai controlli comuni supportati da Windows 98 e Windows NT versione 3.51 e successive.

## <a name="syntax"></a>Sintassi

```
class CCtrlView : public CView
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCtrlView::CCtrlView](#cctrlview)|Costruisce un oggetto `CCtrlView`.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Controllo Dati::OnDraw](#ondraw)|Chiamato dal framework per disegnare utilizzando il contesto di dispositivo specificato.|
|[CCtrlView::PreCreateWindow](#precreatewindow)|Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CCtrlView`.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CCtrlView::m_dwDefaultStyle](#m_dwdefaultstyle)|Contiene lo stile predefinito per la classe di visualizzazione.|
|[CCtrlView::m_strClass](#m_strclass)|Contiene il nome della classe Windows per la classe di visualizzazione.|

## <a name="remarks"></a>Osservazioni

La `CCtrlView` classe e i relativi derivati, [CEditView](../../mfc/reference/ceditview-class.md), [CListView](../../mfc/reference/clistview-class.md), [CTreeView](../../mfc/reference/ctreeview-class.md)e [CRichEditView](../../mfc/reference/cricheditview-class.md), adattano l'architettura di visualizzazione documento ai nuovi controlli comuni supportati da Windows 95/98 e Versioni 3.51 e successive di Windows NT. Per ulteriori informazioni sull'architettura di visualizzazione dei documenti, vedere [Architettura documento/visualizzazione](../../mfc/document-view-architecture.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

`CCtrlView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cctrlviewcctrlview"></a><a name="cctrlview"></a>CCtrlView::CCtrlView

Costruisce un oggetto `CCtrlView`.

```
CCtrlView(
    LPCTSTR lpszClass,
    DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*Classe lpsz*<br/>
Nome della classe Windows della classe di visualizzazione.

*DwStyle (in stile dwStyle)*<br/>
Stile della classe di visualizzazione.

### <a name="remarks"></a>Osservazioni

Il framework chiama il costruttore quando viene creata una nuova finestra cornice o viene divisa una finestra. Eseguire l'override [di CView::OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) per inizializzare la visualizzazione dopo l'associazione del documento. Chiamare [CWnd::Create](../../mfc/reference/cwnd-class.md#create) o [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#createex) per creare l'oggetto Windows.

## <a name="cctrlviewm_strclass"></a><a name="m_strclass"></a>CCtrlView::m_strClass

Contiene il nome della classe Windows per la classe di visualizzazione.

```
CString m_strClass;
```

## <a name="cctrlviewm_dwdefaultstyle"></a><a name="m_dwdefaultstyle"></a>CCtrlView::m_dwDefaultStyle

Contiene lo stile predefinito per la classe di visualizzazione.

```
DWORD m_dwDefaultStyle;
```

### <a name="remarks"></a>Osservazioni

Questo stile viene applicato quando viene creata una finestra.

## <a name="cctrlviewondraw"></a><a name="ondraw"></a>Controllo Dati::OnDraw

Chiamato dal framework per disegnare `CCtrlView` il contenuto dell'oggetto utilizzando il contesto di periferica specificato.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di periferica in cui si verifica il disegno.

### <a name="remarks"></a>Osservazioni

`OnDraw`viene in genere chiamato per la visualizzazione dello schermo, passando un contesto di dispositivo dello schermo specificato da *pDC*.

## <a name="cctrlviewprecreatewindow"></a><a name="precreatewindow"></a>CCtrlView::PreCreateWindow

Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CWnd`.

```
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```

### <a name="parameters"></a>Parametri

*Cs*<br/>
Struttura [CREATESTRUCT.](/windows/win32/api/winuser/ns-winuser-createstructw)

### <a name="return-value"></a>Valore restituito

Diverso da zero se la creazione della finestra deve continuare; 0 per indicare un errore di creazione.

### <a name="remarks"></a>Osservazioni

Non chiamare mai questa funzione direttamente.

L'implementazione predefinita di questa funzione verifica la presenza di un nome di classe di finestra NULL e sostituisce un valore predefinito appropriato. Eseguire l'override di `CREATESTRUCT` questa funzione membro per modificare la struttura prima che venga creata la finestra.

Ogni classe `CCtrlView` derivata da aggiunge la `PreCreateWindow`propria funzionalità all'override di . Per impostazione progettuale, queste derivazioni di `PreCreateWindow` non sono documentate. Per determinare gli stili appropriati per ogni classe e le interdipendenze tra gli stili, è possibile esaminare il codice sorgente MFC per la classe di base dell'applicazione. Se si sceglie `PreCreateWindow`di eseguire l'override di , è possibile determinare se gli stili utilizzati nella classe base dell'applicazione forniscono la funzionalità necessaria utilizzando le informazioni raccolte dal codice sorgente MFC.

Per ulteriori informazioni sulla modifica degli stili di finestra, vedere [Modifica degli stili di una finestra creata da MFC](../../mfc/changing-the-styles-of-a-window-created-by-mfc.md).

## <a name="see-also"></a>Vedere anche

[CView (classe)](../../mfc/reference/cview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CTreeView](../../mfc/reference/ctreeview-class.md)<br/>
[Classe CListView](../../mfc/reference/clistview-class.md)<br/>
[CRichEditView (classe)](../../mfc/reference/cricheditview-class.md)

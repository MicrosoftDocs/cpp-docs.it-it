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
ms.openlocfilehash: 334f139b81afeb06d57cbd128abe9e413b1fd0e7
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507154"
---
# <a name="cctrlview-class"></a>Classe CCtrlView

Adatta l'architettura documento/visualizzazione ai controlli comuni supportati da Windows 98 e Windows NT versione 3.51 e successive.

## <a name="syntax"></a>Sintassi

```
class CCtrlView : public CView
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCtrlView:: CCtrlView](#cctrlview)|Costruisce un oggetto `CCtrlView`.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CCtrlView:: onpare](#ondraw)|Chiamato dal Framework per creare utilizzando il contesto di dispositivo specificato.|
|[CCtrlView::PreCreateWindow](#precreatewindow)|Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CCtrlView`.|

### <a name="protected-data-members"></a>Membri dati protetti

|Name|Descrizione|
|----------|-----------------|
|[CCtrlView::m_dwDefaultStyle](#m_dwdefaultstyle)|Contiene lo stile predefinito per la classe di visualizzazione.|
|[CCtrlView::m_strClass](#m_strclass)|Contiene il nome della classe di Windows per la classe di visualizzazione.|

## <a name="remarks"></a>Note

La classe `CCtrlView` e i relativi derivati, [CEditView](../../mfc/reference/ceditview-class.md), [CListView](../../mfc/reference/clistview-class.md), [CTreeView](../../mfc/reference/ctreeview-class.md)e [CRichEditView](../../mfc/reference/cricheditview-class.md), adattano l'architettura documento/visualizzazione ai nuovi controlli comuni supportati da Windows 95/98 e Windows NT versioni 3,51 e versioni successive. Per ulteriori informazioni sull'architettura documento/visualizzazione, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

`CCtrlView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cctrlview"></a>CCtrlView:: CCtrlView

Costruisce un oggetto `CCtrlView`.

```
CCtrlView(
    LPCTSTR lpszClass,
    DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*lpszClass*<br/>
Nome della classe di Windows della classe di visualizzazione.

*dwStyle*<br/>
Stile della classe di visualizzazione.

### <a name="remarks"></a>Note

Il Framework chiama il costruttore quando viene creata una nuova finestra cornice o una finestra è divisa. Eseguire l'override di [CView:: OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) per inizializzare la visualizzazione dopo che il documento è stato collegato. Chiamare [CWnd:: create](../../mfc/reference/cwnd-class.md#create) o [CWnd:: CreateEx](../../mfc/reference/cwnd-class.md#createex) per creare l'oggetto di Windows.

##  <a name="m_strclass"></a>CCtrlView:: m_strClass

Contiene il nome della classe di Windows per la classe di visualizzazione.

```
CString m_strClass;
```

##  <a name="m_dwdefaultstyle"></a>  CCtrlView::m_dwDefaultStyle

Contiene lo stile predefinito per la classe di visualizzazione.

```
DWORD m_dwDefaultStyle;
```

### <a name="remarks"></a>Note

Questo stile viene applicato al momento della creazione di una finestra.

##  <a name="ondraw"></a>CCtrlView:: onpare

Chiamato dal Framework per creare il contenuto dell' `CCtrlView` oggetto utilizzando il contesto di dispositivo specificato.

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo in cui si verifica il disegno.

### <a name="remarks"></a>Note

`OnDraw`viene in genere chiamato per la visualizzazione dello schermo, passando un contesto di dispositivo della schermata specificato da *PDC*.

##  <a name="precreatewindow"></a>CCtrlView::P reCreateWindow

Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CWnd`.

```
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```

### <a name="parameters"></a>Parametri

*cs*<br/>
Struttura [struttura CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se la creazione della finestra deve continuare. 0 per indicare un errore di creazione.

### <a name="remarks"></a>Note

Non chiamare mai direttamente questa funzione.

L'implementazione predefinita di questa funzione verifica la presenza di un nome di classe di finestra NULL e sostituisce un valore predefinito appropriato. Eseguire l'override di questa funzione membro `CREATESTRUCT` per modificare la struttura prima della creazione della finestra.

Ogni classe derivata da `CCtrlView` aggiunge funzionalità personalizzate all'override di. `PreCreateWindow` Per impostazione predefinita, queste derivazioni di `PreCreateWindow` non sono documentate. Per determinare gli stili appropriati per ogni classe e le interdipendenze tra gli stili, è possibile esaminare il codice sorgente MFC per la classe di base dell'applicazione. Se si sceglie di eseguire `PreCreateWindow`l'override di, è possibile determinare se gli stili usati nella classe di base dell'applicazione forniscono la funzionalità necessaria usando le informazioni raccolte dal codice sorgente MFC.

Per ulteriori informazioni sulla modifica degli stili della finestra, vedere la pagina relativa alla [modifica degli stili di una finestra creata da MFC](../../mfc/changing-the-styles-of-a-window-created-by-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CTreeView](../../mfc/reference/ctreeview-class.md)<br/>
[Classe CListView](../../mfc/reference/clistview-class.md)<br/>
[Classe CRichEditView](../../mfc/reference/cricheditview-class.md)

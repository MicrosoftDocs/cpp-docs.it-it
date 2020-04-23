---
title: CRichEditView (classe)
ms.date: 11/04/2016
f1_keywords:
- CRichEditView
- AFXRICH/CRichEditView
- AFXRICH/CRichEditView::CRichEditView
- AFXRICH/CRichEditView::AdjustDialogPosition
- AFXRICH/CRichEditView::CanPaste
- AFXRICH/CRichEditView::DoPaste
- AFXRICH/CRichEditView::FindText
- AFXRICH/CRichEditView::FindTextSimple
- AFXRICH/CRichEditView::GetCharFormatSelection
- AFXRICH/CRichEditView::GetDocument
- AFXRICH/CRichEditView::GetInPlaceActiveItem
- AFXRICH/CRichEditView::GetMargins
- AFXRICH/CRichEditView::GetPageRect
- AFXRICH/CRichEditView::GetPaperSize
- AFXRICH/CRichEditView::GetParaFormatSelection
- AFXRICH/CRichEditView::GetPrintRect
- AFXRICH/CRichEditView::GetPrintWidth
- AFXRICH/CRichEditView::GetRichEditCtrl
- AFXRICH/CRichEditView::GetSelectedItem
- AFXRICH/CRichEditView::GetTextLength
- AFXRICH/CRichEditView::GetTextLengthEx
- AFXRICH/CRichEditView::InsertFileAsObject
- AFXRICH/CRichEditView::InsertItem
- AFXRICH/CRichEditView::IsRichEditFormat
- AFXRICH/CRichEditView::OnCharEffect
- AFXRICH/CRichEditView::OnParaAlign
- AFXRICH/CRichEditView::OnUpdateCharEffect
- AFXRICH/CRichEditView::OnUpdateParaAlign
- AFXRICH/CRichEditView::PrintInsideRect
- AFXRICH/CRichEditView::PrintPage
- AFXRICH/CRichEditView::SetCharFormat
- AFXRICH/CRichEditView::SetMargins
- AFXRICH/CRichEditView::SetPaperSize
- AFXRICH/CRichEditView::SetParaFormat
- AFXRICH/CRichEditView::TextNotFound
- AFXRICH/CRichEditView::GetClipboardData
- AFXRICH/CRichEditView::GetContextMenu
- AFXRICH/CRichEditView::IsSelected
- AFXRICH/CRichEditView::OnFindNext
- AFXRICH/CRichEditView::OnInitialUpdate
- AFXRICH/CRichEditView::OnPasteNativeObject
- AFXRICH/CRichEditView::OnPrinterChanged
- AFXRICH/CRichEditView::OnReplaceAll
- AFXRICH/CRichEditView::OnReplaceSel
- AFXRICH/CRichEditView::OnTextNotFound
- AFXRICH/CRichEditView::QueryAcceptData
- AFXRICH/CRichEditView::WrapChanged
- AFXRICH/CRichEditView::m_nBulletIndent
- AFXRICH/CRichEditView::m_nWordWrap
helpviewer_keywords:
- CRichEditView [MFC], CRichEditView
- CRichEditView [MFC], AdjustDialogPosition
- CRichEditView [MFC], CanPaste
- CRichEditView [MFC], DoPaste
- CRichEditView [MFC], FindText
- CRichEditView [MFC], FindTextSimple
- CRichEditView [MFC], GetCharFormatSelection
- CRichEditView [MFC], GetDocument
- CRichEditView [MFC], GetInPlaceActiveItem
- CRichEditView [MFC], GetMargins
- CRichEditView [MFC], GetPageRect
- CRichEditView [MFC], GetPaperSize
- CRichEditView [MFC], GetParaFormatSelection
- CRichEditView [MFC], GetPrintRect
- CRichEditView [MFC], GetPrintWidth
- CRichEditView [MFC], GetRichEditCtrl
- CRichEditView [MFC], GetSelectedItem
- CRichEditView [MFC], GetTextLength
- CRichEditView [MFC], GetTextLengthEx
- CRichEditView [MFC], InsertFileAsObject
- CRichEditView [MFC], InsertItem
- CRichEditView [MFC], IsRichEditFormat
- CRichEditView [MFC], OnCharEffect
- CRichEditView [MFC], OnParaAlign
- CRichEditView [MFC], OnUpdateCharEffect
- CRichEditView [MFC], OnUpdateParaAlign
- CRichEditView [MFC], PrintInsideRect
- CRichEditView [MFC], PrintPage
- CRichEditView [MFC], SetCharFormat
- CRichEditView [MFC], SetMargins
- CRichEditView [MFC], SetPaperSize
- CRichEditView [MFC], SetParaFormat
- CRichEditView [MFC], TextNotFound
- CRichEditView [MFC], GetClipboardData
- CRichEditView [MFC], GetContextMenu
- CRichEditView [MFC], IsSelected
- CRichEditView [MFC], OnFindNext
- CRichEditView [MFC], OnInitialUpdate
- CRichEditView [MFC], OnPasteNativeObject
- CRichEditView [MFC], OnPrinterChanged
- CRichEditView [MFC], OnReplaceAll
- CRichEditView [MFC], OnReplaceSel
- CRichEditView [MFC], OnTextNotFound
- CRichEditView [MFC], QueryAcceptData
- CRichEditView [MFC], WrapChanged
- CRichEditView [MFC], m_nBulletIndent
- CRichEditView [MFC], m_nWordWrap
ms.assetid: bd576b10-4cc0-4050-8f76-e1a0548411e4
ms.openlocfilehash: b72daac576411b45908d1e91bd86bbd9aeacf738
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754462"
---
# <a name="cricheditview-class"></a>CRichEditView (classe)

Con [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce la funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione documento di MFC.

## <a name="syntax"></a>Sintassi

```
class CRichEditView : public CCtrlView
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::CRichEditView](#cricheditview)|Costruisce un oggetto `CRichEditView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::AdjustDialogPosition](#adjustdialogposition)|Sposta una finestra di dialogo in modo da non nascondere la selezione corrente.|
|[CRichEditView::CanPaste](#canpaste)|Indica se gli Appunti contengono dati che possono essere incollati nella visualizzazione Rich Edit.|
|[CRichEditView::DoPaste](#dopaste)|Incolla un elemento OLE in questa visualizzazione Rich Edit.|
|[CRichEditView::FindText](#findtext)|Trova il testo specificato, richiamando il cursore di attesa.|
|[CRichEditView::FindTextSimple](#findtextsimple)|Trova il testo specificato.|
|[CRichEditView::GetCharFormatSelection](#getcharformatselection)|Recupera gli attributi di formattazione dei caratteri per la selezione corrente.|
|[CRichEditView::GetDocument](#getdocument)|Recupera un puntatore all'oggetto [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)correlato.|
|[CRichEditView::GetInPlaceActiveItem](#getinplaceactiveitem)|Recupera l'elemento OLE attualmente attivo sul posto nella visualizzazione Rich Edit.|
|[CRichEditView::GetMargins](#getmargins)|Recupera i margini per questa visualizzazione Rich Edit.|
|[CRichEditView::GetPageRect](#getpagerect)|Recupera il rettangolo di pagina per questa visualizzazione Rich Edit.|
|[CRichEditView::GetPaperSize](#getpapersize)|Recupera il formato carta per questa visualizzazione Rich Edit.|
|[CRichEditView::GetParaFormatSelection](#getparaformatselection)|Recupera gli attributi di formattazione del paragrafo per la selezione corrente.|
|[CRichEditView::GetPrintRect](#getprintrect)|Recupera il rettangolo di stampa per questa visualizzazione Rich Edit.|
|[CRichEditView::GetPrintWidth](#getprintwidth)|Recupera la larghezza di stampa per questa visualizzazione Rich Edit.|
|[CRichEditView::GetRichEditCtrl](#getricheditctrl)|Recupera il controllo Rich Edit.|
|[CRichEditView::GetSelectedItem](#getselecteditem)|Recupera l'elemento selezionato dalla visualizzazione Rich Edit.|
|[CRichEditView::GetTextLength](#gettextlength)|Recupera la lunghezza del testo nella visualizzazione Rich Edit.|
|[CRichEditView::GetTextLengthEx](#gettextlengthex)|Recupera il numero di caratteri o byte nella visualizzazione Rich Edit. Elenco di flag espanso per il metodo di determinazione della lunghezza.|
|[CRichEditView::InsertFileAsObject](#insertfileasobject)|Inserisce un file come elemento OLE.|
|[CRichEditView::InsertItem](#insertitem)|Inserisce un nuovo elemento come elemento OLE.|
|[CRichEditView::IsRichEditFormat](#isricheditformat)|Indica se gli Appunti contengono dati in formato RTF o testo.|
|[CRichEditView::OnCharEffect](#onchareffect)|Attiva/disattiva la formattazione dei caratteri per la selezione corrente.|
|[CRichEditView::OnParaAlign](#onparaalign)|Modifica l'allineamento dei paragrafi.|
|[CRichEditView::OnUpdateCharEffect](#onupdatechareffect)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubbliche dei caratteri.|
|[CRichEditView::OnUpdateParaAlign](#onupdateparaalign)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubbliche di paragrafo.|
|[CRichEditView::PrintInsideRect](#printinsiderect)|Formatta il testo specificato all'interno del rettangolo specificato.|
|[CRichEditView::PrintPage](#printpage)|Formatta il testo specificato all'interno della pagina specificata.|
|[CRichEditView::SetCharFormat](#setcharformat)|Imposta gli attributi di formattazione dei caratteri per la selezione corrente.|
|[CRichEditView::SetMargins](#setmargins)|Imposta i margini per questa visualizzazione Rich Edit.|
|[CRichEditView::SetPaperSize](#setpapersize)|Imposta il formato carta per questa visualizzazione Rich Edit.|
|[CRichEditView::SetParaFormat](#setparaformat)|Imposta gli attributi di formattazione del paragrafo per la selezione corrente.|
|[CRichEditView::TextNotFound](#textnotfound)|Reimposta lo stato di ricerca interno del controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::DatiAppunti](#getclipboarddata)|Recupera un oggetto Clipboard per un intervallo in questa visualizzazione Rich Edit.|
|[CRichEditView::GetContextMenu](#getcontextmenu)|Recupera un menu di scelta rapida da utilizzare su un pulsante destro del mouse verso il basso.|
|[CRichEditView::IsSelected](#isselected)|Indica se l'elemento OLE specificato è selezionato o meno.|
|[CRichEditView::OnFindNext](#onfindnext)|Trova l'occorrenza successiva di una sottostringa.|
|[CRichEditView::OnInitialUpdate](#oninitialupdate)|Aggiorna una visualizzazione quando viene allegata per la prima volta a un documento.|
|[CRichEditView::OnPasteNativeObject](#onpastenativeobject)|Recupera i dati nativi da un elemento OLE.|
|[CRichEditView::OnPrinterChanged](#onprinterchanged)|Imposta le caratteristiche di stampa sul dispositivo specificato.|
|[CRichEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|
|[CRichEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|
|[CRichEditView::OnTextNotFound](#ontextnotfound)|Gestisce la notifica dell'utente che il testo richiesto non è stato trovato.|
|[CRichEditView::QueryAcceptData](#queryacceptdata)|Esegue una query per `IDataObject`visualizzare i dati nel file .|
|[CRichEditView::WrapChanged](#wrapchanged)|Regola il dispositivo di output di destinazione per questa `m_nWordWrap`visualizzazione Rich Edit, in base al valore di .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::m_nBulletIndent](#m_nbulletindent)|Indica la quantità di rientro per gli elenchi puntati.|
|[CRichEditView::m_nWordWrap](#m_nwordwrap)|Indica i vincoli di ritorno a capo automatico.|

## <a name="remarks"></a>Osservazioni

Un "controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare il testo. Al testo può essere assegnata la formattazione di carattere e paragrafo e può includere oggetti OLE incorporati. I controlli Rich Edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili all'utente le operazioni di formattazione.

`CRichEditView`mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc`gestisce l'elenco degli elementi client OLE presenti nella visualizzazione. `CRichEditCntrItem`fornisce l'accesso lato contenitore all'elemento client OLE.

Questo controllo comune di Windows (e quindi il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versioni 3.51 e successive.

Per un esempio di utilizzo di una visualizzazione Rich Edit in un'applicazione MFC, vedere l'applicazione di esempio [WORDPAD.](../../overview/visual-cpp-samples.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CRichEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich.h

## <a name="cricheditviewadjustdialogposition"></a><a name="adjustdialogposition"></a>CRichEditView::AdjustDialogPosition

Chiamare questa funzione per spostare la finestra di dialogo specificata in modo che non oscuri la selezione corrente.

```cpp
void AdjustDialogPosition(CDialog* pDlg);
```

### <a name="parameters"></a>Parametri

*pDlg (in stato di*<br/>
Puntatore a un oggetto `CDialog`.

## <a name="cricheditviewcanpaste"></a><a name="canpaste"></a>CRichEditView::CanPaste

Chiamare questa funzione per determinare se gli Appunti contengono informazioni che possono essere incollate in questa visualizzazione Rich Edit.Call this function to determine if the Clipboard contains information that can be pasted into this rich edit view.

```
BOOL CanPaste() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli Appunti contengono dati in un formato che questa visualizzazione Rich Edit può accettare; in caso contrario, 0.

## <a name="cricheditviewcricheditview"></a><a name="cricheditview"></a>CRichEditView::CRichEditView

Chiamare questa funzione `CRichEditView` per creare un oggetto.

```
CRichEditView();
```

## <a name="cricheditviewdopaste"></a><a name="dopaste"></a>CRichEditView::DoPaste

Chiamare questa funzione per incollare l'elemento OLE in *dataobj* in questo documento/visualizzazione rich edit.

```cpp
void DoPaste(
    COleDataObject& dataobj,
    CLIPFORMAT cf,
    HMETAFILEPICT hMetaPict);
```

### <a name="parameters"></a>Parametri

*dataobj*<br/>
Oggetto [COleDataObject](../../mfc/reference/coledataobject-class.md) contenente i dati da incollare.

*Cfr*<br/>
Formato degli Appunti desiderato.

*hMetaPict*<br/>
Metafile che rappresenta l'elemento da incollare.

### <a name="remarks"></a>Osservazioni

Il framework chiama questa funzione come parte dell'implementazione predefinita di [QueryAcceptData](#queryacceptdata).

Questa funzione determina il tipo di incolla in base ai risultati del gestore per Incolla speciale. Se *cf* è 0, il nuovo elemento utilizza la rappresentazione iconica corrente. Se *cf* è diverso da zero e *hMetaPict* non è NULL, il nuovo elemento utilizza *hMetaPict* per la relativa rappresentazione.

## <a name="cricheditviewfindtext"></a><a name="findtext"></a>CRichEditView::FindText

Chiamare questa funzione per trovare il testo specificato e impostarlo come selezione corrente.

```
BOOL FindText(
    LPCTSTR lpszFind,
    BOOL bCase = TRUE,
    BOOL bWord = TRUE,
    BOOL bNext = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Contiene la stringa da cercare.

*bCustodia*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord (informazioni in base al*<br/>
Indica se la ricerca deve corrispondere solo a parole intere, non a parti di parole.

*bSuccessivo*<br/>
Indica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il testo *lpszFind* viene trovato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione visualizza il cursore di attesa durante l'operazione di ricerca.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#151](../../mfc/codesnippet/cpp/cricheditview-class_1.cpp)]

## <a name="cricheditviewfindtextsimple"></a><a name="findtextsimple"></a>CRichEditView::FindTextSimple

Chiamare questa funzione per trovare il testo specificato e impostarlo come selezione corrente.

```
BOOL FindTextSimple(
    LPCTSTR lpszFind,
    BOOL bCase = TRUE,
    BOOL bWord = TRUE,
    BOOL bNext = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Contiene la stringa da cercare.

*bCustodia*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord (informazioni in base al*<br/>
Indica se la ricerca deve corrispondere solo a parole intere, non a parti di parole.

*bSuccessivo*<br/>
Indica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il testo *lpszFind* viene trovato; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::FindText](#findtext).

## <a name="cricheditviewgetcharformatselection"></a><a name="getcharformatselection"></a>CRichEditView::GetCharFormatSelection

Chiamare questa funzione per ottenere gli attributi di formattazione dei caratteri della selezione corrente.

```
CHARFORMAT2& GetCharFormatSelection();
```

### <a name="return-value"></a>Valore restituito

Struttura [CHARFORMAT2](/windows/win32/api/richedit/ns-richedit-charformat2w) che contiene gli attributi di formattazione dei caratteri della selezione corrente.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere il [messaggio di EM_GETCHARFORMAT](/windows/win32/Controls/em-getcharformat) e la struttura [CHARFORMAT2](/windows/win32/api/richedit/ns-richedit-charformat2w) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]

## <a name="cricheditviewgetclipboarddata"></a><a name="getclipboarddata"></a>CRichEditView::DatiAppunti

Il framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback::GetClipboardData](/windows/win32/api/richole/nf-richole-iricheditolecallback-getclipboarddata).

```
virtual HRESULT GetClipboardData(
    CHARRANGE* lpchrg,
    DWORD dwReco,
    LPDATAOBJECT lpRichDataObj,
    LPDATAOBJECT* lplpdataobj);
```

### <a name="parameters"></a>Parametri

*lpchrg*<br/>
Puntatore alla struttura [CHARRANGE](/windows/win32/api/richedit/ns-richedit-charrange) che specifica l'intervallo di caratteri (e gli elementi OLE) da copiare nell'oggetto dati specificato da *lplpdataobj*.

*dwReco*<br/>
Flag dell'operazione degli Appunti. Può essere uno di questi valori.

- RECO_COPY Copia negli Appunti.

- RECO_CUT Taglia negli Appunti.

- RECO_DRAG Operazione di trascinamento (trascinamento della selezione).

- RECO_DROP operazione rilascia (trascinare e rilasciare).

- RECO_PASTE Incolla dagli Appunti.

*lpRichDataObj (informazioni in visuale windows)*<br/>
Puntatore a un oggetto [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) contenente i dati degli Appunti dal controllo Rich Edit ( [IRichEditOle::GetClipboardData](/windows/win32/api/richole/nf-richole-iricheditole-getclipboarddata)).

*lplpdataobj*<br/>
Puntatore alla variabile puntatore che `IDataObject` riceve l'indirizzo dell'oggetto che rappresenta l'intervallo specificato nel *lpchrg* parametro. Il valore di *lplpdataobj* viene ignorato se viene restituito un errore.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che indica l'esito positivo dell'operazione. Per ulteriori informazioni su HRESULT, vedere [Struttura dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se il valore restituito `IRichEditOleCallback::GetClipboardData` indica `IDataObject` esito positivo, restituisce l'accesso a cui accede *lplpdataobj*; in caso contrario, restituisce quello a cui si accede da *lpRichDataObj*. Eseguire l'override di questa funzione per fornire i propri dati degli Appunti. L'implementazione predefinita di questa funzione restituisce E_NOTIMPL.

Si tratta di un oggetto sottoponibile a override avanzato.

Per ulteriori informazioni, vedere [IRichEditOle::GetClipboardData](/windows/win32/api/richole/nf-richole-iricheditole-getclipboarddata), [IRichEditOleCallback::GetClipboardData](/windows/win32/api/richole/nf-richole-iricheditolecallback-getclipboarddata)e [CHARRANGE](/windows/win32/api/richedit/ns-richedit-charrange) in Windows SDK e vedere [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) in Windows SDK.

## <a name="cricheditviewgetcontextmenu"></a><a name="getcontextmenu"></a>CRichEditView::GetContextMenu

Il framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback::GetContextMenu](/windows/win32/api/richole/nf-richole-iricheditolecallback-getcontextmenu).

```
virtual HMENU GetContextMenu(
    WORD seltyp,
    LPOLEOBJECT lpoleobj,
    CHARRANGE* lpchrg);
```

### <a name="parameters"></a>Parametri

*seltyp*<br/>
Tipo di selezione. I valori del tipo di selezione sono descritti nella sezione Osservazioni.

*lpoleobj*<br/>
Puntatore `OLEOBJECT` a una struttura che specifica il primo oggetto OLE selezionato se la selezione contiene uno o più elementi OLE. Se la selezione non contiene elementi, *lpoleobj* è NULL. La `OLEOBJECT` struttura contiene un puntatore a un oggetto OLE v-table.

*lpchrg*<br/>
Puntatore a una struttura [CHARRANGE](/windows/win32/api/richedit/ns-richedit-charrange) contenente la selezione corrente.

### <a name="return-value"></a>Valore restituito

Gestire il menu di scelta rapida.

### <a name="remarks"></a>Osservazioni

Questa funzione è una parte tipica dell'elaborazione con il pulsante destro del mouse.

Il tipo di selezione può essere una qualsiasi combinazione dei seguenti flag:

- SEL_EMPTY Indica che non è presente alcuna selezione corrente.

- SEL_TEXT Indica che la selezione corrente contiene testo.

- SEL_OBJECT Indica che la selezione corrente contiene almeno un elemento OLE.

- SEL_MULTICHAR Indica che la selezione corrente contiene più di un carattere di testo.

- SEL_MULTIOBJECT Indica che la selezione corrente contiene più di un oggetto OLE.

L'implementazione predefinita restituisce NULL. Si tratta di un oggetto sottoponibile a override avanzato.

Per ulteriori informazioni, vedere [IRichEditOleCallback::GetContextMenu](/windows/win32/api/richole/nf-richole-iricheditolecallback-getcontextmenu) e [CHARRANGE](/windows/win32/api/richedit/ns-richedit-charrange) in Windows SDK.

## <a name="cricheditviewgetdocument"></a><a name="getdocument"></a>CRichEditView::GetDocument

Chiamare questa funzione per ottenere `CRichEditDoc` un puntatore alla associata a questa visualizzazione.

```
CRichEditDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) associato `CRichEditView` all'oggetto.

## <a name="cricheditviewgetinplaceactiveitem"></a><a name="getinplaceactiveitem"></a>CRichEditView::GetInPlaceActiveItem

Chiamare questa funzione per ottenere l'elemento OLE `CRichEditView` attualmente attivato sul posto in questo oggetto.

```
CRichEditCntrItem* GetInPlaceActiveItem() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al singolo oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) attivo attivo attivo in questa visualizzazione Rich Edit; NULL se non è presente alcun elemento OLE attualmente nello stato attivo sul posto.

## <a name="cricheditviewgetmargins"></a><a name="getmargins"></a>CRichEditView::GetMargins

Chiamare questa funzione per recuperare i margini correnti utilizzati nella stampa.

```
CRect GetMargins() const;
```

### <a name="return-value"></a>Valore restituito

I margini utilizzati nella stampa, misurati in MM_TWIPS.

## <a name="cricheditviewgetpagerect"></a><a name="getpagerect"></a>CRichEditView::GetPageRect

Chiamare questa funzione per ottenere le dimensioni della pagina utilizzata nella stampa.

```
CRect GetPageRect() const;
```

### <a name="return-value"></a>Valore restituito

I limiti della pagina utilizzata nella stampa, misurati in MM_TWIPS.

### <a name="remarks"></a>Osservazioni

Questo valore si basa sul formato carta.

## <a name="cricheditviewgetpapersize"></a><a name="getpapersize"></a>CRichEditView::GetPaperSize

Chiamare questa funzione per recuperare il formato carta corrente.

```
CSize GetPaperSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni della carta utilizzata nella stampa, misurate in MM_TWIPS.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#153](../../mfc/codesnippet/cpp/cricheditview-class_3.cpp)]

## <a name="cricheditviewgetparaformatselection"></a><a name="getparaformatselection"></a>CRichEditView::GetParaFormatSelection

Chiamare questa funzione per ottenere gli attributi di formattazione del paragrafo della selezione corrente.

```
PARAFORMAT2& GetParaFormatSelection();
```

### <a name="return-value"></a>Valore restituito

Struttura [PARAFORMAT2](/windows/win32/api/richedit/ns-richedit-paraformat2) che contiene gli attributi di formattazione di paragrafo della selezione corrente.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [EM_GETPARAFORMAT](/windows/win32/Controls/em-getparaformat) messaggio e la struttura [PARAFORMAT2](/windows/win32/api/richedit/ns-richedit-paraformat2) in Windows SDK.

## <a name="cricheditviewgetprintrect"></a><a name="getprintrect"></a>CRichEditView::GetPrintRect

Chiamare questa funzione per recuperare i limiti dell'area di stampa all'interno del rettangolo di pagina.

```
CRect GetPrintRect() const;
```

### <a name="return-value"></a>Valore restituito

I limiti dell'area dell'immagine utilizzata nella stampa, misurati in MM_TWIPS.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#154](../../mfc/codesnippet/cpp/cricheditview-class_4.cpp)]

## <a name="cricheditviewgetprintwidth"></a><a name="getprintwidth"></a>CRichEditView::GetPrintWidth

Chiamare questa funzione per determinare la larghezza dell'area di stampa.

```
int GetPrintWidth() const;
```

### <a name="return-value"></a>Valore restituito

La larghezza dell'area di stampa, misurata in MM_TWIPS.

## <a name="cricheditviewgetricheditctrl"></a><a name="getricheditctrl"></a>CRichEditView::GetRichEditCtrl

Chiamare questa funzione per recuperare il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) oggetto associato all'oggetto. `CRichEditView`

```
CRichEditCtrl& GetRichEditCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRichEditCtrl` per questa visualizzazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::FindText](#findtext).

## <a name="cricheditviewgetselecteditem"></a><a name="getselecteditem"></a>CRichEditView::GetSelectedItem

Chiamare questa funzione per recuperare l'elemento OLE `CRichEditCntrItem` `CRichEditView` (un oggetto) attualmente selezionato in questo oggetto.

```
CRichEditCntrItem* GetSelectedItem() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) selezionato nell'oggetto; `CRichEditView` NULL se non è selezionato alcun elemento in questa visualizzazione.

## <a name="cricheditviewgettextlength"></a><a name="gettextlength"></a>CRichEditView::GetTextLength

Chiamare questa funzione per recuperare la `CRichEditView` lunghezza del testo in questo oggetto.

```
long GetTextLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del testo in `CRichEditView` questo oggetto.

## <a name="cricheditviewgettextlengthex"></a><a name="gettextlengthex"></a>CRichEditView::GetTextLengthEx

Chiamare questa funzione membro per calcolare `CRichEditView` la lunghezza del testo in questo oggetto.

```
long GetTextLengthEx(
    DWORD dwFlags,
    UINT uCodePage = -1) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Valore che specifica il metodo da utilizzare per determinare la lunghezza del testo. Questo membro può essere uno o più valori elencati nel membro flags di [GETTEXTLENGTHEX](/windows/win32/api/richedit/ns-richedit-gettextlengthex) descritto in Windows SDK.

*UCodePage (pagina utente)*<br/>
Tabella codici per la traduzione (CP_ACP per la tabella codici ANSI, 1200 per Unicode).

### <a name="return-value"></a>Valore restituito

Numero di caratteri o byte nel controllo di modifica. Se sono stati impostati flag incompatibili in *dwFlags*, questa funzione membro restituisce E_INVALIDARG.

### <a name="remarks"></a>Osservazioni

`GetTextLengthEx`fornisce ulteriori modi per determinare la lunghezza del testo. Supporta la funzionalità Rich Edit 2.0. Per ulteriori informazioni, vedere [Informazioni sui controlli Rich Edit](/windows/win32/Controls/about-rich-edit-controls) in Windows SDK.

## <a name="cricheditviewinsertfileasobject"></a><a name="insertfileasobject"></a>CRichEditView::InsertFileAsObject

Chiamare questa funzione per inserire il file specificato (come un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto) in una visualizzazione Rich edit.

```cpp
void InsertFileAsObject(LPCTSTR lpszFileName);
```

### <a name="parameters"></a>Parametri

*lpszNomefileName (nome file)*<br/>
Stringa contenente il nome del file da inserire.

## <a name="cricheditviewinsertitem"></a><a name="insertitem"></a>CRichEditView::InsertItem

Chiamare questa funzione per inserire un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto in una visualizzazione di modifica avanzata.

```
HRESULT InsertItem(CRichEditCntrItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore all'elemento da inserire.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che indica l'esito positivo dell'inserimento.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni su HRESULT, vedere [Struttura dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM in Windows SDK.

## <a name="cricheditviewisricheditformat"></a><a name="isricheditformat"></a>CRichEditView::IsRichEditFormat

Chiamare questa funzione per determinare se *cf* è un formato degli Appunti che è testo, RTF o RTF con elementi OLE.

```
static BOOL AFX_CDECL IsRichEditFormat(CLIPFORMAT cf);
```

### <a name="parameters"></a>Parametri

*Cfr*<br/>
Formato degli Appunti interessante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se *cf* è un formato Rich Edit o Text Clipboard.

## <a name="cricheditviewisselected"></a><a name="isselected"></a>CRichEditView::IsSelected

Chiamare questa funzione per determinare se l'elemento OLE specificato è attualmente selezionato in questa visualizzazione.

```
virtual BOOL IsSelected(const CObject* pDocItem) const;
```

### <a name="parameters"></a>Parametri

*pDocItem (informazioni in stato in stato in stato*<br/>
Puntatore a un oggetto nella visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è selezionato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se la classe di visualizzazione derivata dispone di un metodo diverso per la gestione della selezione di elementi OLE.

## <a name="cricheditviewm_nbulletindent"></a><a name="m_nbulletindent"></a>CRichEditView::m_nBulletIndent

Il rientro per gli elementi del punto elenco in un elenco; per impostazione predefinita, 720 unità, che è 1/2 pollice.

```
int m_nBulletIndent;
```

## <a name="cricheditviewm_nwordwrap"></a><a name="m_nwordwrap"></a>CRichEditView::m_nWordWrap

Indica il tipo di ritorno a capo automatico per questa visualizzazione Rich Edit.

```
int m_nWordWrap;
```

### <a name="remarks"></a>Osservazioni

Uno dei valori seguenti:

- `WrapNone`Indica l'ademazione a capo automatico dei testi.

- `WrapToWindow`Indica il ritorno a capo automatico in base alla larghezza della finestra.

- `WrapToTargetDevice`Indica il ritorno a capo automatico in base alle caratteristiche del dispositivo di destinazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::WrapChanged](#wrapchanged).

## <a name="cricheditviewonchareffect"></a><a name="onchareffect"></a>CRichEditView::OnCharEffect

Chiamare questa funzione per attivare o disattivare gli effetti di formattazione dei caratteri per la selezione corrente.

```cpp
void OnCharEffect(
    DWORD dwMask,
    DWORD dwEffect);
```

### <a name="parameters"></a>Parametri

*dwMaschera*<br/>
Gli effetti di formattazione dei caratteri da modificare nella selezione corrente.

*dwEffect (effetto dwEffect)*<br/>
L'elenco desiderato di effetti di formattazione dei caratteri da attivare/disattivare.

### <a name="remarks"></a>Osservazioni

Ogni chiamata a questa funzione attiva o disattiva gli effetti di formattazione specificati per la selezione corrente.

Per ulteriori informazioni sui parametri *dwMask* e *dwEffect* e sui relativi valori potenziali, vedere i membri dati corrispondenti di [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#155](../../mfc/codesnippet/cpp/cricheditview-class_5.cpp)]

## <a name="cricheditviewonfindnext"></a><a name="onfindnext"></a>CRichEditView::OnFindNext

Chiamato dal framework durante l'elaborazione dei comandi dalla finestra di dialogo Trova/Sostituisci.

```
virtual void OnFindNext(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    BOOL bWord);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Stringa da cercare.

*bSuccessivo*<br/>
La direzione di ricerca: TRUE indica verso il basso; FALSO, su.

*bCustodia*<br/>
Indica se la ricerca deve fare distinzione tra maiuscole e minuscole.

*bWord (informazioni in base al*<br/>
Indica se la ricerca deve corrispondere solo a parole intere o meno.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per `CRichEditView`trovare testo all'interno del file . Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la classe di visualizzazione derivata.

## <a name="cricheditviewoninitialupdate"></a><a name="oninitialupdate"></a>CRichEditView::OnInitialUpdate

Chiamato dal framework dopo che la visualizzazione viene prima associata al documento, ma prima che la visualizzazione venga inizialmente visualizzata.

```
virtual void OnInitialUpdate();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione chiama la funzione membro [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) senza informazioni sull'hint (ovvero, utilizzando i valori predefiniti di 0 per il *lHint* parametro e NULL per il *pHint* parametro). Eseguire l'override di questa funzione per eseguire qualsiasi inizializzazione una tantera che richiede informazioni sul documento. Ad esempio, se l'applicazione dispone di documenti di dimensioni fisse, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento di una visualizzazione in base alle dimensioni del documento. Se l'applicazione supporta documenti di `OnUpdate` dimensioni variabili, utilizzare per aggiornare i limiti di scorrimento ogni volta che il documento viene modificato.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::m_nWordWrap](#m_nwordwrap).

## <a name="cricheditviewonpastenativeobject"></a><a name="onpastenativeobject"></a>CRichEditView::OnPasteNativeObject

Utilizzare questa funzione per caricare dati nativi da un elemento incorporato.

```
virtual BOOL OnPasteNativeObject(LPSTORAGE lpStg);
```

### <a name="parameters"></a>Parametri

*lpStg*<br/>
Puntatore a un oggetto [IStorage.](/windows/win32/api/objidl/nn-objidl-istorage)

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0;

### <a name="remarks"></a>Osservazioni

In genere, questa operazione viene eseguita creando `IStorage`un [COleStreamFile](../../mfc/reference/colestreamfile-class.md) intorno al file . L'oggetto `COleStreamFile` può essere collegato a un archivio e [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) chiamato per caricare i dati.

Si tratta di un oggetto sottoponibile a override avanzato.

Per ulteriori informazioni, vedere [IStorage](/windows/win32/api/objidl/nn-objidl-istorage) in Windows SDK.

## <a name="cricheditviewonparaalign"></a><a name="onparaalign"></a>CRichEditView::OnParaAlign

Chiamare questa funzione per modificare l'allineamento dei paragrafi selezionati.

```cpp
void OnParaAlign(WORD wAlign);
```

### <a name="parameters"></a>Parametri

*wAlign (In linea di wAlign*<br/>
Allineamento del paragrafo desiderato. Uno dei valori seguenti:

- PFA_LEFT Allineare i paragrafi con il margine sinistro.

- PFA_RIGHT Allineare i paragrafi con il margine destro.

- PFA_CENTER Centra i paragrafi tra i margini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#156](../../mfc/codesnippet/cpp/cricheditview-class_6.cpp)]

## <a name="cricheditviewonprinterchanged"></a><a name="onprinterchanged"></a>CRichEditView::OnPrinterChanged

Eseguire l'override di questa funzione per modificare le caratteristiche per questa visualizzazione Rich Edit quando la stampante cambia.

```
virtual void OnPrinterChanged(const CDC& dcPrinter);
```

### <a name="parameters"></a>Parametri

*dcPrinter (Stampante)*<br/>
Oggetto [CDC](../../mfc/reference/cdc-class.md) per la nuova stampante.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita imposta il formato carta sull'altezza fisica e la larghezza per il dispositivo di output (stampante). Se a *dcPrinter*non è associato alcun contesto di periferica, l'implementazione predefinita imposta il formato carta su 8,5 x 11 pollici.

## <a name="cricheditviewonreplaceall"></a><a name="onreplaceall"></a>CRichEditView::OnReplaceAll

Chiamato dal framework durante l'elaborazione dei comandi Sostituisci tutto dalla finestra di dialogo Sostituisci.

```
virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase,
    BOOL bWord);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo da sostituire.

*lpszSostituisci*<br/>
Testo di sostituzione.

*bCustodia*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord (informazioni in base al*<br/>
Indica se la ricerca deve selezionare parole intere o meno.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per sostituire tutte le occorrenze di un determinato testo con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per questa visualizzazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::FindText](#findtext).

## <a name="cricheditviewonreplacesel"></a><a name="onreplacesel"></a>CRichEditView::OnReplaceSel

Chiamato dal framework durante l'elaborazione di comandi Replace dalla finestra di dialogo Sostituisci.

```
virtual void OnReplaceSel(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    BOOL bWord,
    LPCTSTR lpszReplace);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo da sostituire.

*bSuccessivo*<br/>
Indica la direzione della ricerca: VERO è inattivo; FALSO, su.

*bCustodia*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord (informazioni in base al*<br/>
Indica se la ricerca deve selezionare parole intere o meno.

*lpszSostituisci*<br/>
Testo di sostituzione.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per sostituire un'occorrenza di un determinato testo con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per questa visualizzazione.

## <a name="cricheditviewontextnotfound"></a><a name="ontextnotfound"></a>CRichEditView::OnTextNotFound

Chiamato dal framework ogni volta che una ricerca ha esito negativo.

```
virtual void OnTextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Testo non trovato.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per modificare la notifica di output da un [MessageBeep](/windows/win32/api/winuser/nf-winuser-messagebeep).

Per ulteriori informazioni, vedere [MessageBeep](/windows/win32/api/winuser/nf-winuser-messagebeep) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#157](../../mfc/codesnippet/cpp/cricheditview-class_7.cpp)]

## <a name="cricheditviewonupdatechareffect"></a><a name="onupdatechareffect"></a>CRichEditView::OnUpdateCharEffect

Il framework chiama questa funzione per aggiornare l'interfaccia utente del comando per i comandi di effetto carattere.

```cpp
void OnUpdateCharEffect(
    CCmdUI* pCmdUI,
    DWORD dwMask,
    DWORD dwEffect);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore a un oggetto [CCmdUI.](../../mfc/reference/ccmdui-class.md)

*dwMaschera*<br/>
Indica la maschera di formattazione dei caratteri.

*dwEffect (effetto dwEffect)*<br/>
Indica l'effetto di formattazione dei caratteri.

### <a name="remarks"></a>Osservazioni

La maschera *dwMask* specifica quali attributi di formattazione dei caratteri controllare. I flag *dwEffect* elencano gli attributi di formattazione dei caratteri da impostare/cancellare.

Per ulteriori informazioni sui parametri *dwMask* e *dwEffect* e sui relativi valori potenziali, vedere i membri dati corrispondenti di [CHARFORMAT](/windows/win32/api/richedit/ns-richedit-charformata) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#158](../../mfc/codesnippet/cpp/cricheditview-class_8.cpp)]

## <a name="cricheditviewonupdateparaalign"></a><a name="onupdateparaalign"></a>CRichEditView::OnUpdateParaAlign

Il framework chiama questa funzione per aggiornare l'interfaccia utente del comando per i comandi di effetto paragrafo.

```cpp
void OnUpdateParaAlign(
    CCmdUI* pCmdUI,
    WORD wAlign);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore a un oggetto [CCmdUI.](../../mfc/reference/ccmdui-class.md)

*wAlign (In linea di wAlign*<br/>
Allineamento del paragrafo da controllare. Uno dei valori seguenti:

- PFA_LEFT Allineare i paragrafi con il margine sinistro.

- PFA_RIGHT Allineare i paragrafi con il margine destro.

- PFA_CENTER Centra i paragrafi tra i margini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#159](../../mfc/codesnippet/cpp/cricheditview-class_9.cpp)]

## <a name="cricheditviewprintinsiderect"></a><a name="printinsiderect"></a>CRichEditView::PrintInsideRect

Chiamare questa funzione per formattare un intervallo di testo in un controllo Rich Edit per adattarlo all'interno *di rectLayout* per il dispositivo specificato da *pDC*.

```
long PrintInsideRect(
    CDC* pDC,
    RECT& rectLayout,
    long nIndexStart,
    long nIndexStop,
    BOOL bOutput);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo per l'area di output.

*RectLayout*<br/>
[RECT](/windows/win32/api/windef/ns-windef-rect) o [CRect](../../atl-mfc-shared/reference/crect-class.md) che definisce l'area di output.

*nIndexInizio*<br/>
Indice in base zero del primo carattere da formattare.

*nIndexStop*<br/>
Indice in base zero dell'ultimo carattere da formattare.

*bOutput*<br/>
Indica se deve essere eseguito il rendering del testo. Se FALSE, il testo viene semplicemente misurato.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo carattere che si adatta all'area di output più uno.

### <a name="remarks"></a>Osservazioni

In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::GetPaperSize](#getpapersize).

## <a name="cricheditviewprintpage"></a><a name="printpage"></a>CRichEditView::PrintPage

Chiamare questa funzione per formattare un intervallo di testo in un controllo Rich Edit per il dispositivo di output specificato da *pDC*.

```
long PrintPage(
    CDC* pDC,
    long nIndexStart,
    long nIndexStop);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo per l'output della pagina.

*nIndexInizio*<br/>
Indice in base zero del primo carattere da formattare.

*nIndexStop*<br/>
Indice in base zero dell'ultimo carattere da formattare.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo carattere che si adatta alla pagina più uno.

### <a name="remarks"></a>Osservazioni

Il layout di ogni pagina è controllato da [GetPageRect](#getpagerect) e [GetPrintRect](#getprintrect). In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.

Si noti che i margini sono relativi alla pagina fisica, non alla pagina logica. Pertanto, i margini pari a zero spesso ritagliano il testo poiché molte stampanti hanno aree non stampabili nella pagina. Per evitare di ritagliare il testo, è necessario chiamare [SetMargins](#setmargins) e impostare margini ragionevoli prima di stampare.

## <a name="cricheditviewqueryacceptdata"></a><a name="queryacceptdata"></a>CRichEditView::QueryAcceptData

Chiamato dal framework per incollare un oggetto nella modifica avanzata.

```
virtual HRESULT QueryAcceptData(
    LPDATAOBJECT lpdataobj,
    CLIPFORMAT* lpcfFormat,
    DWORD dwReco,
    BOOL bReally,
    HGLOBAL hMetaFile);
```

### <a name="parameters"></a>Parametri

*lpdataobj*<br/>
Puntatore [all'oggetto IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject) su cui eseguire la query.

*LpcfFormat*<br/>
Puntatore al formato dati accettabile.

*dwReco*<br/>
Non usato.

*bDavvero*<br/>
Indica se l'operazione Incolla deve continuare o meno.

*hMetaFile (file in cui hometaFile)*<br/>
Handle per il metafile utilizzato per disegnare l'icona dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che indica l'esito positivo dell'operazione.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per gestire diverse organizzazioni di elementi COM nella classe documento derivata. Si tratta di un oggetto sottoponibile a override avanzato.

Per ulteriori informazioni su `IDataObject`HRESULT e , vedere struttura [dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM e [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject), rispettivamente, in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#160](../../mfc/codesnippet/cpp/cricheditview-class_10.cpp)]

## <a name="cricheditviewsetcharformat"></a><a name="setcharformat"></a>CRichEditView::SetCharFormat

Chiamare questa funzione per impostare gli attributi `CRichEditView` di formattazione dei caratteri per il nuovo testo in questo oggetto.

```cpp
void SetCharFormat(CHARFORMAT2 cf);
```

### <a name="parameters"></a>Parametri

*Cfr*<br/>
[Struttura CHARFORMAT2](/windows/win32/api/richedit/ns-richedit-charformat2w) contenente i nuovi attributi di formattazione dei caratteri predefiniti.

### <a name="remarks"></a>Osservazioni

Solo gli attributi `dwMask` specificati dal membro di *cf* vengono modificati da questa funzione.

Per ulteriori informazioni, vedere [EM_SETCHARFORMAT](/windows/win32/Controls/em-setcharformat) messaggio e la struttura [CHARFORMAT2](/windows/win32/api/richedit/ns-richedit-charformat2w) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]

## <a name="cricheditviewsetmargins"></a><a name="setmargins"></a>CRichEditView::SetMargins

Chiamare questa funzione per impostare i margini di stampa per questa visualizzazione rich edit.

```cpp
void SetMargins(const CRect& rectMargin);
```

### <a name="parameters"></a>Parametri

*rectMargin (Margine di ricorrel*<br/>
I nuovi valori di margine per la stampa, misurati in MM_TWIPS.

### <a name="remarks"></a>Osservazioni

Se [m_nWordWrap](#m_nwordwrap) m_nWordWrap `WrapToTargetDevice`è , è necessario chiamare [WrapChanged](#wrapchanged) dopo aver utilizzato questa funzione per regolare le caratteristiche di stampa.

Si noti che i margini utilizzati da [PrintPage](#printpage) sono relativi alla pagina fisica, non alla pagina logica. Pertanto, i margini pari a zero spesso ritagliano il testo poiché molte stampanti hanno aree non stampabili nella pagina. Per evitare di ritagliare il `SetMargins` testo, è necessario chiamare use per impostare margini di stampa ragionevoli prima della stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::GetPaperSize](#getpapersize).

## <a name="cricheditviewsetpapersize"></a><a name="setpapersize"></a>CRichEditView::SetPaperSize

Chiamare questa funzione per impostare il formato carta per la stampa di questa visualizzazione rich edit.

```cpp
void SetPaperSize(CSize sizePaper);
```

### <a name="parameters"></a>Parametri

*sizeCarta*<br/>
I nuovi valori del formato carta per la stampa, misurati in MM_TWIPS.

### <a name="remarks"></a>Osservazioni

Se [m_nWordWrap](#m_nwordwrap) m_nWordWrap `WrapToTargetDevice`è , è necessario chiamare [WrapChanged](#wrapchanged) dopo aver utilizzato questa funzione per regolare le caratteristiche di stampa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#161](../../mfc/codesnippet/cpp/cricheditview-class_11.cpp)]

## <a name="cricheditviewsetparaformat"></a><a name="setparaformat"></a>CRichEditView::SetParaFormat

Chiamare questa funzione per impostare gli attributi `CRichEditView` di formattazione del paragrafo per la selezione corrente in questo oggetto.

```
BOOL SetParaFormat(PARAFORMAT2& pf);
```

### <a name="parameters"></a>Parametri

*Pf*<br/>
[Struttura PARAFORMAT2](/windows/win32/api/richedit/ns-richedit-paraformat2) contenente i nuovi attributi di formattazione di paragrafo predefiniti.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Solo gli attributi `dwMask` specificati dal membro di *pf* vengono modificati da questa funzione.

Per ulteriori informazioni, vedere [EM_SETPARAFORMAT](/windows/win32/Controls/em-setparaformat) messaggio e [struttura PARAFORMAT2](/windows/win32/api/richedit/ns-richedit-paraformat2) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#162](../../mfc/codesnippet/cpp/cricheditview-class_12.cpp)]

## <a name="cricheditviewtextnotfound"></a><a name="textnotfound"></a>CRichEditView::TextNotFound

Chiamare questa funzione per reimpostare lo stato di ricerca interno del controllo [CRichEditView](../../mfc/reference/cricheditview-class.md) dopo una chiamata non riuscita a [FindText](#findtext).

```cpp
void TextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszTrova*<br/>
Contiene la stringa di testo non trovata.

### <a name="remarks"></a>Osservazioni

È consigliabile chiamare questo metodo immediatamente dopo le chiamate non riuscite a [FindText](#findtext) in modo che lo stato di ricerca interno del controllo venga reimpostato correttamente.

Il parametro *lpszFind* deve includere lo stesso contenuto della stringa fornita a [FindText](#findtext). Dopo aver reimpostato lo stato di ricerca interno, questo metodo chiamerà il [OnTextNotFound](#ontextnotfound) metodo con la stringa di ricerca fornita.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView::FindText](#findtext).

## <a name="cricheditviewwrapchanged"></a><a name="wrapchanged"></a>CRichEditView::WrapChanged

Chiamare questa funzione quando le caratteristiche di stampa sono state modificate ( [SetMargins](#setmargins) o [SetPaperSize](#setpapersize)).

```
virtual void WrapChanged();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per modificare il modo in cui la visualizzazione Rich Edit risponde alle modifiche in [m_nWordWrap](#m_nwordwrap) o alle caratteristiche di stampa ( [OnPrinterChanged](#onprinterchanged)).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#163](../../mfc/codesnippet/cpp/cricheditview-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[WordPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)<br/>
[Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)

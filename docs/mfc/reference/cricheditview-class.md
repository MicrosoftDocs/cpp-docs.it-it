---
title: Classe CRichEditView
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
ms.openlocfilehash: eacb41a7ae4c42a34a67f57dc0af0d966d134c14
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916757"
---
# <a name="cricheditview-class"></a>Classe CRichEditView

Con [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce la funzionalità del controllo Rich Edit nel contesto dell'architettura di visualizzazione documento di MFC.

## <a name="syntax"></a>Sintassi

```
class CRichEditView : public CCtrlView
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::CRichEditView](#cricheditview)|Costruisce un oggetto `CRichEditView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::AdjustDialogPosition](#adjustdialogposition)|Sposta una finestra di dialogo in modo che non nasconda la selezione corrente.|
|[CRichEditView::CanPaste](#canpaste)|Indica se gli Appunti contengono dati che possono essere incollati nella visualizzazione Rich Edit.|
|[CRichEditView::DoPaste](#dopaste)|Incolla un elemento OLE in questa visualizzazione di modifica avanzata.|
|[CRichEditView::FindText](#findtext)|Trova il testo specificato, richiamando il cursore di attesa.|
|[CRichEditView::FindTextSimple](#findtextsimple)|Trova il testo specificato.|
|[CRichEditView::GetCharFormatSelection](#getcharformatselection)|Recupera gli attributi di formattazione dei caratteri per la selezione corrente.|
|[CRichEditView::GetDocument](#getdocument)|Recupera un puntatore al [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)correlato.|
|[CRichEditView::GetInPlaceActiveItem](#getinplaceactiveitem)|Recupera l'elemento OLE attualmente attivo sul posto nella visualizzazione Rich Edit.|
|[CRichEditView::GetMargins](#getmargins)|Recupera i margini per questa visualizzazione di modifica avanzata.|
|[CRichEditView::GetPageRect](#getpagerect)|Recupera il rettangolo della pagina per questa visualizzazione di modifica avanzata.|
|[CRichEditView::GetPaperSize](#getpapersize)|Recupera il formato della carta per questa visualizzazione di modifica avanzata.|
|[CRichEditView::GetParaFormatSelection](#getparaformatselection)|Recupera gli attributi di formattazione dei paragrafi per la selezione corrente.|
|[CRichEditView::GetPrintRect](#getprintrect)|Recupera il rettangolo di stampa per questa visualizzazione di modifica avanzata.|
|[CRichEditView::GetPrintWidth](#getprintwidth)|Recupera la larghezza di stampa per questa visualizzazione di modifica avanzata.|
|[CRichEditView::GetRichEditCtrl](#getricheditctrl)|Recupera il controllo Rich Edit.|
|[CRichEditView::GetSelectedItem](#getselecteditem)|Recupera l'elemento selezionato dalla visualizzazione Rich Edit.|
|[CRichEditView::GetTextLength](#gettextlength)|Recupera la lunghezza del testo nella visualizzazione Rich Edit.|
|[CRichEditView::GetTextLengthEx](#gettextlengthex)|Recupera il numero di caratteri o byte nella visualizzazione Rich Edit. Elenco di flag espanso per il metodo di determinazione della lunghezza.|
|[CRichEditView::InsertFileAsObject](#insertfileasobject)|Inserisce un file come elemento OLE.|
|[CRichEditView::InsertItem](#insertitem)|Inserisce un nuovo elemento come elemento OLE.|
|[CRichEditView::IsRichEditFormat](#isricheditformat)|Indica se gli Appunti contengono dati in un formato RTF o di modifica.|
|[CRichEditView::OnCharEffect](#onchareffect)|Consente di abilitare o disabilitare la formattazione dei caratteri per la selezione corrente.|
|[CRichEditView::OnParaAlign](#onparaalign)|Modifica l'allineamento dei paragrafi.|
|[CRichEditView::OnUpdateCharEffect](#onupdatechareffect)|Aggiorna l'interfaccia utente del comando per le funzioni membro pubblico di tipo carattere.|
|[CRichEditView::OnUpdateParaAlign](#onupdateparaalign)|Aggiorna l'interfaccia utente del comando per le funzioni membro pubbliche del paragrafo.|
|[CRichEditView::PrintInsideRect](#printinsiderect)|Formatta il testo specificato all'interno del rettangolo specificato.|
|[CRichEditView::PrintPage](#printpage)|Formatta il testo specificato all'interno della pagina specificata.|
|[CRichEditView::SetCharFormat](#setcharformat)|Imposta gli attributi di formattazione dei caratteri per la selezione corrente.|
|[CRichEditView::SetMargins](#setmargins)|Imposta i margini per questa visualizzazione di modifica avanzata.|
|[CRichEditView::SetPaperSize](#setpapersize)|Imposta il formato della carta per la visualizzazione di modifica avanzata.|
|[CRichEditView::SetParaFormat](#setparaformat)|Imposta gli attributi di formattazione dei paragrafi per la selezione corrente.|
|[CRichEditView::TextNotFound](#textnotfound)|Reimposta lo stato di ricerca interno del controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Name|DESCRIZIONE|
|----------|-----------------|
|[CRichEditView::GetClipboardData](#getclipboarddata)|Recupera un oggetto Clipboard per un intervallo in questa visualizzazione di modifica avanzata.|
|[CRichEditView::GetContextMenu](#getcontextmenu)|Recupera un menu di scelta rapida da usare al pulsante destro del mouse.|
|[CRichEditView::IsSelected](#isselected)|Indica se l'elemento OLE specificato è selezionato o meno.|
|[CRichEditView::OnFindNext](#onfindnext)|Trova l'occorrenza successiva di una sottostringa.|
|[CRichEditView::OnInitialUpdate](#oninitialupdate)|Aggiorna una visualizzazione quando viene collegata per la prima volta a un documento.|
|[CRichEditView::OnPasteNativeObject](#onpastenativeobject)|Recupera dati nativi da un elemento OLE.|
|[CRichEditView::OnPrinterChanged](#onprinterchanged)|Imposta le caratteristiche di stampa sul dispositivo specificato.|
|[CRichEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una determinata stringa con una nuova stringa.|
|[CRichEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|
|[CRichEditView::OnTextNotFound](#ontextnotfound)|Gestisce la notifica utente che non è stato trovato il testo richiesto.|
|[CRichEditView::QueryAcceptData](#queryacceptdata)|Esegue una query per visualizzare informazioni sui dati `IDataObject`in.|
|[CRichEditView::WrapChanged](#wrapchanged)|Regola il dispositivo di output di destinazione per questa visualizzazione Rich Edit, in base al valore `m_nWordWrap`di.|

### <a name="public-data-members"></a>Membri dati pubblici

|Name|Descrizione|
|----------|-----------------|
|[CRichEditView::m_nBulletIndent](#m_nbulletindent)|Indica la quantità di rientro per elenchi puntati.|
|[CRichEditView::m_nWordWrap](#m_nwordwrap)|Indica i vincoli di ritorno a capo automatico.|

## <a name="remarks"></a>Note

Un "controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare il testo. Al testo può essere assegnata la formattazione di caratteri e paragrafi e possono includere oggetti OLE incorporati. I controlli Rich Edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente.

`CRichEditView`mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc`mantiene l'elenco di elementi client OLE presenti nella vista. `CRichEditCntrItem`fornisce accesso sul lato contenitore all'elemento client OLE.

Questo controllo comune di Windows (e, di conseguenza, [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3,51 e successive.

Per un esempio dell'uso di una visualizzazione di modifica dettagliata in un'applicazione MFC, vedere l'applicazione di esempio [WordPad](../../overview/visual-cpp-samples.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CRichEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich. h

##  <a name="adjustdialogposition"></a>CRichEditView:: AdjustDialogPosition

Chiamare questa funzione per spostare la finestra di dialogo specificata in modo che non nasconda la selezione corrente.

```
void AdjustDialogPosition(CDialog* pDlg);
```

### <a name="parameters"></a>Parametri

*pDlg*<br/>
Puntatore a un oggetto `CDialog`.

##  <a name="canpaste"></a>CRichEditView:: CanPaste

Chiamare questa funzione per determinare se gli Appunti contengono informazioni che possono essere incollate in questa visualizzazione di modifica avanzata.

```
BOOL CanPaste() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli Appunti contengono dati in un formato che può essere accettato da questa visualizzazione Rich Edit; in caso contrario, 0.

##  <a name="cricheditview"></a>CRichEditView:: CRichEditView

Chiamare questa funzione per creare un `CRichEditView` oggetto.

```
CRichEditView();
```

##  <a name="dopaste"></a>CRichEditView::D oPaste

Chiamare questa funzione per incollare l'elemento OLE in *dataobj* in questo documento/visualizzazione Rich Edit.

```
void DoPaste(
    COleDataObject& dataobj,
    CLIPFORMAT cf,
    HMETAFILEPICT hMetaPict);
```

### <a name="parameters"></a>Parametri

*dataobj*<br/>
[COleDataObject](../../mfc/reference/coledataobject-class.md) contenente i dati da incollare.

*cf*<br/>
Formato degli Appunti desiderato.

*hMetaPict*<br/>
Metafile che rappresenta l'elemento da incollare.

### <a name="remarks"></a>Note

Il Framework chiama questa funzione come parte dell'implementazione predefinita di [QueryAcceptData](#queryacceptdata).

Questa funzione determina il tipo di Incolla in base ai risultati del gestore per l'operazione Incolla speciale. Se *CF* è 0, il nuovo elemento usa la rappresentazione iconica corrente. Se *CF* è diverso da zero e *HMETAPICT* non è null, il nuovo elemento usa *hMetaPict* per la relativa rappresentazione.

##  <a name="findtext"></a>  CRichEditView::FindText

Chiamare questa funzione per trovare il testo specificato e impostarlo come selezione corrente.

```
BOOL FindText(
    LPCTSTR lpszFind,
    BOOL bCase = TRUE,
    BOOL bWord = TRUE,
    BOOL bNext = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Contiene la stringa da cercare.

*bCase*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca deve corrispondere solo a parole intere, non a parti di parole.

*bNext*<br/>
Indica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene trovato il testo *lpszFind* ; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione Visualizza il cursore di attesa durante l'operazione di ricerca.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#151](../../mfc/codesnippet/cpp/cricheditview-class_1.cpp)]

##  <a name="findtextsimple"></a>  CRichEditView::FindTextSimple

Chiamare questa funzione per trovare il testo specificato e impostarlo come selezione corrente.

```
BOOL FindTextSimple(
    LPCTSTR lpszFind,
    BOOL bCase = TRUE,
    BOOL bWord = TRUE,
    BOOL bNext = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Contiene la stringa da cercare.

*bCase*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca deve corrispondere solo a parole intere, non a parti di parole.

*bNext*<br/>
Indica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se viene trovato il testo *lpszFind* ; in caso contrario, 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: FindText](#findtext).

##  <a name="getcharformatselection"></a>CRichEditView:: GetCharFormatSelection

Chiamare questa funzione per ottenere gli attributi di formattazione dei caratteri della selezione corrente.

```
CHARFORMAT2& GetCharFormatSelection();
```

### <a name="return-value"></a>Valore restituito

Struttura [CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) che contiene gli attributi di formattazione dei caratteri della selezione corrente.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere il messaggio [EM_GETCHARFORMAT](/windows/desktop/Controls/em-getcharformat) e la struttura [CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]

##  <a name="getclipboarddata"></a>  CRichEditView::GetClipboardData

Il Framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback:: GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getclipboarddata).

```
virtual HRESULT GetClipboardData(
    CHARRANGE* lpchrg,
    DWORD dwReco,
    LPDATAOBJECT lpRichDataObj,
    LPDATAOBJECT* lplpdataobj);
```

### <a name="parameters"></a>Parametri

*lpchrg*<br/>
Puntatore alla struttura [CHARRANGE](/windows/desktop/api/richedit/ns-richedit-charrange) che specifica l'intervallo di caratteri (e gli elementi OLE) da copiare nell'oggetto dati specificato da *lplpdataobj*.

*dwReco*<br/>
Flag operazione Appunti. I possibili valori sono i seguenti.

- RECO_COPY copia negli Appunti.

- RECO_CUT taglia negli Appunti.

- Operazione di trascinamento RECO_DRAG (trascinamento della selezione).

- Operazione di rilascio RECO_DROP (trascinamento della selezione).

- RECO_PASTE incolla dagli Appunti.

*lpRichDataObj*<br/>
Puntatore a un oggetto [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) che contiene i dati degli Appunti dal controllo Rich Edit ( [IRichEditOle:: GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditole-getclipboarddata)).

*lplpdataobj*<br/>
Puntatore alla variabile puntatore che riceve l'indirizzo dell' `IDataObject` oggetto che rappresenta l'intervallo specificato nel parametro *lpchrg* . Il valore di *lplpdataobj* viene ignorato se viene restituito un errore.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che segnala l'esito positivo dell'operazione. Per ulteriori informazioni su HRESULT, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/desktop/com/structure-of-com-error-codes) nell'Windows SDK.

### <a name="remarks"></a>Note

Se il valore restituito indica l'esito positivo `IDataObject` , `IRichEditOleCallback::GetClipboardData` restituisce l'oggetto a cui si accede tramite *lplpdataobj*; in caso contrario, restituisce l'oggetto a cui si accede da *lpRichDataObj* Eseguire l'override di questa funzione per fornire i propri dati degli Appunti. L'implementazione predefinita di questa funzione restituisce E_NOTIMPL.

Si tratta di un oggetto avanzato sottoponibile a override.

Per ulteriori informazioni, vedere [IRichEditOle:: GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditole-getclipboarddata), [IRichEditOleCallback:: GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getclipboarddata)e [CHARRANGE](/windows/desktop/api/richedit/ns-richedit-charrange) nella Windows SDK e vedere [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) nel Windows SDK.

##  <a name="getcontextmenu"></a>CRichEditView:: GetContextMenu

Il Framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback:: GetContextMenu](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getcontextmenu).

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
Puntatore a una `OLEOBJECT` struttura che specifica il primo oggetto OLE selezionato se la selezione contiene uno o più elementi OLE. Se la selezione non contiene elementi, *lpoleobj* è null. La `OLEOBJECT` struttura include un puntatore a un oggetto OLE Table v.

*lpchrg*<br/>
Puntatore a una struttura [CHARRANGE](/windows/desktop/api/richedit/ns-richedit-charrange) contenente la selezione corrente.

### <a name="return-value"></a>Valore restituito

Handle per il menu di scelta rapida.

### <a name="remarks"></a>Note

Questa funzione è una parte tipica dell'elaborazione del pulsante destro del mouse.

Il tipo di selezione può essere costituito da qualsiasi combinazione dei flag seguenti:

- SEL_EMPTY indica che non è presente alcuna selezione corrente.

- SEL_TEXT indica che la selezione corrente contiene testo.

- SEL_OBJECT indica che la selezione corrente contiene almeno un elemento OLE.

- SEL_MULTICHAR indica che la selezione corrente contiene più di un carattere di testo.

- SEL_MULTIOBJECT indica che la selezione corrente contiene più di un oggetto OLE.

L'implementazione predefinita restituisce NULL. Si tratta di un oggetto avanzato sottoponibile a override.

Per ulteriori informazioni, vedere [IRichEditOleCallback:: GetContextMenu](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getcontextmenu) e [CHARRANGE](/windows/desktop/api/richedit/ns-richedit-charrange) nel Windows SDK.

##  <a name="getdocument"></a>CRichEditView:: GetDocument

Chiamare questa funzione per ottenere un puntatore all' `CRichEditDoc` oggetto associato a questa visualizzazione.

```
CRichEditDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) associato all' `CRichEditView` oggetto.

##  <a name="getinplaceactiveitem"></a>  CRichEditView::GetInPlaceActiveItem

Chiamare questa funzione per ottenere l'elemento OLE attualmente attivato sul posto in questo `CRichEditView` oggetto.

```
CRichEditCntrItem* GetInPlaceActiveItem() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al singolo oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) attivo sul posto in questa visualizzazione Rich Edit; NULL se non è presente alcun elemento OLE attualmente nello stato attivo sul posto.

##  <a name="getmargins"></a>CRichEditView:: GetMargins

Chiamare questa funzione per recuperare i margini correnti utilizzati per la stampa.

```
CRect GetMargins() const;
```

### <a name="return-value"></a>Valore restituito

I margini utilizzati per la stampa, misurati in MM_TWIPS.

##  <a name="getpagerect"></a>  CRichEditView::GetPageRect

Chiamare questa funzione per ottenere le dimensioni della pagina utilizzata per la stampa.

```
CRect GetPageRect() const;
```

### <a name="return-value"></a>Valore restituito

Limiti della pagina utilizzata per la stampa, misurata in MM_TWIPS.

### <a name="remarks"></a>Note

Questo valore è basato sul formato della carta.

##  <a name="getpapersize"></a>  CRichEditView::GetPaperSize

Chiamare questa funzione per recuperare il formato della carta corrente.

```
CSize GetPaperSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione della carta utilizzata per la stampa, misurata in MM_TWIPS.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#153](../../mfc/codesnippet/cpp/cricheditview-class_3.cpp)]

##  <a name="getparaformatselection"></a>CRichEditView:: GetParaFormatSelection

Chiamare questa funzione per ottenere gli attributi di formattazione del paragrafo della selezione corrente.

```
PARAFORMAT2& GetParaFormatSelection();
```

### <a name="return-value"></a>Valore restituito

Struttura [PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) che contiene gli attributi di formattazione del paragrafo della selezione corrente.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere il messaggio [EM_GETPARAFORMAT](/windows/desktop/Controls/em-getparaformat) e la struttura [PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) nel Windows SDK.

##  <a name="getprintrect"></a>CRichEditView:: GetPrintRect

Chiamare questa funzione per recuperare i limiti dell'area di stampa all'interno del rettangolo della pagina.

```
CRect GetPrintRect() const;
```

### <a name="return-value"></a>Valore restituito

Limiti dell'area dell'immagine utilizzata per la stampa, misurata in MM_TWIPS.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#154](../../mfc/codesnippet/cpp/cricheditview-class_4.cpp)]

##  <a name="getprintwidth"></a>CRichEditView:: GetPrintWidth

Chiamare questa funzione per determinare la larghezza dell'area di stampa.

```
int GetPrintWidth() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza dell'area di stampa, misurata in MM_TWIPS.

##  <a name="getricheditctrl"></a>CRichEditView:: GetRichEditCtrl

Chiamare questa funzione per recuperare l'oggetto [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) associato `CRichEditView` all'oggetto.

```
CRichEditCtrl& GetRichEditCtrl() const;
```

### <a name="return-value"></a>Valore restituito

`CRichEditCtrl` Oggetto per questa visualizzazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: FindText](#findtext).

##  <a name="getselecteditem"></a>  CRichEditView::GetSelectedItem

Chiamare questa funzione per recuperare l'elemento OLE ( `CRichEditCntrItem` oggetto) attualmente selezionato in questo `CRichEditView` oggetto.

```
CRichEditCntrItem* GetSelectedItem() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) selezionato nell' `CRichEditView` oggetto; NULL se in questa visualizzazione non è selezionato alcun elemento.

##  <a name="gettextlength"></a>  CRichEditView::GetTextLength

Chiamare questa funzione per recuperare la lunghezza del testo in questo `CRichEditView` oggetto.

```
long GetTextLength() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del testo in questo `CRichEditView` oggetto.

##  <a name="gettextlengthex"></a>CRichEditView:: GetTextLengthEx

Chiamare questa funzione membro per calcolare la lunghezza del testo in questo `CRichEditView` oggetto.

```
long GetTextLengthEx(
    DWORD dwFlags,
    UINT uCodePage = -1) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Valore che specifica il metodo da utilizzare per determinare la lunghezza del testo. Questo membro può essere costituito da uno o più valori elencati nel membro Flags di [GetTextLengthEx](/windows/desktop/api/richedit/ns-richedit-gettextlengthex) descritto nella Windows SDK.

*uCodePage*<br/>
Tabella codici per la conversione (CP_ACP per la tabella codici ANSI, 1200 per Unicode).

### <a name="return-value"></a>Valore restituito

Numero di caratteri o byte nel controllo di modifica. Se sono stati impostati flag incompatibili in *dwFlags*, questa funzione membro restituisce E_INVALIDARG.

### <a name="remarks"></a>Note

`GetTextLengthEx`fornisce metodi aggiuntivi per determinare la lunghezza del testo. Supporta la funzionalità Rich Edit 2,0. Per ulteriori informazioni, vedere [informazioni sui controlli Rich Edit](/windows/desktop/Controls/about-rich-edit-controls) nel Windows SDK.

##  <a name="insertfileasobject"></a>CRichEditView:: InsertFileAsObject

Chiamare questa funzione per inserire il file specificato (come oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) ) in una visualizzazione di modifica avanzata.

```
void InsertFileAsObject(LPCTSTR lpszFileName);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa contenente il nome del file da inserire.

##  <a name="insertitem"></a>CRichEditView:: InsertItem

Chiamare questa funzione per inserire un oggetto [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) in una visualizzazione di modifica avanzata.

```
HRESULT InsertItem(CRichEditCntrItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'elemento da inserire.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che indica l'esito positivo dell'inserimento.

### <a name="remarks"></a>Note

Per ulteriori informazioni su HRESULT, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/desktop/com/structure-of-com-error-codes) nell'Windows SDK.

##  <a name="isricheditformat"></a>CRichEditView:: IsRichEditFormat

Chiamare questa funzione per determinare se *CF* è un formato degli appunti che è un testo, un testo RTF o un testo RTF con elementi OLE.

```
static BOOL AFX_CDECL IsRichEditFormat(CLIPFORMAT cf);
```

### <a name="parameters"></a>Parametri

*cf*<br/>
Formato degli Appunti di interesse.

### <a name="return-value"></a>Valore restituito

Diverso da zero se *CF* è un formato RTF per gli Appunti di modifica o di testo.

##  <a name="isselected"></a>  CRichEditView::IsSelected

Chiamare questa funzione per determinare se l'elemento OLE specificato è attualmente selezionato in questa visualizzazione.

```
virtual BOOL IsSelected(const CObject* pDocItem) const;
```

### <a name="parameters"></a>Parametri

*pDocItem*<br/>
Puntatore a un oggetto nella visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è selezionato. in caso contrario, 0.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione se la classe della visualizzazione derivata ha un metodo diverso per la gestione della selezione degli elementi OLE.

##  <a name="m_nbulletindent"></a>CRichEditView:: m_nBulletIndent

Rientro per gli elementi Bullet in un elenco; per impostazione predefinita, 720 unità, ovvero 1/2 pollici.

```
int m_nBulletIndent;
```

##  <a name="m_nwordwrap"></a>  CRichEditView::m_nWordWrap

Indica il tipo di ritorno a capo automatico per la visualizzazione di modifica avanzata.

```
int m_nWordWrap;
```

### <a name="remarks"></a>Note

Uno dei valori seguenti:

- `WrapNone`Indica nessun ritorno a capo automatico di parole.

- `WrapToWindow`Indica il ritorno a capo automatico in base alla larghezza della finestra.

- `WrapToTargetDevice`Indica il ritorno a capo automatico in base alle caratteristiche del dispositivo di destinazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: WrapChanged](#wrapchanged).

##  <a name="onchareffect"></a>CRichEditView:: OnCharEffect

Chiamare questa funzione per impostare gli effetti di formattazione dei caratteri per la selezione corrente.

```
void OnCharEffect(
    DWORD dwMask,
    DWORD dwEffect);
```

### <a name="parameters"></a>Parametri

*dwMask*<br/>
Effetti della formattazione dei caratteri da modificare nella selezione corrente.

*dwEffect*<br/>
Elenco desiderato degli effetti di formattazione dei caratteri da impostare.

### <a name="remarks"></a>Note

Ogni chiamata a questa funzione consente di impostare gli effetti di formattazione specificati per la selezione corrente.

Per ulteriori informazioni sui parametri *dwMask* e *dwEffect* e i relativi valori potenziali, vedere i membri dati corrispondenti di [CHARFORMAT](/windows/desktop/api/richedit/ns-richedit-_charformat) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#155](../../mfc/codesnippet/cpp/cricheditview-class_5.cpp)]

##  <a name="onfindnext"></a>  CRichEditView::OnFindNext

Chiamata eseguita dal Framework durante l'elaborazione dei comandi dalla finestra di dialogo Trova/Sostituisci.

```
virtual void OnFindNext(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    BOOL bWord);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Stringa da trovare.

*bNext*<br/>
Direzione di ricerca: TRUE indica inattivo; FALSE, su.

*bCase*<br/>
Indica se la ricerca deve essere sensibile alla distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca deve corrispondere solo a parole intere.

### <a name="remarks"></a>Note

Chiamare questa funzione per trovare testo all'interno `CRichEditView`di. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la classe di visualizzazione derivata.

##  <a name="oninitialupdate"></a>  CRichEditView::OnInitialUpdate

Chiamata eseguita dal Framework dopo che la vista è stata associata per la prima volta al documento, ma prima che venga visualizzata inizialmente la visualizzazione.

```
virtual void OnInitialUpdate();
```

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione chiama la funzione membro [CView:: OnUpdate](../../mfc/reference/cview-class.md#onupdate) senza informazioni sui suggerimenti, ovvero usando i valori predefiniti 0 per il parametro *lHint* e null per il parametro *pHint* . Eseguire l'override di questa funzione per eseguire un'inizializzazione unica che richiede informazioni sul documento. Se, ad esempio, l'applicazione dispone di documenti di dimensioni fisse, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento di una visualizzazione in base alle dimensioni del documento. Se l'applicazione supporta documenti di dimensioni variabili, utilizzare `OnUpdate` per aggiornare i limiti di scorrimento ogni volta che il documento viene modificato.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: m_nWordWrap](#m_nwordwrap).

##  <a name="onpastenativeobject"></a>  CRichEditView::OnPasteNativeObject

Usare questa funzione per caricare i dati nativi da un elemento incorporato.

```
virtual BOOL OnPasteNativeObject(LPSTORAGE lpStg);
```

### <a name="parameters"></a>Parametri

*lpStg*<br/>
Puntatore a un oggetto [IStorage](/windows/desktop/api/objidl/nn-objidl-istorage) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario, 0;

### <a name="remarks"></a>Note

In genere, è possibile eseguire questa operazione creando un [COleStreamFile](../../mfc/reference/colestreamfile-class.md) intorno `IStorage`a. Il `COleStreamFile` può essere collegato a un archivio e a [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) chiamato per caricare i dati.

Si tratta di un oggetto avanzato sottoponibile a override.

Per ulteriori informazioni, vedere [IStorage](/windows/desktop/api/objidl/nn-objidl-istorage) nel Windows SDK.

##  <a name="onparaalign"></a>CRichEditView:: OnParaAlign

Chiamare questa funzione per modificare l'allineamento del paragrafo per i paragrafi selezionati.

```
void OnParaAlign(WORD wAlign);
```

### <a name="parameters"></a>Parametri

*wAlign*<br/>
Allineamento del paragrafo desiderato. Uno dei valori seguenti:

- PFA_LEFT allinea i paragrafi con il margine sinistro.

- PFA_RIGHT allinea i paragrafi con il margine destro.

- PFA_CENTER centra i paragrafi tra i margini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#156](../../mfc/codesnippet/cpp/cricheditview-class_6.cpp)]

##  <a name="onprinterchanged"></a>CRichEditView:: OnPrinterChanged

Eseguire l'override di questa funzione per modificare le caratteristiche di questa visualizzazione Rich Edit quando cambia la stampante.

```
virtual void OnPrinterChanged(const CDC& dcPrinter);
```

### <a name="parameters"></a>Parametri

*dcPrinter*<br/>
Oggetto [CDC](../../mfc/reference/cdc-class.md) per la nuova stampante.

### <a name="remarks"></a>Note

L'implementazione predefinita imposta il formato della carta sull'altezza e sulla larghezza fisiche del dispositivo di output (stampante). Se non è presente alcun contesto di dispositivo associato a *dcPrinter*, l'implementazione predefinita imposta il formato della carta su 8,5 di 11 pollici.

##  <a name="onreplaceall"></a>CRichEditView:: OnReplaceAll

Chiamata eseguita dal Framework durante l'elaborazione della sostituzione di tutti i comandi dalla finestra di dialogo Sostituisci.

```
virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase,
    BOOL bWord);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo da sostituire.

*lpszReplace*<br/>
Testo di sostituzione.

*bCase*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca deve selezionare o meno parole intere.

### <a name="remarks"></a>Note

Chiamare questa funzione per sostituire tutte le occorrenze di un testo specificato con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per questa visualizzazione.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: FindText](#findtext).

##  <a name="onreplacesel"></a>CRichEditView:: OnReplaceSel

Chiamata eseguita dal Framework durante l'elaborazione dei comandi REPLACE dalla finestra di dialogo Sostituisci.

```
virtual void OnReplaceSel(
    LPCTSTR lpszFind,
    BOOL bNext,
    BOOL bCase,
    BOOL bWord,
    LPCTSTR lpszReplace);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo da sostituire.

*bNext*<br/>
Indica la direzione della ricerca: TRUE è inattivo; FALSE, su.

*bCase*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca deve selezionare o meno parole intere.

*lpszReplace*<br/>
Testo di sostituzione.

### <a name="remarks"></a>Note

Chiamare questa funzione per sostituire un'occorrenza di un testo specificato con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per questa visualizzazione.

##  <a name="ontextnotfound"></a>  CRichEditView::OnTextNotFound

Chiamato dal Framework ogni volta che una ricerca ha esito negativo.

```
virtual void OnTextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Testo non trovato.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per modificare la notifica di output da un [MessageBeep](/windows/desktop/api/winuser/nf-winuser-messagebeep).

Per ulteriori informazioni, vedere [MessageBeep](/windows/desktop/api/winuser/nf-winuser-messagebeep) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#157](../../mfc/codesnippet/cpp/cricheditview-class_7.cpp)]

##  <a name="onupdatechareffect"></a>CRichEditView:: OnUpdateCharEffect

Il Framework chiama questa funzione per aggiornare l'interfaccia utente del comando per i comandi con effetto carattere.

```
void OnUpdateCharEffect(
    CCmdUI* pCmdUI,
    DWORD dwMask,
    DWORD dwEffect);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) .

*dwMask*<br/>
Indica la maschera di formattazione dei caratteri.

*dwEffect*<br/>
Indica l'effetto di formattazione dei caratteri.

### <a name="remarks"></a>Note

La maschera *dwMask* specifica gli attributi di formattazione dei caratteri da controllare. I flag *dwEffect* elencano gli attributi di formattazione dei caratteri da impostare/deselezionare.

Per ulteriori informazioni sui parametri *dwMask* e *dwEffect* e i relativi valori potenziali, vedere i membri dati corrispondenti di [CHARFORMAT](/windows/desktop/api/richedit/ns-richedit-_charformat) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#158](../../mfc/codesnippet/cpp/cricheditview-class_8.cpp)]

##  <a name="onupdateparaalign"></a>  CRichEditView::OnUpdateParaAlign

Il Framework chiama questa funzione per aggiornare l'interfaccia utente del comando per i comandi per gli effetti dei paragrafi.

```
void OnUpdateParaAlign(
    CCmdUI* pCmdUI,
    WORD wAlign);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) .

*wAlign*<br/>
Allineamento del paragrafo da verificare. Uno dei valori seguenti:

- PFA_LEFT allinea i paragrafi con il margine sinistro.

- PFA_RIGHT allinea i paragrafi con il margine destro.

- PFA_CENTER centra i paragrafi tra i margini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#159](../../mfc/codesnippet/cpp/cricheditview-class_9.cpp)]

##  <a name="printinsiderect"></a>  CRichEditView::PrintInsideRect

Chiamare questa funzione per formattare un intervallo di testo in un controllo Rich Edit per adattarlo all'interno di *rectLayout* per il dispositivo specificato da *PDC*.

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

*rectLayout*<br/>
[Rect](/windows/desktop/api/windef/ns-windef-tagrect) o [CRect](../../atl-mfc-shared/reference/crect-class.md) che definisce l'area di output.

*nIndexStart*<br/>
Indice in base zero del primo carattere da formattare.

*nIndexStop*<br/>
Indice in base zero dell'ultimo carattere da formattare.

*bOutput*<br/>
Indica se deve essere eseguito il rendering del testo. Se FALSE, il testo viene appena misurato.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo carattere che corrisponde all'area di output più uno.

### <a name="remarks"></a>Note

Questa chiamata è in genere seguita da una chiamata a [CRichEditCtrl::D isplayband](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: GetPaperSize](#getpapersize).

##  <a name="printpage"></a>CRichEditView::P rintPage

Chiamare questa funzione per formattare un intervallo di testo in un controllo Rich Edit per il dispositivo di output specificato da *PDC*.

```
long PrintPage(
    CDC* pDC,
    long nIndexStart,
    long nIndexStop);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo per l'output della pagina.

*nIndexStart*<br/>
Indice in base zero del primo carattere da formattare.

*nIndexStop*<br/>
Indice in base zero dell'ultimo carattere da formattare.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo carattere che corrisponde alla pagina più uno.

### <a name="remarks"></a>Note

Il layout di ogni pagina è controllato da [GetPageRect](#getpagerect) e [GetPrintRect](#getprintrect). Questa chiamata è in genere seguita da una chiamata a [CRichEditCtrl::D isplayband](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.

Si noti che i margini sono relativi alla pagina fisica, non alla pagina logica. I margini di zero, quindi, ritagliano spesso il testo poiché molte stampanti hanno aree non stampabili nella pagina. Per evitare di ritagliare il testo, è necessario chiamare [SetMargins](#setmargins) e impostare margini ragionevoli prima della stampa.

##  <a name="queryacceptdata"></a>  CRichEditView::QueryAcceptData

Chiamata eseguita dal Framework per incollare un oggetto nella modifica dettagliata.

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
Puntatore a [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) per eseguire la query.

*lpcfFormat*<br/>
Puntatore al formato dati accettabile.

*dwReco*<br/>
Non usato.

*bReally*<br/>
Indica se l'operazione Incolla deve continuare o meno.

*hMetaFile*<br/>
Handle per il metafile utilizzato per disegnare l'icona dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che segnala l'esito positivo dell'operazione.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per gestire un'organizzazione diversa di elementi COM nella classe del documento derivata. Si tratta di un oggetto avanzato sottoponibile a override.

Per ulteriori informazioni su HRESULT e `IDataObject`, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/desktop/com/structure-of-com-error-codes) e di [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject)rispettivamente nella Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#160](../../mfc/codesnippet/cpp/cricheditview-class_10.cpp)]

##  <a name="setcharformat"></a>CRichEditView:: SetCharFormat

Chiamare questa funzione per impostare gli attributi di formattazione dei caratteri per il nuovo `CRichEditView` testo in questo oggetto.

```
void SetCharFormat(CHARFORMAT2 cf);
```

### <a name="parameters"></a>Parametri

*cf*<br/>
Struttura [CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) contenente i nuovi attributi di formattazione dei caratteri predefiniti.

### <a name="remarks"></a>Note

Solo gli attributi specificati dal `dwMask` membro di *CF* vengono modificati da questa funzione.

Per ulteriori informazioni, vedere il messaggio [EM_SETCHARFORMAT](/windows/desktop/Controls/em-setcharformat) e la struttura [CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]

##  <a name="setmargins"></a>CRichEditView:: semargins

Chiamare questa funzione per impostare i margini di stampa per questa visualizzazione di modifica avanzata.

```
void SetMargins(const CRect& rectMargin);
```

### <a name="parameters"></a>Parametri

*rectMargin*<br/>
Nuovi valori dei margini per la stampa, misurati in MM_TWIPS.

### <a name="remarks"></a>Note

Se [m_nWordWrap](#m_nwordwrap) è `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo aver usato questa funzione per modificare le caratteristiche di stampa.

Si noti che i margini utilizzati da [PrintPage](#printpage) sono relativi alla pagina fisica, non alla pagina logica. I margini di zero, quindi, ritagliano spesso il testo poiché molte stampanti hanno aree non stampabili nella pagina. Per evitare di ritagliare il testo, è necessario chiamare `SetMargins` use per impostare margini di stampa ragionevoli prima della stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: GetPaperSize](#getpapersize).

##  <a name="setpapersize"></a>  CRichEditView::SetPaperSize

Chiamare questa funzione per impostare il formato della carta per la stampa di questa visualizzazione di modifica avanzata.

```
void SetPaperSize(CSize sizePaper);
```

### <a name="parameters"></a>Parametri

*sizePaper*<br/>
Nuovi valori del formato della carta per la stampa, misurati in MM_TWIPS.

### <a name="remarks"></a>Note

Se [m_nWordWrap](#m_nwordwrap) è `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo aver usato questa funzione per modificare le caratteristiche di stampa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#161](../../mfc/codesnippet/cpp/cricheditview-class_11.cpp)]

##  <a name="setparaformat"></a>CRichEditView:: SetParaFormat

Chiamare questa funzione per impostare gli attributi di formattazione dei paragrafi per la selezione `CRichEditView` corrente in questo oggetto.

```
BOOL SetParaFormat(PARAFORMAT2& pf);
```

### <a name="parameters"></a>Parametri

*pf*<br/>
Struttura [PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) contenente i nuovi attributi di formattazione dei paragrafi predefiniti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Solo gli attributi specificati dal `dwMask` membro di *PF* vengono modificati da questa funzione.

Per ulteriori informazioni, vedere il messaggio [EM_SETPARAFORMAT](/windows/desktop/Controls/em-setparaformat) e la struttura [PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#162](../../mfc/codesnippet/cpp/cricheditview-class_12.cpp)]

##  <a name="textnotfound"></a>  CRichEditView::TextNotFound

Chiamare questa funzione per reimpostare lo stato di ricerca interno del controllo [CRichEditView](../../mfc/reference/cricheditview-class.md) dopo una chiamata non riuscita a [FindText](#findtext).

```
void TextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Contiene la stringa di testo non trovata.

### <a name="remarks"></a>Note

È consigliabile chiamare questo metodo subito dopo le chiamate non riuscite a [FindText](#findtext) in modo che lo stato di ricerca interno del controllo venga reimpostato correttamente.

Il parametro *lpszFind* deve includere lo stesso contenuto della stringa fornita a [FindText](#findtext). Dopo aver reimpostato lo stato di ricerca interno, questo metodo chiamerà il metodo [OnTextNotFound](#ontextnotfound) con la stringa di ricerca specificata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CRichEditView:: FindText](#findtext).

##  <a name="wrapchanged"></a>CRichEditView:: WrapChanged

Chiamare questa funzione quando le caratteristiche di stampa sono state modificate ([SetMargins](#setmargins) o [SetPaperSize](#setpapersize)).

```
virtual void WrapChanged();
```

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per modificare il modo in cui la visualizzazione Rich Edit risponde alle modifiche in [m_nWordWrap](#m_nwordwrap) o nelle caratteristiche di stampa ( [OnPrinterChanged](#onprinterchanged)).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#163](../../mfc/codesnippet/cpp/cricheditview-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[WORDPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)<br/>
[Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)

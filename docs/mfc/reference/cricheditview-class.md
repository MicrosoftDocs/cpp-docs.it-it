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
ms.openlocfilehash: 2eebfe18275aa63ac26c0c898a5d796300860db8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50476617"
---
# <a name="cricheditview-class"></a>CRichEditView (classe)

Con [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce la funzionalità del controllo rich edit nel contesto dell'architettura documento / visualizzazione di MFC.

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
|[CRichEditView::AdjustDialogPosition](#adjustdialogposition)|Sposta una finestra di dialogo in modo che lo non nasconda la selezione corrente.|
|[CRichEditView::CanPaste](#canpaste)|Indica se gli Appunti contengono dati che possono essere incollati in visualizzazione di modifica avanzate.|
|[CRichEditView::DoPaste](#dopaste)|Incolla un elemento OLE in questa visualizzazione rich edit.|
|[CRichEditView::FindText](#findtext)|Trova il testo specificato, richiamo il cursore di attesa.|
|[CRichEditView::FindTextSimple](#findtextsimple)|Trova il testo specificato.|
|[CRichEditView::GetCharFormatSelection](#getcharformatselection)|Recupera il carattere degli attributi per la selezione corrente di formattazione.|
|[CRichEditView::GetDocument](#getdocument)|Recupera un puntatore all'oggetto correlato [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md).|
|[CRichEditView::GetInPlaceActiveItem](#getinplaceactiveitem)|Recupera l'elemento OLE che è attualmente attiva nella visualizzazione di modifica avanzate.|
|[CRichEditView::GetMargins](#getmargins)|Recupera i margini di questa visualizzazione rich edit.|
|[CRichEditView::GetPageRect](#getpagerect)|Recupera il rettangolo di pagina per questa visualizzazione rich edit.|
|[CRichEditView::GetPaperSize](#getpapersize)|Recupera il formato della carta per questa visualizzazione rich edit.|
|[CRichEditView::GetParaFormatSelection](#getparaformatselection)|Recupera gli attributi per la selezione corrente di formattazione di paragrafo.|
|[CRichEditView::GetPrintRect](#getprintrect)|Recupera il rettangolo di stampa per questa visualizzazione rich edit.|
|[CRichEditView::GetPrintWidth](#getprintwidth)|Recupera la larghezza della stampa per questa visualizzazione rich edit.|
|[CRichEditView:: GetRichEditCtrl](#getricheditctrl)|Recupera il controllo rich edit.|
|[CRichEditView::GetSelectedItem](#getselecteditem)|Recupera l'elemento selezionato dalla visualizzazione di modifica avanzate.|
|[CRichEditView::GetTextLength](#gettextlength)|Recupera la lunghezza del testo nella visualizzazione di modifica avanzate.|
|[CRichEditView::GetTextLengthEx](#gettextlengthex)|Recupera il numero di caratteri o byte nella visualizzazione di modifica avanzate. Elenco di flag espanso per metodo per determinare la lunghezza.|
|[CRichEditView::InsertFileAsObject](#insertfileasobject)|Inserisce un file come un elemento OLE.|
|[CRichEditView::InsertItem](#insertitem)|Inserisce un nuovo elemento come un elemento OLE.|
|[CRichEditView::IsRichEditFormat](#isricheditformat)|Indica se gli Appunti contengono dati in un formato di testo o RTF.|
|[CRichEditView::OnCharEffect](#onchareffect)|Attiva/disattiva la formattazione per la selezione corrente del carattere.|
|[CRichEditView::OnParaAlign](#onparaalign)|Modifica l'allineamento dei paragrafi.|
|[CRichEditView::OnUpdateCharEffect](#onupdatechareffect)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubblico di carattere.|
|[CRichEditView::OnUpdateParaAlign](#onupdateparaalign)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubblico di paragrafo.|
|[CRichEditView::PrintInsideRect](#printinsiderect)|Formatta il testo specificato all'interno del rettangolo specificato.|
|[CRichEditView::PrintPage](#printpage)|Formatta il testo specificato all'interno della pagina specificato.|
|[CRichEditView::SetCharFormat](#setcharformat)|Imposta la formattazione degli attributi per la selezione corrente del carattere.|
|[CRichEditView::SetMargins](#setmargins)|Imposta i margini per questo rich Modifica visualizzazione.|
|[CRichEditView::SetPaperSize](#setpapersize)|Imposta il formato della carta per questa visualizzazione rich edit.|
|[CRichEditView::SetParaFormat](#setparaformat)|Imposta gli attributi per la selezione corrente di formattazione di paragrafo.|
|[CRichEditView::TextNotFound](#textnotfound)|Reimposta lo stato di ricerca interno del controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::GetClipboardData](#getclipboarddata)|Recupera un oggetto Clipboard per un intervallo in questa visualizzazione rich edit.|
|[CRichEditView::GetContextMenu](#getcontextmenu)|Recupera un menu di scelta rapida da utilizzare su un pulsante del mouse a destra verso il basso.|
|[CRichEditView::IsSelected](#isselected)|Indica se l'elemento OLE specificata sia selezionata o meno.|
|[CRichEditView::OnFindNext](#onfindnext)|Cerca l'occorrenza successiva di una sottostringa.|
|[CRichEditView::OnInitialUpdate](#oninitialupdate)|Aggiorna una vista quando viene inizialmente associato a un documento.|
|[CRichEditView::OnPasteNativeObject](#onpastenativeobject)|Recupera dati nativi da un elemento OLE.|
|[CRichEditView::OnPrinterChanged](#onprinterchanged)|Imposta le caratteristiche di stampa sul dispositivo specificato.|
|[CRichEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|
|[CRichEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|
|[CRichEditView::OnTextNotFound](#ontextnotfound)|Notifica all'utente gli handle che non è stato trovato il testo richiesto.|
|[CRichEditView::QueryAcceptData](#queryacceptdata)|Per informazioni sui dati nella query il `IDataObject`.|
|[CRichEditView::WrapChanged](#wrapchanged)|Consente di regolare il dispositivo di output di destinazione per questo rich edit visualizzazione, in base al valore di `m_nWordWrap`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRichEditView::m_nBulletIndent](#m_nbulletindent)|Indica la quantità di rientro per elenchi puntati.|
|[CRichEditView::m_nWordWrap](#m_nwordwrap)|Indica i vincoli di incapsulamento della parola.|

## <a name="remarks"></a>Note

Un "controllo rich edit" è una finestra in cui l'utente può immettere e modificare il testo. Il testo può essere assegnato a carattere e formattazione di paragrafo e può includere oggetti OLE incorporati. I controlli rich edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare eventuali componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione per l'utente.

`CRichEditView` gestisce il testo e la caratteristica di formattazione del testo. `CRichEditDoc` gestisce l'elenco di elementi di client OLE che sono nella vista. `CRichEditCntrItem` fornisce l'accesso dal contenitore per l'elemento client OLE.

Questo controllo comune di Windows (e pertanto il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in versioni di Windows 95 o 98 e Windows NT 3.51 e successive.

Per un esempio dell'uso di una visualizzazione rich edit in un'applicazione MFC, vedere la [WORDPAD](../../visual-cpp-samples.md) applicazione di esempio.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CCtrlView](../../mfc/reference/cctrlview-class.md)

`CRichEditView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxrich.h

##  <a name="adjustdialogposition"></a>  CRichEditView::AdjustDialogPosition

Chiamare questa funzione per spostare la finestra di dialogo specificata in modo non nasconda la selezione corrente.

```
void AdjustDialogPosition(CDialog* pDlg);
```

### <a name="parameters"></a>Parametri

*pDlg*<br/>
Puntatore a un oggetto `CDialog`.

##  <a name="canpaste"></a>  CRichEditView::CanPaste

Chiamare questa funzione per determinare se gli Appunti contengono informazioni che possono essere incollate in questa visualizzazione rich edit.

```
BOOL CanPaste() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli Appunti contengono dati in un formato che può accettare questa visualizzazione rich edit; in caso contrario, 0.

##  <a name="cricheditview"></a>  CRichEditView::CRichEditView

Chiamare questa funzione per creare un `CRichEditView` oggetto.

```
CRichEditView();
```

##  <a name="dopaste"></a>  CRichEditView::DoPaste

Chiamare questa funzione per l'elemento OLE in incollare *dataobj* in questo rich edit documento/visualizzazione.

```
void DoPaste(
    COleDataObject& dataobj,
    CLIPFORMAT cf,
    HMETAFILEPICT hMetaPict);
```

### <a name="parameters"></a>Parametri

*dataobj*<br/>
Il [COleDataObject](../../mfc/reference/coledataobject-class.md) contenente i dati da incollare.

*cloud Foundry*<br/>
Il formato degli Appunti desiderato.

*hMetaPict*<br/>
Metafile che rappresenta l'elemento da incollare.

### <a name="remarks"></a>Note

Il framework chiama questa funzione come parte dell'implementazione predefinita del [QueryAcceptData](#queryacceptdata).

Questa funzione determina il tipo di funzione Incolla in base ai risultati del gestore per Incolla speciale. Se *cf* è 0, il nuovo elemento viene utilizzata la rappresentazione sotto forma di icona corrente. Se *cf* è diverso da zero e *hMetaPict* non è NULL, viene utilizzato il nuovo elemento *hMetaPict* per la rappresentazione.

##  <a name="findtext"></a>  CRichEditView::FindText

Chiamare questa funzione per trovare il testo specificato e impostarlo come la selezione corrente.

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
Indica se la ricerca deve corrispondere solo parole intere, non le parti di parole.

*bAvanti*<br/>
Indica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il *lpszFind* testo viene trovato; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione viene visualizzato il cursore di attesa durante l'operazione di ricerca.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#151](../../mfc/codesnippet/cpp/cricheditview-class_1.cpp)]

##  <a name="findtextsimple"></a>  CRichEditView::FindTextSimple

Chiamare questa funzione per trovare il testo specificato e impostarlo come la selezione corrente.

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
Indica se la ricerca deve corrispondere solo parole intere, non le parti di parole.

*bAvanti*<br/>
Indica la direzione della ricerca. Se TRUE, la direzione di ricerca è verso la fine del buffer. Se FALSE, la direzione di ricerca è verso l'inizio del buffer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il *lpszFind* testo viene trovato; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::FindText](#findtext).

##  <a name="getcharformatselection"></a>  CRichEditView::GetCharFormatSelection

Chiamare questa funzione per ottenere la formattazione degli attributi della selezione corrente del carattere.

```
CHARFORMAT2& GetCharFormatSelection();
```

### <a name="return-value"></a>Valore restituito

Oggetto [CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) struttura che contiene il carattere degli attributi della selezione corrente di formattazione.

### <a name="remarks"></a>Note

Per altre informazioni, vedere la [EM_GETCHARFORMAT](/windows/desktop/Controls/em-getcharformat) messaggio e il [CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) struttura nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]

##  <a name="getclipboarddata"></a>  CRichEditView::GetClipboardData

Il framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback::GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getclipboarddata).

```
virtual HRESULT GetClipboardData(
    CHARRANGE* lpchrg,
    DWORD dwReco,
    LPDATAOBJECT lpRichDataObj,
    LPDATAOBJECT* lplpdataobj);
```

### <a name="parameters"></a>Parametri

*lpchrg*<br/>
Puntatore per il [struttura CHARRANGE](/windows/desktop/api/richedit/ns-richedit-_charrange) struttura che specifica l'intervallo di caratteri (e gli elementi OLE) per copiare all'oggetto dati specificato da *lplpdataobj*.

*dwReco*<br/>
Flag di operazione degli Appunti. Può essere uno dei valori seguenti.

- RECO_COPY copia negli Appunti.

- RECO_CUT tagliare negli Appunti.

- Trascinare RECO_DRAG operazione (trascinamento della selezione).

- Drop RECO_DROP operazione (trascinamento della selezione).

- RECO_PASTE Incolla dagli Appunti.

*lpRichDataObj*<br/>
Puntatore a un [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) controllo di modifica oggetto che contiene i dati negli Appunti il ricco ( [IRichEditOle::GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditole-getclipboarddata)).

*lplpdataobj*<br/>
Puntatore alla variabile puntatore che riceve l'indirizzo del `IDataObject` che rappresenta l'intervallo specificato nell'oggetto di *lpchrg* parametro. Il valore di *lplpdataobj* viene ignorato se viene restituito un errore.

### <a name="return-value"></a>Valore restituito

Valore HRESULT reporting la riuscita dell'operazione. Per altre informazioni su HRESULT, vedere [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes) nel SDK di Windows.

### <a name="remarks"></a>Note

Se il valore restituito indica l'esito positivo, `IRichEditOleCallback::GetClipboardData` restituisce il `IDataObject` a cui accede *lplpdataobj*; in caso contrario, viene restituito quello a cui accede *lpRichDataObj*. Eseguire l'override di questa funzione per fornire i propri dati negli Appunti. L'implementazione predefinita di questa funzione restituisce E_NOTIMPL.

Si tratta di un'avanzata sottoponibile a override.

Per altre informazioni, vedere [IRichEditOle::GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditole-getclipboarddata), [IRichEditOleCallback::GetClipboardData](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getclipboarddata), e [struttura CHARRANGE](/windows/desktop/api/richedit/ns-richedit-_charrange) nel SDK di Windows e vedere [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) in Windows SDK.

##  <a name="getcontextmenu"></a>  CRichEditView::GetContextMenu

Il framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback::GetContextMenu](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getcontextmenu).

```
virtual HMENU GetContextMenu(
    WORD seltyp,
    LPOLEOBJECT lpoleobj,
    CHARRANGE* lpchrg);
```

### <a name="parameters"></a>Parametri

*seltyp*<br/>
Il tipo di selezione. I valori di tipo di selezione sono descritti nella sezione Osservazioni.

*lpoleobj*<br/>
Puntatore a un `OLEOBJECT` struttura che specifica il primo oggetto OLE selezionato se la selezione contiene uno o più elementi OLE. Se la selezione non contiene elementi, *lpoleobj* è NULL. Il `OLEOBJECT` struttura contiene un puntatore a un oggetto OLE v-table.

*lpchrg*<br/>
Puntatore a un [struttura CHARRANGE](/windows/desktop/api/richedit/ns-richedit-_charrange) struttura che contiene la selezione corrente.

### <a name="return-value"></a>Valore restituito

Handle per il menu di scelta rapida.

### <a name="remarks"></a>Note

Questa funzione è tipicamente parte del pulsante del mouse a destra verso il basso l'elaborazione.

Il tipo di selezione può essere qualsiasi combinazione dei flag seguenti:

- SEL_EMPTY indica che non è stata effettuata alcuna selezione corrente.

- SEL_TEXT indica che la selezione corrente contiene testo.

- SEL_OBJECT indica che la selezione corrente contiene almeno un elemento OLE.

- SEL_MULTICHAR indica che la selezione corrente contiene più di un carattere di testo.

- SEL_MULTIOBJECT indica che la selezione corrente contiene più di un oggetto OLE.

L'implementazione predefinita restituisce NULL. Si tratta di un'avanzata sottoponibile a override.

Per altre informazioni, vedere [IRichEditOleCallback::GetContextMenu](/windows/desktop/api/richole/nf-richole-iricheditolecallback-getcontextmenu) e [struttura CHARRANGE](/windows/desktop/api/richedit/ns-richedit-_charrange) nel SDK di Windows.

##  <a name="getdocument"></a>  CRichEditView::GetDocument

Chiamare questa funzione per ottenere un puntatore per il `CRichEditDoc` associato a questa visualizzazione.

```
CRichEditDoc* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) oggetto associato di `CRichEditView` oggetto.

##  <a name="getinplaceactiveitem"></a>  CRichEditView::GetInPlaceActiveItem

Chiamata di questa funzione per ottenere il OLE di elemento che è attualmente attivato sul posto in questo `CRichEditView` oggetto.

```
CRichEditCntrItem* GetInPlaceActiveItem() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a singolo, sul posto attivo [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto in questa visualizzazione rich edit; NULL se non esiste alcun elemento OLE attualmente nello stato attivo sul posto.

##  <a name="getmargins"></a>  CRichEditView::GetMargins

Chiamare questa funzione per recuperare i margini correnti utilizzati nella stampa.

```
CRect GetMargins() const;
```

### <a name="return-value"></a>Valore restituito

I margini utilizzati nella stampa, misurata in MM_TWIPS.

##  <a name="getpagerect"></a>  CRichEditView::GetPageRect

Chiamare questa funzione per ottenere le dimensioni della pagina utilizzato per la stampa.

```
CRect GetPageRect() const;
```

### <a name="return-value"></a>Valore restituito

I limiti della pagina utilizzato per la stampa, misurata in MM_TWIPS.

### <a name="remarks"></a>Note

Questo valore è basato sul formato della carta.

##  <a name="getpapersize"></a>  CRichEditView::GetPaperSize

Chiamare questa funzione per recuperare il formato della carta corrente.

```
CSize GetPaperSize() const;
```

### <a name="return-value"></a>Valore restituito

Il formato della carta utilizzato nella stampa, misurata in MM_TWIPS.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#153](../../mfc/codesnippet/cpp/cricheditview-class_3.cpp)]

##  <a name="getparaformatselection"></a>  CRichEditView::GetParaFormatSelection

Chiamare questa funzione per ottenere gli attributi della selezione corrente di formattazione di paragrafo.

```
PARAFORMAT2& GetParaFormatSelection();
```

### <a name="return-value"></a>Valore restituito

Oggetto [PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) struttura che contiene gli attributi della selezione corrente di formattazione di paragrafo.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [EM_GETPARAFORMAT](/windows/desktop/Controls/em-getparaformat) messaggio e [PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) struttura nel SDK di Windows.

##  <a name="getprintrect"></a>  CRichEditView::GetPrintRect

Chiamare questa funzione per recuperare i limiti dell'area di stampa all'interno del rettangolo di pagina.

```
CRect GetPrintRect() const;
```

### <a name="return-value"></a>Valore restituito

I limiti dell'area dell'immagine utilizzati nella stampa, misurata in MM_TWIPS.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#154](../../mfc/codesnippet/cpp/cricheditview-class_4.cpp)]

##  <a name="getprintwidth"></a>  CRichEditView::GetPrintWidth

Chiamare questa funzione per determinare la larghezza dell'area di stampa.

```
int GetPrintWidth() const;
```

### <a name="return-value"></a>Valore restituito

La larghezza dell'area di stampa, misurata in MM_TWIPS.

##  <a name="getricheditctrl"></a>  CRichEditView:: GetRichEditCtrl

Chiamare questa funzione per recuperare il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) oggetto associato di `CRichEditView` oggetto.

```
CRichEditCtrl& GetRichEditCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Il `CRichEditCtrl` oggetto per la visualizzazione corrente.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::FindText](#findtext).

##  <a name="getselecteditem"></a>  CRichEditView::GetSelectedItem

Chiamare questa funzione per recuperare l'elemento OLE (un `CRichEditCntrItem` oggetto) attualmente selezionato in questo `CRichEditView` oggetto.

```
CRichEditCntrItem* GetSelectedItem() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto selezionato nel `CRichEditView` ; dell'oggetto NULL se è selezionato alcun elemento in questa visualizzazione.

##  <a name="gettextlength"></a>  CRichEditView::GetTextLength

Chiamare questa funzione per recuperare la lunghezza del testo in questo `CRichEditView` oggetto.

```
long GetTextLength() const;
```

### <a name="return-value"></a>Valore restituito

La lunghezza del testo in questo `CRichEditView` oggetto.

##  <a name="gettextlengthex"></a>  CRichEditView::GetTextLengthEx

Chiamare questa funzione membro per calcolare la lunghezza del testo in questo `CRichEditView` oggetto.

```
long GetTextLengthEx(
    DWORD dwFlags,
    UINT uCodePage = -1) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Valore che specifica il metodo da utilizzare per determinare la lunghezza del testo. Questo membro può essere uno o più dei valori elencati nel membro di flag del [GETTEXTLENGTHEX](/windows/desktop/api/richedit/ns-richedit-_gettextlengthex) descritto nel SDK di Windows.

*uCodePage*<br/>
Tabella codici per la conversione (CP_ACP per tabella codici ANSI, 1200 per Unicode).

### <a name="return-value"></a>Valore restituito

Il numero di caratteri o byte nel controllo di modifica. Se sono state impostate contrassegni incompatibili *dwFlags*, questa funzione membro restituisce E_INVALIDARG.

### <a name="remarks"></a>Note

`GetTextLengthEx` offre altri modi per determinare la lunghezza del testo. Supporta la funzionalità Rich Edit 2.0. Per altre informazioni, vedere [sui controlli Rich Edit](/windows/desktop/Controls/about-rich-edit-controls) nel SDK di Windows.

##  <a name="insertfileasobject"></a>  CRichEditView::InsertFileAsObject

Chiamare questa funzione per inserire il file specificato (come un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto) in un formato RTF Modifica visualizzazione.

```
void InsertFileAsObject(LPCTSTR lpszFileName);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
Stringa contenente il nome del file da inserire.

##  <a name="insertitem"></a>  CRichEditView::InsertItem

Chiamare questa funzione per inserire un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto in una visualizzazione rich edit.

```
HRESULT InsertItem(CRichEditCntrItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'elemento da inserire.

### <a name="return-value"></a>Valore restituito

Valore HRESULT che indica l'esito positivo dell'inserimento.

### <a name="remarks"></a>Note

Per altre informazioni su HRESULT, vedere [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes) nel SDK di Windows.

##  <a name="isricheditformat"></a>  CRichEditView::IsRichEditFormat

Chiamare questa funzione per determinare se *cf* è un formato degli Appunti che è testo, testo RTF o testo RTF con gli elementi OLE.

```
static BOOL AFX_CDECL IsRichEditFormat(CLIPFORMAT cf);
```

### <a name="parameters"></a>Parametri

*cloud Foundry*<br/>
Il formato degli Appunti di interesse.

### <a name="return-value"></a>Valore restituito

Diverso da zero se *cf* è un formato degli Appunti RTF di modifica o di testo.

##  <a name="isselected"></a>  CRichEditView::IsSelected

Chiamare questa funzione per determinare se l'elemento OLE specificato è attualmente selezionato in questa visualizzazione.

```
virtual BOOL IsSelected(const CObject* pDocItem) const;
```

### <a name="parameters"></a>Parametri

*pDocItem*<br/>
Puntatore a un oggetto nella visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto è selezionato; in caso contrario 0.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione se la classe vista derivata dispone di un metodo diverso per la gestione selezionare elementi OLE.

##  <a name="m_nbulletindent"></a>  CRichEditView::m_nBulletIndent

Il rientro per gli elementi di punto elenco in un elenco di; Per impostazione predefinita, le unità di 720, ovvero 1/2 pollice.

```
int m_nBulletIndent;
```

##  <a name="m_nwordwrap"></a>  CRichEditView::m_nWordWrap

Indica il tipo di ritorno a capo automatico per questa visualizzazione rich edit.

```
int m_nWordWrap;
```

### <a name="remarks"></a>Note

Uno dei valori seguenti:

- `WrapNone` Non indica nessuna capo automatico.

- `WrapToWindow` Indica il ritorno a capo in base alla larghezza della finestra.

- `WrapToTargetDevice` Indica il ritorno a capo in base alle caratteristiche del dispositivo di destinazione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::WrapChanged](#wrapchanged).

##  <a name="onchareffect"></a>  CRichEditView::OnCharEffect

Chiamare questa funzione per attivare o disattivare la formattazione effetti per la selezione corrente del carattere.

```
void OnCharEffect(
    DWORD dwMask,
    DWORD dwEffect);
```

### <a name="parameters"></a>Parametri

*dwMask*<br/>
Il carattere formattazione effetti per modificare la selezione corrente.

*dwEffect*<br/>
L'elenco desiderata di formattazione per attivare o disattivare effetti carattere.

### <a name="remarks"></a>Note

Ogni chiamata a questa funzione consente di alternare gli effetti di formattazione specificati per la selezione corrente.

Per altre informazioni sul *dwMask* e *dwEffect* parametri e i valori possibili, vedere i membri di dati corrispondente del [CHARFORMAT](/windows/desktop/api/richedit/ns-richedit-_charformat) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#155](../../mfc/codesnippet/cpp/cricheditview-class_5.cpp)]

##  <a name="onfindnext"></a>  CRichEditView::OnFindNext

Chiamato dal framework quando l'elaborazione dei comandi nella finestra di dialogo Trova/Sostituisci.

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

*bAvanti*<br/>
La direzione di ricerca: TRUE indica verso l'alto. FALSE, backup.

*bCase*<br/>
Indica se la ricerca deve essere fatta distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca è la corrispondenza con parole intere solo o No.

### <a name="remarks"></a>Note

Chiamare questa funzione per trovare testo all'interno di `CRichEditView`. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la classe vista derivata.

##  <a name="oninitialupdate"></a>  CRichEditView::OnInitialUpdate

Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima la visualizzazione iniziale.

```
virtual void OnInitialUpdate();
```

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione chiama il [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) funzione membro con nessuna informazione (vale a dire usando i valori predefiniti pari a 0 per il *lHint* parametro e NULL per il *pHint* parametro). Eseguire l'override di questa funzione per eseguire qualsiasi inizializzazione una tantum che richiede informazioni sul documento. Ad esempio, se l'applicazione include documenti a dimensione fissa, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento della visualizzazione in base alla dimensione del documento. Se l'applicazione supporta i documenti di dimensioni variabili, usare `OnUpdate` per aggiornare lo scorrimento Limita ogni volta che il documento viene modificato.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::m_nWordWrap](#m_nwordwrap).

##  <a name="onpastenativeobject"></a>  CRichEditView::OnPasteNativeObject

Utilizzare questa funzione per caricare i dati nativi da un elemento incorporato.

```
virtual BOOL OnPasteNativeObject(LPSTORAGE lpStg);
```

### <a name="parameters"></a>Parametri

*lpStg*<br/>
Puntatore a un [IStorage](/windows/desktop/api/objidl/nn-objidl-istorage) oggetto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario, 0.

### <a name="remarks"></a>Note

In genere, è necessario farlo mediante la creazione di un [COleStreamFile](../../mfc/reference/colestreamfile-class.md) tutto il `IStorage`. Il `COleStreamFile` può essere collegato a un archivio e [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) chiamato per caricare i dati.

Si tratta di un'avanzata sottoponibile a override.

Per altre informazioni, vedere [IStorage](/windows/desktop/api/objidl/nn-objidl-istorage) nel SDK di Windows.

##  <a name="onparaalign"></a>  CRichEditView::OnParaAlign

Chiamare questa funzione per modificare l'allineamento di paragrafo per il paragrafo selezionato.

```
void OnParaAlign(WORD wAlign);
```

### <a name="parameters"></a>Parametri

*wAlign*<br/>
Allineamento del paragrafo desiderata. Uno dei valori seguenti:

- PFA_LEFT allineare i paragrafi con il margine sinistro.

- PFA_RIGHT allineare i paragrafi con il margine destro.

- PFA_CENTER Center paragrafi tra i margini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#156](../../mfc/codesnippet/cpp/cricheditview-class_6.cpp)]

##  <a name="onprinterchanged"></a>  CRichEditView::OnPrinterChanged

Eseguire l'override di questa funzione per modificare le caratteristiche di questa visualizzazione rich edit quando cambia la stampante.

```
virtual void OnPrinterChanged(const CDC& dcPrinter);
```

### <a name="parameters"></a>Parametri

*dcPrinter*<br/>
Oggetto [CDC](../../mfc/reference/cdc-class.md) oggetto per la nuova stampante.

### <a name="remarks"></a>Note

L'implementazione predefinita imposta il formato della carta su fisico altezza e larghezza per il dispositivo di output (printer). Se è presente alcun contesto di dispositivo non associati *dcPrinter*, l'implementazione predefinita imposta il formato della carta per 8,5 per 11 pollici.

##  <a name="onreplaceall"></a>  CRichEditView::OnReplaceAll

Chiamato dal framework durante l'elaborazione di sostituire tutti i comandi dalla finestra di dialogo Sostituisci.

```
virtual void OnReplaceAll(
    LPCTSTR lpszFind,
    LPCTSTR lpszReplace,
    BOOL bCase,
    BOOL bWord);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Il testo da sostituire.

*lpszReplace*<br/>
Il testo di sostituzione.

*bCase*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca deve selezionare le parole intere o non.

### <a name="remarks"></a>Note

Chiamare questa funzione per sostituire tutte le occorrenze di un testo specificato con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la visualizzazione corrente.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::FindText](#findtext).

##  <a name="onreplacesel"></a>  CRichEditView::OnReplaceSel

Chiamato dal framework quando l'elaborazione dei comandi di sostituzione dalla finestra di dialogo Sostituisci.

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
Il testo da sostituire.

*bAvanti*<br/>
Indica la direzione della ricerca: TRUE è verso l'alto. FALSE, backup.

*bCase*<br/>
Indica se la ricerca fa distinzione tra maiuscole e minuscole.

*bWord*<br/>
Indica se la ricerca deve selezionare le parole intere o non.

*lpszReplace*<br/>
Il testo di sostituzione.

### <a name="remarks"></a>Note

Chiamare questa funzione per sostituire un'occorrenza del testo specificato con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la visualizzazione corrente.

##  <a name="ontextnotfound"></a>  CRichEditView::OnTextNotFound

Chiamato dal framework ogni volta che una ricerca ha esito negativo.

```
virtual void OnTextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Il testo che non è stato trovato.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per modificare la notifica di output da un [MessageBeep](/windows/desktop/api/winuser/nf-winuser-messagebeep).

Per altre informazioni, vedere [MessageBeep](/windows/desktop/api/winuser/nf-winuser-messagebeep) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#157](../../mfc/codesnippet/cpp/cricheditview-class_7.cpp)]

##  <a name="onupdatechareffect"></a>  CRichEditView::OnUpdateCharEffect

Il framework chiama questa funzione per aggiornare il comando dell'interfaccia utente per i comandi di effetto di carattere.

```
void OnUpdateCharEffect(
    CCmdUI* pCmdUI,
    DWORD dwMask,
    DWORD dwEffect);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto.

*dwMask*<br/>
Indica la maschera di formattazione dei caratteri.

*dwEffect*<br/>
Indica la formattazione effetti carattere.

### <a name="remarks"></a>Note

La maschera *dwMask* specifica quale carattere gli attributi di formattazione da controllare. Il flag *dwEffect* elencare la formattazione attributi su cancellazione/set di caratteri.

Per altre informazioni sul *dwMask* e *dwEffect* parametri e i valori possibili, vedere i membri di dati corrispondente del [CHARFORMAT](/windows/desktop/api/richedit/ns-richedit-_charformat) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#158](../../mfc/codesnippet/cpp/cricheditview-class_8.cpp)]

##  <a name="onupdateparaalign"></a>  CRichEditView::OnUpdateParaAlign

Il framework chiama questa funzione per aggiornare il comando dell'interfaccia utente per i comandi di effetto di paragrafo.

```
void OnUpdateParaAlign(
    CCmdUI* pCmdUI,
    WORD wAlign);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto.

*wAlign*<br/>
L'allineamento di paragrafo da controllare. Uno dei valori seguenti:

- PFA_LEFT allineare i paragrafi con il margine sinistro.

- PFA_RIGHT allineare i paragrafi con il margine destro.

- PFA_CENTER Center paragrafi tra i margini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#159](../../mfc/codesnippet/cpp/cricheditview-class_9.cpp)]

##  <a name="printinsiderect"></a>  CRichEditView::PrintInsideRect

Chiamare questa funzione per formattare un intervallo di testo in un controllo rich edit per rientrare *rectLayout* per il dispositivo specificato dal *pDC*.

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
[RECT](../../mfc/reference/rect-structure1.md) oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) che definisce l'area di output.

*nIndexStart*<br/>
Indice in base zero del primo carattere da formattare.

*nIndexStop*<br/>
Indice in base zero dell'ultimo carattere da formattare.

*bOutput*<br/>
Indica se il testo deve essere eseguito il rendering. Se FALSE, viene misurato solo il testo.

### <a name="return-value"></a>Valore restituito

L'indice dell'ultimo carattere che rientra nell'area di output più uno.

### <a name="remarks"></a>Note

In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::GetPaperSize](#getpapersize).

##  <a name="printpage"></a>  CRichEditView::PrintPage

Chiamare questa funzione per formattare un intervallo di testo in un controllo rich edit per il dispositivo di output specificato da *pDC*.

```
long PrintPage(
    CDC* pDC,
    long nIndexStart,
    long nIndexStop);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo per l'output di pagina.

*nIndexStart*<br/>
Indice in base zero del primo carattere da formattare.

*nIndexStop*<br/>
Indice in base zero dell'ultimo carattere da formattare.

### <a name="return-value"></a>Valore restituito

L'indice dell'ultimo carattere che si adatta a pagina più uno.

### <a name="remarks"></a>Note

Il layout di ogni pagina è controllato dal [GetPageRect](#getpagerect) e [GetPrintRect](#getprintrect). In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.

Si noti che i margini sono relativi alla pagina fisica, non della pagina logica. Di conseguenza, i margini pari a zero spesso ridurrà il testo poiché dispongono di stampanti molte aree non stampabile della pagina. Per evitare il testo di ritaglio, è necessario chiamare [SetMargins](#setmargins) e impostare i margini ragionevoli prima della stampa.

##  <a name="queryacceptdata"></a>  CRichEditView::QueryAcceptData

Chiamato dal framework per incollare un oggetto di modifica avanzata.

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
Puntatore per il [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject) alla query.

*lpcfFormat*<br/>
Puntatore al formato dei dati accettabile.

*dwReco*<br/>
Non usato.

*bReally*<br/>
Indica se l'operazione Incolla deve continuare o meno.

*hMetaFile*<br/>
Handle del metafile utilizzato per disegnare l'icona dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore HRESULT reporting la riuscita dell'operazione.

### <a name="remarks"></a>Note

Eseguire l'override della funzione per gestire l'altra organizzazione degli elementi COM nella classe derivata di documento. Si tratta di un'avanzata sottoponibile a override.

Per altre informazioni sul valore HRESULT e `IDataObject`, vedere [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes) e [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject), rispettivamente, in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#160](../../mfc/codesnippet/cpp/cricheditview-class_10.cpp)]

##  <a name="setcharformat"></a>  CRichEditView::SetCharFormat

Chiamare questa funzione per impostare la formattazione degli attributi per il nuovo testo in questo carattere `CRichEditView` oggetto.

```
void SetCharFormat(CHARFORMAT2 cf);
```

### <a name="parameters"></a>Parametri

*cloud Foundry*<br/>
[CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) struttura che contiene il carattere di nuova impostazione predefinita gli attributi di formattazione.

### <a name="remarks"></a>Note

Solo gli attributi specificati dal `dwMask` appartenente *cf* sono stati modificati da questa funzione.

Per altre informazioni, vedere [EM_SETCHARFORMAT](/windows/desktop/Controls/em-setcharformat) messaggio e [CHARFORMAT2](/windows/desktop/api/richedit/ns-richedit-charformat2a) struttura nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]

##  <a name="setmargins"></a>  CRichEditView::SetMargins

Chiamare questa funzione per impostare i margini di stampa per questa visualizzazione rich edit.

```
void SetMargins(const CRect& rectMargin);
```

### <a name="parameters"></a>Parametri

*rectMargin*<br/>
I nuovi valori dei margini di stampa, misurata in MM_TWIPS.

### <a name="remarks"></a>Note

Se [m_nWordWrap](#m_nwordwrap) viene `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo l'uso di questa funzione per modificare le caratteristiche di stampa.

Si noti che i margini utilizzati da [PrintPage](#printpage) sono relativi alla pagina fisica, non della pagina logica. Di conseguenza, i margini pari a zero spesso ridurrà il testo poiché dispongono di stampanti molte aree non stampabile della pagina. Per evitare il testo di ritaglio, è necessario chiamare usare `SetMargins` per impostare i margini di stampa ragionevole prima della stampa.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::GetPaperSize](#getpapersize).

##  <a name="setpapersize"></a>  CRichEditView::SetPaperSize

Chiamare questa funzione per impostare il formato della carta per la stampa di questa visualizzazione rich edit.

```
void SetPaperSize(CSize sizePaper);
```

### <a name="parameters"></a>Parametri

*sizePaper*<br/>
I nuovi valori di dimensioni di documento per la stampa, misurata in MM_TWIPS.

### <a name="remarks"></a>Note

Se [m_nWordWrap](#m_nwordwrap) viene `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo l'uso di questa funzione per modificare le caratteristiche di stampa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#161](../../mfc/codesnippet/cpp/cricheditview-class_11.cpp)]

##  <a name="setparaformat"></a>  CRichEditView::SetParaFormat

Chiamare questa funzione per impostare gli attributi per la selezione corrente in questo oggetto di formattazione di paragrafo `CRichEditView` oggetto.

```
BOOL SetParaFormat(PARAFORMAT2& pf);
```

### <a name="parameters"></a>Parametri

*pf*<br/>
[PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) gli attributi di formattazione di paragrafo struttura che contiene il nuovo valore predefinito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo. in caso contrario, 0.

### <a name="remarks"></a>Note

Solo gli attributi specificati dal `dwMask` appartenente *pf* sono stati modificati da questa funzione.

Per altre informazioni, vedere [EM_SETPARAFORMAT](/windows/desktop/Controls/em-setparaformat) messaggio e [PARAFORMAT2](/windows/desktop/api/richedit/ns-richedit-paraformat2) struttura nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#162](../../mfc/codesnippet/cpp/cricheditview-class_12.cpp)]

##  <a name="textnotfound"></a>  CRichEditView::TextNotFound

Chiamare questa funzione per reimpostare lo stato di ricerca interna del [CRichEditView](../../mfc/reference/cricheditview-class.md) controllo dopo una chiamata a [FindText](#findtext).

```
void TextNotFound(LPCTSTR lpszFind);
```

### <a name="parameters"></a>Parametri

*lpszFind*<br/>
Contiene la stringa di testo che non è stata trovata.

### <a name="remarks"></a>Note

È consigliabile che questo metodo deve essere chiamato immediatamente dopo le chiamate non riuscite al [FindText](#findtext) in modo che lo stato di ricerca interno del controllo viene reimpostato in modo corretto.

Il *lpszFind* parametro deve includere lo stesso contenuto la stringa specificata nei [FindText](#findtext). Dopo aver reimpostato lo stato di ricerca interno, questo metodo chiama il [OnTextNotFound](#ontextnotfound) metodo con la stringa di ricerca specificato.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CRichEditView::FindText](#findtext).

##  <a name="wrapchanged"></a>  CRichEditView::WrapChanged

Chiamare questa funzione quando sono state modificate le caratteristiche di stampa ( [SetMargins](#setmargins) oppure [SetPaperSize](#setpapersize)).

```
virtual void WrapChanged();
```

### <a name="remarks"></a>Note

Override di questa funzione per modificare il modo in cui il ricco Modifica vista risponde alle modifiche apportate [m_nWordWrap](#m_nwordwrap) o le caratteristiche di stampa ( [OnPrinterChanged](#onprinterchanged)).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#163](../../mfc/codesnippet/cpp/cricheditview-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC WORDPAD](../../visual-cpp-samples.md)<br/>
[Classe CCtrlView](../../mfc/reference/cctrlview-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CRichEditDoc](../../mfc/reference/cricheditdoc-class.md)<br/>
[Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)

---
title: CRichEditView (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 353a45cad513e9c862b6ae6c15ab5383d3d65d48
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33378956"
---
# <a name="cricheditview-class"></a>CRichEditView (classe)
Con [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce la funzionalità del controllo rich edit nel contesto dell'architettura documento/visualizzazione MFC.  
  
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
|[CRichEditView::AdjustDialogPosition](#adjustdialogposition)|Sposta una finestra di dialogo in modo che non nasconda la selezione corrente.|  
|[CRichEditView::CanPaste](#canpaste)|Indica se gli Appunti contengono dati che possono essere incollati nella visualizzazione rich edit.|  
|[CRichEditView::DoPaste](#dopaste)|Incolla un elemento OLE in questa visualizzazione rich edit.|  
|[CRichEditView::FindText](#findtext)|Trova il testo specificato, richiamare il cursore di attesa.|  
|[CRichEditView::FindTextSimple](#findtextsimple)|Trova il testo specificato.|  
|[CRichEditView::GetCharFormatSelection](#getcharformatselection)|Recupera il carattere degli attributi per la selezione corrente di formattazione.|  
|[CRichEditView::GetDocument](#getdocument)|Recupera un puntatore all'oggetto correlato [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md).|  
|[CRichEditView::GetInPlaceActiveItem](#getinplaceactiveitem)|Recupera l'elemento OLE che è attualmente attiva nella visualizzazione rich edit.|  
|[CRichEditView::GetMargins](#getmargins)|Recupera i margini per questa visualizzazione rich edit.|  
|[CRichEditView::GetPageRect](#getpagerect)|Recupera il rettangolo di pagina per questa visualizzazione rich edit.|  
|[CRichEditView::GetPaperSize](#getpapersize)|Recupera il formato carta per questa visualizzazione rich edit.|  
|[CRichEditView::GetParaFormatSelection](#getparaformatselection)|Recupera gli attributi per la selezione corrente di formattazione di paragrafo.|  
|[CRichEditView::GetPrintRect](#getprintrect)|Recupera il rettangolo di stampato per questa visualizzazione rich edit.|  
|[CRichEditView::GetPrintWidth](#getprintwidth)|Recupera la larghezza della stampa per questa visualizzazione rich edit.|  
|[CRichEditView:: GetRichEditCtrl](#getricheditctrl)|Recupera il controllo rich edit.|  
|[CRichEditView::GetSelectedItem](#getselecteditem)|Recupera l'elemento selezionato dalla visualizzazione di modifica avanzate.|  
|[CRichEditView::GetTextLength](#gettextlength)|Recupera la lunghezza del testo di visualizzazione rich edit.|  
|[CRichEditView::GetTextLengthEx](#gettextlengthex)|Recupera il numero di caratteri o byte nella visualizzazione rich edit. Elenco di flag espanso per il metodo per determinare la lunghezza.|  
|[CRichEditView::InsertFileAsObject](#insertfileasobject)|Inserisce un file come un elemento OLE.|  
|[CRichEditView::InsertItem](#insertitem)|Inserisce un nuovo elemento come un elemento OLE.|  
|[CRichEditView::IsRichEditFormat](#isricheditformat)|Indica se gli Appunti contengono dati in un formato di testo o RTF.|  
|[CRichEditView::OnCharEffect](#onchareffect)|Attiva o disattiva la formattazione per la selezione corrente.|  
|[CRichEditView::OnParaAlign](#onparaalign)|Modifica l'allineamento dei paragrafi.|  
|[CRichEditView::OnUpdateCharEffect](#onupdatechareffect)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubblico di carattere.|  
|[CRichEditView::OnUpdateParaAlign](#onupdateparaalign)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubblico di paragrafo.|  
|[CRichEditView::PrintInsideRect](#printinsiderect)|Formatta il testo specificato all'interno del rettangolo specificato.|  
|[CRichEditView::PrintPage](#printpage)|Formatta il testo specificato all'interno della pagina specificata.|  
|[CRichEditView::SetCharFormat](#setcharformat)|Imposta la formattazione degli attributi per la selezione corrente.|  
|[CRichEditView::SetMargins](#setmargins)|Imposta i margini per questo rich Modifica visualizzazione.|  
|[CRichEditView::SetPaperSize](#setpapersize)|Imposta il formato carta per questa visualizzazione rich edit.|  
|[CRichEditView::SetParaFormat](#setparaformat)|Imposta gli attributi per la selezione corrente di formattazione di paragrafo.|  
|[CRichEditView::TextNotFound](#textnotfound)|Reimposta lo stato della ricerca interna del controllo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::GetClipboardData](#getclipboarddata)|Recupera un oggetto Clipboard per un intervallo in questa visualizzazione rich edit.|  
|[CRichEditView::GetContextMenu](#getcontextmenu)|Recupera un menu di scelta rapida da utilizzare su un pulsante destro del mouse verso il basso.|  
|[CRichEditView::IsSelected](#isselected)|Indica se l'elemento OLE specificata sia selezionata o meno.|  
|[CRichEditView::OnFindNext](#onfindnext)|Cerca l'occorrenza successiva di una sottostringa.|  
|[CRichEditView::OnInitialUpdate](#oninitialupdate)|Aggiorna una vista quando viene inizialmente associato a un documento.|  
|[CRichEditView::OnPasteNativeObject](#onpastenativeobject)|Recupera dati nativi da un elemento OLE.|  
|[CRichEditView::OnPrinterChanged](#onprinterchanged)|Imposta le caratteristiche di stampate al dispositivo specificato.|  
|[CRichEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|  
|[CRichEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|  
|[CRichEditView::OnTextNotFound](#ontextnotfound)|Gestisce una notifica all'utente che il testo richiesto non è stato trovato.|  
|[CRichEditView::QueryAcceptData](#queryacceptdata)|Le query sui dati è presente il `IDataObject`.|  
|[CRichEditView::WrapChanged](#wrapchanged)|Consente di regolare il dispositivo di output di destinazione per questo rich edit in base al valore di visualizzazione `m_nWordWrap`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::m_nBulletIndent](#m_nbulletindent)|Indica la quantità di rientro per elenchi puntati.|  
|[CRichEditView::m_nWordWrap](#m_nwordwrap)|Indica i vincoli di incapsulamento di word.|  
  
## <a name="remarks"></a>Note  
 Un "controllo rich edit" è una finestra in cui l'utente può immettere e modificare il testo. Il testo può essere assegnato formattazione di carattere e paragrafo e può includere oggetti OLE incorporati. I controlli rich edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare qualsiasi componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente.  
  
 `CRichEditView` mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc` gestisce l'elenco di elementi OLE sul client che sono nella vista. `CRichEditCntrItem` fornisce accesso a elemento client OLE lato contenitore.  
  
 Questo controllo comune di Windows (e pertanto il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Per un esempio dell'utilizzo di una visualizzazione rich edit in un'applicazione MFC, vedere il [WORDPAD](../../visual-cpp-samples.md) applicazione di esempio.  
  
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
 *pDlg*  
 Puntatore a un oggetto `CDialog`.  
  
##  <a name="canpaste"></a>  CRichEditView::CanPaste  
 Chiamare questa funzione per determinare se gli Appunti contengono informazioni che possono essere incollate in questa visualizzazione rich edit.  
  
```  
BOOL CanPaste() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli Appunti contengono dati in un formato che possa accettare questa visualizzazione rich edit; in caso contrario, 0.  
  
##  <a name="cricheditview"></a>  CRichEditView::CRichEditView  
 Chiamare questa funzione per creare un `CRichEditView` oggetto.  
  
```  
CRichEditView();
```  
  
##  <a name="dopaste"></a>  CRichEditView::DoPaste  
 Chiamare questa funzione per incollare l'elemento OLE in `dataobj` in questa rich edit documento/visualizzazione.  
  
```  
void DoPaste(
    COleDataObject& dataobj,  
    CLIPFORMAT cf,  
    HMETAFILEPICT hMetaPict);
```  
  
### <a name="parameters"></a>Parametri  
 `dataobj`  
 Il [COleDataObject](../../mfc/reference/coledataobject-class.md) contenente i dati da incollare.  
  
 `cf`  
 Il formato degli Appunti desiderato.  
  
 `hMetaPict`  
 Metafile che rappresenta l'elemento da incollare.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione come parte dell'implementazione predefinita di [QueryAcceptData](#queryacceptdata).  
  
 Questa funzione determina il tipo di Incolla in base ai risultati del gestore per Incolla speciale. Se `cf` è 0, il nuovo elemento viene utilizzata la rappresentazione sotto forma di icona corrente. Se `cf` è diverso da zero e `hMetaPict` non **NULL**, utilizza il nuovo elemento `hMetaPict` per la rappresentazione.  
  
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
 `lpszFind`  
 Contiene la stringa da cercare.  
  
 `bCase`  
 Indica se la ricerca viene fatta distinzione tra maiuscole e minuscole.  
  
 `bWord`  
 Indica se la ricerca deve corrispondere solo parole intere e non parti di parole.  
  
 `bNext`  
 Indica la direzione della ricerca. Se **TRUE**, la direzione di ricerca è verso la fine del buffer. Se **FALSE**, la direzione di ricerca è verso l'inizio del buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `lpszFind` testo viene trovato; in caso contrario 0.  
  
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
 `lpszFind`  
 Contiene la stringa da cercare.  
  
 `bCase`  
 Indica se la ricerca viene fatta distinzione tra maiuscole e minuscole.  
  
 `bWord`  
 Indica se la ricerca deve corrispondere solo parole intere e non parti di parole.  
  
 `bNext`  
 Indica la direzione della ricerca. Se **TRUE**, la direzione di ricerca è verso la fine del buffer. Se **FALSE**, la direzione di ricerca è verso l'inizio del buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `lpszFind` testo viene trovato; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::FindText](#findtext).  
  
##  <a name="getcharformatselection"></a>  CRichEditView::GetCharFormatSelection  
 Chiamare questa funzione per ottenere la formattazione degli attributi della selezione corrente.  
  
```  
CHARFORMAT2& GetCharFormatSelection();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) struttura che contiene il carattere degli attributi della selezione corrente di formattazione.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il [EM_GETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb788026) messaggio e [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) struttura in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]  
  
##  <a name="getclipboarddata"></a>  CRichEditView::GetClipboardData  
 Il framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774315).  
  
```  
virtual HRESULT GetClipboardData(
    CHARRANGE* lpchrg,  
    DWORD dwReco,  
    LPDATAOBJECT lpRichDataObj,  
    LPDATAOBJECT* lplpdataobj);
```  
  
### <a name="parameters"></a>Parametri  
 `lpchrg`  
 Puntatore al [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) struttura che specifica l'intervallo di caratteri (e gli elementi OLE) per copiare l'oggetto dati specificato da `lplpdataobj`.  
  
 `dwReco`  
 Flag di operazione degli Appunti. Può essere uno di questi valori.  
  
- **RECO_COPY** copiare negli Appunti.  
  
- **RECO_CUT** tagliare negli Appunti.  
  
- **RECO_DRAG** trascinamento (trascinamento della selezione).  
  
- **RECO_DROP** Drop operazione (trascinamento della selezione).  
  
- **RECO_PASTE** Incolla dagli Appunti.  
  
 `lpRichDataObj`  
 Puntatore a un [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) oggetto che contiene i dati negli Appunti il ricco di controllo di modifica ( [IRichEditOle::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774341)).  
  
 `lplpdataobj`  
 Puntatore alla variabile che riceve l'indirizzo del puntatore di `IDataObject` oggetto che rappresenta l'intervallo specificato nel `lpchrg` parametro. Il valore di `lplpdataobj` viene ignorata se viene restituito un errore.  
  
### <a name="return-value"></a>Valore restituito  
 Un `HRESULT` valore reporting la riuscita dell'operazione. Per ulteriori informazioni su `HRESULT`, vedere [struttura dei codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito indica l'esito positivo, **IRichEditOleCallback::GetClipboardData** restituisce il `IDataObject` accede `lplpdataobj`; in caso contrario, restituisce l'accede `lpRichDataObj`. Eseguire l'override di questa funzione per fornire i propri dati negli Appunti. L'implementazione predefinita di questa funzione restituisce **E_NOTIMPL**.  
  
 Si tratta di un avanzato sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IRichEditOle::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774341), [IRichEditOleCallback::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774315), e [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) in Windows SDK e vedere [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) in Windows SDK.  
  
##  <a name="getcontextmenu"></a>  CRichEditView::GetContextMenu  
 Il framework chiama questa funzione come parte dell'elaborazione di [IRichEditOleCallback::GetContextMenu](http://msdn.microsoft.com/library/windows/desktop/bb774317).  
  
```  
virtual HMENU GetContextMenu(
    WORD seltyp,  
    LPOLEOBJECT lpoleobj,  
    CHARRANGE* lpchrg);
```  
  
### <a name="parameters"></a>Parametri  
 *seltyp*  
 Il tipo di selezione. I valori di tipo di selezione sono descritti nella sezione Osservazioni.  
  
 `lpoleobj`  
 Puntatore a un **OLEOBJECT** struttura che specifica il primo oggetto OLE selezionato, se la selezione contiene uno o più elementi OLE. Se la selezione non contiene elementi, `lpoleobj` è **NULL**. Il **OLEOBJECT** struttura contiene un puntatore a un oggetto OLE v-table.  
  
 `lpchrg`  
 Puntatore a un [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) struttura che contiene la selezione corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Questa funzione è una tipico parte destra del pulsante del mouse verso il basso l'elaborazione.  
  
 Il tipo di selezione può essere qualsiasi combinazione dei flag seguenti:  
  
- `SEL_EMPTY` Indica che non è stata effettuata alcuna selezione corrente.  
  
- `SEL_TEXT` Indica che la selezione corrente contiene testo.  
  
- `SEL_OBJECT` Indica che la selezione corrente contiene almeno un elemento OLE.  
  
- `SEL_MULTICHAR` Indica che la selezione corrente contiene più di un carattere di testo.  
  
- `SEL_MULTIOBJECT` Indica che la selezione corrente contiene più di un oggetto OLE.  
  
 L'implementazione predefinita restituisce **NULL**. Si tratta di un avanzato sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IRichEditOleCallback::GetContextMenu](http://msdn.microsoft.com/library/windows/desktop/bb774317) e [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) in Windows SDK.  
  
 Per ulteriori informazioni sul **OLEOBJECT** del tipo, vedere l'articolo di strutture di dati OLE e allocazione di struttura nel *OLE Knowledge Base*.  
  
##  <a name="getdocument"></a>  CRichEditView::GetDocument  
 Chiamare questa funzione per ottenere un puntatore per il `CRichEditDoc` associato alla vista.  
  
```  
CRichEditDoc* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) associato il `CRichEditView` oggetto.  
  
##  <a name="getinplaceactiveitem"></a>  CRichEditView::GetInPlaceActiveItem  
 Chiamata a questa funzione per ottenere OLE elemento che è attualmente attivato sul posto in questa `CRichEditView` oggetto.  
  
```  
CRichEditCntrItem* GetInPlaceActiveItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una singola, sul posto attivo [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto in questa visualizzazione rich edit; **NULL** se non vi è alcun elemento OLE attualmente nello stato attivo sul posto.  
  
##  <a name="getmargins"></a>  CRichEditView::GetMargins  
 Chiamare questa funzione per recuperare i margini correnti utilizzati per la stampa.  
  
```  
CRect GetMargins() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I margini utilizzati per la stampa, misurato in `MM_TWIPS`.  
  
##  <a name="getpagerect"></a>  CRichEditView::GetPageRect  
 Chiamare questa funzione per ottenere le dimensioni della pagina utilizzato per la stampa.  
  
```  
CRect GetPageRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I limiti della pagina utilizzato per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="remarks"></a>Note  
 Questo valore è basato sul formato.  
  
##  <a name="getpapersize"></a>  CRichEditView::GetPaperSize  
 Chiamare questa funzione per recuperare la dimensione del documento corrente.  
  
```  
CSize GetPaperSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il formato della carta utilizzato per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#153](../../mfc/codesnippet/cpp/cricheditview-class_3.cpp)]  
  
##  <a name="getparaformatselection"></a>  CRichEditView::GetParaFormatSelection  
 Chiamare questa funzione per ottenere gli attributi della selezione corrente di formattazione di paragrafo.  
  
```  
PARAFORMAT2& GetParaFormatSelection();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) struttura che contiene gli attributi della selezione corrente di formattazione di paragrafo.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [EM_GETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774182) messaggio e [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) struttura in Windows SDK.  
  
##  <a name="getprintrect"></a>  CRichEditView::GetPrintRect  
 Chiamare questa funzione per recuperare i limiti dell'area di stampa all'interno del rettangolo di pagina.  
  
```  
CRect GetPrintRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I limiti dell'area dell'immagine utilizzata per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#154](../../mfc/codesnippet/cpp/cricheditview-class_4.cpp)]  
  
##  <a name="getprintwidth"></a>  CRichEditView::GetPrintWidth  
 Chiamare questa funzione per determinare la larghezza dell'area di stampa.  
  
```  
int GetPrintWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza dell'area di stampa, misurata in `MM_TWIPS`.  
  
##  <a name="getricheditctrl"></a>  CRichEditView:: GetRichEditCtrl  
 Chiamare questa funzione per recuperare il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) oggetto associato di `CRichEditView` oggetto.  
  
```  
CRichEditCtrl& GetRichEditCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `CRichEditCtrl` oggetto per la visualizzazione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::FindText](#findtext).  
  
##  <a name="getselecteditem"></a>  CRichEditView::GetSelectedItem  
 Chiamare questa funzione per recuperare l'elemento OLE (un `CRichEditCntrItem` oggetto) attualmente selezionato in questa `CRichEditView` oggetto.  
  
```  
CRichEditCntrItem* GetSelectedItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) selezionato nell'oggetto di `CRichEditView` oggetto; **NULL** se in questa visualizzazione è selezionato alcun elemento.  
  
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
 `dwFlags`  
 Valore che specifica il metodo da utilizzare per determinare la lunghezza del testo. Questo membro può essere uno o più dei valori elencati nel membro flag di [GETTEXTLENGTHEX](http://msdn.microsoft.com/library/windows/desktop/bb787915) descritto in Windows SDK.  
  
 `uCodePage`  
 Tabella codici per la conversione (CP_ACP per la tabella codici ANSI, 1200 per Unicode).  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri o byte di controllo di modifica. Se sono stati impostati i flag incompatibile `dwFlags`, questa funzione membro restituisce `E_INVALIDARG`.  
  
### <a name="remarks"></a>Note  
 `GetTextLengthEx` offre ulteriori metodi per determinare la lunghezza del testo. Supporta la funzionalità Rich Edit 2.0. Per ulteriori informazioni, vedere [sui controlli Rich Edit](http://msdn.microsoft.com/library/windows/desktop/bb787873) in Windows SDK.  
  
##  <a name="insertfileasobject"></a>  CRichEditView::InsertFileAsObject  
 Chiamare questa funzione per inserire il file specificato (come un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto) in un formato RTF Modifica visualizzazione.  
  
```  
void InsertFileAsObject(LPCTSTR lpszFileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Stringa contenente il nome del file da inserire.  
  
##  <a name="insertitem"></a>  CRichEditView::InsertItem  
 Chiamare questa funzione per inserire un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto in una visualizzazione rich edit.  
  
```  
HRESULT InsertItem(CRichEditCntrItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'elemento da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Un `HRESULT` valore che indica la riuscita dell'inserimento.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su `HRESULT`, vedere [struttura dei codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) in Windows SDK.  
  
##  <a name="isricheditformat"></a>  CRichEditView::IsRichEditFormat  
 Chiamare questa funzione per determinare se `cf` è un formato degli Appunti, ovvero testo, testo o testo RTF con elementi OLE.  
  
```  
static BOOL AFX_CDECL IsRichEditFormat(CLIPFORMAT cf);
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 Il formato degli Appunti di interesse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `cf` è un formato degli Appunti avanzato di modifica o di testo.  
  
##  <a name="isselected"></a>  CRichEditView::IsSelected  
 Chiamare questa funzione per determinare se l'elemento OLE specificato è attualmente selezionato in questa vista.  
  
```  
virtual BOOL IsSelected(const CObject* pDocItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pDocItem`  
 Puntatore a un oggetto nella visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è selezionato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se la classe di visualizzazione derivata dispone di un metodo diverso per la gestione di selezione di elementi OLE.  
  
##  <a name="m_nbulletindent"></a>  CRichEditView::m_nBulletIndent  
 Il rientro per gli elementi punto elenco in un elenco. Per impostazione predefinita, le unità di 720, ovvero 1/2 pollici.  
  
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
  
- `WrapNone` Non indica nessun ritorno a capo automatico word.  
  
- `WrapToWindow` Indica il ritorno a capo in base alla larghezza della finestra.  
  
- `WrapToTargetDevice` Indica il ritorno a capo in base alle caratteristiche del dispositivo di destinazione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::WrapChanged](#wrapchanged).  
  
##  <a name="onchareffect"></a>  CRichEditView::OnCharEffect  
 Chiamare questa funzione per attivare o disattivare la formattazione gli effetti per la selezione corrente.  
  
```  
void OnCharEffect(
    DWORD dwMask,  
    DWORD dwEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `dwMask`  
 La formattazione degli effetti modificare nella selezione corrente.  
  
 `dwEffect`  
 L'elenco desiderato di attivare o disattivare gli effetti di formattazione di caratteri.  
  
### <a name="remarks"></a>Note  
 Ogni chiamata a questa funzione attiva o disattiva gli effetti di formattazione specificati per la selezione corrente.  
  
 Per ulteriori informazioni sul `dwMask` e `dwEffect` parametri e i valori possibili, vedere i membri di dati corrispondenti di [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#155](../../mfc/codesnippet/cpp/cricheditview-class_5.cpp)]  
  
##  <a name="onfindnext"></a>  CRichEditView::OnFindNext  
 Chiamato dal framework quando l'esecuzione dei comandi nella finestra di dialogo Trova e sostituisci.  
  
```  
virtual void OnFindNext(
    LPCTSTR lpszFind,  
    BOOL bNext,  
    BOOL bCase,  
    BOOL bWord);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFind`  
 Stringa da trovare.  
  
 `bNext`  
 La direzione di ricerca: **TRUE** indica verso l'alto. **FALSE**verso l'alto.  
  
 `bCase`  
 Indica se la ricerca viene fatta distinzione tra maiuscole e minuscole.  
  
 `bWord`  
 Indica se la ricerca per ricercare solo parole intere solo o non.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per trovare testo all'interno di `CRichEditView`. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la classe derivata di visualizzazione.  
  
##  <a name="oninitialupdate"></a>  CRichEditView::OnInitialUpdate  
 Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima che la visualizzazione iniziale.  
  
```  
virtual void OnInitialUpdate();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama il [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) funzione membro senza informazioni hint (vale a dire usando i valori predefiniti pari a 0 per il `lHint` parametro e **NULL** per il `pHint` parametro). Eseguire l'override di questa funzione per eseguire qualsiasi inizializzazione che richiede informazioni sul documento. Ad esempio, se l'applicazione presenta dimensioni fisse di documenti, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento di una visualizzazione in base alla dimensione del documento. Se l'applicazione supporta i documenti di dimensioni variabili, utilizzare `OnUpdate` per aggiornare lo scorrimento Limita ogni volta il documento viene modificato.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::m_nWordWrap](#m_nwordwrap).  
  
##  <a name="onpastenativeobject"></a>  CRichEditView::OnPasteNativeObject  
 Utilizzare questa funzione per caricare i dati nativi da un elemento incorporato.  
  
```  
virtual BOOL OnPasteNativeObject(LPSTORAGE lpStg);
```  
  
### <a name="parameters"></a>Parametri  
 *lpStg*  
 Puntatore a un [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 In genere, è necessario farlo mediante la creazione di un [COleStreamFile](../../mfc/reference/colestreamfile-class.md) intorno il `IStorage`. Il `COleStreamFile` può essere collegato a un archivio e [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) chiamato per caricare i dati.  
  
 Si tratta di un avanzato sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) in Windows SDK.  
  
##  <a name="onparaalign"></a>  CRichEditView::OnParaAlign  
 Chiamare questa funzione per modificare l'allineamento del paragrafo per i paragrafi selezionati.  
  
```  
void OnParaAlign(WORD wAlign);
```  
  
### <a name="parameters"></a>Parametri  
 `wAlign`  
 Allineamento del paragrafo desiderato. Uno dei valori seguenti:  
  
- `PFA_LEFT` Consente di allineare i paragrafi con il margine sinistro.  
  
- `PFA_RIGHT` Consente di allineare i paragrafi con il margine destro.  
  
- `PFA_CENTER` Allineare al centro paragrafi tra i margini.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#156](../../mfc/codesnippet/cpp/cricheditview-class_6.cpp)]  
  
##  <a name="onprinterchanged"></a>  CRichEditView::OnPrinterChanged  
 Eseguire l'override di questa funzione per modificare le caratteristiche per questa visualizzazione rich edit quando cambia la stampante.  
  
```  
virtual void OnPrinterChanged(const CDC& dcPrinter);
```  
  
### <a name="parameters"></a>Parametri  
 `dcPrinter`  
 Oggetto [CDC](../../mfc/reference/cdc-class.md) oggetto per la nuova stampante.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita imposta il formato della carta fisico altezza e larghezza per il dispositivo di output (stampante). Se è presente alcun contesto di dispositivo non associati `dcPrinter`, l'implementazione predefinita imposta il formato carta per 8,5 per 11 pollici.  
  
##  <a name="onreplaceall"></a>  CRichEditView::OnReplaceAll  
 Chiamato dal framework durante l'elaborazione di sostituire tutti i comandi nella finestra di dialogo Sostituisci.  
  
```  
virtual void OnReplaceAll(
    LPCTSTR lpszFind,  
    LPCTSTR lpszReplace,  
    BOOL bCase,  
    BOOL bWord);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFind`  
 Il testo da sostituire.  
  
 `lpszReplace`  
 Il testo di sostituzione.  
  
 `bCase`  
 Indica se la ricerca viene fatta distinzione tra maiuscole e minuscole.  
  
 `bWord`  
 Indica se la ricerca è necessario selezionare solo parole intere o non.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per sostituire tutte le occorrenze del testo specificato con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la visualizzazione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::FindText](#findtext).  
  
##  <a name="onreplacesel"></a>  CRichEditView::OnReplaceSel  
 Chiamato dal framework durante l'elaborazione sostituire comandi nella finestra di dialogo Sostituisci.  
  
```  
virtual void OnReplaceSel(
    LPCTSTR lpszFind,  
    BOOL bNext,  
    BOOL bCase,  
    BOOL bWord,  
    LPCTSTR lpszReplace);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFind`  
 Il testo da sostituire.  
  
 `bNext`  
 Indica la direzione della ricerca: **TRUE** è premuto; **FALSE**verso l'alto.  
  
 `bCase`  
 Indica se la ricerca viene fatta distinzione tra maiuscole e minuscole.  
  
 `bWord`  
 Indica se la ricerca è necessario selezionare solo parole intere o non.  
  
 `lpszReplace`  
 Il testo di sostituzione.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per sostituire un'occorrenza del testo specificato con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la visualizzazione.  
  
##  <a name="ontextnotfound"></a>  CRichEditView::OnTextNotFound  
 Chiamato dal framework quando una ricerca ha esito negativo.  
  
```  
virtual void OnTextNotFound(LPCTSTR lpszFind);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFind`  
 Il testo che non è stato trovato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per modificare la notifica di output da un [MessageBeep](http://msdn.microsoft.com/library/windows/desktop/ms680356).  
  
 Per ulteriori informazioni, vedere [MessageBeep](http://msdn.microsoft.com/library/windows/desktop/ms680356) in Windows SDK.  
  
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
 `pCmdUI`  
 Puntatore a un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto.  
  
 `dwMask`  
 Indica il carattere di maschera di formattazione.  
  
 `dwEffect`  
 Indica l'effetto di formattazione di caratteri.  
  
### <a name="remarks"></a>Note  
 La maschera `dwMask` specifica quale carattere per controllare gli attributi di formattazione. I flag `dwEffect` elenco la formattazione di attributi, la cancellazione set di caratteri.  
  
 Per ulteriori informazioni sul `dwMask` e `dwEffect` parametri e i valori possibili, vedere i membri di dati corrispondenti di [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) in Windows SDK.  
  
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
 `pCmdUI`  
 Puntatore a un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto.  
  
 `wAlign`  
 Per controllare l'allineamento del paragrafo. Uno dei valori seguenti:  
  
- `PFA_LEFT` Consente di allineare i paragrafi con il margine sinistro.  
  
- `PFA_RIGHT` Consente di allineare i paragrafi con il margine destro.  
  
- `PFA_CENTER` Allineare al centro paragrafi tra i margini.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#159](../../mfc/codesnippet/cpp/cricheditview-class_9.cpp)]  
  
##  <a name="printinsiderect"></a>  CRichEditView::PrintInsideRect  
 Chiamare questa funzione per formattare un intervallo di testo in un controllo rich edit per rientrare *rectLayout* per il dispositivo specificato dal `pDC`.  
  
```  
long PrintInsideRect(
    CDC* pDC,  
    RECT& rectLayout,  
    long nIndexStart,  
    long nIndexStop,  
    BOOL bOutput);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un contesto di dispositivo per l'area di output.  
  
 *rectLayout*  
 [RECT](../../mfc/reference/rect-structure1.md) oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) che definisce l'area di output.  
  
 `nIndexStart`  
 Indice in base zero del primo carattere da formattare.  
  
 `nIndexStop`  
 Indice in base zero dell'ultimo carattere da formattare.  
  
 *bOutput*  
 Indica se il testo deve essere eseguito il rendering. Se **FALSE**, il testo appena viene misurato.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'ultimo carattere che rientra nell'area di output più uno.  
  
### <a name="remarks"></a>Note  
 In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::GetPaperSize](#getpapersize).  
  
##  <a name="printpage"></a>  CRichEditView::PrintPage  
 Chiamare questa funzione per un intervallo di testo in un controllo rich edit per il dispositivo di output specificato dal formato `pDC`.  
  
```  
long PrintPage(
    CDC* pDC,  
    long nIndexStart,  
    long nIndexStop);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un contesto di dispositivo per l'output della pagina.  
  
 `nIndexStart`  
 Indice in base zero del primo carattere da formattare.  
  
 `nIndexStop`  
 Indice in base zero dell'ultimo carattere da formattare.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'ultimo carattere che rientra in una pagina più uno.  
  
### <a name="remarks"></a>Note  
 Il layout di ogni pagina viene controllato da [GetPageRect](#getpagerect) e [GetPrintRect](#getprintrect). In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.  
  
 Si noti che i margini sono relativi alla pagina fisica, non la pagina logica. Di conseguenza, i margini pari a zero spesso ridurrà il testo poiché molte stampanti dispongono di aree della pagina. Per evitare la riduzione del testo, è necessario chiamare [SetMargins](#setmargins) e impostare i margini ragionevoli prima della stampa.  
  
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
 *lpdataobj*  
 Puntatore al [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) alla query.  
  
 *lpcfFormat*  
 Puntatore al formato dei dati accettabile.  
  
 `dwReco`  
 Non usato.  
  
 *bReally*  
 Indica se l'operazione Incolla deve continuare o meno.  
  
 `hMetaFile`  
 Handle per il metafile utilizzato per disegnare l'icona dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Un `HRESULT` valore reporting la riuscita dell'operazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override della funzione per gestire l'altra organizzazione degli elementi COM nella classe derivata di documento. Si tratta di un avanzato sottoponibile a override.  
  
 Per ulteriori informazioni su `HRESULT` e `IDataObject`, vedere [struttura dei codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) e [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421), rispettivamente, in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#160](../../mfc/codesnippet/cpp/cricheditview-class_10.cpp)]  
  
##  <a name="setcharformat"></a>  CRichEditView::SetCharFormat  
 Chiamare questa funzione per impostare la formattazione degli attributi per il nuovo testo in questo carattere `CRichEditView` oggetto.  
  
```  
void SetCharFormat(CHARFORMAT2 cf);
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) struttura che contiene il carattere di nuova impostazione predefinita gli attributi di formattazione.  
  
### <a name="remarks"></a>Note  
 Solo gli attributi specificati dal **dwMask** membro di `cf` vengono modificati dalla funzione.  
  
 Per ulteriori informazioni, vedere [EM_SETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774230) messaggio e [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) struttura in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#152](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]  
  
##  <a name="setmargins"></a>  CRichEditView::SetMargins  
 Chiamare questa funzione per impostare i margini di stampa per questa visualizzazione rich edit.  
  
```  
void SetMargins(const CRect& rectMargin);
```  
  
### <a name="parameters"></a>Parametri  
 *rectMargin*  
 I nuovi valori dei margini per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="remarks"></a>Note  
 Se [m_nWordWrap](#m_nwordwrap) è `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo l'utilizzo di questa funzione per modificare le caratteristiche di stampare.  
  
 Si noti che i margini utilizzati da [PrintPage](#printpage) sono relativi alla pagina fisica, non la pagina logica. Di conseguenza, i margini pari a zero spesso ridurrà il testo poiché molte stampanti dispongono di aree della pagina. Per evitare la riduzione del testo, è necessario chiamare utilizzare `SetMargins` per impostare i margini di stampa ragionevole prima della stampa.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::GetPaperSize](#getpapersize).  
  
##  <a name="setpapersize"></a>  CRichEditView::SetPaperSize  
 Chiamare questa funzione per impostare il formato carta per la stampa di questa visualizzazione rich edit.  
  
```  
void SetPaperSize(CSize sizePaper);
```  
  
### <a name="parameters"></a>Parametri  
 *sizePaper*  
 I nuovi valori di dimensioni di documento per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="remarks"></a>Note  
 Se [m_nWordWrap](#m_nwordwrap) è `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo l'utilizzo di questa funzione per modificare le caratteristiche di stampare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#161](../../mfc/codesnippet/cpp/cricheditview-class_11.cpp)]  
  
##  <a name="setparaformat"></a>  CRichEditView::SetParaFormat  
 Chiamare questa funzione per impostare il formato di attributi per la selezione corrente in questo paragrafo `CRichEditView` oggetto.  
  
```  
BOOL SetParaFormat(PARAFORMAT2& pf);
```  
  
### <a name="parameters"></a>Parametri  
 `pf`  
 [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) gli attributi di formattazione di paragrafo struttura che contiene il nuovo valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Solo gli attributi specificati dal **dwMask** membro di `pf` vengono modificati dalla funzione.  
  
 Per ulteriori informazioni, vedere [EM_SETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774276) messaggio e [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) struttura in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#162](../../mfc/codesnippet/cpp/cricheditview-class_12.cpp)]  
  
##  <a name="textnotfound"></a>  CRichEditView::TextNotFound  
 Chiamare questa funzione per reimpostare lo stato interno di ricerca del [CRichEditView](../../mfc/reference/cricheditview-class.md) controllo dopo una chiamata non riuscita a [FindText](#findtext).  
  
```  
void TextNotFound(LPCTSTR lpszFind);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFind`  
 Contiene la stringa di testo che non è stata trovata.  
  
### <a name="remarks"></a>Note  
 È consigliabile che questo metodo deve essere chiamato immediatamente dopo le chiamate non riuscite per [FindText](#findtext) in modo che lo stato della ricerca interna del controllo viene reimpostato in modo corretto.  
  
 Il `lpszFind` parametro deve includere lo stesso contenuto della stringa fornita per [FindText](#findtext). Dopo aver reimpostato lo stato di ricerca interno, questo metodo chiama il metodo di [OnTextNotFound](#ontextnotfound) metodo con la stringa di ricerca specificato.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CRichEditView::FindText](#findtext).  
  
##  <a name="wrapchanged"></a>  CRichEditView::WrapChanged  
 Chiamare questa funzione quando sono state modificate le caratteristiche di stampare ( [SetMargins](#setmargins) o [SetPaperSize](#setpapersize)).  
  
```  
virtual void WrapChanged();
```  
  
### <a name="remarks"></a>Note  
 Override di questa funzione per modificare il modo in cui il rich edit visualizzazione risponde alle modifiche [m_nWordWrap](#m_nwordwrap) o caratteristiche di stampa ( [OnPrinterChanged](#onprinterchanged)).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#163](../../mfc/codesnippet/cpp/cricheditview-class_13.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC WORDPAD](../../visual-cpp-samples.md)   
 [Classe CCtrlView](../../mfc/reference/cctrlview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRichEditDoc (classe)](../../mfc/reference/cricheditdoc-class.md)   
 [Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)

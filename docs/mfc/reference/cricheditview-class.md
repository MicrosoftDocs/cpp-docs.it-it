---
title: CRichEditView (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRichEditView
dev_langs:
- C++
helpviewer_keywords:
- document/view architecture, rich edit controls
- OLE containers, rich edit
- rich edit controls, OLE container
- CRichEditView class
ms.assetid: bd576b10-4cc0-4050-8f76-e1a0548411e4
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 9f54ec0c8aae58828607b01973a263e458c30ddb
ms.lasthandoff: 02/24/2017

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
|[CRichEditView::CanPaste](#canpaste)|Indica se gli Appunti contengono dati che possono essere incollati in visualizzazione rich edit.|  
|[CRichEditView::DoPaste](#dopaste)|Incolla un elemento OLE in questa visualizzazione rich edit.|  
|[CRichEditView::FindText](#findtext)|Trova il testo specificato, richiamare il cursore di attesa.|  
|[CRichEditView::FindTextSimple](#findtextsimple)|Trova il testo specificato.|  
|[CRichEditView::GetCharFormatSelection](#getcharformatselection)|Recupera il carattere di formattazione degli attributi per la selezione corrente.|  
|[CRichEditView::GetDocument](#getdocument)|Recupera un puntatore all'oggetto correlato [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md).|  
|[CRichEditView::GetInPlaceActiveItem](#getinplaceactiveitem)|Recupera l'elemento OLE che è attualmente attiva nella visualizzazione rich edit.|  
|[CRichEditView::GetMargins](#getmargins)|Recupera i margini per questa visualizzazione rich edit.|  
|[CRichEditView::GetPageRect](#getpagerect)|Recupera il rettangolo di pagina per questa visualizzazione rich edit.|  
|[CRichEditView::GetPaperSize](#getpapersize)|Recupera il formato carta per questa visualizzazione rich edit.|  
|[CRichEditView::GetParaFormatSelection](#getparaformatselection)|Recupera gli attributi per la selezione corrente di formattazione di paragrafo.|  
|[CRichEditView::GetPrintRect](#getprintrect)|Recupera il rettangolo di stampa per questa visualizzazione rich edit.|  
|[CRichEditView::GetPrintWidth](#getprintwidth)|Recupera la larghezza di stampa per questa visualizzazione rich edit.|  
|[CRichEditView:: GetRichEditCtrl](#getricheditctrl)|Recupera il controllo rich edit.|  
|[CRichEditView::GetSelectedItem](#getselecteditem)|Recupera l'elemento selezionato dalla visualizzazione di modifica avanzate.|  
|[CRichEditView::GetTextLength](#gettextlength)|Recupera la lunghezza del testo nella visualizzazione rich edit.|  
|[CRichEditView::GetTextLengthEx](#gettextlengthex)|Recupera il numero di caratteri o byte nella vista rich edit. Elenco di flag espanso per metodo per determinare la lunghezza.|  
|[CRichEditView::InsertFileAsObject](#insertfileasobject)|Inserisce un file come un elemento OLE.|  
|[CRichEditView::InsertItem](#insertitem)|Inserisce un nuovo elemento come un elemento OLE.|  
|[CRichEditView::IsRichEditFormat](#isricheditformat)|Indica se gli Appunti contengono dati in un formato di testo o RTF.|  
|[CRichEditView::OnCharEffect](#onchareffect)|Attiva o disattiva la formattazione per la selezione corrente.|  
|[CRichEditView::OnParaAlign](#onparaalign)|Modifica l'allineamento dei paragrafi.|  
|[CRichEditView::OnUpdateCharEffect](#onupdatechareffect)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubbliche di carattere.|  
|[CRichEditView::OnUpdateParaAlign](#onupdateparaalign)|Aggiorna l'interfaccia utente di comando per le funzioni membro pubblico di paragrafo.|  
|[CRichEditView::PrintInsideRect](#printinsiderect)|Formatta il testo specificato all'interno del rettangolo specificato.|  
|[CRichEditView::PrintPage](#printpage)|Formatta il testo specificato all'interno della pagina specificata.|  
|[CRichEditView::SetCharFormat](#setcharformat)|Imposta la formattazione degli attributi per la selezione corrente.|  
|[CRichEditView::SetMargins](#setmargins)|Imposta i margini per il formato RTF Modifica visualizzazione.|  
|[CRichEditView::SetPaperSize](#setpapersize)|Imposta il formato carta per questa visualizzazione rich edit.|  
|[CRichEditView::SetParaFormat](#setparaformat)|Imposta gli attributi per la selezione corrente di formattazione di paragrafo.|  
|[CRichEditView::TextNotFound](#textnotfound)|Reimposta lo stato di ricerca interno del controllo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::GetClipboardData](#getclipboarddata)|Recupera un oggetto negli Appunti per un intervallo in questa visualizzazione rich edit.|  
|[CRichEditView::GetContextMenu](#getcontextmenu)|Recupera un menu di scelta rapida da utilizzare su un pulsante del mouse destro verso il basso.|  
|[CRichEditView::IsSelected](#isselected)|Indica se l'elemento OLE specificato è selezionato o meno.|  
|[CRichEditView::OnFindNext](#onfindnext)|Cerca l'occorrenza successiva di una sottostringa.|  
|[CRichEditView::OnInitialUpdate](#oninitialupdate)|Aggiorna una vista quando viene inizialmente associato a un documento.|  
|[CRichEditView::OnPasteNativeObject](#onpastenativeobject)|Recupera dati nativi da un elemento OLE.|  
|[CRichEditView::OnPrinterChanged](#onprinterchanged)|Imposta le caratteristiche di stampa per il dispositivo specificato.|  
|[CRichEditView::OnReplaceAll](#onreplaceall)|Sostituisce tutte le occorrenze di una stringa specificata con una nuova stringa.|  
|[CRichEditView::OnReplaceSel](#onreplacesel)|Sostituisce la selezione corrente.|  
|[CRichEditView::OnTextNotFound](#ontextnotfound)|Notifica all'utente gli handle che il testo richiesto non è stato trovato.|  
|[CRichEditView::QueryAcceptData](#queryacceptdata)|Le query sui dati sono presenti il `IDataObject`.|  
|[CRichEditView::WrapChanged](#wrapchanged)|Consente di regolare il dispositivo di output di destinazione per questa rich edit vista, in base al valore di `m_nWordWrap`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditView::m_nBulletIndent](#m_nbulletindent)|Indica la quantità di rientro per gli elenchi di punto elenco.|  
|[CRichEditView::m_nWordWrap](#m_nwordwrap)|Indica i vincoli di incapsulamento di word.|  
  
## <a name="remarks"></a>Note  
 Un "controllo rich edit" è una finestra in cui l'utente può immettere e modificare il testo. Il testo può essere assegnato formattazione di carattere e paragrafo e può includere oggetti OLE incorporati. I controlli rich edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare qualsiasi componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente.  
  
 `CRichEditView`gestisce il testo e la caratteristica di formattazione di testo. `CRichEditDoc`gestisce l'elenco di elementi client OLE che sono nella vista. `CRichEditCntrItem`fornisce l'accesso lato contenitore per l'elemento client OLE.  
  
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
  
##  <a name="a-nameadjustdialogpositiona--cricheditviewadjustdialogposition"></a><a name="adjustdialogposition"></a>CRichEditView::AdjustDialogPosition  
 Chiamare questa funzione per spostare la finestra di dialogo specificata in modo che non copra la selezione corrente.  
  
```  
void AdjustDialogPosition(CDialog* pDlg);
```  
  
### <a name="parameters"></a>Parametri  
 *pDlg*  
 Puntatore a un oggetto `CDialog`.  
  
##  <a name="a-namecanpastea--cricheditviewcanpaste"></a><a name="canpaste"></a>CRichEditView::CanPaste  
 Chiamare questa funzione per determinare se gli Appunti contengono informazioni che possono essere incollate in questa visualizzazione rich edit.  
  
```  
BOOL CanPaste() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli Appunti contengono dati in un formato che possa accettare questa visualizzazione rich edit; in caso contrario, 0.  
  
##  <a name="a-namecricheditviewa--cricheditviewcricheditview"></a><a name="cricheditview"></a>CRichEditView::CRichEditView  
 Chiamare questa funzione per creare un `CRichEditView` oggetto.  
  
```  
CRichEditView();
```  
  
##  <a name="a-namedopastea--cricheditviewdopaste"></a><a name="dopaste"></a>CRichEditView::DoPaste  
 Chiamare questa funzione per incollare l'elemento OLE in `dataobj` in questo rich edit documento/visualizzazione.  
  
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
  
 Questa funzione determina il tipo di Incolla in base ai risultati del gestore per Incolla speciale. Se `cf` è 0, il nuovo elemento utilizza la rappresentazione sotto forma di icona corrente. Se `cf` è diverso da zero e `hMetaPict` non **NULL**, utilizza il nuovo elemento `hMetaPict` per la rappresentazione.  
  
##  <a name="a-namefindtexta--cricheditviewfindtext"></a><a name="findtext"></a>CRichEditView::FindText  
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
 Questa funzione consente di visualizzare il cursore di attesa durante l'operazione di ricerca.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#151;](../../mfc/codesnippet/cpp/cricheditview-class_1.cpp)]  
  
##  <a name="a-namefindtextsimplea--cricheditviewfindtextsimple"></a><a name="findtextsimple"></a>CRichEditView::FindTextSimple  
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
  Vedere l'esempio per [CRichEditView::FindText](#findtext).  
  
##  <a name="a-namegetcharformatselectiona--cricheditviewgetcharformatselection"></a><a name="getcharformatselection"></a>CRichEditView::GetCharFormatSelection  
 Chiamare questa funzione per ottenere la formattazione degli attributi della selezione corrente.  
  
```  
CHARFORMAT2& GetCharFormatSelection();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) struttura che contiene la formattazione degli attributi della selezione corrente.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il [EM_GETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb788026) messaggio e il [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#152;](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]  
  
##  <a name="a-namegetclipboarddataa--cricheditviewgetclipboarddata"></a><a name="getclipboarddata"></a>CRichEditView::GetClipboardData  
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
 Flag di operazione negli Appunti. Può essere uno di questi valori.  
  
- **RECO_COPY** copiare negli Appunti.  
  
- **RECO_CUT** tagliare negli Appunti.  
  
- **RECO_DRAG** il trascinamento (trascinamento della selezione).  
  
- **RECO_DROP** Drop operazione (trascinamento della selezione).  
  
- **RECO_PASTE** Incolla dagli Appunti.  
  
 `lpRichDataObj`  
 Puntatore a un [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) oggetto che contiene i dati negli Appunti il ricco di controllo di modifica ( [IRichEditOle::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774341)).  
  
 `lplpdataobj`  
 Puntatore alla variabile che riceve l'indirizzo del puntatore di `IDataObject` oggetto che rappresenta l'intervallo specificato nel `lpchrg` parametro. Il valore di `lplpdataobj` viene ignorata se viene restituito un errore.  
  
### <a name="return-value"></a>Valore restituito  
 Un `HRESULT` valore reporting la riuscita dell'operazione. Per ulteriori informazioni su `HRESULT`, vedere [struttura di codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Se il valore restituito indica l'esito positivo, **IRichEditOleCallback::GetClipboardData** restituisce il `IDataObject` accede `lplpdataobj`; in caso contrario, restituisce l'accede `lpRichDataObj`. Eseguire l'override di questa funzione per fornire i propri dati negli Appunti. L'implementazione predefinita di questa funzione restituisce **E_NOTIMPL**.  
  
 Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IRichEditOle::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774341), [IRichEditOleCallback::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/bb774315), e [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] e vedere [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) nel [!INCLUDE[winsdkshort](../../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
##  <a name="a-namegetcontextmenua--cricheditviewgetcontextmenu"></a><a name="getcontextmenu"></a>CRichEditView::GetContextMenu  
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
 Puntatore a un **OLEOBJECT** struttura che specifica il primo oggetto OLE selezionato se la selezione contiene uno o più elementi OLE. Se la selezione non contiene elementi, `lpoleobj` è **NULL**. Il **OLEOBJECT** struttura contiene un puntatore a un oggetto OLE v-table.  
  
 `lpchrg`  
 Puntatore a un [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) struttura che contiene la selezione corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Questa funzione è una parte standard di destra del pulsante del mouse verso il basso l'elaborazione.  
  
 Il tipo di selezione può essere qualsiasi combinazione dei flag seguenti:  
  
- `SEL_EMPTY`Indica che non è stata effettuata alcuna selezione corrente.  
  
- `SEL_TEXT`Indica che la selezione corrente contiene testo.  
  
- `SEL_OBJECT`Indica che la selezione corrente contiene almeno un elemento OLE.  
  
- `SEL_MULTICHAR`Indica che la selezione corrente contiene più di un carattere di testo.  
  
- `SEL_MULTIOBJECT`Indica che la selezione corrente contiene più di un oggetto OLE.  
  
 L'implementazione predefinita restituisce **NULL**. Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IRichEditOleCallback::GetContextMenu](http://msdn.microsoft.com/library/windows/desktop/bb774317) e [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sui **OLEOBJECT** tipo, vedere l'articolo di strutture di dati OLE e allocazione della struttura nel *OLE Knowledge Base*.  
  
##  <a name="a-namegetdocumenta--cricheditviewgetdocument"></a><a name="getdocument"></a>CRichEditView::GetDocument  
 Chiamare questa funzione per ottenere un puntatore per il `CRichEditDoc` associata a questa visualizzazione.  
  
```  
CRichEditDoc* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) oggetto associato di `CRichEditView` oggetto.  
  
##  <a name="a-namegetinplaceactiveitema--cricheditviewgetinplaceactiveitem"></a><a name="getinplaceactiveitem"></a>CRichEditView::GetInPlaceActiveItem  
 Chiamata questa funzione per ottenere OLE elemento che è attivo sul posto in questo `CRichEditView` oggetto.  
  
```  
CRichEditCntrItem* GetInPlaceActiveItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a attivo sul posto, singolo [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto in questa visualizzazione rich edit; **NULL** se non è attualmente alcun elemento OLE nello stato attivo sul posto.  
  
##  <a name="a-namegetmarginsa--cricheditviewgetmargins"></a><a name="getmargins"></a>CRichEditView::GetMargins  
 Chiamare questa funzione per recuperare i margini correnti utilizzati per la stampa.  
  
```  
CRect GetMargins() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I margini utilizzati nella stampa, misurato in `MM_TWIPS`.  
  
##  <a name="a-namegetpagerecta--cricheditviewgetpagerect"></a><a name="getpagerect"></a>CRichEditView::GetPageRect  
 Chiamare questa funzione per ottenere le dimensioni della pagina utilizzato per la stampa.  
  
```  
CRect GetPageRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I limiti della pagina utilizzato per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="remarks"></a>Note  
 Questo valore è basato sul formato.  
  
##  <a name="a-namegetpapersizea--cricheditviewgetpapersize"></a><a name="getpapersize"></a>CRichEditView::GetPaperSize  
 Chiamare questa funzione per recuperare la dimensione del documento corrente.  
  
```  
CSize GetPaperSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il formato della carta utilizzato per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#153;](../../mfc/codesnippet/cpp/cricheditview-class_3.cpp)]  
  
##  <a name="a-namegetparaformatselectiona--cricheditviewgetparaformatselection"></a><a name="getparaformatselection"></a>CRichEditView::GetParaFormatSelection  
 Chiamare questa funzione per ottenere gli attributi della selezione corrente di formattazione di paragrafo.  
  
```  
PARAFORMAT2& GetParaFormatSelection();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) struttura che contiene gli attributi della selezione corrente di formattazione di paragrafo.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [EM_GETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774182) messaggio e [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetprintrecta--cricheditviewgetprintrect"></a><a name="getprintrect"></a>CRichEditView::GetPrintRect  
 Chiamare questa funzione per recuperare i limiti dell'area di stampa all'interno del rettangolo di pagina.  
  
```  
CRect GetPrintRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I limiti dell'area dell'immagine utilizzata per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#154; NVC_MFCDocView](../../mfc/codesnippet/cpp/cricheditview-class_4.cpp)]  
  
##  <a name="a-namegetprintwidtha--cricheditviewgetprintwidth"></a><a name="getprintwidth"></a>CRichEditView::GetPrintWidth  
 Chiamare questa funzione per determinare la larghezza dell'area di stampa.  
  
```  
int GetPrintWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza dell'area di stampa, misurata in `MM_TWIPS`.  
  
##  <a name="a-namegetricheditctrla--cricheditviewgetricheditctrl"></a><a name="getricheditctrl"></a>CRichEditView:: GetRichEditCtrl  
 Chiamare questa funzione per recuperare il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) oggetto associato di `CRichEditView` oggetto.  
  
```  
CRichEditCtrl& GetRichEditCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `CRichEditCtrl` oggetto per la visualizzazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRichEditView::FindText](#findtext).  
  
##  <a name="a-namegetselecteditema--cricheditviewgetselecteditem"></a><a name="getselecteditem"></a>CRichEditView::GetSelectedItem  
 Chiamare questa funzione per recuperare l'elemento OLE (un `CRichEditCntrItem` oggetto) attualmente selezionato in questa `CRichEditView` oggetto.  
  
```  
CRichEditCntrItem* GetSelectedItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto selezionato nel `CRichEditView` dell'oggetto; **NULL** se in questa visualizzazione è selezionato alcun elemento.  
  
##  <a name="a-namegettextlengtha--cricheditviewgettextlength"></a><a name="gettextlength"></a>CRichEditView::GetTextLength  
 Chiamare questa funzione per recuperare la lunghezza del testo in questo `CRichEditView` oggetto.  
  
```  
long GetTextLength() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza del testo in questo `CRichEditView` oggetto.  
  
##  <a name="a-namegettextlengthexa--cricheditviewgettextlengthex"></a><a name="gettextlengthex"></a>CRichEditView::GetTextLengthEx  
 Chiamare questa funzione membro per calcolare la lunghezza del testo in questo `CRichEditView` oggetto.  
  
```  
long GetTextLengthEx(
    DWORD dwFlags,  
    UINT uCodePage = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Valore che specifica il metodo da utilizzare per determinare la lunghezza del testo. Questo membro può essere uno o più dei valori elencati nel membro flag di [GETTEXTLENGTHEX](http://msdn.microsoft.com/library/windows/desktop/bb787915) descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `uCodePage`  
 Tabella codici per la conversione (CP_ACP per la tabella codici ANSI, 1200 per Unicode).  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri o byte di controllo di modifica. Se sono stati impostati i flag incompatibili `dwFlags`, questa funzione membro restituisce `E_INVALIDARG`.  
  
### <a name="remarks"></a>Note  
 `GetTextLengthEx`fornisce altri metodi per determinare la lunghezza del testo. Supporta la funzionalità avanzata modifica 2.0. Per ulteriori informazioni, vedere [sui controlli Rich Edit](http://msdn.microsoft.com/library/windows/desktop/bb787873) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameinsertfileasobjecta--cricheditviewinsertfileasobject"></a><a name="insertfileasobject"></a>CRichEditView::InsertFileAsObject  
 Chiamare questa funzione per inserire il file specificato (come un [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto) in una ricca Modifica visualizzazione.  
  
```  
void InsertFileAsObject(LPCTSTR lpszFileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Stringa contenente il nome del file da inserire.  
  
##  <a name="a-nameinsertitema--cricheditviewinsertitem"></a><a name="insertitem"></a>CRichEditView::InsertItem  
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
 Per ulteriori informazioni su `HRESULT`, vedere [struttura di codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameisricheditformata--cricheditviewisricheditformat"></a><a name="isricheditformat"></a>CRichEditView::IsRichEditFormat  
 Chiamare questa funzione per determinare se `cf` è un formato degli Appunti, ovvero testo, RTF o testo RTF con elementi OLE.  
  
```  
static BOOL AFX_CDECL IsRichEditFormat(CLIPFORMAT cf);
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 Il formato degli Appunti di interesse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `cf` è un formato degli Appunti avanzato di modifica o di testo.  
  
##  <a name="a-nameisselecteda--cricheditviewisselected"></a><a name="isselected"></a>CRichEditView::IsSelected  
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
  
##  <a name="a-namemnbulletindenta--cricheditviewmnbulletindent"></a><a name="m_nbulletindent"></a>CRichEditView::m_nBulletIndent  
 Il rientro per gli elementi di elenco puntato in un elenco. Per impostazione predefinita, le unità di 720, ovvero 1/2 pollici.  
  
```  
int m_nBulletIndent;  
```  
  
##  <a name="a-namemnwordwrapa--cricheditviewmnwordwrap"></a><a name="m_nwordwrap"></a>CRichEditView::m_nWordWrap  
 Indica il tipo di ritorno a capo automatico per questa visualizzazione rich edit.  
  
```  
int m_nWordWrap;  
```  
  
### <a name="remarks"></a>Note  
 Uno dei valori seguenti:  
  
- `WrapNone`Non indica nessun capo automatico.  
  
- `WrapToWindow`Indica il ritorno a capo in base alla larghezza della finestra.  
  
- `WrapToTargetDevice`Indica il ritorno a capo in base alle caratteristiche del dispositivo di destinazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRichEditView::WrapChanged](#wrapchanged).  
  
##  <a name="a-nameonchareffecta--cricheditviewonchareffect"></a><a name="onchareffect"></a>CRichEditView::OnCharEffect  
 Chiamare questa funzione per attivare o disattivare la formattazione di effetti per la selezione corrente.  
  
```  
void OnCharEffect(
    DWORD dwMask,  
    DWORD dwEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `dwMask`  
 La formattazione effetti per modificare la selezione corrente.  
  
 `dwEffect`  
 L'elenco desiderato effetti per attivare o disattivare la formattazione dei caratteri.  
  
### <a name="remarks"></a>Note  
 Ogni chiamata a questa funzione consente di visualizzare gli effetti di formattazione specificati per la selezione corrente.  
  
 Per ulteriori informazioni sui `dwMask` e `dwEffect` parametri e i relativi valori possibili, vedere i membri dei dati corrispondenti [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#155; NVC_MFCDocView](../../mfc/codesnippet/cpp/cricheditview-class_5.cpp)]  
  
##  <a name="a-nameonfindnexta--cricheditviewonfindnext"></a><a name="onfindnext"></a>CRichEditView::OnFindNext  
 Chiamato dal framework durante l'elaborazione dei comandi nella finestra di dialogo Trova e sostituisci.  
  
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
 La direzione di ricerca: **TRUE** indica verso l'alto. **FALSE**, up.  
  
 `bCase`  
 Indica se la ricerca viene fatta distinzione tra maiuscole e minuscole.  
  
 `bWord`  
 Indica se la ricerca è cercare parole intere solo o non.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per trovare il testo all'interno di `CRichEditView`. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la classe di visualizzazione derivata.  
  
##  <a name="a-nameoninitialupdatea--cricheditviewoninitialupdate"></a><a name="oninitialupdate"></a>CRichEditView::OnInitialUpdate  
 Chiamato dal framework dopo la visualizzazione è prima allegata al documento, ma prima che la visualizzazione iniziale.  
  
```  
virtual void OnInitialUpdate();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama la [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) funzione membro senza informazioni di hint (vale a dire usando i valori predefiniti pari a 0 per il `lHint` parametro e **NULL** per il `pHint` parametro). Eseguire l'override di questa funzione per eseguire qualsiasi inizializzazione che richiede informazioni relative al documento. Ad esempio, se l'applicazione ha dimensioni fisse di documenti, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento della visualizzazione in base alle dimensioni del documento. Se l'applicazione supporta i documenti di dimensioni variabili, utilizzare `OnUpdate` per aggiornare le barre di scorrimento Limita ogni volta che il documento viene modificato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRichEditView::m_nWordWrap](#m_nwordwrap).  
  
##  <a name="a-nameonpastenativeobjecta--cricheditviewonpastenativeobject"></a><a name="onpastenativeobject"></a>CRichEditView::OnPasteNativeObject  
 Utilizzare questa funzione per caricare dati nativi da un elemento incorporato.  
  
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
  
 Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni, vedere [IStorage](http://msdn.microsoft.com/library/windows/desktop/aa380015) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonparaaligna--cricheditviewonparaalign"></a><a name="onparaalign"></a>CRichEditView::OnParaAlign  
 Chiamare questa funzione per modificare l'allineamento dei paragrafi per i paragrafi selezionati.  
  
```  
void OnParaAlign(WORD wAlign);
```  
  
### <a name="parameters"></a>Parametri  
 `wAlign`  
 Allineamento desiderato. Uno dei valori seguenti:  
  
- `PFA_LEFT`Allineare i paragrafi con il margine sinistro.  
  
- `PFA_RIGHT`Allineare i paragrafi con il margine destro.  
  
- `PFA_CENTER`Al centro paragrafi tra i margini.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#156;](../../mfc/codesnippet/cpp/cricheditview-class_6.cpp)]  
  
##  <a name="a-nameonprinterchangeda--cricheditviewonprinterchanged"></a><a name="onprinterchanged"></a>CRichEditView::OnPrinterChanged  
 Eseguire l'override di questa funzione per modificare le caratteristiche per questa visualizzazione rich edit quando cambia la stampante.  
  
```  
virtual void OnPrinterChanged(const CDC& dcPrinter);
```  
  
### <a name="parameters"></a>Parametri  
 `dcPrinter`  
 Oggetto [CDC](../../mfc/reference/cdc-class.md) oggetto per la nuova stampante.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita imposta il formato della carta fisico altezza e larghezza per il dispositivo di output (stampante). Se è presente alcun contesto di dispositivo non associati `dcPrinter`, l'implementazione predefinita imposta il formato della carta su 8,5 per 11 pollici.  
  
##  <a name="a-nameonreplacealla--cricheditviewonreplaceall"></a><a name="onreplaceall"></a>CRichEditView::OnReplaceAll  
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
 Indica se la ricerca è necessario selezionare le parole intere o non.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per sostituire tutte le occorrenze di un determinato testo con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la visualizzazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRichEditView::FindText](#findtext).  
  
##  <a name="a-nameonreplacesela--cricheditviewonreplacesel"></a><a name="onreplacesel"></a>CRichEditView::OnReplaceSel  
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
 Indica la direzione della ricerca: **TRUE** è premuto; **FALSE**, up.  
  
 `bCase`  
 Indica se la ricerca viene fatta distinzione tra maiuscole e minuscole.  
  
 `bWord`  
 Indica se la ricerca è necessario selezionare le parole intere o non.  
  
 `lpszReplace`  
 Il testo di sostituzione.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per sostituire un'occorrenza di un determinato testo con un'altra stringa. Eseguire l'override di questa funzione per modificare le caratteristiche di ricerca per la visualizzazione.  
  
##  <a name="a-nameontextnotfounda--cricheditviewontextnotfound"></a><a name="ontextnotfound"></a>CRichEditView::OnTextNotFound  
 Chiamato dal framework ogni volta che la ricerca non riesce.  
  
```  
virtual void OnTextNotFound(LPCTSTR lpszFind);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFind`  
 Il testo che non è stato trovato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per modificare la notifica di output da un [MessageBeep](http://msdn.microsoft.com/library/windows/desktop/ms680356).  
  
 Per ulteriori informazioni, vedere [MessageBeep](http://msdn.microsoft.com/library/windows/desktop/ms680356) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#157;](../../mfc/codesnippet/cpp/cricheditview-class_7.cpp)]  
  
##  <a name="a-nameonupdatechareffecta--cricheditviewonupdatechareffect"></a><a name="onupdatechareffect"></a>CRichEditView::OnUpdateCharEffect  
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
 Indica il carattere maschera di formattazione.  
  
 `dwEffect`  
 Indica l'effetto di formattazione.  
  
### <a name="remarks"></a>Note  
 La maschera `dwMask` specifica quale carattere per verificare gli attributi di formattazione. I flag `dwEffect` elenco la formattazione degli attributi per impostare o deselezionare.  
  
 Per ulteriori informazioni sui `dwMask` e `dwEffect` parametri e i relativi valori possibili, vedere i membri dei dati corrispondenti [CHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787881) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#158;](../../mfc/codesnippet/cpp/cricheditview-class_8.cpp)]  
  
##  <a name="a-nameonupdateparaaligna--cricheditviewonupdateparaalign"></a><a name="onupdateparaalign"></a>CRichEditView::OnUpdateParaAlign  
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
 L'allineamento di paragrafo da controllare. Uno dei valori seguenti:  
  
- `PFA_LEFT`Allineare i paragrafi con il margine sinistro.  
  
- `PFA_RIGHT`Allineare i paragrafi con il margine destro.  
  
- `PFA_CENTER`Al centro paragrafi tra i margini.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#159;](../../mfc/codesnippet/cpp/cricheditview-class_9.cpp)]  
  
##  <a name="a-nameprintinsiderecta--cricheditviewprintinsiderect"></a><a name="printinsiderect"></a>CRichEditView::PrintInsideRect  
 Chiamare questa funzione per formattare un intervallo di testo in un controllo rich edit per rientrare *rectLayout* per il dispositivo specificato da `pDC`.  
  
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
 [RECT](../../mfc/reference/rect-structure1.md) o [CRect](../../atl-mfc-shared/reference/crect-class.md) che definisce l'area di output.  
  
 `nIndexStart`  
 Indice in base zero del primo carattere da formattare.  
  
 `nIndexStop`  
 Indice in base zero dell'ultimo carattere da formattare.  
  
 *bOutput*  
 Indica se il testo deve essere eseguito il rendering. Se **FALSE**, il testo appena viene misurato.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'ultimo carattere che rientra nell'area di output più uno.  
  
### <a name="remarks"></a>Note  
 In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRichEditView::GetPaperSize](#getpapersize).  
  
##  <a name="a-nameprintpagea--cricheditviewprintpage"></a><a name="printpage"></a>CRichEditView::PrintPage  
 Chiamare questa funzione per formattare un intervallo di testo in un controllo rich edit per il dispositivo di output specificato da `pDC`.  
  
```  
long PrintPage(
    CDC* pDC,  
    long nIndexStart,  
    long nIndexStop);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un contesto di dispositivo per l'output di pagina.  
  
 `nIndexStart`  
 Indice in base zero del primo carattere da formattare.  
  
 `nIndexStop`  
 Indice in base zero dell'ultimo carattere da formattare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'ultimo carattere che si adatta a pagina più uno.  
  
### <a name="remarks"></a>Note  
 Il layout di ogni pagina viene controllato da [GetPageRect](#getpagerect) e [GetPrintRect](#getprintrect). In genere, questa chiamata è seguita da una chiamata a [CRichEditCtrl::DisplayBand](../../mfc/reference/cricheditctrl-class.md#displayband) che genera l'output.  
  
 Si noti che i margini sono relativi alla pagina fisica, non la pagina logica. Di conseguenza, i margini pari a zero ritagliano spesso il testo poiché molte stampanti dispongono di aree della pagina. Per evitare la riduzione del testo, è necessario chiamare [SetMargins](#setmargins) e impostare i margini ragionevoli prima della stampa.  
  
##  <a name="a-namequeryacceptdataa--cricheditviewqueryacceptdata"></a><a name="queryacceptdata"></a>CRichEditView::QueryAcceptData  
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
 Indica se l'operazione deve continuare o meno.  
  
 `hMetaFile`  
 Handle di metafile utilizzato per disegnare l'icona dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Un `HRESULT` valore reporting la riuscita dell'operazione.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override della funzione per gestire diversi organizzazione degli elementi COM nella classe derivata di documento. Questa è un' sottoponibile a override.  
  
 Per ulteriori informazioni su `HRESULT` e `IDataObject`, vedere [struttura di codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) e [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421), rispettivamente, nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#160; NVC_MFCDocView](../../mfc/codesnippet/cpp/cricheditview-class_10.cpp)]  
  
##  <a name="a-namesetcharformata--cricheditviewsetcharformat"></a><a name="setcharformat"></a>CRichEditView::SetCharFormat  
 Chiamare questa funzione per impostare la formattazione degli attributi per il nuovo testo in questo carattere `CRichEditView` oggetto.  
  
```  
void SetCharFormat(CHARFORMAT2 cf);
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) struttura che contiene il carattere di nuova impostazione predefinita gli attributi di formattazione.  
  
### <a name="remarks"></a>Note  
 Solo gli attributi specificati dal **dwMask** membro di `cf` modificato da questa funzione.  
  
 Per ulteriori informazioni, vedere [EM_SETCHARFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774230) messaggio e [CHARFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787883) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#152;](../../mfc/codesnippet/cpp/cricheditview-class_2.cpp)]  
  
##  <a name="a-namesetmarginsa--cricheditviewsetmargins"></a><a name="setmargins"></a>CRichEditView::SetMargins  
 Chiamare questa funzione per impostare i margini di stampa per questa visualizzazione rich edit.  
  
```  
void SetMargins(const CRect& rectMargin);
```  
  
### <a name="parameters"></a>Parametri  
 *rectMargin*  
 I nuovi valori dei margini di stampa, misurato in `MM_TWIPS`.  
  
### <a name="remarks"></a>Note  
 Se [m_nWordWrap](#m_nwordwrap) è `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo l'utilizzo di questa funzione per modificare le caratteristiche di stampare.  
  
 Si noti che i margini utilizzati da [PrintPage](#printpage) sono relativi alla pagina fisica, non la pagina logica. Di conseguenza, i margini pari a zero ritagliano spesso il testo poiché molte stampanti dispongono di aree della pagina. Per evitare la riduzione del testo, è necessario chiamare utilizzare `SetMargins` per impostare i margini di stampa ragionevole prima della stampa.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRichEditView::GetPaperSize](#getpapersize).  
  
##  <a name="a-namesetpapersizea--cricheditviewsetpapersize"></a><a name="setpapersize"></a>CRichEditView::SetPaperSize  
 Chiamare questa funzione per impostare il formato carta per la stampa questa visualizzazione rich edit.  
  
```  
void SetPaperSize(CSize sizePaper);
```  
  
### <a name="parameters"></a>Parametri  
 *sizePaper*  
 I nuovi valori di dimensioni di documento per la stampa, misurato in `MM_TWIPS`.  
  
### <a name="remarks"></a>Note  
 Se [m_nWordWrap](#m_nwordwrap) è `WrapToTargetDevice`, è necessario chiamare [WrapChanged](#wrapchanged) dopo l'utilizzo di questa funzione per modificare le caratteristiche di stampare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#161;](../../mfc/codesnippet/cpp/cricheditview-class_11.cpp)]  
  
##  <a name="a-namesetparaformata--cricheditviewsetparaformat"></a><a name="setparaformat"></a>CRichEditView::SetParaFormat  
 Chiamare questa funzione per impostare gli attributi per la selezione corrente nell'oggetto di formattazione di paragrafo `CRichEditView` oggetto.  
  
```  
BOOL SetParaFormat(PARAFORMAT2& pf);
```  
  
### <a name="parameters"></a>Parametri  
 `pf`  
 [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) gli attributi di formattazione di paragrafo struttura che contiene il nuovo valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Solo gli attributi specificati dal **dwMask** membro di `pf` modificato da questa funzione.  
  
 Per ulteriori informazioni, vedere [EM_SETPARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb774276) messaggio e [PARAFORMAT2](http://msdn.microsoft.com/library/windows/desktop/bb787942) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#162;](../../mfc/codesnippet/cpp/cricheditview-class_12.cpp)]  
  
##  <a name="a-nametextnotfounda--cricheditviewtextnotfound"></a><a name="textnotfound"></a>CRichEditView::TextNotFound  
 Chiamare questa funzione per reimpostare lo stato di ricerca interno di [CRichEditView](../../mfc/reference/cricheditview-class.md) controllo dopo una chiamata non riuscita a [FindText](#findtext).  
  
```  
void TextNotFound(LPCTSTR lpszFind);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFind`  
 Contiene la stringa di testo che non è stata trovata.  
  
### <a name="remarks"></a>Note  
 È consigliabile che questo metodo deve essere chiamato immediatamente dopo le chiamate non riuscite a [FindText](#findtext) in modo che lo stato di ricerca interno del controllo viene reimpostato correttamente.  
  
 Il `lpszFind` parametro deve includere lo stesso contenuto della stringa fornita per [FindText](#findtext). Dopo aver reimpostato lo stato di ricerca interno, questo metodo chiama il metodo di [OnTextNotFound](#ontextnotfound) metodo con la stringa di ricerca specificato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRichEditView::FindText](#findtext).  
  
##  <a name="a-namewrapchangeda--cricheditviewwrapchanged"></a><a name="wrapchanged"></a>CRichEditView::WrapChanged  
 Chiamare questa funzione quando vengono modificate le caratteristiche di stampare ( [SetMargins](#setmargins) o [SetPaperSize](#setpapersize)).  
  
```  
virtual void WrapChanged();
```  
  
### <a name="remarks"></a>Note  
 Override di questa funzione per modificare il modo in cui il ricco Modifica visualizzazione risponde alle modifiche [m_nWordWrap](#m_nwordwrap) o caratteristiche di stampa ( [OnPrinterChanged](#onprinterchanged)).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#163;](../../mfc/codesnippet/cpp/cricheditview-class_13.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC WORDPAD](../../visual-cpp-samples.md)   
 [Classe CCtrlView](../../mfc/reference/cctrlview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRichEditDoc (classe)](../../mfc/reference/cricheditdoc-class.md)   
 [Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)


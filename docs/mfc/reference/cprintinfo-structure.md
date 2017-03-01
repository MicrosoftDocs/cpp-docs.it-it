---
title: CPrintInfo (struttura) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPrintInfo
dev_langs:
- C++
helpviewer_keywords:
- CPrintInfo structure
ms.assetid: 0b3de849-d050-4386-9a14-f4c1a25684f7
caps.latest.revision: 21
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: ffa72acc58e0ac1a387e67e6542abcd466be9640
ms.lasthandoff: 02/24/2017

---
# <a name="cprintinfo-structure"></a>CPrintInfo (struttura)
Archivia informazioni su un processo di stampa o Anteprima di stampa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CPrintInfo  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintInfo::GetFromPage](#getfrompage)|Restituisce il numero della prima pagina da stampare.|  
|[CPrintInfo::GetMaxPage](#getmaxpage)|Restituisce il numero dell'ultima pagina del documento.|  
|[CPrintInfo::GetMinPage](#getminpage)|Restituisce il numero della prima pagina del documento.|  
|[CPrintInfo::GetOffsetPage](#getoffsetpage)|Restituisce il numero di pagine che precede la prima pagina di un elemento DocObject viene stampato in un processo di stampa DocObject combinato.|  
|[CPrintInfo::GetToPage](#gettopage)|Restituisce il numero dell'ultima pagina da stampare.|  
|[CPrintInfo::SetMaxPage](#setmaxpage)|Imposta il numero dell'ultima pagina del documento.|  
|[CPrintInfo::SetMinPage](#setminpage)|Imposta il numero della prima pagina del documento.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintInfo::m_bContinuePrinting](#m_bcontinueprinting)|Contiene un flag che indica se il framework deve continuare il ciclo di stampa.|  
|[CPrintInfo::m_bDirect](#m_bdirect)|Contiene un flag che indica se stampare il documento direttamente (senza visualizzare la finestra di dialogo Stampa).|  
|[CPrintInfo::m_bDocObject](#m_bdocobject)|Contiene un flag che indica se il documento da stampare DocObject.|  
|[CPrintInfo::m_bPreview](#m_bpreview)|Contiene un flag che indica se il documento viene visualizzato in anteprima.|  
|[CPrintInfo::m_dwFlags](#m_dwflags)|Specifica le operazioni di stampa DocObject.|  
|[CPrintInfo::m_lpUserData](#m_lpuserdata)|Contiene un puntatore a una struttura creata dall'utente.|  
|[CPrintInfo::m_nCurPage](#m_ncurpage)|Identifica il numero della pagina da stampare.|  
|[CPrintInfo::m_nJobNumber](#m_njobnumber)|Specifica il numero di processo assegnato dal sistema operativo per il processo di stampa corrente|  
|[CPrintInfo::m_nNumPreviewPages](#m_nnumpreviewpages)|Identifica il numero di pagine visualizzate nella finestra di anteprima; 1 o 2.|  
|[CPrintInfo::m_nOffsetPage](#m_noffsetpage)|Specifica l'offset della prima pagina di un particolare DocObject in un processo di stampa DocObject combinato.|  
|[CPrintInfo::m_pPD](#m_ppd)|Contiene un puntatore per il `CPrintDialog` oggetto utilizzato per la finestra di dialogo Stampa.|  
|[CPrintInfo::m_rectDraw](#m_rectdraw)|Specifica un rettangolo che definisce l'area utilizzabile della pagina corrente.|  
|[CPrintInfo::m_strPageDesc](#m_strpagedesc)|Contiene una stringa di formato per la visualizzazione del numero di pagina.|  
  
## <a name="remarks"></a>Note  
 `CPrintInfo`è una struttura e non dispone di una classe di base.  
  
 Il framework crea un oggetto di `CPrintInfo` ogni volta che la stampa o comando Anteprima di stampa viene scelto ed elimina, quando il comando viene completato.  
  
 `CPrintInfo`contiene informazioni relative sia il processo di stampa nel suo complesso, ad esempio l'intervallo di pagine da stampare e lo stato corrente del processo di stampa, ad esempio la pagina attualmente in fase di stampa. Alcune informazioni vengono memorizzate in un oggetto associato [CPrintDialog](../../mfc/reference/cprintdialog-class.md) oggetto; questo oggetto contiene i valori immessi dall'utente nella finestra di dialogo Stampa.  
  
 Oggetto `CPrintInfo` oggetto viene passato tra framework e la classe di visualizzazione durante il processo di stampa e viene utilizzato per scambiare informazioni tra i due. Ad esempio, il framework indica la classe di visualizzazione quale pagina del documento da stampare assegnando un valore per il `m_nCurPage` membro del `CPrintInfo`; la visualizzazione classe recupera il valore ed esegue la stampa della pagina specificata.  
  
 Un altro esempio è il caso in cui la lunghezza del documento non è noto fino a quando non viene stampato. In questo caso, la classe di visualizzazione verifica la fine del documento ogni volta che una pagina viene stampata. Quando viene raggiunta la fine, imposta la classe di visualizzazione di `m_bContinuePrinting` membro del `CPrintInfo` a **FALSE**; informa il framework per interrompere il ciclo di stampa.  
  
 `CPrintInfo`viene utilizzato dalle funzioni membro `CView` elencati nella sezione "vedere anche". Per ulteriori informazioni sull'architettura di stampa fornito dalla libreria di classi Microsoft Foundation, vedere [finestre cornice](../../mfc/frame-windows.md) e [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e gli articoli [stampa](../../mfc/printing.md) e [stampa: documenti con più pagine](../../mfc/multipage-documents.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CPrintInfo`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
##  <a name="a-namegetfrompagea--cprintinfogetfrompage"></a><a name="getfrompage"></a>CPrintInfo::GetFromPage  
 Chiamare questa funzione per recuperare il numero della prima pagina da stampare.  
  
```  
UINT GetFromPage() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero della prima pagina da stampare.  
  
### <a name="remarks"></a>Note  
 Questo è il valore specificato dall'utente nella finestra di dialogo Stampa e viene archiviato nel `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro. Se l'utente non ha specificato un valore, il valore predefinito è la prima pagina del documento.  
  
##  <a name="a-namegetmaxpagea--cprintinfogetmaxpage"></a><a name="getmaxpage"></a>CPrintInfo::GetMaxPage  
 Chiamare questa funzione per recuperare il numero dell'ultima pagina del documento.  
  
```  
UINT GetMaxPage() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero dell'ultima pagina del documento.  
  
### <a name="remarks"></a>Note  
 Questo valore viene archiviato nel `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro.  
  
##  <a name="a-namegetminpagea--cprintinfogetminpage"></a><a name="getminpage"></a>CPrintInfo::GetMinPage  
 Chiamare questa funzione per recuperare il numero della prima pagina del documento.  
  
```  
UINT GetMinPage() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero della prima pagina del documento.  
  
### <a name="remarks"></a>Note  
 Questo valore viene archiviato nel `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro.  
  
##  <a name="a-namegetoffsetpagea--cprintinfogetoffsetpage"></a><a name="getoffsetpage"></a>CPrintInfo::GetOffsetPage  
 Chiamare questa funzione per recuperare l'offset per la stampa di più elementi DocObject da un client DocObject.  
  
```  
UINT GetOffsetPage() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di pagine che precede la prima pagina di un elemento DocObject viene stampato in un processo di stampa DocObject combinato.  
  
### <a name="remarks"></a>Note  
 Questo valore fa riferimento il **m_nOffsetPage** membro. La prima pagina del documento sarà numerata il **m_nOffsetPage** valore + 1 stampato DocObject con altri documenti attivi. Il **m_nOffsetPage** membro è valido solo se il **m_bDocObject** valore **TRUE**.  
  
##  <a name="a-namegettopagea--cprintinfogettopage"></a><a name="gettopage"></a>CPrintInfo::GetToPage  
 Chiamare questa funzione per recuperare il numero dell'ultima pagina da stampare.  
  
```  
UINT GetToPage() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero dell'ultima pagina da stampare.  
  
### <a name="remarks"></a>Note  
 Questo è il valore specificato dall'utente nella finestra di dialogo Stampa e viene archiviato nel `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro. Se l'utente non ha specificato un valore, il valore predefinito è l'ultima pagina del documento.  
  
##  <a name="a-namembcontinueprintinga--cprintinfombcontinueprinting"></a><a name="m_bcontinueprinting"></a>CPrintInfo::m_bContinuePrinting  
 Contiene un flag che indica se il framework deve continuare il ciclo di stampa.  
  
### <a name="remarks"></a>Note  
 Se si sta effettuando la paginazione in fase di stampa, è possibile impostare il membro **FALSE** nell'override della `CView::OnPrepareDC` una volta raggiunta la fine del documento. Non è necessario modificare questa variabile, se è stata specificata la lunghezza del documento all'inizio del processo di stampa tramite il `SetMaxPage` funzione membro. Il `m_bContinuePrinting` membro è una variabile pubblica di tipo **BOOL**.  
  
##  <a name="a-namembdirecta--cprintinfombdirect"></a><a name="m_bdirect"></a>CPrintInfo::m_bDirect  
 Il framework imposta questo membro **TRUE** se la finestra di dialogo Stampa verrà ignorata per la stampa diretta. **FALSE** in caso contrario.  
  
### <a name="remarks"></a>Note  
 La finestra di dialogo di stampa in genere viene ignorato quando si stampa dalla shell o quando viene eseguita utilizzando l'ID di comando **ID_FILE_PRINT_DIRECT**.  
  
 In genere non modificare questo membro, ma se si modifica, prima di chiamata [CView::DoPreparePrinting](../../mfc/reference/cview-class.md#doprepareprinting) nell'override della [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).  
  
##  <a name="a-namembdocobjecta--cprintinfombdocobject"></a><a name="m_bdocobject"></a>CPrintInfo::m_bDocObject  
 Contiene un flag che indica se il documento da stampare DocObject.  
  
### <a name="remarks"></a>Note  
 Membri dati `m_dwFlags` e **m_nOffsetPage** non sono validi solo se questo flag è **TRUE**.  
  
##  <a name="a-namembpreviewa--cprintinfombpreview"></a><a name="m_bpreview"></a>CPrintInfo::m_bPreview  
 Contiene un flag che indica se il documento viene visualizzato in anteprima.  
  
### <a name="remarks"></a>Note  
 Questa è l'impostazione di framework a seconda di quale comando viene eseguito. La finestra di dialogo di stampa non viene visualizzata per un processo di anteprima di stampa. Il **m_bPreview** membro è una variabile pubblica di tipo **BOOL**.  
  
##  <a name="a-namemdwflagsa--cprintinfomdwflags"></a><a name="m_dwflags"></a>CPrintInfo::m_dwFlags  
 Contiene una combinazione di flag che specificano le operazioni di stampa DocObject.  
  
### <a name="remarks"></a>Note  
 Valido solo se il membro dati **m_bDocObject** è **TRUE**.  
  
 Il flag può essere uno o più dei seguenti valori:  
  
- **PRINTFLAG_MAYBOTHERUSER**  
  
- **PRINTFLAG_PROMPTUSER**  
  
- **PRINTFLAG_USERMAYCHANGEPRINTER**  
  
- **PRINTFLAG_RECOMPOSETODEVICE**  
  
- **PRINTFLAG_DONTACTUALLYPRINT**  
  
- **PRINTFLAG_FORCEPROPERTIES**  
  
- **PRINTFLAG_PRINTTOFILE**  
  
##  <a name="a-namemlpuserdataa--cprintinfomlpuserdata"></a><a name="m_lpuserdata"></a>CPrintInfo::m_lpUserData  
 Contiene un puntatore a una struttura creata dall'utente.  
  
### <a name="remarks"></a>Note  
 Ciò consente di archiviare i dati di stampa specifiche che non si desidera archiviare nella classe di visualizzazione. Il **m_lpUserData** membro è una variabile pubblica di tipo **LPVOID**.  
  
##  <a name="a-namemncurpagea--cprintinfomncurpage"></a><a name="m_ncurpage"></a>CPrintInfo::m_nCurPage  
 Contiene il numero della pagina corrente.  
  
### <a name="remarks"></a>Note  
 Il framework chiama `CView::OnPrepareDC` e `CView::OnPrint` una volta per ogni pagina del documento, specificando un valore diverso per questo membro ogni ora, i valori compresi tra il valore restituito da `GetFromPage` a quello restituito da `GetToPage`. Utilizzare le sostituzioni di questo membro `CView::OnPrepareDC` e `CView::OnPrint` per stampare la pagina specificata del documento.  
  
 Quando la modalità di anteprima viene prima richiamata, il framework legge il valore di questo membro per determinare quale pagina del documento deve essere visualizzata in anteprima inizialmente. È possibile impostare il valore di questo membro in override di `CView::OnPreparePrinting` per mantenere la posizione dell'utente corrente nel documento quando l'attivazione della modalità di anteprima. Il `m_nCurPage` membro è una variabile pubblica di tipo **UINT**.  
  
##  <a name="a-namemnjobnumbera--cprintinfomnjobnumber"></a><a name="m_njobnumber"></a>CPrintInfo::m_nJobNumber  
 Indica il numero di processo assegnato dal sistema operativo per il processo di stampa corrente.  
  
### <a name="remarks"></a>Note  
 Questo valore può essere **SP_ERROR** se il processo non ha ancora completato (vale a dire, se il `CPrintInfo` oggetto appena viene creato e non è ancora stato utilizzato per stampare), o se si è verificato un errore durante l'avvio del processo.  
  
##  <a name="a-namemnnumpreviewpagesa--cprintinfomnnumpreviewpages"></a><a name="m_nnumpreviewpages"></a>CPrintInfo::m_nNumPreviewPages  
 Contiene il numero di pagine visualizzate in modalità di anteprima. può essere 1 o 2.  
  
### <a name="remarks"></a>Note  
 Il **m_nNumPreviewPages** membro è una variabile pubblica di tipo **UINT**.  
  
##  <a name="a-namemnoffsetpagea--cprintinfomnoffsetpage"></a><a name="m_noffsetpage"></a>CPrintInfo::m_nOffsetPage  
 Contiene il numero di pagine che precede la prima pagina DocObject specifico in un processo di stampa DocObject combinato.  
  
##  <a name="a-namemppda--cprintinfomppd"></a><a name="m_ppd"></a>CPrintInfo::m_pPD  
 Contiene un puntatore per il `CPrintDialog` oggetto utilizzato per visualizzare la finestra di dialogo Stampa per il processo di stampa.  
  
### <a name="remarks"></a>Note  
 Il `m_pPD` membro è una variabile pubblica dichiarata come puntatore a `CPrintDialog`.  
  
##  <a name="a-namemrectdrawa--cprintinfomrectdraw"></a><a name="m_rectdraw"></a>CPrintInfo::m_rectDraw  
 Specifica l'area di disegno utilizzabile della pagina in coordinate logiche.  
  
### <a name="remarks"></a>Note  
 È possibile fare riferimento a questo nell'override della `CView::OnPrint`. È possibile utilizzare questo membro per tenere traccia di quale area resta utilizzabile dopo la stampa di intestazioni, piè di pagina e così via. Il **m_rectDraw** membro è una variabile pubblica di tipo `CRect`.  
  
##  <a name="a-namemstrpagedesca--cprintinfomstrpagedesc"></a><a name="m_strpagedesc"></a>CPrintInfo::m_strPageDesc  
 Contiene una stringa di formato utilizzata per visualizzare i numeri di pagina durante l'anteprima di stampa; Questa stringa è costituita da due sottostringhe, uno per la visualizzazione pagina singola e uno per la visualizzazione di due pagine, ognuna termina con un carattere "\n".  
  
### <a name="remarks"></a>Note  
 Il framework utilizza "Pagina %u\nPages % u-%u\n" come valore predefinito. Se si desidera un formato diverso per i numeri di pagina, specificare una stringa di formato nell'override della `CView::OnPreparePrinting`. Il **m_strPageDesc** membro è una variabile pubblica di tipo `CString`.  
  
##  <a name="a-namesetmaxpagea--cprintinfosetmaxpage"></a><a name="setmaxpage"></a>CPrintInfo::SetMaxPage  
 Chiamare questa funzione per specificare il numero dell'ultima pagina del documento.  
  
```  
void SetMaxPage(UINT nMaxPage);
```  
  
### <a name="parameters"></a>Parametri  
 *nMaxPage*  
 Numero dell'ultima pagina del documento.  
  
### <a name="remarks"></a>Note  
 Questo valore viene archiviato nel `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro. Se la lunghezza del documento è noto prima della stampa, chiamare questa funzione di override della `CView::OnPreparePrinting`. Se la lunghezza del documento dipende dal valore specificato dall'utente nella finestra di dialogo Stampa, chiamare questa funzione di override della `CView::OnBeginPrinting`. Se la lunghezza del documento non è noto fino a quando non viene stampato, utilizzare il `m_bContinuePrinting` membro per controllare il ciclo di stampa.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting).  
  
##  <a name="a-namesetminpagea--cprintinfosetminpage"></a><a name="setminpage"></a>CPrintInfo::SetMinPage  
 Chiamare questa funzione per specificare il numero della prima pagina del documento.  
  
```  
void SetMinPage(UINT nMinPage);
```  
  
### <a name="parameters"></a>Parametri  
 *nMinPage*  
 Numero della prima pagina del documento.  
  
### <a name="remarks"></a>Note  
 In genere, i numeri di pagina iniziano da 1. Questo valore viene archiviato nel `CPrintDialog` oggetto a cui fa riferimento il `m_pPD` membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC immagine](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView:: OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting)   
 [OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting)   
 [CView::OnEndPrintPreview](../../mfc/reference/cview-class.md#onendprintpreview)   
 [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc)   
 [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting)   
 [CView::OnPrint](../../mfc/reference/cview-class.md#onprint)





---
title: Classe COlePropertyPage | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COlePropertyPage
- AFXCTL/COlePropertyPage
- AFXCTL/COlePropertyPage::COlePropertyPage
- AFXCTL/COlePropertyPage::GetControlStatus
- AFXCTL/COlePropertyPage::GetObjectArray
- AFXCTL/COlePropertyPage::GetPageSite
- AFXCTL/COlePropertyPage::OVERWRITEApply
- AFXCTL/COlePropertyPage::IsModified
- AFXCTL/COlePropertyPage::OnEditProperty
- AFXCTL/COlePropertyPage::OnHelp
- AFXCTL/COlePropertyPage::OnInitDialog
- AFXCTL/COlePropertyPage::OnObjectsChanged
- AFXCTL/COlePropertyPage::OnSetPageSite
- AFXCTL/COlePropertyPage::SetControlStatus
- AFXCTL/COlePropertyPage::SetDialogResource
- AFXCTL/COlePropertyPage::SetHelpInfo
- AFXCTL/COlePropertyPage::SetModifiedFlag
- AFXCTL/COlePropertyPage::SetPageName
dev_langs:
- C++
helpviewer_keywords:
- COlePropertyPage [MFC], COlePropertyPage
- COlePropertyPage [MFC], GetControlStatus
- COlePropertyPage [MFC], GetObjectArray
- COlePropertyPage [MFC], GetPageSite
- COlePropertyPage [MFC], IgnoreApply
- COlePropertyPage [MFC], IsModified
- COlePropertyPage [MFC], OnEditProperty
- COlePropertyPage [MFC], OnHelp
- COlePropertyPage [MFC], OnInitDialog
- COlePropertyPage [MFC], OnObjectsChanged
- COlePropertyPage [MFC], OnSetPageSite
- COlePropertyPage [MFC], SetControlStatus
- COlePropertyPage [MFC], SetDialogResource
- COlePropertyPage [MFC], SetHelpInfo
- COlePropertyPage [MFC], SetModifiedFlag
- COlePropertyPage [MFC], SetPageName
ms.assetid: e9972872-8e6b-4550-905e-d36a274d64dc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b6b6d011b40ebc9871baec1a1e57636499a58963
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37851574"
---
# <a name="colepropertypage-class"></a>Classe COlePropertyPage
Utilizzata per visualizzare le proprietà di un controllo personalizzato in un'interfaccia grafica, simile a una finestra di dialogo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class AFX_NOVTABLE COlePropertyPage : public CDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertyPage::COlePropertyPage](#colepropertypage)|Costruisce un oggetto `COlePropertyPage`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertyPage::GetControlStatus](#getcontrolstatus)|Indica se l'utente ha modificato il valore del controllo.|  
|[COlePropertyPage::GetObjectArray](#getobjectarray)|Restituisce la matrice di oggetti in fase di modifica dalla pagina delle proprietà.|  
|[COlePropertyPage::GetPageSite](#getpagesite)|Restituisce un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.|  
|[COlePropertyPage::IgnoreApply](#ignoreapply)|Determina quali controlli non abilitare il pulsante Applica.|  
|[COlePropertyPage::IsModified](#ismodified)|Indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::OnEditProperty](#oneditproperty)|Chiamato dal framework quando l'utente modifica una proprietà.|  
|[COlePropertyPage::OnHelp](#onhelp)|Chiamato dal framework quando l'utente richiama la Guida.|  
|[COlePropertyPage::OnInitDialog](#oninitdialog)|Chiamato dal framework quando viene inizializzata la pagina delle proprietà.|  
|[COlePropertyPage::OnObjectsChanged](#onobjectschanged)|Chiamato dal framework quando viene scelto un controllo OLE diverso con nuove proprietà.|  
|[COlePropertyPage:: OnSetPageSite](#onsetpagesite)|Chiamato dal framework quando la finestra delle proprietà fornisce il sito della pagina.|  
|[COlePropertyPage::SetControlStatus](#setcontrolstatus)|Imposta un flag che indica se l'utente ha modificato il valore del controllo.|  
|[COlePropertyPage::SetDialogResource](#setdialogresource)|Imposta risorsa finestra di dialogo della pagina delle proprietà.|  
|[COlePropertyPage::SetHelpInfo](#sethelpinfo)|Imposta il testo breve descrizione della pagina delle proprietà, il nome del file della Guida e il relativo contesto della Guida.|  
|[COlePropertyPage::SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::SetPageName](#setpagename)|Imposta il nome della pagina delle proprietà (titolo).|  
  
## <a name="remarks"></a>Note  
 Ad esempio, una pagina delle proprietà possa includere un controllo di modifica che consente all'utente di visualizzare e modificare proprietà etichetta del controllo.  
  
 Ogni proprietà personalizzate o predefinite il controllo può avere un controllo di finestra di dialogo che consente di visualizzare il valore della proprietà corrente e, se necessario, modificare tale valore del controllo.  
  
 Per altre informazioni sull'uso `COlePropertyPage`, vedere l'articolo [dei controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `COlePropertyPage`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="colepropertypage"></a>  COlePropertyPage::COlePropertyPage  
 Costruisce un oggetto `COlePropertyPage`.  
  
```  
COlePropertyPage(
    UINT idDlg,  
    UINT idCaption);
```  
  
### <a name="parameters"></a>Parametri  
 *idDlg*  
 ID risorsa del modello di finestra di dialogo.  
  
 *idCaption*  
 ID risorsa della didascalia della pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Quando si implementa una sottoclasse di `COlePropertyPage`, deve usare il costruttore della sottoclasse il `COlePropertyPage` costruttore per identificare la risorsa modello di finestra di dialogo in cui si basa sulla pagina delle proprietà e la risorsa stringa contenente la didascalia.  
  
##  <a name="getcontrolstatus"></a>  COlePropertyPage::GetControlStatus  
 Determina se l'utente ha modificato il valore di controllo pagina delle proprietà con l'ID risorsa specificato.  
  
```  
BOOL GetControlStatus(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 ID di risorsa di un controllo pagina delle proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il valore del controllo è stato modificato. in caso contrario, FALSE.  
  
##  <a name="getobjectarray"></a>  COlePropertyPage::GetObjectArray  
 Restituisce la matrice di oggetti in fase di modifica dalla pagina delle proprietà.  
  
```  
LPDISPATCH* GetObjectArray(ULONG* pnObjects);
```  
  
### <a name="parameters"></a>Parametri  
 *pnObjects*  
 Puntatore a un unsigned long integer che riceve il numero di oggetti in fase di modifica dalla pagina.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a una matrice di `IDispatch` puntatori, che consentono di accedere alle proprietà di ogni controllo nella pagina delle proprietà. Il chiamante non deve rilasciare questi puntatori di interfaccia.  
  
### <a name="remarks"></a>Note  
 Ogni oggetto pagina delle proprietà gestisce una matrice di puntatori al `IDispatch` interfacce degli oggetti in fase di modifica dalla pagina. La funzione imposta relativi *pnObjects* argomento per il numero di elementi nella matrice e restituisce un puntatore al primo elemento della matrice.  
  
##  <a name="getpagesite"></a>  COlePropertyPage::GetPageSite  
 Ottiene un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.  
  
```  
LPPROPERTYPAGESITE GetPageSite();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.  
  
### <a name="remarks"></a>Note  
 Controlli e i contenitori collaborino in modo che gli utenti possono esplorare e modificare le proprietà del controllo. Il controllo include pagine delle proprietà, ognuno dei quali è un oggetto OLE che consente all'utente di modificare un set di proprietà correlato. Il contenitore fornisce una finestra delle proprietà che consente di visualizzare le pagine delle proprietà. Per ogni pagina, la finestra delle proprietà fornisce un sito di pagina, che supporta il `IPropertyPageSite` interfaccia.  
  
##  <a name="ignoreapply"></a>  COlePropertyPage::IgnoreApply  
 Determina quali controlli non abilitare il pulsante Applica.  
  
```  
void IgnoreApply(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 ID del controllo deve essere ignorata.  
  
### <a name="remarks"></a>Note  
 Pulsante Applica della pagina delle proprietà è abilitato solo se sono stati modificati i valori dei controlli di pagina delle proprietà. Utilizzare questa funzione per specificare i controlli che non causano il pulsante Applica deve essere abilitata quando cambiano i loro valori.  
  
##  <a name="ismodified"></a>  COlePropertyPage::IsModified  
 Determina se l'utente ha modificato i valori nella pagina delle proprietà.  
  
```  
BOOL IsModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la pagina delle proprietà è stata modificata.  
  
##  <a name="oneditproperty"></a>  COlePropertyPage::OnEditProperty  
 Il framework chiama questa funzione quando una proprietà specifica deve essere modificato.  
  
```  
virtual BOOL OnEditProperty(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 *DISPID*  
 ID dispatch della proprietà modificata.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce FALSE. Esegue l'override di questa funzione devono restituire TRUE.  
  
### <a name="remarks"></a>Note  
 È possibile eseguirne l'override per impostare lo stato attivo per il controllo appropriato nella pagina. L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE.  
  
##  <a name="onhelp"></a>  COlePropertyPage::OnHelp  
 Il framework chiama questa funzione quando l'utente richiede la Guida in linea.  
  
```  
virtual BOOL OnHelp(LPCTSTR lpszHelpDir);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszHelpDir*  
 Directory contenente i file della Guida della pagina delle proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce FALSE.  
  
### <a name="remarks"></a>Note  
 Sostituirlo se la pagina delle proprietà deve eseguire qualsiasi azione speciale quando l'utente accede alla Guida. L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE, che indica al framework di chiamare WinHelp.  
  
##  <a name="oninitdialog"></a>  COlePropertyPage::OnInitDialog  
 Il framework chiama questa funzione quando viene inizializzato finestra di dialogo della pagina delle proprietà.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce FALSE.  
  
### <a name="remarks"></a>Note  
 Sostituirlo se è necessaria alcuna azione speciale quando la finestra di dialogo viene inizializzato. L'implementazione predefinita chiama `CDialog::OnInitDialog` altrimenti restituisce FALSE.  
  
##  <a name="onobjectschanged"></a>  COlePropertyPage::OnObjectsChanged  
 Chiamato dal framework quando viene scelto un controllo OLE diverso con nuove proprietà.  
  
```  
virtual void OnObjectsChanged();
```  
  
### <a name="remarks"></a>Note  
 Quando si visualizzano le proprietà di un controllo OLE nell'ambiente di sviluppo, una finestra di dialogo non modale viene utilizzata per visualizzare le pagine delle proprietà. Se un altro controllo è selezionato, è necessario visualizzare un set diverso di pagine delle proprietà per il nuovo set di proprietà. Il framework chiama questa funzione per notificare la pagina delle proprietà della modifica.  
  
 Eseguire l'override di questa funzione per ricevere una notifica dell'azione corrente ed eseguire eventuali azioni speciali.  
  
##  <a name="onsetpagesite"></a>  COlePropertyPage:: OnSetPageSite  
 Il framework chiama questa funzione quando la finestra delle proprietà fornisce sito della pagina della pagina delle proprietà.  
  
```  
virtual void OnSetPageSite();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita carica didascalia della pagina e tenta di determinare le dimensioni della pagina dalla risorsa finestra di dialogo. Eseguire l'override di questa funzione se la pagina delle proprietà richiede ulteriori azioni; override deve chiamare l'implementazione della classe di base.  
  
##  <a name="setcontrolstatus"></a>  COlePropertyPage::SetControlStatus  
 Modifica lo stato di un controllo pagina delle proprietà.  
  
```  
BOOL SetControlStatus(
    UINT nID,  
    BOOL bDirty);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 Contiene l'ID di un controllo pagina delle proprietà.  
  
 *bDirty*  
 Specifica se un campo della pagina delle proprietà è stato modificato. Impostare su TRUE se il campo è stato modificato, FALSE se non è stato modificato.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il controllo specificato è stato impostato. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Se lo stato di un controllo pagina delle proprietà è stato modificato quando viene chiusa la pagina delle proprietà o viene scelto il pulsante Applica, avranno la proprietà del controllo con il valore appropriato.  
  
##  <a name="setdialogresource"></a>  COlePropertyPage::SetDialogResource  
 Imposta risorsa finestra di dialogo della pagina delle proprietà.  
  
```  
void SetDialogResource(HGLOBAL hDialog);
```  
  
### <a name="parameters"></a>Parametri  
 *hDialog*  
 Handle alla risorsa finestra di dialogo della pagina delle proprietà.  
  
##  <a name="sethelpinfo"></a>  COlePropertyPage::SetHelpInfo  
 Specifica le informazioni di descrizione comando, il nome del file della Guida in linea e il contesto della Guida per la pagina delle proprietà.  
  
```  
void SetHelpInfo(
    LPCTSTR lpszDocString,  
    LPCTSTR lpszHelpFile = NULL,  
    DWORD dwHelpContext = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszDocString*  
 Stringa contenente le informazioni della Guida breve per la visualizzazione in una barra di stato o un altro percorso.  
  
 *lpszHelpFile*  
 Nome del file della Guida della pagina delle proprietà.  
  
 *dwHelpContext*  
 Contesto della Guida per la pagina delle proprietà.  
  
##  <a name="setmodifiedflag"></a>  COlePropertyPage::SetModifiedFlag  
 Indica se l'utente ha modificato la pagina delle proprietà.  
  
```  
void SetModifiedFlag(BOOL bModified = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bModified*  
 Specifica il nuovo valore per il flag modificato della pagina delle proprietà.  
  
##  <a name="setpagename"></a>  COlePropertyPage::SetPageName  
 Imposta il nome della pagina delle proprietà, che il frame di proprietà in genere verrà visualizzato nella scheda della pagina.  
  
```  
void SetPageName(LPCTSTR lpszPageName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszPageName*  
 Puntatore a una stringa contenente il nome della pagina delle proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio CIRC3](../../visual-cpp-samples.md)   
 [Esempio MFC TESTHELP](../../visual-cpp-samples.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)

---
title: Classe COlePropertyPage | Documenti Microsoft
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
ms.openlocfilehash: a1b98cd7bfb6983a4133e0bb48e3c75b8a973ddf
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37042547"
---
# <a name="colepropertypage-class"></a>COlePropertyPage (classe)
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
|[COlePropertyPage::GetControlStatus](#getcontrolstatus)|Indica se l'utente ha modificato il valore nel controllo.|  
|[COlePropertyPage::GetObjectArray](#getobjectarray)|Restituisce la matrice di oggetti in fase di modifica per la pagina delle proprietà.|  
|[COlePropertyPage::GetPageSite](#getpagesite)|Restituisce un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.|  
|[COlePropertyPage::IgnoreApply](#ignoreapply)|Determina quali controlli non si abilita il pulsante Applica.|  
|[COlePropertyPage::IsModified](#ismodified)|Indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::OnEditProperty](#oneditproperty)|Chiamato dal framework quando l'utente modifica una proprietà.|  
|[COlePropertyPage::OnHelp](#onhelp)|Chiamato dal framework quando l'utente richiama la Guida.|  
|[COlePropertyPage::OnInitDialog](#oninitdialog)|Chiamato dal framework quando viene inizializzata la pagina delle proprietà.|  
|[COlePropertyPage::OnObjectsChanged](#onobjectschanged)|Chiamato dal framework quando viene scelto un controllo OLE diverso con nuove proprietà.|  
|[COlePropertyPage:: OnSetPageSite](#onsetpagesite)|Chiamato dal framework quando la finestra delle proprietà fornisce il sito della pagina.|  
|[COlePropertyPage::SetControlStatus](#setcontrolstatus)|Imposta un flag che indica se l'utente ha modificato il valore nel controllo.|  
|[COlePropertyPage::SetDialogResource](#setdialogresource)|Imposta risorsa finestra di dialogo della pagina delle proprietà.|  
|[COlePropertyPage::SetHelpInfo](#sethelpinfo)|Imposta il testo breve descrizione della pagina delle proprietà, il nome del file della Guida e il relativo contesto della Guida.|  
|[COlePropertyPage::SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::SetPageName](#setpagename)|Imposta il nome della pagina delle proprietà (titolo).|  
  
## <a name="remarks"></a>Note  
 Ad esempio, una pagina delle proprietà può includere un controllo di modifica che consente all'utente di visualizzare e modificare proprietà etichetta del controllo.  
  
 Ogni proprietà personalizzate o predefinite del controllo può avere un controllo di finestra di dialogo che consente l'utente del controllo visualizzare il valore corrente della proprietà e modificare tale valore se necessario.  
  
 Per ulteriori informazioni sull'utilizzo `COlePropertyPage`, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
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
 ID di risorsa del modello di finestra di dialogo.  
  
 *idCaption*  
 ID risorsa della didascalia della pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Quando si implementa una sottoclasse `COlePropertyPage`, deve utilizzare il costruttore della sottoclasse il `COlePropertyPage` costruttore per identificare la risorsa modello di finestra di dialogo in cui si basa la pagina delle proprietà e la risorsa stringa che contiene la didascalia.  
  
##  <a name="getcontrolstatus"></a>  COlePropertyPage::GetControlStatus  
 Determina se l'utente ha modificato il valore del controllo pagina proprietà con l'ID di risorsa specificata.  
  
```  
BOOL GetControlStatus(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 ID di risorsa di un controllo pagina delle proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il valore del controllo è stato modificato; in caso contrario **FALSE**.  
  
##  <a name="getobjectarray"></a>  COlePropertyPage::GetObjectArray  
 Restituisce la matrice di oggetti in fase di modifica per la pagina delle proprietà.  
  
```  
LPDISPATCH* GetObjectArray(ULONG* pnObjects);
```  
  
### <a name="parameters"></a>Parametri  
 *pnObjects*  
 Puntatore a un unsigned long integer che riceve il numero di oggetti in fase di modifica dalla pagina.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a una matrice di `IDispatch` puntatori, che vengono utilizzati per accedere alle proprietà di ogni controllo nella pagina delle proprietà. Il chiamante non deve rilasciare questi puntatori di interfaccia.  
  
### <a name="remarks"></a>Note  
 Ogni oggetto pagina delle proprietà gestisce una matrice di puntatori al `IDispatch` interfacce degli oggetti in fase di modifica dalla pagina. La funzione imposta il relativo *pnObjects* argomento per il numero di elementi della matrice e restituisce un puntatore al primo elemento della matrice.  
  
##  <a name="getpagesite"></a>  COlePropertyPage::GetPageSite  
 Ottiene un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.  
  
```  
LPPROPERTYPAGESITE GetPageSite();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.  
  
### <a name="remarks"></a>Note  
 Controlli e contenitori collaborino in modo che gli utenti possono esplorare e modificare le proprietà del controllo. Il controllo include pagine delle proprietà, ognuno dei quali è un oggetto OLE che consente all'utente di modificare un set di proprietà correlato. Il contenitore fornisce un frame di proprietà che consente di visualizzare le pagine delle proprietà. Per ogni pagina, la finestra delle proprietà fornisce un sito di pagina, che supporta il `IPropertyPageSite` interfaccia.  
  
##  <a name="ignoreapply"></a>  COlePropertyPage::IgnoreApply  
 Determina quali controlli non si abilita il pulsante Applica.  
  
```  
void IgnoreApply(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 ID del controllo che verranno ignorati.  
  
### <a name="remarks"></a>Note  
 Pulsante Applica della pagina delle proprietà è abilitato solo se sono stati modificati i valori dei controlli di pagina di proprietà. Utilizzare questa funzione per specificare i controlli che non causano il pulsante Applica venga abilitato quando i relativi valori cambiano.  
  
##  <a name="ismodified"></a>  COlePropertyPage::IsModified  
 Determina se l'utente ha modificato i valori nella pagina delle proprietà.  
  
```  
BOOL IsModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la pagina delle proprietà è stata modificata.  
  
##  <a name="oneditproperty"></a>  COlePropertyPage::OnEditProperty  
 Il framework chiama questa funzione quando una proprietà specifica per essere modificato.  
  
```  
virtual BOOL OnEditProperty(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 *DISPID*  
 ID dispatch della proprietà in fase di modifica.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce **FALSE**. Esegue l'override di questa funzione devono restituire **TRUE**.  
  
### <a name="remarks"></a>Note  
 È possibile eseguirne l'override per impostare lo stato attivo per il controllo appropriato nella pagina. L'implementazione predefinita non esegue alcuna operazione e restituisce **FALSE**.  
  
##  <a name="onhelp"></a>  COlePropertyPage::OnHelp  
 Il framework chiama questa funzione quando l'utente richiede la Guida in linea.  
  
```  
virtual BOOL OnHelp(LPCTSTR lpszHelpDir);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszHelpDir*  
 Directory contenente i file della Guida della pagina delle proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce **FALSE**.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override se la pagina delle proprietà deve eseguire alcuna azione speciale quando l'utente accede alla Guida. L'implementazione predefinita non esegue alcuna operazione e restituisce **FALSE**, che indica al framework di chiamare WinHelp.  
  
##  <a name="oninitdialog"></a>  COlePropertyPage::OnInitDialog  
 Il framework chiama questa funzione quando viene inizializzato finestra di dialogo della pagina delle proprietà.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce **FALSE**.  
  
### <a name="remarks"></a>Note  
 Eseguirne l'override se è necessaria alcuna azione speciale quando la finestra di dialogo viene inizializzato. L'implementazione predefinita chiama `CDialog::OnInitDialog` e restituisce **FALSE**.  
  
##  <a name="onobjectschanged"></a>  COlePropertyPage::OnObjectsChanged  
 Chiamato dal framework quando viene scelto un controllo OLE diverso con nuove proprietà.  
  
```  
virtual void OnObjectsChanged();
```  
  
### <a name="remarks"></a>Note  
 Quando si visualizzano le proprietà di un controllo OLE nell'ambiente di sviluppo, una finestra di dialogo non modale consente di visualizzare le pagine delle proprietà. Se un altro controllo è selezionato, è necessario visualizzare un set diverso di pagine delle proprietà per il nuovo set di proprietà. Il framework chiama questa funzione per notificare la pagina delle proprietà della modifica.  
  
 Eseguire l'override di questa funzione per ricevere una notifica di questa azione ed eseguire eventuali azioni speciali.  
  
##  <a name="onsetpagesite"></a>  COlePropertyPage:: OnSetPageSite  
 Il framework chiama questa funzione quando la finestra delle proprietà fornisce sito pagina della pagina delle proprietà.  
  
```  
virtual void OnSetPageSite();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita carica didascalia della pagina e tenta di determinare le dimensioni della pagina dalla risorsa finestra di dialogo. Eseguire l'override di questa funzione se la pagina delle proprietà è richiesta alcuna azione ulteriore; l'override deve chiamare l'implementazione della classe di base.  
  
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
 Specifica se un campo della pagina delle proprietà è stato modificato. Impostato su **TRUE** se il campo è stato modificato, **FALSE** se non è stato modificato.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE**, se il controllo specificato è stata impostata; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Se lo stato di un controllo pagina delle proprietà è dirty quando la pagina delle proprietà è chiuso o si sceglie il pulsante Applica, la proprietà del controllo verrà aggiornata con il valore appropriato.  
  
##  <a name="setdialogresource"></a>  COlePropertyPage::SetDialogResource  
 Imposta risorsa finestra di dialogo della pagina delle proprietà.  
  
```  
void SetDialogResource(HGLOBAL hDialog);
```  
  
### <a name="parameters"></a>Parametri  
 *hDialog*  
 Handle di risorsa finestra di dialogo della pagina delle proprietà.  
  
##  <a name="sethelpinfo"></a>  COlePropertyPage::SetHelpInfo  
 Specifica informazioni sulla descrizione comandi, il nome del file della Guida e il contesto della Guida per la pagina delle proprietà.  
  
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
 Specifica il nuovo valore per flag modificato della pagina delle proprietà.  
  
##  <a name="setpagename"></a>  COlePropertyPage::SetPageName  
 Imposta il nome della pagina delle proprietà, che in genere visualizzerà la finestra delle proprietà nella scheda della pagina.  
  
```  
void SetPageName(LPCTSTR lpszPageName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszPageName*  
 Puntatore a una stringa contenente il nome della pagina delle proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio CIRC3](../../visual-cpp-samples.md)   
 [Esempio MFC TESTHELP](../../visual-cpp-samples.md)   
 [CDialog (classe)](../../mfc/reference/cdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)

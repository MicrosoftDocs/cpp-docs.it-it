---
title: Classe COlePropertyPage | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COlePropertyPage
dev_langs:
- C++
helpviewer_keywords:
- OLE property pages
- custom controls [MFC], properties
- COlePropertyPage class
- properties [C++], displaying
- displaying properties
- property pages, OLE
ms.assetid: e9972872-8e6b-4550-905e-d36a274d64dc
caps.latest.revision: 23
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
ms.openlocfilehash: 20d70cc25305fc5d17860314d9cfbe927df65c70
ms.lasthandoff: 02/24/2017

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
|[COlePropertyPage::GetControlStatus](#getcontrolstatus)|Indica se l'utente ha modificato il valore nel controllo.|  
|[COlePropertyPage::GetObjectArray](#getobjectarray)|Restituisce la matrice di oggetti in corso di modifica nella pagina delle proprietà.|  
|[COlePropertyPage::GetPageSite](#getpagesite)|Restituisce un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.|  
|[COlePropertyPage::IgnoreApply](#ignoreapply)|Determina quali controlli non abilitare il pulsante Applica.|  
|[COlePropertyPage::IsModified](#ismodified)|Indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::OnEditProperty](#oneditproperty)|Chiamato dal framework quando l'utente modifica una proprietà.|  
|[COlePropertyPage::OnHelp](#onhelp)|Chiamato dal framework quando l'utente richiama la Guida.|  
|[COlePropertyPage::OnInitDialog](#oninitdialog)|Chiamato dal framework quando la pagina delle proprietà viene inizializzata.|  
|[COlePropertyPage::OnObjectsChanged](#onobjectschanged)|Chiamato dal framework quando viene scelto un altro controllo OLE, con nuove proprietà.|  
|[COlePropertyPage:: OnSetPageSite](#onsetpagesite)|Chiamato dal framework quando la finestra delle proprietà fornisce il sito della pagina.|  
|[COlePropertyPage::SetControlStatus](#setcontrolstatus)|Imposta un flag che indica se l'utente ha modificato il valore nel controllo.|  
|[COlePropertyPage::SetDialogResource](#setdialogresource)|Imposta risorsa finestra di dialogo della pagina delle proprietà.|  
|[COlePropertyPage::SetHelpInfo](#sethelpinfo)|Imposta il testo breve descrizione della pagina delle proprietà, il nome del file della Guida e il contesto della Guida.|  
|[COlePropertyPage::SetModifiedFlag](#setmodifiedflag)|Imposta un flag che indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::SetPageName](#setpagename)|Imposta il nome della pagina delle proprietà (titolo).|  
  
## <a name="remarks"></a>Note  
 Ad esempio, una pagina delle proprietà può includere un controllo di modifica che consente all'utente di visualizzare e modificare la proprietà caption del controllo.  
  
 Ogni proprietà di controllo personalizzate o predefinite può avere un controllo finestra di dialogo che consente all'utente del controllo consente di visualizzare il valore della proprietà corrente e se necessario, modificare tale valore.  
  
 Per ulteriori informazioni sull'utilizzo di `COlePropertyPage`, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `COlePropertyPage`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="a-namecolepropertypagea--colepropertypagecolepropertypage"></a><a name="colepropertypage"></a>COlePropertyPage::COlePropertyPage  
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
 Quando si implementa una sottoclasse di `COlePropertyPage`, deve utilizzare il costruttore della sottoclasse di `COlePropertyPage` costruttore per identificare la risorsa modello di finestra di dialogo in cui è basata sulla pagina delle proprietà e la risorsa di stringa contenente la didascalia.  
  
##  <a name="a-namegetcontrolstatusa--colepropertypagegetcontrolstatus"></a><a name="getcontrolstatus"></a>COlePropertyPage::GetControlStatus  
 Determina se l'utente ha modificato il valore del controllo pagina proprietà con l'ID di risorsa specificata.  
  
```  
BOOL GetControlStatus(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 ID di un controllo pagina delle proprietà risorse.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il valore del controllo è stato modificato; in caso contrario **FALSE**.  
  
##  <a name="a-namegetobjectarraya--colepropertypagegetobjectarray"></a><a name="getobjectarray"></a>COlePropertyPage::GetObjectArray  
 Restituisce la matrice di oggetti in corso di modifica nella pagina delle proprietà.  
  
```  
LPDISPATCH* GetObjectArray(ULONG* pnObjects);
```  
  
### <a name="parameters"></a>Parametri  
 `pnObjects`  
 Puntatore a un unsigned long integer che verrà visualizzato il numero di oggetti in corso di modifica dalla pagina.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a una matrice di `IDispatch` puntatori, che vengono utilizzati per accedere alle proprietà di ogni controllo nella pagina delle proprietà. Il chiamante non deve rilasciare questi puntatori a interfaccia.  
  
### <a name="remarks"></a>Note  
 Ogni oggetto pagina delle proprietà gestisce una matrice di puntatori al `IDispatch` interfacce degli oggetti in corso di modifica dalla pagina. La funzione imposta il relativo `pnObjects` argomento per il numero di elementi della matrice e restituisce un puntatore al primo elemento della matrice.  
  
##  <a name="a-namegetpagesitea--colepropertypagegetpagesite"></a><a name="getpagesite"></a>COlePropertyPage::GetPageSite  
 Ottiene un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.  
  
```  
LPPROPERTYPAGESITE GetPageSite();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla pagina delle proprietà `IPropertyPageSite` interfaccia.  
  
### <a name="remarks"></a>Note  
 Controlli e i contenitori collaborano in modo che gli utenti possono sfogliare e modificare le proprietà del controllo. Il controllo fornisce pagine delle proprietà, ognuno dei quali è un oggetto OLE che consente all'utente di modificare un set di proprietà correlato. Il contenitore fornisce una finestra delle proprietà che consente di visualizzare le pagine delle proprietà. Per ogni pagina, la finestra delle proprietà fornisce un sito di pagina, che supporta il `IPropertyPageSite` interfaccia.  
  
##  <a name="a-nameignoreapplya--colepropertypageignoreapply"></a><a name="ignoreapply"></a>COlePropertyPage::IgnoreApply  
 Determina quali controlli non abilitare il pulsante Applica.  
  
```  
void IgnoreApply(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 ID del controllo verrà ignorato.  
  
### <a name="remarks"></a>Note  
 Pulsante Applica della pagina delle proprietà è abilitato solo se sono stati modificati i valori dei controlli di pagina delle proprietà. Utilizzare questa funzione per specificare i controlli che non causano il pulsante Applica deve essere abilitata quando cambiano i relativi valori.  
  
##  <a name="a-nameismodifieda--colepropertypageismodified"></a><a name="ismodified"></a>COlePropertyPage::IsModified  
 Determina se l'utente ha modificato i valori nella pagina delle proprietà.  
  
```  
BOOL IsModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la pagina delle proprietà è stata modificata.  
  
##  <a name="a-nameoneditpropertya--colepropertypageoneditproperty"></a><a name="oneditproperty"></a>COlePropertyPage::OnEditProperty  
 Il framework chiama questa funzione quando una proprietà specifica da modificare.  
  
```  
virtual BOOL OnEditProperty(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 ID dispatch della proprietà da modificare.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce **FALSE**. Esegue l'override di questa funzione devono restituire **TRUE**.  
  
### <a name="remarks"></a>Note  
 È possibile eseguirne l'override per impostare lo stato attivo al controllo appropriato nella pagina. L'implementazione predefinita non esegue alcuna operazione e restituisce **FALSE**.  
  
##  <a name="a-nameonhelpa--colepropertypageonhelp"></a><a name="onhelp"></a>COlePropertyPage::OnHelp  
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
 Eseguirne l'override se la pagina delle proprietà è necessario eseguire alcuna azione speciale quando l'utente accede alla Guida. L'implementazione predefinita non esegue alcuna operazione e restituisce **FALSE**, che indica il framework chiama WinHelp.  
  
##  <a name="a-nameoninitdialoga--colepropertypageoninitdialog"></a><a name="oninitdialog"></a>COlePropertyPage::OnInitDialog  
 Il framework chiama questa funzione quando viene inizializzato finestra di dialogo della pagina delle proprietà.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce **FALSE**.  
  
### <a name="remarks"></a>Note  
 Eseguirne l'override se è necessaria alcuna azione speciale quando la finestra di dialogo viene inizializzato. L'implementazione predefinita chiama `CDialog::OnInitDialog` e restituisce **FALSE**.  
  
##  <a name="a-nameonobjectschangeda--colepropertypageonobjectschanged"></a><a name="onobjectschanged"></a>COlePropertyPage::OnObjectsChanged  
 Chiamato dal framework quando viene scelto un altro controllo OLE, con nuove proprietà.  
  
```  
virtual void OnObjectsChanged();
```  
  
### <a name="remarks"></a>Note  
 Quando si visualizzano le proprietà di un controllo OLE nell'ambiente di sviluppo, una finestra di dialogo non modale viene utilizzato per visualizzare le pagine delle proprietà. Se un altro controllo è selezionato, un diverso set di pagine delle proprietà deve essere visualizzato il nuovo set di proprietà. Il framework chiama questa funzione per notificare la pagina delle proprietà della modifica.  
  
 Eseguire l'override di questa funzione per ricevere una notifica di questa azione ed eseguire particolari operazioni.  
  
##  <a name="a-nameonsetpagesitea--colepropertypageonsetpagesite"></a><a name="onsetpagesite"></a>COlePropertyPage:: OnSetPageSite  
 Il framework chiama questa funzione quando la finestra delle proprietà fornisce sito della pagina della pagina delle proprietà.  
  
```  
virtual void OnSetPageSite();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita carica didascalia della pagina e tenta di determinare le dimensioni della pagina dalla risorsa finestra di dialogo. Eseguire l'override di questa funzione se la pagina delle proprietà richiede ulteriori azioni; l'override deve chiamare l'implementazione della classe base.  
  
##  <a name="a-namesetcontrolstatusa--colepropertypagesetcontrolstatus"></a><a name="setcontrolstatus"></a>COlePropertyPage::SetControlStatus  
 Modifica lo stato di un controllo pagina delle proprietà.  
  
```  
BOOL SetControlStatus(
    UINT nID,  
    BOOL bDirty);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Contiene l'ID di un controllo pagina delle proprietà.  
  
 `bDirty`  
 Specifica se è stato modificato un campo della pagina delle proprietà. Impostare su **TRUE** se il campo è stato modificato, **FALSE** se non è stato modificato.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE**, se il controllo specificato è stato impostato; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Se lo stato di un controllo pagina delle proprietà viene modificato quando viene chiusa la pagina delle proprietà o viene scelto il pulsante Applica, la proprietà del controllo verrà aggiornata con il valore appropriato.  
  
##  <a name="a-namesetdialogresourcea--colepropertypagesetdialogresource"></a><a name="setdialogresource"></a>COlePropertyPage::SetDialogResource  
 Imposta risorsa finestra di dialogo della pagina delle proprietà.  
  
```  
void SetDialogResource(HGLOBAL hDialog);
```  
  
### <a name="parameters"></a>Parametri  
 *hDialog*  
 Handle per una risorsa finestra di dialogo della pagina delle proprietà.  
  
##  <a name="a-namesethelpinfoa--colepropertypagesethelpinfo"></a><a name="sethelpinfo"></a>COlePropertyPage::SetHelpInfo  
 Specifica informazioni sulla descrizione comando, il nome del file della Guida in linea e il contesto della Guida per la pagina delle proprietà.  
  
```  
void SetHelpInfo(
    LPCTSTR lpszDocString,  
    LPCTSTR lpszHelpFile = NULL,  
    DWORD dwHelpContext = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszDocString*  
 Stringa contenente le informazioni della Guida breve per la visualizzazione in una barra di stato o un altro percorso.  
  
 `lpszHelpFile`  
 Nome del file della Guida della pagina delle proprietà.  
  
 *dwHelpContext*  
 Contesto della Guida per la pagina delle proprietà.  
  
##  <a name="a-namesetmodifiedflaga--colepropertypagesetmodifiedflag"></a><a name="setmodifiedflag"></a>COlePropertyPage::SetModifiedFlag  
 Indica se l'utente ha modificato la pagina delle proprietà.  
  
```  
void SetModifiedFlag(BOOL bModified = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bModified`  
 Specifica il nuovo valore per il flag di modifica della pagina delle proprietà.  
  
##  <a name="a-namesetpagenamea--colepropertypagesetpagename"></a><a name="setpagename"></a>COlePropertyPage::SetPageName  
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
 [CDialog (classe)](../../mfc/reference/cdialog-class.md)


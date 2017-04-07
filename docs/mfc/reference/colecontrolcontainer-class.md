---
title: Classe COleControlContainer | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleControlContainer
- AFXOCC/COleControlContainer
- AFXOCC/COleControlContainer::COleControlContainer
- AFXOCC/COleControlContainer::AttachControlSite
- AFXOCC/COleControlContainer::BroadcastAmbientPropertyChange
- AFXOCC/COleControlContainer::CheckDlgButton
- AFXOCC/COleControlContainer::CheckRadioButton
- AFXOCC/COleControlContainer::CreateControl
- AFXOCC/COleControlContainer::CreateOleFont
- AFXOCC/COleControlContainer::FindItem
- AFXOCC/COleControlContainer::FreezeAllEvents
- AFXOCC/COleControlContainer::GetAmbientProp
- AFXOCC/COleControlContainer::GetDlgItem
- AFXOCC/COleControlContainer::GetDlgItemInt
- AFXOCC/COleControlContainer::GetDlgItemText
- AFXOCC/COleControlContainer::HandleSetFocus
- AFXOCC/COleControlContainer::HandleWindowlessMessage
- AFXOCC/COleControlContainer::IsDlgButtonChecked
- AFXOCC/COleControlContainer::OnPaint
- AFXOCC/COleControlContainer::OnUIActivate
- AFXOCC/COleControlContainer::OnUIDeactivate
- AFXOCC/COleControlContainer::ScrollChildren
- AFXOCC/COleControlContainer::SendDlgItemMessage
- AFXOCC/COleControlContainer::SetDlgItemInt
- AFXOCC/COleControlContainer::SetDlgItemText
- AFXOCC/COleControlContainer::m_crBack
- AFXOCC/COleControlContainer::m_crFore
- AFXOCC/COleControlContainer::m_listSitesOrWnds
- AFXOCC/COleControlContainer::m_nWindowlessControls
- AFXOCC/COleControlContainer::m_pOleFont
- AFXOCC/COleControlContainer::m_pSiteCapture
- AFXOCC/COleControlContainer::m_pSiteFocus
- AFXOCC/COleControlContainer::m_pSiteUIActive
- AFXOCC/COleControlContainer::m_pWnd
- AFXOCC/COleControlContainer::m_siteMap
dev_langs:
- C++
helpviewer_keywords:
- custom controls [MFC], sites
- COleControlContainer class
- ActiveX control containers [C++], control site
ms.assetid: f7ce9246-0fb7-4f07-a83a-6c2390d0fdf8
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 764583d28bf71319eac5b7e51e0915ae786261a7
ms.lasthandoff: 02/24/2017

---
# <a name="colecontrolcontainer-class"></a>Classe COleControlContainer
Funge da contenitore di controlli per i controlli ActiveX.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleControlContainer : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlContainer::COleControlContainer](#colecontrolcontainer)|Costruisce un oggetto `COleControlContainer`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlContainer::AttachControlSite](#attachcontrolsite)|Crea un sito di controllo, ospitato dal contenitore.|  
|[COleControlContainer::BroadcastAmbientPropertyChange](#broadcastambientpropertychange)|Informa tutti inclusi controlli che è stato modificato una proprietà di ambiente.|  
|[COleControlContainer::CheckDlgButton](#checkdlgbutton)|Modifica il controllo pulsante specificato.|  
|[COleControlContainer::CheckRadioButton](#checkradiobutton)|Seleziona il pulsante di opzione specificato di un gruppo.|  
|[COleControlContainer::CreateControl](#createcontrol)|Crea un controllo ActiveX ospitato.|  
|[COleControlContainer::CreateOleFont](#createolefont)|Crea un tipo di carattere OLE.|  
|[COleControlContainer::FindItem](#finditem)|Restituisce il sito personalizzato del controllo specificato.|  
|[COleControlContainer::FreezeAllEvents](#freezeallevents)|Determina se il sito del controllo è accettazione di eventi.|  
|[COleControlContainer::GetAmbientProp](#getambientprop)|Recupera la proprietà di ambiente specificata.|  
|[COleControlContainer::GetDlgItem](#getdlgitem)|Recupera il controllo di finestra di dialogo specificata.|  
|[COleControlContainer::GetDlgItemInt](#getdlgitemint)|Recupera il valore del controllo finestra di dialogo specificata.|  
|[COleControlContainer::GetDlgItemText](#getdlgitemtext)|Recupera la didascalia del controllo finestra di dialogo specificata.|  
|[COleControlContainer::HandleSetFocus](#handlesetfocus)|Determina se il contenitore gestisce `WM_SETFOCUS` messaggi.|  
|[COleControlContainer::HandleWindowlessMessage](#handlewindowlessmessage)|Gestisce i messaggi inviati a un controllo senza finestra.|  
|[COleControlContainer::IsDlgButtonChecked](#isdlgbuttonchecked)|Determina lo stato del pulsante specificato.|  
|[COleControlContainer::OnPaint](#onpaint)|Chiamato per aggiornare una parte del contenitore.|  
|[COleControlContainer::OnUIActivate](#onuiactivate)|Chiamato quando un controllo sta per essere attivato sul posto.|  
|[COleControlContainer::OnUIDeactivate](#onuideactivate)|Chiamato quando un controllo sta per essere disattivato.|  
|[COleControlContainer::ScrollChildren](#scrollchildren)|Chiamato dal framework quando vengono ricevuti messaggi di scorrimento da una finestra figlio.|  
|[COleControlContainer::SendDlgItemMessage](#senddlgitemmessage)|Invia un messaggio al controllo specificato.|  
|[COleControlContainer::SetDlgItemInt](#setdlgitemint)|Imposta il valore del controllo specificato.|  
|[COleControlContainer::SetDlgItemText](#setdlgitemtext)|Imposta il testo del controllo specificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlContainer::m_crBack](#m_crback)|Il colore di sfondo del contenitore.|  
|[COleControlContainer::m_crFore](#m_crfore)|Il colore di primo piano del contenitore.|  
|[COleControlContainer::m_listSitesOrWnds](#m_listsitesorwnds)|Un elenco dei siti di controllo supportati.|  
|[COleControlContainer::m_nWindowlessControls](#m_nwindowlesscontrols)|Il numero di controlli privi di finestra ospitati.|  
|[COleControlContainer::m_pOleFont](#m_polefont)|Puntatore al tipo di carattere OLE del sito del controllo personalizzato.|  
|[COleControlContainer::m_pSiteCapture](#m_psitecapture)|Puntatore al sito del controllo di acquisizione.|  
|[COleControlContainer::m_pSiteFocus](#m_psitefocus)|Puntatore per il controllo che attualmente ha lo stato attivo.|  
|[COleControlContainer::m_pSiteUIActive](#m_psiteuiactive)|Puntatore al controllo che è attualmente attivato sul posto.|  
|[COleControlContainer::m_pWnd](#m_pwnd)|Puntatore alla finestra di implementazione al contenitore di controlli.|  
|[COleControlContainer::m_siteMap](#m_sitemap)|Mappa del sito.|  
  
## <a name="remarks"></a>Note  
 Ciò avviene fornendo il supporto per uno o più siti di controllo ActiveX (implementata da `COleControlSite`). `COleControlContainer`implementa completamente la [IOleInPlaceFrame](http://msdn.microsoft.com/library/windows/desktop/ms692770) e [IOleContainer](http://msdn.microsoft.com/library/windows/desktop/ms690103) interfacce, consentendo di controlli ActiveX contenuti soddisfare le qualifiche elementi sul posto.  
  
 In genere, questa classe viene utilizzata in combinazione con `COccManager` e `COleControlSite` per implementare un contenitore di controlli ActiveX personalizzato, con i siti personalizzati per uno o più controlli ActiveX.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleControlContainer`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxocc.h  
  
##  <a name="attachcontrolsite"></a>COleControlContainer::AttachControlSite  
 Chiamato dal framework per creare e collegare un sito del controllo.  
  
```  
virtual void AttachControlSite(
    CWnd* pWnd,  
    UINT nIDC = 0);

 
void AttachControlSite(
    CWnd* pWnd,  
    UINT nIDC = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Un puntatore a un `CWnd` oggetto.  
  
 `nIDC`  
 L'ID del controllo da collegare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera personalizzare questo processo.  
  
> [!NOTE]
>  Utilizzare il modulo prima di questa funzione per il collegamento statico alla libreria MFC. Utilizzare la seconda forma se ci si collega in modo dinamico alla libreria MFC.  
  
##  <a name="broadcastambientpropertychange"></a>COleControlContainer::BroadcastAmbientPropertyChange  
 Informa tutti inclusi controlli che è stato modificato una proprietà di ambiente.  
  
```  
virtual void BroadcastAmbientPropertyChange(DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 ID dispatch della proprietà di ambiente viene modificata.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dal framework quando una proprietà di ambiente viene modificato valore. Eseguire l'override di questa funzione per personalizzare questo comportamento.  
  
##  <a name="checkdlgbutton"></a>COleControlContainer::CheckDlgButton  
 Modifica lo stato corrente del pulsante.  
  
```  
virtual void CheckDlgButton(
    int nIDButton,  
    UINT nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDButton`  
 L'ID del pulsante da modificare.  
  
 `nCheck`  
 Specifica lo stato del pulsante. Può essere uno dei seguenti:  
  
- **BST_CHECKED** imposta lo stato del pulsante selezionato.  
  
- **BST_INDETERMINATE** imposta lo stato del pulsante su grigio, che indica uno stato indeterminato. Utilizzare questo valore solo se il pulsante ha il **BS_3STATE** o **BS_AUTO3STATE** stile.  
  
- **BST_UNCHECKED** imposta lo stato del pulsante su cancellati.  
  
##  <a name="checkradiobutton"></a>COleControlContainer::CheckRadioButton  
 Seleziona un pulsante di opzione specificato in un gruppo e cancella i pulsanti rimanenti nel gruppo.  
  
```  
virtual void CheckRadioButton(
    int nIDFirstButton,  
    int nIDLastButton,  
    int nIDCheckButton);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDFirstButton`  
 Specifica l'identificatore del primo pulsante di opzione nel gruppo.  
  
 `nIDLastButton`  
 Specifica l'identificatore del pulsante di opzione ultimo gruppo.  
  
 `nIDCheckButton`  
 Specifica l'identificatore del pulsante di opzione da controllare.  
  
##  <a name="colecontrolcontainer"></a>COleControlContainer::COleControlContainer  
 Costruisce un oggetto `COleControlContainer`.  
  
```  
explicit COleControlContainer(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra padre del contenitore del controllo.  
  
### <a name="remarks"></a>Note  
 Dopo aver creato correttamente l'oggetto, aggiungere un sito di controllo personalizzato con una chiamata a `AttachControlSite`.  
  
##  <a name="createcontrol"></a>COleControlContainer::CreateControl  
 Crea un controllo ActiveX, ospitato dall'oggetto `COleControlSite` oggetto.  
  
```  
BOOL CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    UINT nID,  
    CFile* pPersist =NULL,  
    BOOL bStorage =FALSE,  
    BSTR bstrLicKey =NULL,  
    COleControlSite** ppNewSite =NULL);

 
BOOL CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const POINT* ppt,  
    const SIZE* psize,  
    UINT nID,  
    CFile* pPersist =NULL,  
    BOOL bStorage =FALSE,  
    BSTR bstrLicKey =NULL,  
    COleControlSite** ppNewSite =NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndCtrl`  
 Puntatore all'oggetto finestra che rappresenta il controllo.  
  
 `clsid`  
 ID univoco della classe del controllo.  
  
 `lpszWindowName`  
 Un puntatore di testo da visualizzare nel controllo. Imposta il valore della proprietà di testo o didascalia del controllo (se presente). Se **NULL**, proprietà di testo o didascalia del controllo non viene modificata.  
  
 `dwStyle`  
 Stili di Windows. Gli stili disponibili sono elencati sotto il **osservazioni** sezione.  
  
 `rect`  
 Specifica le dimensioni e posizione del controllo. Può essere un `CRect` oggetto o una `RECT` struttura.  
  
 `nID`  
 Specifica l'ID di finestra figlio del controllo  
  
 `pPersist`  
 Un puntatore a un `CFile` che contiene lo stato permanente per il controllo. Il valore predefinito è **NULL**, che indica che il controllo Inizializza senza ripristinare lo stato da qualsiasi archivio permanente. Se non **NULL**, deve essere un puntatore a un `CFile`-oggetto che contiene dati persistenti del controllo, sotto forma di un flusso o un archivio derivato. Impossibile questi dati sono stati salvati in attivazione di una precedente del client. Il `CFile` può contenere altri dati, ma deve avere il puntatore di lettura / scrittura impostato per il primo byte di dati persistenti al momento della chiamata a `CreateControl`.  
  
 `bStorage`  
 Indica se i dati in `pPersist` devono essere interpretate come `IStorage` o `IStream` dati. Se i dati in `pPersist` è una risorsa di archiviazione, `bStorage` deve essere **TRUE**. Se i dati in `pPersist` è un flusso, `bStorage` deve essere **FALSE**. Il valore predefinito è **FALSE**.  
  
 `bstrLicKey`  
 Dati chiave di licenza facoltativo. Questi dati sono necessaria solo per la creazione di controlli che richiedono un codice di licenza in fase di esecuzione. Se il controllo supporta la gestione delle licenze, è necessario fornire un codice di licenza per la creazione del controllo abbia esito positivo. Il valore predefinito è **NULL**.  
  
 *ppNewSite*  
 Puntatore al sito del controllo esistente che ospita il controllo da creare. Il valore predefinito è **NULL**, che indica che un nuovo sito di controllo verrà automaticamente creato e collegato al nuovo controllo.  
  
 `ppt`  
 Un puntatore a un **punto** struttura che contiene l'angolo superiore sinistro del controllo. La dimensione del controllo è determinata dal valore di *psize*. Il `ppt` e *psize* i valori sono un metodo facoltativo che specifica le dimensioni e posizione del controllo.  
  
 *psize*  
 Un puntatore a un **dimensioni** struttura che contiene la dimensione del controllo. Nell'angolo superiore sinistro è determinato dal valore di `ppt`. Il `ppt` e *psize* i valori sono un metodo facoltativo che specifica le dimensioni e posizione del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Solo un sottoinsieme di Windows `dwStyle` flag sono supportati da `CreateControl`:  
  
- **WS_VISIBLE** crea una finestra che inizialmente è visibile. Obbligatorio se si desidera che il controllo sia visibile immediatamente, come nelle normali finestre.  
  
- **WS_DISABLED** crea una finestra che inizialmente è disabilitata. Una finestra disabilitata non può ricevere input da parte dell'utente. Può essere impostata se il controllo dispone di una proprietà Enabled.  
  
- `WS_BORDER`Crea una finestra con un bordo sottile-line. Può essere impostata se il controllo ha una proprietà BorderStyle.  
  
- **WS_GROUP** specifica il primo controllo di un gruppo di controlli. L'utente può modificare lo stato attivo da un controllo del gruppo alla successiva utilizzando i tasti di direzione. Tutti i controlli definiti con la **WS_GROUP** uno stile dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con il **WS_GROUP** stile termina il gruppo e avvia il gruppo successivo.  
  
- **WS_TABSTOP** specifica un controllo che può ricevere lo stato attivo quando l'utente preme il tasto TAB. Premendo il tasto TAB viene modificato lo stato attivo al controllo successivo del **WS_TABSTOP** stile.  
  
 Utilizzare il secondo overload per creare controlli dimensioni predefinite.  
  
##  <a name="createolefont"></a>COleControlContainer::CreateOleFont  
 Crea un tipo di carattere OLE.  
  
```  
void CreateOleFont(CFont* pFont);
```  
  
### <a name="parameters"></a>Parametri  
 `pFont`  
 Puntatore al tipo di carattere da utilizzare per il contenitore del controllo.  
  
##  <a name="finditem"></a>COleControlContainer::FindItem  
 Trova il sito personalizzato che ospita l'elemento specificato.  
  
```  
virtual COleControlSite* FindItem(UINT nID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore dell'elemento da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il sito personalizzato dell'elemento specificato.  
  
##  <a name="freezeallevents"></a>COleControlContainer::FreezeAllEvents  
 Determina se il contenitore verrà ignorare gli eventi dai siti di controllo associato o accettare tali condizioni.  
  
```  
void FreezeAllEvents(BOOL bFreeze);
```  
  
### <a name="parameters"></a>Parametri  
 `bFreeze`  
 Diverso da zero se gli eventi verranno elaborati; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il controllo non è necessario interrompere la generazione degli eventi, se richiesto dal contenitore del controllo. La generazione può continuare, ma tutti gli eventi successivi verranno ignorati dal contenitore dei controlli.  
  
##  <a name="getambientprop"></a>COleControlContainer::GetAmbientProp  
 Recupera il valore di una proprietà di ambiente specificata.  
  
```  
virtual BOOL GetAmbientProp(
    COleControlSite* pSite,  
    DISPID dispid,  
    VARIANT* pvarResult);
```  
  
### <a name="parameters"></a>Parametri  
 `pSite`  
 Un puntatore a un sito del controllo da cui verrà recuperata la proprietà di ambiente.  
  
 `dispid`  
 ID dispatch della proprietà di ambiente desiderata.  
  
 *pVarResult*  
 Puntatore al valore della proprietà di ambiente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="getdlgitem"></a>COleControlContainer::GetDlgItem  
 Recupera un puntatore alla finestra figlio o controllo specificata in una finestra di dialogo o altra finestra.  
  
```  
virtual CWnd* GetDlgItem(int nID) const;  
  
virtual void GetDlgItem(
    int nID,  
    HWND* phWnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore dell'elemento della finestra di dialogo da recuperare.  
  
 `phWnd`  
 Un puntatore all'handle dell'oggetto finestra dell'elemento della finestra di dialogo specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra dell'elemento della finestra di dialogo.  
  
##  <a name="getdlgitemint"></a>COleControlContainer::GetDlgItemInt  
 Recupera il valore del testo tradotto del controllo specificato.  
  
```  
virtual UINT GetDlgItemInt(
    int nID,  
    BOOL* lpTrans,  
    BOOL bSigned) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del controllo.  
  
 `lpTrans`  
 Puntatore a una variabile Boolean che riceve un valore di esito positivo o negativo della funzione ( **TRUE** indica l'esito positivo, **FALSE** indica un esito negativo).  
  
 `bSigned`  
 Specifica se la funzione deve analizzare il testo per un segno meno all'inizio e restituire un valore intero con segno, se ne trova uno. Se il `bSigned` parametro **TRUE**, specificando che il valore da recuperare è un valore intero con segno, il cast del valore restituito per un `int` tipo. Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, la variabile a cui puntava `lpTrans` è impostato su **TRUE**, e il valore restituito è il valore tradotto del testo del controllo.  
  
 In caso contrario, la variabile a cui puntava `lpTrans` è impostato su **FALSE**, e il valore restituito è zero. Si noti che, poiché zero è un possibile valore tradotto, un valore restituito pari a zero indica errore.  
  
 Se `lpTrans` è **NULL**, la funzione non restituisce alcuna informazione sull'esito positivo o negativo.  
  
### <a name="remarks"></a>Note  
 La funzione converte il testo recuperato rimuovendo eventuali spazi aggiuntivi all'inizio del testo e quindi convertendo le cifre decimali. La funzione interrompe la conversione quando raggiunge la fine del testo o rileva un carattere non numerico.  
  
 Questa funzione restituisce zero se il valore convertito è maggiore di **INT_MAX** (per numeri con segno) o **UINT_MAX** (per i numeri senza segno).  
  
##  <a name="getdlgitemtext"></a>COleControlContainer::GetDlgItemText  
 Recupera il testo del controllo specificato.  
  
```  
virtual int GetDlgItemText(
    int nID,  
    LPTSTR lpStr,  
    int nMaxCount) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del controllo.  
  
 `lpStr`  
 Puntatore al testo del controllo.  
  
 `nMaxCount`  
 Specifica la lunghezza massima in caratteri, della stringa da copiare nel buffer a cui puntata `lpStr`. Se la lunghezza della stringa supera il limite, la stringa viene troncata.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito specifica il numero di caratteri copiati nel buffer, escluso il carattere di terminazione null.  
  
 Se la funzione ha esito negativo, il valore restituito è zero. Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
##  <a name="handlesetfocus"></a>COleControlContainer::HandleSetFocus  
 Determina se il contenitore gestisce `WM_SETFOCUS` messaggi.  
  
```  
virtual BOOL HandleSetFocus();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il contenitore gestisce `WM_SETFOCUS` messaggi; in caso contrario zero.  
  
##  <a name="handlewindowlessmessage"></a>COleControlContainer::HandleWindowlessMessage  
 Elabora i messaggi di finestra per i controlli privi di finestra.  
  
```  
virtual BOOL HandleWindowlessMessage(
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam,  
    LRESULT* plResult);
```  
  
### <a name="parameters"></a>Parametri  
 `message`  
 L'identificatore per la finestra di messaggio, fornito da Windows.  
  
 `wParam`  
 Parametro del messaggio. fornito da Windows. Specifica informazioni aggiuntive specifiche di messaggio. Il contenuto di questo parametro dipende dal valore di `message` parametro.  
  
 `lParam`  
 Parametro del messaggio. fornito da Windows. Specifica informazioni aggiuntive specifiche di messaggio. Il contenuto di questo parametro dipende dal valore di `message` parametro.  
  
 *plResult*  
 Codice restituito da Windows. Specifica il risultato dell'elaborazione del messaggio e dipende dal messaggio inviato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario&0;.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare la gestione dei messaggi di controllo senza finestra.  
  
##  <a name="isdlgbuttonchecked"></a>COleControlContainer::IsDlgButtonChecked  
 Determina lo stato del pulsante specificato.  
  
```  
virtual UINT IsDlgButtonChecked(int nIDButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIDButton`  
 L'identificatore del controllo pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito, da un pulsante creato con il **BS_AUTOCHECKBOX**, **BS_AUTORADIOBUTTON**, **BS_AUTO3STATE**, **BS_CHECKBOX**, **BS_RADIOBUTTON**, o **BS_3STATE** stile. Può essere uno dei seguenti:  
  
- **BST_CHECKED** pulsante è selezionato.  
  
- **BST_INDETERMINATE** diventa inattivo, che indica uno stato indeterminato (si applica solo se il pulsante ha il **BS_3STATE** o **BS_AUTO3STATE** stile).  
  
- **BST_UNCHECKED** pulsante è deselezionato.  
  
### <a name="remarks"></a>Note  
 Se il pulsante è un controllo a tre stati, la funzione membro determina se si è visualizzata in grigio, selezionata, o nessuno.  
  
##  <a name="m_crback"></a>COleControlContainer::m_crBack  
 Il colore di sfondo del contenitore.  
  
```  
COLORREF m_crBack;  
```  
  
##  <a name="m_crfore"></a>COleControlContainer::m_crFore  
 Il colore di primo piano del contenitore.  
  
```  
COLORREF m_crFore;  
```  
  
##  <a name="m_listsitesorwnds"></a>COleControlContainer::m_listSitesOrWnds  
 Un elenco dei siti di controllo ospitato dal contenitore.  
  
```  
CTypedPtrList<CPtrList, COleControlSiteOrWnd*> m_listSitesOrWnds;  
```  
  
##  <a name="m_nwindowlesscontrols"></a>COleControlContainer::m_nWindowlessControls  
 Il numero di controlli privi di finestra ospitato dal contenitore dei controlli.  
  
```  
int m_nWindowlessControls;  
```  
  
##  <a name="m_polefont"></a>COleControlContainer::m_pOleFont  
 Puntatore al tipo di carattere OLE del sito del controllo personalizzato.  
  
```  
LPFONTDISP m_pOleFont;  
```  
  
##  <a name="m_psitecapture"></a>COleControlContainer::m_pSiteCapture  
 Puntatore al sito del controllo di acquisizione.  
  
```  
COleControlSite* m_pSiteCapture;  
```  
  
##  <a name="m_psitefocus"></a>COleControlContainer::m_pSiteFocus  
 Un puntatore al sito del controllo che attualmente ha lo stato attivo.  
  
```  
COleControlSite* m_pSiteFocus;  
```  
  
##  <a name="m_psiteuiactive"></a>COleControlContainer::m_pSiteUIActive  
 Puntatore al sito del controllo che viene attivato sul posto.  
  
```  
COleControlSite* m_pSiteUIActive;  
```  
  
##  <a name="m_pwnd"></a>COleControlContainer::m_pWnd  
 Puntatore all'oggetto finestra associata al contenitore.  
  
```  
CWnd* m_pWnd;  
```  
  
##  <a name="m_sitemap"></a>COleControlContainer::m_siteMap  
 Mappa del sito.  
  
```  
CMapPtrToPtr m_siteMap;  
```  
  
##  <a name="onpaint"></a>COleControlContainer::OnPaint  
 Chiamato dal framework per gestire `WM_PAINT` richieste.  
  
```  
virtual BOOL OnPaint(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo usato dal contenitore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato gestito; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare il processo di disegno.  
  
##  <a name="onuiactivate"></a>COleControlContainer::OnUIActivate  
 Chiamato dal framework quando il sito del controllo, a cui puntava `pSite`, sta per essere attivata sul posto.  
  
```  
virtual void OnUIActivate(COleControlSite* pSite);
```  
  
### <a name="parameters"></a>Parametri  
 `pSite`  
 Puntatore al sito del controllo per essere attivato sul posto.  
  
### <a name="remarks"></a>Note  
 Attivazione sul posto significa che menu principale del contenitore viene sostituito con un menu composto sul posto.  
  
##  <a name="onuideactivate"></a>COleControlContainer::OnUIDeactivate  
 Chiamato dal framework quando il sito del controllo, a cui puntava `pSite`, sta per essere disattivato.  
  
```  
virtual void OnUIDeactivate(COleControlSite* pSite);
```  
  
### <a name="parameters"></a>Parametri  
 `pSite`  
 Puntatore al sito del controllo sta per essere disattivato.  
  
### <a name="remarks"></a>Note  
 Quando si riceve la notifica, il contenitore deve reinstallare l'interfaccia utente e assumere lo stato attivo.  
  
##  <a name="scrollchildren"></a>COleControlContainer::ScrollChildren  
 Chiamato dal framework quando vengono ricevuti messaggi di scorrimento da una finestra figlio.  
  
```  
virtual void ScrollChildren(
    int dx,  
    int dy);
```  
  
### <a name="parameters"></a>Parametri  
 `dx`  
 La quantità, in pixel, di scorrimento lungo l'asse x.  
  
 *dy*  
 La quantità, in pixel, di scorrimento lungo l'asse y.  
  
##  <a name="senddlgitemmessage"></a>COleControlContainer::SendDlgItemMessage  
 Invia un messaggio al controllo specificato.  
  
```  
virtual LRESULT SendDlgItemMessage(
    int nID,  
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Specifica l'identificatore del controllo che riceve il messaggio.  
  
 `message`  
 Specifica il messaggio da inviare.  
  
 `wParam`  
 Specifica informazioni aggiuntive specifiche di messaggio.  
  
 `lParam`  
 Specifica informazioni aggiuntive specifiche di messaggio.  
  
##  <a name="setdlgitemint"></a>COleControlContainer::SetDlgItemInt  
 Imposta il testo di un controllo in una finestra di dialogo per la rappresentazione di stringa di un valore intero specificato.  
  
```  
virtual void SetDlgItemInt(
    int nID,  
    UINT nValue,  
    BOOL bSigned);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del controllo.  
  
 `nValue`  
 Valore intero da visualizzare.  
  
 `bSigned`  
 Specifica se il `nValue` parametro signed o unsigned. Se questo parametro è **TRUE**, `nValue` è firmato. Se questo parametro è **TRUE** e `nValue` è minore di zero, un segno meno segno viene posizionata prima la prima cifra nella stringa. Se questo parametro è **FALSE**, `nValue` non è firmato.  
  
##  <a name="setdlgitemtext"></a>COleControlContainer::SetDlgItemText  
 Imposta il testo del controllo specificato, utilizzando il testo contenuto `lpszString`.  
  
```  
virtual void SetDlgItemText(
    int nID,  
    LPCTSTR lpszString);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'identificatore del controllo.  
  
 `lpszString`  
 Puntatore al testo del controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleControlSite](../../mfc/reference/colecontrolsite-class.md)   
 [Classe COccManager](../../mfc/reference/coccmanager-class.md)


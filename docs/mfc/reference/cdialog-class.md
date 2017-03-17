---
title: CDialog (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDialog
- AFXWIN/CDialog
- AFXWIN/CDialog::CDialog
- AFXWIN/CDialog::Create
- AFXWIN/CDialog::CreateIndirect
- AFXWIN/CDialog::DoModal
- AFXWIN/CDialog::EndDialog
- AFXWIN/CDialog::GetDefID
- AFXWIN/CDialog::GotoDlgCtrl
- AFXWIN/CDialog::InitModalIndirect
- AFXWIN/CDialog::MapDialogRect
- AFXWIN/CDialog::NextDlgCtrl
- AFXWIN/CDialog::OnInitDialog
- AFXWIN/CDialog::OnSetFont
- AFXWIN/CDialog::PrevDlgCtrl
- AFXWIN/CDialog::SetDefID
- AFXWIN/CDialog::SetHelpID
- AFXWIN/CDialog::OnCancel
- AFXWIN/CDialog::OnOK
dev_langs:
- C++
helpviewer_keywords:
- modal dialog boxes, creating
- MFC dialog boxes, base class
- modeless dialog boxes, creating
- modeless dialog boxes, displaying
- CDialog class
ms.assetid: ca64b77e-2cd2-47e3-8eff-c2645ad578f9
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 0944d815e8aca591f2a09c09af60fa591a9b1a6d
ms.lasthandoff: 02/24/2017

---
# <a name="cdialog-class"></a>CDialog (classe)
La classe base utilizzata per la visualizzazione di finestre di dialogo sullo schermo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDialog : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialog::CDialog](#cdialog)|Costruisce un oggetto `CDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialog::Create](#create)|Inizializza il `CDialog` oggetto. Crea una finestra di dialogo non modale e lo collega a di `CDialog` oggetto.|  
|[CDialog::CreateIndirect](#createindirect)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo in memoria (non basata sulle risorse).|  
|[CDialog::DoModal](#domodal)|Chiama una finestra di dialogo modale e restituisce al termine.|  
|[CDialog::EndDialog](#enddialog)|Chiude una finestra di dialogo modale.|  
|[CDialog::GetDefID](#getdefid)|Ottiene l'ID del controllo pulsante predefinito per una finestra di dialogo.|  
|[CDialog::GotoDlgCtrl](#gotodlgctrl)|Sposta lo stato attivo a un controllo di finestra di dialogo specificata nella finestra di dialogo.|  
|[CDialog:: InitModalIndirect](#initmodalindirect)|Crea una finestra di dialogo modale da un modello di finestra di dialogo in memoria (non basata sulle risorse). I parametri vengono archiviati fino a quando la funzione `DoModal` viene chiamato.|  
|[CDialog::MapDialogRect](#mapdialogrect)|Converte le unità finestra di dialogo di un rettangolo in unità schermo.|  
|[CDialog::NextDlgCtrl](#nextdlgctrl)|Sposta lo stato attivo al controllo successivo la finestra di dialogo nella finestra di dialogo.|  
|[CDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione di finestra di dialogo.|  
|[CDialog::OnSetFont](#onsetfont)|Eseguire l'override per specificare il tipo di carattere da utilizzare quando Disegna un testo di un controllo finestra di dialogo.|  
|[CDialog::PrevDlgCtrl](#prevdlgctrl)|Sposta lo stato attivo al controllo finestra di dialogo precedente nella finestra di dialogo.|  
|[CDialog::SetDefID](#setdefid)|Modifica il controllo pulsante predefinito per una finestra di dialogo per un pulsante di comando specificato.|  
|[CDialog::SetHelpID](#sethelpid)|Imposta l'ID della Guida sensibile al contesto per la finestra di dialogo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialog::OnCancel](#oncancel)|Eseguire l'override per eseguire l'azione con tasto ESC o il pulsante Annulla. Il valore predefinito viene chiusa la finestra di dialogo e **DoModal** restituisce **IDCANCEL**.|  
|[CDialog::OnOK](#onok)|Eseguire l'override per eseguire l'azione pulsante OK nella finestra di dialogo modale. Il valore predefinito viene chiusa la finestra di dialogo e `DoModal` restituisce **IDOK**.|  
  
## <a name="remarks"></a>Note  
 Finestre di dialogo sono disponibili due tipi: modali e non modali. Finestra di dialogo modale deve essere chiusa dall'utente prima che l'applicazione continua. Una finestra di dialogo non modale consente all'utente di visualizzare la finestra di dialogo e tornare a un'altra attività senza l'annullamento o la rimozione di finestra di dialogo.  
  
 Oggetto `CDialog` oggetto è una combinazione di un modello di finestra di dialogo e un `CDialog`-classe derivata. Utilizzare l'editor della finestra di dialogo per creare il modello di finestra di dialogo e archiviarlo in una risorsa, quindi utilizzare la procedura guidata Aggiungi classe per creare una classe derivata da `CDialog`.  
  
 Finestra di dialogo, come qualsiasi altra finestra, riceve i messaggi da Windows. Nella finestra di dialogo, si è particolarmente interessati a gestisce i messaggi di notifica dei controlli della finestra di dialogo, dal momento che la modalità con cui l'utente interagisce con la finestra di dialogo. Utilizzare la finestra proprietà per selezionare i messaggi che si desidera a handle e aggiungerà le voci di mappa dei messaggi appropriata e le funzioni membro di gestore di messaggi alla classe per l'utente. È sufficiente scrivere codice specifico dell'applicazione in funzioni membro di gestione.  
  
 Se si preferisce, è sempre possibile scrivere le voci della mappa messaggi e funzioni membro manualmente.  
  
 In tutti ma la finestra di dialogo banale, aggiungere variabili membro alla classe di finestre di dialogo derivata per archiviare i dati immessi nei controlli della finestra di dialogo dall'utente o per visualizzare i dati per l'utente. È possibile utilizzare la procedura guidata Aggiungi variabile per creare le variabili membro e associarli ai controlli. Allo stesso tempo, scegliere un tipo di variabile e l'intervallo consentito di valori per ogni variabile. La procedura guidata codice aggiunge le variabili membro alla classe di finestre di dialogo derivata.  
  
 Un mapping dei dati viene generato per gestire automaticamente lo scambio di dati tra le variabili membro e i controlli della finestra di dialogo. Il mapping dei dati sono disponibili funzioni che consentono di inizializzare i controlli nella finestra di dialogo con i valori appropriati, recuperare i dati e convalidare i dati.  
  
 Per creare una finestra di dialogo modale, costruire un oggetto nello stack utilizzando il costruttore per la classe di finestre di dialogo derivata e quindi chiamare `DoModal` per creare la finestra di dialogo e i relativi controlli. Se si desidera creare una finestra di dialogo non modale, chiamare **crea** nel costruttore della classe della finestra.  
  
 È anche possibile creare un modello in memoria tramite un [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) come descritto nella struttura dei dati di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Dopo avere costruito un `CDialog` dell'oggetto, chiamare [CreateIndirect](#createindirect) per creare un modale la finestra di dialogo oppure chiamare [InitModalIndirect](#initmodalindirect) e [DoModal](#domodal) per creare una finestra di dialogo modale.  
  
 Il mapping dei dati di exchange e la convalida viene scritto in un override di `CWnd::DoDataExchange` che viene aggiunto alla nuova classe finestra di dialogo. Vedere il [DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) funzione membro in `CWnd` per ulteriori informazioni sulle funzionalità di exchange e la convalida.  
  
 Il programmatore sia la chiamata di framework `DoDataExchange` indirettamente tramite una chiamata a [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata).  
  
 Il framework chiama `UpdateData` quando l'utente fa clic sul pulsante OK per chiudere una finestra di dialogo modale. (I dati non vengono recuperati se si fa clic sul pulsante Annulla.) L'implementazione predefinita di [OnInitDialog](#oninitdialog) chiama anche `UpdateData` per impostare i valori iniziali dei controlli. In genere override `OnInitDialog` per inizializzare ulteriormente i controlli. `OnInitDialog`viene chiamato dopo che tutti i controlli di finestra di dialogo vengono creati e appena prima la finestra di dialogo viene visualizzata.  
  
 È possibile chiamare `CWnd::UpdateData` in qualsiasi momento durante l'esecuzione di una finestra di dialogo modale o non modale.  
  
 Se si sviluppa una finestra di dialogo manualmente, è aggiungersi le variabili membro necessari per la classe derivata-finestra di dialogo e aggiungere le funzioni membro per impostare o recuperare questi valori.  
  
 Finestra di dialogo modale viene chiuso automaticamente quando l'utente preme i pulsanti OK o Annulla oppure quando il codice chiama il `EndDialog` funzione membro.  
  
 Quando si implementa una finestra di dialogo non modale, sempre l'override di `OnCancel` funzione membro e chiamare `DestroyWindow` all'interno di esso. Non chiamare la classe di base `CDialog::OnCancel`, poiché chiama `EndDialog`, che renderà la finestra di dialogo invisibile ma non eliminerà il. È inoltre necessario eseguire l'override `PostNcDestroy` per le finestre di dialogo non modali per eliminare **questo**, dal momento che le finestre di dialogo non modali vengono in genere allocate con **nuova**. Finestre di dialogo modali vengono in genere create nel frame e non è necessario `PostNcDestroy` pulizia.  
  
 Per ulteriori informazioni su `CDialog`, vedere:  
  
- [Finestre di dialogo](../../mfc/dialog-boxes.md)  
  
-   Articolo della Knowledge Base Q262954: procedura: creare una finestra di dialogo ridimensionabili con barre di scorrimento  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cdialog"></a>CDialog::CDialog  
 Per costruire basata sulle risorse finestra di dialogo modale, chiamare delle forme di costruttore pubblica.  
  
```  
explicit CDialog(
    LPCTSTR lpszTemplateName,  
    CWnd* pParentWnd = NULL);

 
explicit CDialog(
    UINT nIDTemplate,  
    CWnd* pParentWnd = NULL);  
  
CDialog();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTemplateName`  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 `nIDTemplate`  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Un form del costruttore fornisce l'accesso alla risorsa finestra di dialogo in base al nome di modello. L'altro costruttore consente di accedere al numero ID del modello, in genere con un **IDD** prefisso (ad esempio IDD_DIALOG1).  
  
 Per creare una finestra di dialogo modale da un modello in memoria, prima di richiamare il costruttore senza parametri, protetto e quindi chiamare `InitModalIndirect`.  
  
 Dopo la creazione di una finestra di dialogo modale con uno dei metodi precedenti, chiamare `DoModal`.  
  
 Per creare una finestra di dialogo non modale, utilizzare la forma protetta del `CDialog` costruttore. Il costruttore è protetto perché è necessario derivare la propria classe di finestra di dialogo per implementare una finestra di dialogo non modale. Costruzione di una finestra di dialogo non modale è un processo in due passaggi. Prima chiamata al costruttore. Chiamare quindi il **crea** funzione membro per creare una finestra di dialogo basata sulle risorse, oppure chiamare `CreateIndirect` per creare la finestra di dialogo da un modello in memoria.  
  
##  <a name="create"></a>CDialog::Create  
 Chiamare **crea** per creare una finestra di dialogo non modale utilizzando un modello di finestra di dialogo da una risorsa.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszTemplateName,  
    CWnd* pParentWnd = NULL);

 
virtual BOOL Create(
    UINT nIDTemplate,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTemplateName`  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
 `nIDTemplate`  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="return-value"></a>Valore restituito  
 Entrambi i formati restituiscono diverso da zero se la finestra di dialogo Creazione e inizializzazione hanno avuto esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile inserire la chiamata a **crea** all'interno del costruttore o una chiamata dopo il costruttore viene richiamato.  
  
 Due forme di **crea** funzione membro vengono fornite per l'accesso alla risorsa modello di finestra di dialogo nome del modello o il numero di ID modello (ad esempio IDD_DIALOG1).  
  
 Per delle forme, passare un puntatore all'oggetto finestra padre. Se `pParentWnd` è **NULL**, verrà creata la finestra di dialogo con la finestra padre o proprietaria impostata nella finestra principale dell'applicazione.  
  
 Il **crea** funzione membro restituisce immediatamente dopo la creazione nella finestra di dialogo.  
  
 Utilizzare il **WS_VISIBLE** stile nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzati quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow`. Per un'ulteriore gli stili di finestra di dialogo e le applicazioni, vedere il [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] e [stili finestra](../../mfc/reference/window-styles.md) nel *riferimenti alla libreria MFC*.  
  
 Utilizzare il `CWnd::DestroyWindow` funzione distruggere creata da una finestra di dialogo di **crea** (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#62; NVC_MFCControlLadenDialog](../../mfc/codesnippet/cpp/cdialog-class_1.cpp)]  
  
##  <a name="createindirect"></a>CDialog::CreateIndirect  
 Chiamare questa funzione membro per creare una finestra di dialogo non modale da un modello di finestra di dialogo in memoria.  
  
```  
virtual BOOL CreateIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,  
    CWnd* pParentWnd = NULL,  
    void* lpDialogInit = NULL);

 
virtual BOOL CreateIndirect(
    HGLOBAL hDialogTemplate,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDialogTemplate`  
 Punta alla memoria che contiene un modello di finestra di dialogo utilizzato per creare la finestra di dialogo. Questo modello è sotto forma di un [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) informazioni di struttura e di controllo, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre dell'oggetto finestra di dialogo (di tipo [CWnd](../../mfc/reference/cwnd-class.md)). In questo caso **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
 `lpDialogInit`  
 Punta a un **DLGINIT** risorse.  
  
 `hDialogTemplate`  
 Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto forma di un **DLGTEMPLATE** struttura e i dati per ogni controllo nella finestra di dialogo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra di dialogo è stata creata e inizializzata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `CreateIndirect` funzione membro restituisce immediatamente dopo la creazione nella finestra di dialogo.  
  
 Utilizzare il **WS_VISIBLE** stile nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzati quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow` per fare in modo che appaia. Per ulteriori informazioni su come è possibile specificare altri stili di finestra di dialogo nel modello, vedere il [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Utilizzare il `CWnd::DestroyWindow` funzione distruggere creata da una finestra di dialogo di `CreateIndirect` (funzione).  
  
 Finestre di dialogo che contengono i controlli ActiveX richiedono informazioni aggiuntive fornite un **DLGINIT** risorse. Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q231591, "procedura: utilizzare un modello di finestra di dialogo per creare una finestra di dialogo MFC con un controllo ActiveX." Articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio di MSDN Library o al [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="domodal"></a>CDialog::DoModal  
 Chiamare questa funzione membro per richiamare la finestra di dialogo modale e restituire il risultato della finestra di dialogo al termine.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `int` che specifica il valore del `nResult` parametro passato per il [CDialog::EndDialog](#enddialog) funzione membro, che viene utilizzato per chiudere la finestra di dialogo. Il valore restituito è -1 se la funzione Impossibile creare la finestra di dialogo o **IDABORT** se si è verificato un altro errore, nel qual caso la finestra di output conterrà informazioni sull'errore da [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Questa funzione membro gestisce l'interazione con l'utente mentre è attiva la finestra di dialogo. Questo è ciò che rende la finestra di dialogo modale; ovvero, l'utente non può interagire con altre finestre fino a quando non viene chiusa la finestra di dialogo.  
  
 Se l'utente fa clic su uno dei pulsanti di comando nella finestra di dialogo, ad esempio OK o Annulla, una funzione membro di gestore di messaggi, ad esempio [OnOK](#onok) o [OnCancel](#oncancel), viene chiamato per tentare di chiudere la finestra di dialogo. Il valore predefinito `OnOK` funzione membro convalidare e aggiornare i dati della finestra di dialogo e chiudere la finestra di dialogo con risultato **IDOK**e il valore predefinito `OnCancel` funzione membro verrà chiusa la finestra di dialogo con risultato **IDCANCEL** senza convalida o l'aggiornamento dei dati finestra di dialogo. È possibile eseguire l'override di queste funzioni gestore messaggi per modificare il comportamento.  
  
> [!NOTE]
> `PreTranslateMessage`è ora denominata per l'elaborazione dei messaggi di finestra di dialogo modali.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#63;](../../mfc/codesnippet/cpp/cdialog-class_2.cpp)]  
  
##  <a name="enddialog"></a>CDialog::EndDialog  
 Chiamare questa funzione membro per terminare una finestra di dialogo modale.  
  
```  
void EndDialog(int nResult);
```  
  
### <a name="parameters"></a>Parametri  
 `nResult`  
 Contiene il valore da restituire al chiamante di nella finestra di dialogo `DoModal`.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro restituisce `nResult` come valore restituito di `DoModal`. È necessario utilizzare il `EndDialog` funzione sia terminata l'elaborazione di ogni volta che viene creata una finestra di dialogo modale.  
  
 È possibile chiamare `EndDialog` in qualsiasi momento, anche in [OnInitDialog](#oninitdialog), nel qual caso è necessario chiudere la finestra di dialogo prima che viene visualizzata o prima che venga impostato lo stato attivo.  
  
 `EndDialog`non chiude la finestra di dialogo immediatamente. Al contrario, imposta un flag che indica la finestra di dialogo per chiudere appena restituisce il gestore di messaggi corrente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#64; NVC_MFCControlLadenDialog](../../mfc/codesnippet/cpp/cdialog-class_3.cpp)]  
  
 [!code-cpp[NVC_MFCControlLadenDialog&#65;](../../mfc/codesnippet/cpp/cdialog-class_4.cpp)]  
  
##  <a name="getdefid"></a>CDialog::GetDefID  
 Chiamare il `GetDefID` funzione membro per ottenere l'ID del controllo pulsante predefinito per una finestra di dialogo.  
  
```  
DWORD GetDefID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore a 32 bit ( `DWORD`). Se il pulsante predefinito ha un valore di ID, contiene la parola più significativa **DC_HASDEFID** e la parola meno significativa contiene il valore ID. Se il pulsante predefinito non dispone di un valore di ID, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 In genere si tratta di un pulsante OK.  
  
##  <a name="gotodlgctrl"></a>CDialog::GotoDlgCtrl  
 Sposta lo stato attivo al controllo specificato nella finestra di dialogo.  
  
```  
void GotoDlgCtrl(CWnd* pWndCtrl);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndCtrl`  
 Identifica la finestra (controllo) che riceverà lo stato attivo.  
  
### <a name="remarks"></a>Note  
 Per ottenere un puntatore al controllo (finestra figlio) da passare come `pWndCtrl`, chiamare il `CWnd::GetDlgItem` funzione membro, che restituisce un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [GetDlgItem](../../mfc/reference/cwnd-class.md#getdlgitem).  
  
##  <a name="initmodalindirect"></a>CDialog:: InitModalIndirect  
 Chiamare questa funzione membro per inizializzare un oggetto finestra di dialogo modale tramite un modello di finestra di dialogo create in memoria.  
  
```  
BOOL InitModalIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,  
    CWnd* pParentWnd = NULL,  
    void* lpDialogInit = NULL);

 
    BOOL InitModalIndirect(
    HGLOBAL hDialogTemplate,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDialogTemplate`  
 Punta alla memoria che contiene un modello di finestra di dialogo utilizzato per creare la finestra di dialogo. Questo modello è sotto forma di un [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) informazioni di struttura e di controllo, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `hDialogTemplate`  
 Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto forma di un **DLGTEMPLATE** struttura e i dati per ogni controllo nella finestra di dialogo.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
 `lpDialogInit`  
 Punta a un **DLGINIT** risorse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto finestra di dialogo è stato creato e inizializzato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per creare una finestra di dialogo modale indirettamente, allocare un blocco di memoria globale e riempirlo con il modello di finestra di dialogo. Chiamare quindi il vuoto `CDialog` costruttore per costruire l'oggetto finestra di dialogo. Quindi, chiamare `InitModalIndirect` per archiviare l'handle per il modello di finestra di dialogo in memoria. La finestra di dialogo di Windows verrà creata e visualizzata in seguito, quando il [DoModal](#domodal) viene chiamata la funzione membro.  
  
 Finestre di dialogo che contengono i controlli ActiveX richiedono informazioni aggiuntive fornite un **DLGINIT** risorse. Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q231591, "procedura: utilizzare un modello di finestra di dialogo per creare una finestra di dialogo MFC con un controllo ActiveX." Articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio di MSDN Library o al [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="mapdialogrect"></a>CDialog::MapDialogRect  
 Chiamata per convertire le unità finestra di dialogo di un rettangolo in unità schermo.  
  
```  
void MapDialogRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) coordina l'oggetto che contiene la finestra di dialogo da convertire.  
  
### <a name="remarks"></a>Note  
 La finestra di dialogo unità sono espresse in termini di corrente la finestra di dialogo unità di base derivato dalla media larghezza e altezza dei caratteri nel tipo di carattere utilizzato per la finestra di dialogo testo. Un'unità orizzontale è un quarto dell'unità di base larghezza la finestra di dialogo e un'unità verticale è un ottavo dell'unità di base altezza la finestra di dialogo.  
  
 Il **GetDialogBaseUnits** funzione Windows restituisce informazioni sulle dimensioni di carattere del sistema, ma è possibile specificare un carattere diverso per ogni finestra di dialogo se si utilizza il **DS_SETFONT** stile nel file di definizione di risorsa. Il `MapDialogRect` funzione Windows viene utilizzato il tipo di carattere appropriato per questa finestra di dialogo.  
  
 Il `MapDialogRect` funzione membro sostituisce le unità finestra di dialogo `lpRect` con schermata unità (pixel) in modo che il rettangolo può essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una casella.  
  
##  <a name="nextdlgctrl"></a>CDialog::NextDlgCtrl  
 Sposta lo stato attivo al controllo successivo nella finestra di dialogo.  
  
```  
void NextDlgCtrl() const;  
```  
  
### <a name="remarks"></a>Note  
 Se lo stato attivo si trova l'ultimo controllo nella finestra di dialogo, si sposta sul primo controllo.  
  
##  <a name="oncancel"></a>CDialog::OnCancel  
 Il framework chiama questo metodo quando l'utente fa clic **Annulla** o preme il tasto ESC in una finestra di dialogo modale o non modale.  
  
```  
virtual void OnCancel();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per eseguire azioni (ad esempio, il ripristino dei dati precedenti) quando un utente chiude la finestra di dialogo facendo clic su **Annulla** o premendo il tasto ESC. Il valore predefinito chiude una finestra di dialogo modale chiamando [EndDialog](#enddialog) e causando [DoModal](#domodal) per restituire IDCANCEL.  
  
 Se si implementa il **Annulla** pulsante in una finestra di dialogo non modale, è necessario eseguire l'override di `OnCancel` metodo e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) in essa contenuti. Non chiamare il metodo della classe base, poiché chiama `EndDialog`, che sarà rendere invisibile nella finestra di dialogo, ma non eliminarlo.  
  
> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in Windows XP. Per ulteriori informazioni su `CFileDialog`, vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#66;](../../mfc/codesnippet/cpp/cdialog-class_5.cpp)]  
  
##  <a name="oninitdialog"></a>CDialog  
 Questo metodo viene chiamato in risposta al `WM_INITDIALOG` messaggio.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica se l'applicazione ha impostato lo stato attivo a uno dei controlli nella finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo per il percorso predefinito, il primo controllo nella finestra di dialogo. L'applicazione può restituire 0 solo se è impostata in modo esplicito lo stato attivo a uno dei controlli nella finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Windows invia il `WM_INITDIALOG` messaggio nella finestra di dialogo durante il [crea](#create), [CreateIndirect](#createindirect), o [DoModal](#domodal) chiamate, che si verificano immediatamente prima che viene visualizzata la finestra di dialogo.  
  
 Eseguire l'override di questo metodo se si desidera eseguire un'elaborazione speciale quando la finestra di dialogo viene inizializzata. Nella versione sottoposta a override, chiamare innanzitutto la classe di base `OnInitDialog` ma ignora il valore restituito. In genere si ritornerà `TRUE` dal metodo sottoposto a override.  
  
 Chiamate di Windows il `OnInitDialog` funzione utilizzando la procedura standard globali finestra di dialogo comune a tutte le finestre di dialogo libreria Microsoft Foundation Class. Non chiama questa funzione tramite la mappa dei messaggi e pertanto non è necessaria una voce della mappa messaggi per questo metodo.  
  
> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Per ulteriori informazioni sulle modifiche apportate a `CFileDialog` in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#67;](../../mfc/codesnippet/cpp/cdialog-class_6.cpp)]  
  
##  <a name="onok"></a>CDialog::OnOK  
 Chiamato quando l'utente sceglie il **OK** pulsante (il pulsante con un ID di IDOK).  
  
```  
virtual void OnOK();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per eseguire azioni quando il **OK** pulsante è attivato. Se la finestra di dialogo include exchange e la convalida automatica dei dati, l'implementazione predefinita di questo metodo convalida i dati della finestra di dialogo e aggiorna le variabili appropriate nell'applicazione.  
  
 Se si implementa il **OK** pulsante in una finestra di dialogo non modale, è necessario eseguire l'override di `OnOK` metodo e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) in essa contenuti. Non chiamare il metodo della classe base, poiché chiama [EndDialog](#enddialog) che viene reso invisibile nella finestra di dialogo ma non l'eliminazione.  
  
> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in Windows XP. Per ulteriori informazioni su `CFileDialog`, vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog&#68;](../../mfc/codesnippet/cpp/cdialog-class_7.cpp)]  
  
##  <a name="onsetfont"></a>CDialog::OnSetFont  
 Specifica il tipo di carattere che verrà utilizzato da un controllo finestra di dialogo quando il disegno di testo.  
  
```  
Virtual void OnSetFont(CFont* pFont);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFont`  
 Specifica un puntatore al tipo di carattere che verrà utilizzato come tipo di carattere predefinito per tutti i controlli in questa finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Nella finestra di dialogo utilizzerà il tipo di carattere specificato come valore predefinito per tutti i relativi controlli.  
  
 L'editor della finestra di dialogo in genere imposta il tipo di carattere la finestra di dialogo come parte della risorsa di modello di finestra di dialogo.  
  
> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Per ulteriori informazioni sulle modifiche apportate a `CFileDialog` in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
##  <a name="prevdlgctrl"></a>CDialog::PrevDlgCtrl  
 Imposta lo stato attivo al controllo precedente nella finestra di dialogo.  
  
```  
void PrevDlgCtrl() const;  
```  
  
### <a name="remarks"></a>Note  
 Se lo stato attivo si trova il primo controllo nella finestra di dialogo, passa all'ultimo controllo nella casella.  
  
##  <a name="setdefid"></a>CDialog::SetDefID  
 Modifica il controllo pulsante predefinito per una finestra di dialogo.  
  
```  
void SetDefID(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Specifica l'ID del controllo pulsante che diventerà il valore predefinito.  
  
##  <a name="sethelpid"></a>CDialog::SetHelpID  
 Imposta l'ID della Guida sensibile al contesto per la finestra di dialogo.  
  
```  
void SetHelpID(UINT nIDR);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDR*  
 Specifica l'ID della Guida sensibile al contesto.  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio DLGCBR32](../../visual-cpp-samples.md)   
 [Esempio MFC DLGTEMPL](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)



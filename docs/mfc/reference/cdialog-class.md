---
title: CDialog (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CDialog [MFC], CDialog
- CDialog [MFC], Create
- CDialog [MFC], CreateIndirect
- CDialog [MFC], DoModal
- CDialog [MFC], EndDialog
- CDialog [MFC], GetDefID
- CDialog [MFC], GotoDlgCtrl
- CDialog [MFC], InitModalIndirect
- CDialog [MFC], MapDialogRect
- CDialog [MFC], NextDlgCtrl
- CDialog [MFC], OnInitDialog
- CDialog [MFC], OnSetFont
- CDialog [MFC], PrevDlgCtrl
- CDialog [MFC], SetDefID
- CDialog [MFC], SetHelpID
- CDialog [MFC], OnCancel
- CDialog [MFC], OnOK
ms.assetid: ca64b77e-2cd2-47e3-8eff-c2645ad578f9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8ae7748c249cb9c7752b55d07bf10278c9c7f4ce
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955014"
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
|[CDialog::Create](#create)|Inizializza il `CDialog` oggetto. Crea una finestra di dialogo non modale e lo collega al `CDialog` oggetto.|  
|[CDialog::CreateIndirect](#createindirect)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo in memoria (non basata sulle risorse).|  
|[CDialog::DoModal](#domodal)|Chiama una finestra di dialogo modale e restituisce quando viene eseguita.|  
|[CDialog::EndDialog](#enddialog)|Chiude una finestra di dialogo modale.|  
|[CDialog::GetDefID](#getdefid)|Ottiene l'ID del controllo pulsante predefinito per una finestra di dialogo.|  
|[CDialog::GotoDlgCtrl](#gotodlgctrl)|Sposta lo stato attivo a un controllo di finestra di dialogo specificata nella finestra di dialogo.|  
|[CDialog:: InitModalIndirect](#initmodalindirect)|Crea una finestra di dialogo modale da un modello di finestra di dialogo in memoria (non basata sulle risorse). I parametri vengono archiviati finché la funzione `DoModal` viene chiamato.|  
|[CDialog::MapDialogRect](#mapdialogrect)|Converte le unità finestra di dialogo di un rettangolo in unità schermo.|  
|[CDialog::NextDlgCtrl](#nextdlgctrl)|Sposta lo stato attivo al controllo successivo-finestra di dialogo nella finestra di dialogo.|  
|[CDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione della finestra di dialogo.|  
|[CDialog::OnSetFont](#onsetfont)|Eseguire l'override per specificare il tipo di carattere usato quando disegna il testo da un controllo di finestra di dialogo.|  
|[CDialog::PrevDlgCtrl](#prevdlgctrl)|Sposta lo stato attivo sul controllo finestra di dialogo precedente nella finestra di dialogo.|  
|[CDialog::SetDefID](#setdefid)|Modifica il controllo pulsante predefinito per una finestra di dialogo un pulsante di comando specificato.|  
|[CDialog::SetHelpID](#sethelpid)|Imposta l'ID della Guida sensibile al contesto per la finestra di dialogo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialog::OnCancel](#oncancel)|Eseguire l'override per eseguire il pulsante Annulla o azione con tasto ESC. Il valore predefinito viene chiusa la finestra di dialogo e `DoModal` restituisce **IDCANCEL**.|  
|[CDialog::OnOK](#onok)|Eseguire l'override per eseguire l'azione sul pulsante OK nella finestra di dialogo modale. Il valore predefinito viene chiusa la finestra di dialogo e `DoModal` restituisce **IDOK**.|  
  
## <a name="remarks"></a>Note  
 Finestre di dialogo sono disponibili due tipi: modali e non modali. Finestra di dialogo modale deve essere chiusa dall'utente prima che l'applicazione continui. Una finestra di dialogo non modale consente all'utente visualizzare la finestra di dialogo e restituire a un'altra attività senza l'annullamento o rimuovere la finestra di dialogo.  
  
 Un `CDialog` oggetto è una combinazione di un modello di finestra di dialogo e un `CDialog`-classe derivata. Utilizzare l'editor finestre per creare il modello di finestra di dialogo e archiviarlo in una risorsa, quindi utilizzare la procedura guidata Aggiungi classe per creare una classe derivata da `CDialog`.  
  
 Una finestra di dialogo, come qualsiasi altra finestra, riceve i messaggi da Windows. In una finestra di dialogo, si è particolarmente interessante per la gestione dei messaggi di notifica dei controlli della finestra di dialogo, dal momento che è la modalità con cui l'utente interagisce con la finestra di dialogo. Utilizzare la finestra proprietà per selezionare quali messaggi si desidera a handle e aggiungerà le voci di mappa dei messaggi appropriata e le funzioni membro di gestore di messaggi alla classe per l'utente. È sufficiente scrivere codice specifico dell'applicazione nelle funzioni membro di gestore.  
  
 Se si preferisce, è sempre possibile scrivere funzioni membro e le voci della mappa messaggi manualmente.  
  
 In tutti, ma la finestra di dialogo più semplice, aggiungere le variabili membro alla classe di finestre di dialogo derivata per archiviare i dati immessi nei controlli della finestra di dialogo dall'utente o per visualizzare i dati per l'utente. È possibile utilizzare la procedura guidata Aggiungi variabile per creare le variabili membro e associarli a controlli. Allo stesso tempo, scegliere un tipo di variabile e nell'intervallo consentito di valori per ogni variabile. La procedura guidata codice aggiunge le variabili membro alla classe derivata finestra di dialogo.  
  
 Un mapping dei dati viene generato per gestiscono automaticamente lo scambio di dati tra le variabili membro e i controlli della finestra di dialogo. Il mapping dei dati sono disponibili funzioni che consentono di inizializzare i controlli nella finestra di dialogo con i valori appropriati, recuperare i dati e convalidare i dati.  
  
 Per creare una finestra di dialogo modale, costruire un oggetto nello stack utilizzando il costruttore per la classe di finestre di dialogo derivata e quindi chiamare `DoModal` per creare la finestra di dialogo e i relativi controlli. Se si desidera creare una finestra di dialogo non modale, chiamare `Create` nel costruttore della classe della finestra.  
  
 È anche possibile creare un modello in memoria usando un [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) di strutture di dati come descritto in Windows SDK. Dopo aver creato un `CDialog` dell'oggetto, chiamare [CreateIndirect](#createindirect) per creare un modale la finestra di dialogo oppure chiamare [InitModalIndirect](#initmodalindirect) e [DoModal](#domodal) per creare un oggetto modale finestra di dialogo.  
  
 Il mapping dei dati di exchange e la convalida viene scritto in un override di `CWnd::DoDataExchange` che viene aggiunto alla nuova classe finestra di dialogo. Vedere la [DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) funzione di membro in `CWnd` per ulteriori informazioni sulla funzionalità di exchange e la convalida.  
  
 Il programmatore sia la chiamata di framework `DoDataExchange` indirettamente tramite una chiamata a [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata).  
  
 Il framework chiama `UpdateData` quando l'utente fa clic su OK per chiudere una finestra di dialogo modale. (I dati non vengono recuperati se viene scelto il pulsante Annulla.) L'implementazione predefinita di [OnInitDialog](#oninitdialog) chiama anche `UpdateData` per impostare i valori iniziali dei controlli. È in genere eseguire l'override `OnInitDialog` inizializzare ulteriori controlli. `OnInitDialog` viene chiamato dopo che tutti i controlli di finestra di dialogo vengono creati e appena prima la finestra di dialogo viene visualizzata la finestra.  
  
 È possibile chiamare `CWnd::UpdateData` in qualsiasi momento durante l'esecuzione di una finestra di dialogo modale o non modale.  
  
 Se si sviluppa una finestra di dialogo manualmente, è aggiungersi le variabili membro necessari alla classe derivata-finestra di dialogo e aggiungere funzioni membro per impostare o ottenere questi valori.  
  
 Finestra di dialogo modale verrà chiusa automaticamente quando l'utente preme i pulsanti OK o Annulla o quando il codice chiama il `EndDialog` funzione membro.  
  
 Quando si implementa una finestra di dialogo non modale, sempre eseguire l'override di `OnCancel` funzione membro e chiamare `DestroyWindow` da in esso contenuti. Non chiamare la classe di base `CDialog::OnCancel`, poiché chiama `EndDialog`, che renderà visibile la finestra di dialogo, ma non eliminare definitivamente. È inoltre consigliabile eseguire l'override `PostNcDestroy` per le finestre di dialogo non modale per eliminare **questo**, dal momento che le finestre di dialogo non modali vengono allocate in genere con **nuovo**. Finestre di dialogo modali vengono in genere costruite sul frame e non richiedono `PostNcDestroy` pulizia.  
  
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
  
##  <a name="cdialog"></a>  CDialog::CDialog  
 Per costruire basata sulle risorse finestra di dialogo modale, chiamare entrambe i formati del costruttore pubblico.  
  
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
 *lpszTemplateName*  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 *nIDTemplate*  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre o proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se si tratta **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Un form del costruttore consente di accedere alla risorsa finestra di dialogo in base al nome di modello. L'altro costruttore fornisce l'accesso al numero ID del modello, in genere con un **IDD _** prefisso (ad esempio IDD_DIALOG1).  
  
 Per creare una finestra di dialogo modale da un modello in memoria, prima di richiamare il costruttore senza parametri, protetto e quindi chiamare `InitModalIndirect`.  
  
 Dopo aver creato una finestra di dialogo modale con uno dei metodi sopra riportati, chiamare `DoModal`.  
  
 Per creare una finestra di dialogo non modale, utilizzare il formato protetto del `CDialog` costruttore. Il costruttore è protetto perché è necessario derivare la propria classe di finestra di dialogo per implementare una finestra di dialogo non modale. Costruzione di una finestra di dialogo non modale è un processo in due passaggi. Prima chiamata al costruttore. Chiamare quindi il `Create` funzione membro per creare una finestra di dialogo basata sulle risorse, o chiamare `CreateIndirect` per creare la finestra di dialogo da un modello in memoria.  
  
##  <a name="create"></a>  CDialog::Create  
 Chiamare `Create` per creare una finestra di dialogo non modale utilizzando un modello di finestra di dialogo da una risorsa.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszTemplateName,  
    CWnd* pParentWnd = NULL);

 
virtual BOOL Create(
    UINT nIDTemplate,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszTemplateName*  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se si tratta **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
 *nIDTemplate*  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
### <a name="return-value"></a>Valore restituito  
 Entrambe le forme restituiscono diverso da zero se l'inizializzazione e la creazione della finestra di dialogo hanno avuto esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile inserire la chiamata a `Create` all'interno del costruttore o chiamata dopo il costruttore viene richiamato.  
  
 Due forme del `Create` funzione membro vengono fornite per l'accesso alla risorsa modello di finestra di dialogo Nome modello o numero ID del modello (ad esempio IDD_DIALOG1).  
  
 Per entrambe i formati, passare un puntatore all'oggetto finestra padre. Se *pParentWnd* viene **NULL**, verrà creata la finestra di dialogo con la finestra padre o proprietaria imposta nella finestra principale dell'applicazione.  
  
 Il `Create` funzione membro restituisce immediatamente dopo la creazione di finestra di dialogo.  
  
 Usare la **WS_VISIBLE** stile nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzato quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow`. Per un'ulteriore gli stili di finestra di dialogo e le applicazioni, vedere la [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) struttura in Windows SDK e [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) nel *riferimenti alla libreria MFC*.  
  
 Usare la `CWnd::DestroyWindow` funzione eliminare definitivamente una finestra di dialogo creata il `Create` (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#62](../../mfc/codesnippet/cpp/cdialog-class_1.cpp)]  
  
##  <a name="createindirect"></a>  CDialog::CreateIndirect  
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
 *lpDialogTemplate*  
 Punta alla memoria che contiene un modello di finestra di dialogo considerato di creare la finestra di dialogo. Questo modello è sotto forma di un [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) informazioni di struttura e di controllo, come descritto in Windows SDK.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre dell'oggetto finestra di dialogo (di tipo [CWnd](../../mfc/reference/cwnd-class.md)). Se si tratta **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
 *lpDialogInit*  
 Punta a un **DLGINIT** risorse.  
  
 *hDialogTemplate*  
 Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto forma di un **DLGTEMPLATE** struttura e i dati per ogni controllo nella finestra di dialogo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra di dialogo è stata creata e inizializzata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `CreateIndirect` funzione membro restituisce immediatamente dopo la creazione di finestra di dialogo.  
  
 Usare la **WS_VISIBLE** stile nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzato quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow` per fare in modo che venga visualizzato. Per ulteriori informazioni sul modo in cui è possibile specificare altri stili di finestra di dialogo nel modello, vedere la [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) struttura in Windows SDK.  
  
 Usare la `CWnd::DestroyWindow` funzione eliminare definitivamente una finestra di dialogo creata il `CreateIndirect` (funzione).  
  
 Finestre di dialogo che contengono i controlli ActiveX richiedono informazioni aggiuntive fornite un **DLGINIT** risorse. Per altre informazioni, vedere l'articolo della Knowledge Base Q231591, "HOWTO: utilizzare un modello di finestra di dialogo per creare una finestra di dialogo MFC con un controllo ActiveX." Articoli della Knowledge Base sono disponibili in [ http://support.microsoft.com ](http://support.microsoft.com/).  
  
##  <a name="domodal"></a>  CDialog::DoModal  
 Chiamare questa funzione membro per richiamare la finestra di dialogo modale e restituiscono il risultato della finestra di dialogo al termine.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un **int** valore che specifica il valore della *Nrisultato* parametro passato per il [CDialog::EndDialog](#enddialog) funzione membro, che consente di chiudere la finestra di dialogo. Il valore restituito è -1 se la funzione non è stato possibile creare la finestra di dialogo, o **IDABORT** se si è verificato un altro errore, nel qual caso la finestra di output conterrà le informazioni sull'errore dal [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Questa funzione membro gestisce tutte le interazioni con l'utente, mentre la finestra di dialogo è attiva. Questo è ciò che rende la finestra di dialogo modale; vale a dire, l'utente non può interagire con altre finestre fino a quando non viene chiusa la finestra di dialogo.  
  
 Se l'utente fa clic su uno dei pulsanti di comando nella finestra di dialogo, ad esempio OK o Annulla, una funzione membro di gestore di messaggi, ad esempio [OnOK](#onok) oppure [OnCancel](#oncancel), viene chiamato per tentare di chiudere la finestra di dialogo. Il valore predefinito `OnOK` funzione membro convalidare e aggiornare i dati della finestra di dialogo e chiudere la finestra di dialogo con risultato **IDOK**e il valore predefinito `OnCancel` funzione membro verrà chiusa la finestra di dialogo con risultato  **IDCANCEL** senza la convalida o l'aggiornamento dei dati finestra di dialogo. È possibile eseguire l'override di queste funzioni gestore messaggi per modificare il comportamento.  
  
> [!NOTE]
> `PreTranslateMessage` è ora denominata per l'elaborazione dei messaggi di finestra di dialogo modale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#63](../../mfc/codesnippet/cpp/cdialog-class_2.cpp)]  
  
##  <a name="enddialog"></a>  CDialog::EndDialog  
 Chiamare questa funzione membro per terminare una finestra di dialogo modale.  
  
```  
void EndDialog(int nResult);
```  
  
### <a name="parameters"></a>Parametri  
 *Nrisultato*  
 Contiene il valore da restituire dalla finestra di dialogo al chiamante di `DoModal`.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro restituisce *Nrisultato* come valore restituito di `DoModal`. È necessario utilizzare il `EndDialog` funzione sia terminata l'elaborazione di ogni volta che viene creata una finestra di dialogo modale.  
  
 È possibile chiamare `EndDialog` in qualsiasi momento, anche nelle [OnInitDialog](#oninitdialog), nel qual caso è necessario chiudere la finestra di dialogo prima di esso viene visualizzata o prima che venga impostato lo stato attivo di input.  
  
 `EndDialog` non chiudere la finestra immediatamente. Al contrario, imposta un flag che indirizza la finestra di dialogo per chiudere appena restituisce il gestore di messaggi corrente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#64](../../mfc/codesnippet/cpp/cdialog-class_3.cpp)]  
  
 [!code-cpp[NVC_MFCControlLadenDialog#65](../../mfc/codesnippet/cpp/cdialog-class_4.cpp)]  
  
##  <a name="getdefid"></a>  CDialog::GetDefID  
 Chiamare il `GetDefID` funzione membro per ottenere l'ID del controllo pulsante predefinito per una finestra di dialogo.  
  
```  
DWORD GetDefID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore a 32 bit ( `DWORD`). Se il pulsante di comando predefinito ha un valore di ID, contiene la parola più significativa **DC_HASDEFID** e la parola meno significativa contiene il valore ID. Se il pulsante predefinito non ha un valore di ID, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 Si tratta in genere di un pulsante OK.  
  
##  <a name="gotodlgctrl"></a>  CDialog::GotoDlgCtrl  
 Sposta lo stato attivo al controllo specificato nella finestra di dialogo.  
  
```  
void GotoDlgCtrl(CWnd* pWndCtrl);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndCtrl*  
 Identifica la finestra (controllo) che deve ricevere lo stato attivo.  
  
### <a name="remarks"></a>Note  
 Per ottenere un puntatore al controllo (finestra figlio) da passare come *pWndCtrl*, chiamare il `CWnd::GetDlgItem` la funzione membro, che restituisce un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [GetDlgItem](../../mfc/reference/cwnd-class.md#getdlgitem).  
  
##  <a name="initmodalindirect"></a>  CDialog:: InitModalIndirect  
 Chiamare questa funzione membro per inizializzare un oggetto finestra di dialogo modale tramite un modello di finestra di dialogo che si costruisce in memoria.  
  
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
 *lpDialogTemplate*  
 Punta alla memoria che contiene un modello di finestra di dialogo considerato di creare la finestra di dialogo. Questo modello è sotto forma di un [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) informazioni di struttura e di controllo, come descritto in Windows SDK.  
  
 *hDialogTemplate*  
 Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto forma di un **DLGTEMPLATE** struttura e i dati per ogni controllo nella finestra di dialogo.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre o proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se si tratta **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
 *lpDialogInit*  
 Punta a un **DLGINIT** risorse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto finestra di dialogo è stato creato e inizializzato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per creare una finestra di dialogo modale indirettamente, allocare un blocco di memoria globale e inserirvi il modello di finestra di dialogo. Chiamare quindi vuoto `CDialog` costruttore per costruire l'oggetto finestra di dialogo. Successivamente, chiamare `InitModalIndirect` per archiviare l'handle per il modello di finestra di dialogo in memoria. La finestra di dialogo di Windows verrà creata e visualizzata successivamente, quando il [DoModal](#domodal) funzione membro viene chiamata.  
  
 Finestre di dialogo che contengono i controlli ActiveX richiedono informazioni aggiuntive fornite un **DLGINIT** risorse. Per altre informazioni, vedere l'articolo della Knowledge Base Q231591, "HOWTO: utilizzare un modello di finestra di dialogo per creare una finestra di dialogo MFC con un controllo ActiveX." Articoli della Knowledge Base sono disponibili in [ http://support.microsoft.com ](http://support.microsoft.com/).  
  
##  <a name="mapdialogrect"></a>  CDialog::MapDialogRect  
 Chiamata eseguita per convertire le unità finestra di dialogo di un rettangolo in unità schermo.  
  
```  
void MapDialogRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la finestra di dialogo coordinate da convertire.  
  
### <a name="remarks"></a>Note  
 Finestra di dialogo unità è espresse in termini di unità di base-finestra di dialogo corrente derivato da Media larghezza e altezza di caratteri nel tipo di carattere utilizzato per il testo della finestra di dialogo. Un'unità orizzontale è un quarto dell'unità di base larghezza della finestra di dialogo e un'unità verticale è un ottavo dell'unità di base altezza della finestra di dialogo.  
  
 Il **GetDialogBaseUnits** funzione Windows restituisce informazioni sulle dimensioni di carattere del sistema, ma è possibile specificare un carattere diverso per ogni finestra di dialogo se si utilizza il **DS_SETFONT** stile il file di definizione di risorsa. Il `MapDialogRect` funzione Windows viene utilizzato il tipo di carattere appropriato per questa finestra di dialogo.  
  
 Il `MapDialogRect` funzione membro sostituisce le unità finestra di dialogo *lpRect* con schermata unità (pixel) in modo che il rettangolo consente di creare una finestra di dialogo o posizionare un controllo all'interno di una finestra.  
  
##  <a name="nextdlgctrl"></a>  CDialog::NextDlgCtrl  
 Sposta lo stato attivo al controllo successivo nella finestra di dialogo.  
  
```  
void NextDlgCtrl() const;  
```  
  
### <a name="remarks"></a>Note  
 Se lo stato attivo si trova l'ultimo controllo nella finestra di dialogo, passa al primo controllo.  
  
##  <a name="oncancel"></a>  CDialog::OnCancel  
 Il framework chiama questo metodo quando l'utente fa clic **annullare** o preme il tasto ESC in una finestra di dialogo modale o non modale.  
  
```  
virtual void OnCancel();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per eseguire azioni (ad esempio, il ripristino dei dati precedenti) quando un utente chiude la finestra di dialogo facendo clic **annullare** o premendo il tasto ESC. Il valore predefinito viene chiusa una finestra di dialogo modale chiamando [EndDialog](#enddialog) causando [DoModal](#domodal) per restituire IDCANCEL.  
  
 Se si implementa il **annullare** pulsante in una finestra di dialogo non modale, è necessario eseguire l'override il `OnCancel` metodo e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) suo interno. Non chiamare il metodo della classe di base, poiché chiama `EndDialog`, che verrà rendere invisibile la finestra di dialogo ma non eliminarlo.  
  
> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in Windows XP. Per ulteriori informazioni `CFileDialog`, vedere [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#66](../../mfc/codesnippet/cpp/cdialog-class_5.cpp)]  
  
##  <a name="oninitdialog"></a>  CDialog  
 Questo metodo viene chiamato in risposta al `WM_INITDIALOG` messaggio.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica se l'applicazione ha impostato lo stato attivo di input a uno dei controlli nella finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo di input nel percorso predefinito, il primo controllo nella finestra di dialogo. L'applicazione può restituire 0 solo se è impostata in modo esplicito lo stato attivo di input a uno dei controlli nella finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Windows invia i `WM_INITDIALOG` messaggio alla finestra di dialogo durante il [Create](#create), [CreateIndirect](#createindirect), o [DoModal](#domodal) chiamate, che si verificano subito prima la finestra di dialogo viene visualizzato.  
  
 Eseguire l'override di questo metodo se si desidera eseguire un'elaborazione speciale, quando la finestra di dialogo viene inizializzata. Nella versione sottoposta a override, chiamare innanzitutto la classe di base `OnInitDialog` ma ignora il valore restituito. In genere si tornerà `TRUE` dal metodo sottoposto a override.  
  
 Le chiamate di Windows il `OnInitDialog` funzione utilizzando la procedura standard globale-finestra di dialogo comune a tutte le finestre di dialogo libreria Microsoft Foundation Class. Non chiama questa funzione tramite la mappa messaggi e pertanto non è necessaria una voce della mappa messaggi per questo metodo.  
  
> [!NOTE]
> È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in Windows Vista o sistemi operativi successivi. Per ulteriori informazioni sulle modifiche ai `CFileDialog` in Windows Vista e versioni successive, vedere [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#67](../../mfc/codesnippet/cpp/cdialog-class_6.cpp)]  
  
##  <a name="onok"></a>  CDialog::OnOK  
 Chiamata eseguita quando l'utente fa clic il **OK** pulsante (il pulsante con un ID di IDOK).  
  
```  
virtual void OnOK();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per eseguire azioni quando il **OK** pulsante è attivato. Se la finestra di dialogo include exchange e la convalida automatica dei dati, l'implementazione predefinita di questo metodo convalida i dati della finestra di dialogo e aggiorna le variabili appropriate nell'applicazione.  
  
 Se si implementa il **OK** pulsante in una finestra di dialogo non modale, è necessario eseguire l'override di `OnOK` metodo e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) suo interno. Non chiamare il metodo della classe di base, poiché chiama [EndDialog](#enddialog) che rende invisibile la finestra di dialogo, ma non l'eliminazione.  
  
> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in Windows XP. Per ulteriori informazioni `CFileDialog`, vedere [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#68](../../mfc/codesnippet/cpp/cdialog-class_7.cpp)]  
  
##  <a name="onsetfont"></a>  CDialog::OnSetFont  
 Specifica il tipo di carattere che utilizzerà un controllo di finestra di dialogo durante il disegno di testo.  
  
```  
Virtual void OnSetFont(CFont* pFont);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pFont*  
 Specifica un puntatore al tipo di carattere che verrà utilizzato come tipo di carattere predefinito per tutti i controlli in questa finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 La finestra di dialogo verrà utilizzato il tipo di carattere specificato come il valore predefinito per tutti i relativi controlli.  
  
 L'editor finestre in genere imposta il tipo di carattere della finestra di dialogo come parte della risorsa modello di finestra di dialogo.  
  
> [!NOTE]
> È possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma che viene compilato in Windows Vista o sistemi operativi successivi. Per ulteriori informazioni sulle modifiche ai `CFileDialog` in Windows Vista e versioni successive, vedere [CFileDialog (classe)](../../mfc/reference/cfiledialog-class.md).  
  
##  <a name="prevdlgctrl"></a>  CDialog::PrevDlgCtrl  
 Imposta lo stato attivo sul controllo precedente nella finestra di dialogo.  
  
```  
void PrevDlgCtrl() const;  
```  
  
### <a name="remarks"></a>Note  
 Se lo stato attivo si trova il primo controllo nella finestra di dialogo, passa all'ultimo controllo nella finestra di.  
  
##  <a name="setdefid"></a>  CDialog::SetDefID  
 Il controllo pulsante predefinito per una finestra di dialogo viene modificato.  
  
```  
void SetDefID(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 Specifica l'ID del controllo pulsante che diventerà il valore predefinito.  
  
##  <a name="sethelpid"></a>  CDialog::SetHelpID  
 Imposta l'ID della Guida sensibile al contesto per la finestra di dialogo.  
  
```  
void SetHelpID(UINT nIDR);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDR*  
 Specifica l'ID della Guida sensibile al contesto.  
  
## <a name="see-also"></a>Vedere anche  
 [DLGCBR32 esempio MFC](../../visual-cpp-samples.md)   
 [Esempio MFC DLGTEMPL](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)


---
title: "Creazione guidata aggiunta classe MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.class.mfc.simple.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata aggiunta classe MFC"
  - "procedure guidate [MFC]"
ms.assetid: ad3b0989-d307-43b2-9417-3f9a78889024
caps.latest.revision: 16
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione guidata aggiunta classe MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa creazione guidata codice per aggiungere una classe a un progetto MFC esistente o a un progetto ATL che supporta MFC.  È anche possibile aggiungere classi MFC ai progetti Win32 con supporto MFC.  Le opzioni disponibili in questa finestra di dialogo variano a seconda delle funzionalità specificate durante la creazione del progetto.  
  
## Nomi  
 Specificare in questa schermata il nome della classe, la classe base e i nomi dei file per la nuova classe.  
  
 **Nome di classe**  
 Consente di specificare il nome della nuova classe e di fornire la base predefinita per i nomi di ID e di file presenti in questa schermata.  In genere le classi C\+\+ iniziano con "C": ad esempio, "CMyClass" diventa "MyClass.h" e così via.  
  
 **Classe base**  
 Consente di specificare il nome della classe base della nuova classe.  Per impostazione predefinita, la classe base è [CWnd](../../mfc/reference/cwnd-class.md).  La classe base selezionata determina l'eventuale attivazione di altre caselle di questa pagina.  
  
 Il tipo di classe impostato come classe di base determina se la classe include un ID di finestra di dialogo o un ID di risorsa.  I tipi di classi generali sono i seguenti:  
  
-   Classi quali [CButton](../../mfc/reference/cbutton-class.md), [CWnd](../../mfc/reference/cwnd-class.md) e [CDocument](../../mfc/reference/cdocument-class.md), che non richiedono un ID di finestra di dialogo o un ID di risorsa.  Queste classi non utilizzano un ID di finestra di dialogo o di risorsa.  Se si seleziona una di queste classi come classe di base, le caselle **ID finestra di dialogo** e **ID risorsa DHTML** vengono disattivate.  
  
-   Classi quali [CDialog](../../mfc/reference/cdialog-class.md), [CFormView](../../mfc/reference/cformview-class.md) o [CPropertyPage](../../mfc/reference/cpropertypage-class.md), che richiedono un ID finestra di dialogo.  
  
-   La classe [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md), che richiede un ID finestra di dialogo, un ID risorsa DHTML e un nome di file HTML.  
  
 Per le classi che richiedono un ID di finestra di dialogo, può risultare più pratico utilizzare l'[Editor risorse](../../mfc/resource-editors.md) per creare la risorsa finestra di dialogo, assegnare il relativo ID nella [finestra Proprietà](../Topic/Properties%20Window.md), quindi creare una classe associata all'ID di risorsa.  Per ulteriori informazioni sulla creazione di una finestra di dialogo standard di Windows, vedere [Creazione di una nuova finestra di dialogo](../../mfc/creating-a-new-dialog-box.md).  
  
> [!NOTE]
>  Se dapprima si crea una risorsa finestra di dialogo e si deriva la nuova classe da `CDHtmlDialog`, eliminare i pulsanti standard di Windows **OK** e **Annulla** presenti nella finestra di dialogo predefinita.  Nella finestra di dialogo standard di Windows si trova il form DHTML con i relativi pulsanti **OK** e **Annulla**.  
  
 Nella finestra di dialogo vi possono essere sia i controlli Windows che quelli DHTML, ma si consiglia di non utilizzarli congiuntamente.  
  
 **ID finestra di dialogo**  
 Consente di specificare l'ID finestra di dialogo se come **classe base** è selezionata `CDialog`, `CFormView`, `CPropertyPage` o `CDHtmlDialog`.  
  
 **File H**  
 Consente di impostare il nome del file di intestazione per la classe del nuovo oggetto.  Per impostazione predefinita, questo nome si basa su quello fornito in **Nome classe**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata o per aggiungere la dichiarazione di classe a un file esistente.  Se si sceglie un file esistente, questo non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere la dichiarazione di classe al contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **File CPP**  
 Consente di impostare il nome del file di implementazione per la classe del nuovo oggetto.  Per impostazione predefinita, questo nome si basa su quello fornito in **Nome classe**.  Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nella posizione desiderata.  Il file non verrà salvato nella posizione selezionata finché non si sceglie **Fine** all'interno della procedura guidata.  
  
 Il file non viene sovrascritto.  Se si seleziona il nome di un file esistente, quando si sceglie **Fine** nella procedura guidata viene chiesto di indicare se aggiungere l'implementazione della classe al termine del contenuto del file.  Scegliere **Sì** per aggiungere il file oppure **No** per tornare alla procedura guidata e specificare un altro nome file.  
  
 **Active Accessibility**  
 Attiva il supporto MFC per Active Accessibility chiamando [EnableActiveAccessibility](../Topic/CWnd::EnableActiveAccessibility.md) nel costruttore.  L'opzione è disponibile per le classi derivate da [CWnd](../../mfc/reference/cwnd-class.md).  
  
 **ID risorsa DHTML**  
 Si applica solo alle classi derivate da `CDHtmlDialog`.  Consente di specificare l'ID risorsa della finestra di dialogo DHTML,  che viene visualizzato nella sezione HTML del file RC del progetto, insieme al nome del file della finestra di dialogo HTML.  La risorsa DHTML identificata da questo ID è contenuta dalla finestra di dialogo identificata da **ID finestra di dialogo**.  
  
 **File HTM**  
 Si applica solo alle classi derivate da `CDHtmlDialog`.  Imposta il nome del file HTML per la finestra di dialogo DHTML.  Per impostazione predefinita, questo nome di file si basa sul nome della classe.  Il nome di file viene visualizzato nella sezione HTML del file RC del progetto, insieme all'ID risorsa della finestra di dialogo DHTML.  
  
 **Automazione**  
 Consente di impostare il livello di classe del supporto di [automazione](../../mfc/automation.md).  L'automazione a livello di classe è disponibile per tutte le classi che supportano l'automazione.  È anche disponibile per progetti creati con il supporto per l'automazione.  Ovvero, un progetto MFC che [supporta ATL](../../atl/reference/mfc-support-in-atl-projects.md) oppure un progetto MFC per cui è stata selezionata la casella di controllo **Automazione** nella pagina [Funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) della Creazione guidata applicazione MFC.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**None**|Utilizzare questa opzione per specificare che il supporto di automazione non è disponibile per la classe.|  
|**Automazione**|Utilizzare questa opzione per specificare che l'automazione è disponibile per la classe.  Se si seleziona questa opzione, la classe appena creata sarà disponibile come oggetto programmabile per le applicazioni client di automazione, quali Microsoft Visual Basic e Microsoft Excel.  L'opzione non è disponibile per le classi base elencate dopo la tabella.|  
|**Creabile da ID tipo**|Consente di specificare che la classe e il progetto supportano altre applicazioni per la creazione di oggetti di questa classe mediante l'automazione.  L'opzione consente ai client di automazione di creare direttamente un oggetto di automazione.  L'ID tipo della casella di testo viene utilizzato dall'applicazione client per specificare l'oggetto da creare; è a livello di sistema e deve essere univoco.  L'opzione non è disponibile per le classi base elencate dopo la tabella.|  
  
 Il supporto di automazione non è disponibile per le seguenti classi base:  
  
-   `CAsyncMonitorFile`  
  
-   `CAsyncSocket`  
  
-   `CCachedDataPathProperty`  
  
-   `CConnectionPoint`  
  
-   `CDatabase`  
  
-   `CDataPathProperty`  
  
-   `CHttpFilter`  
  
-   `CHttpServer`  
  
-   `CInternetSession`  
  
-   `CObject`  
  
-   `CSocket`  
  
 **ID tipo**  
 Consente di impostare l'ID tipo della classe.  La casella di **ID tipo** concatena il nome del progetto e il nuovo nome della classe come segue: *MFCProj.MFCClass*.  È possibile modificare questo ID solo se in **Automazione** è stata selezionata l'opzione **Creabile da ID tipo**.  
  
 **Genera risorse DocTemplate**  
 Consente di specificare che i documenti creati dall'applicazione dispongono di risorse modelli di documenti.  Per attivare questa casella di controllo è necessario che il progetto supporti l'architettura documento\/visualizzazione MFC e che la classe base sia [CFormView](../../mfc/reference/cformview-class.md).  
  
 Per ulteriori informazioni, vedere [Modelli di documenti e processo di creazione di documenti e visualizzazioni](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## Vedere anche  
 [Classe MFC](../../mfc/reference/adding-an-mfc-class.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
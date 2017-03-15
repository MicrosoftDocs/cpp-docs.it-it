---
title: "Tipo di applicazione, Creazione guidata applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.apptype"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "librerie statiche, MFC"
ms.assetid: c3f62b0e-3f13-42c5-9859-d3890d0c3e1d
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Tipo di applicazione, Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa schermata della [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md) consente di progettare e aggiungere funzionalità di base a una nuova applicazione MFC.  
  
 **Tipo di applicazione**  
 Specifica il tipo di supporto dei documenti che si desidera creare nell'applicazione.  Il tipo di applicazione selezionato determina le opzioni dell'interfaccia utente disponibili per l'applicazione.  Per ulteriori informazioni, vedere [Funzionalità interfaccia utente, Creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md).  
  
 Per ulteriori informazioni sui tipi di documenti, vedere:  
  
-   [SDI e MDI](../../mfc/sdi-and-mdi.md)  
  
-   [Finestre cornice](../../mfc/frame-windows.md)  
  
-   [Classi Frame\-Window](../../mfc/frame-window-classes.md)  
  
-   [Documenti, visualizzazioni e framework](../../mfc/documents-views-and-the-framework.md)  
  
-   [Finestre di dialogo](../../mfc/dialog-boxes.md)  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Documento singolo**|Crea un'architettura di interfaccia a documento singolo \(SDI\) per l'applicazione, con una classe di visualizzazione basata sulla [CView Class](../../mfc/reference/cview-class.md).  La classe di base per la visualizzazione può essere modificata nella schermata [Classi generate, Creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) della procedura guidata.  Per creare un'applicazione basata su form, ad esempio, utilizzare la [CFormView Class](../../mfc/reference/cformview-class.md) per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, la finestra cornice del documento può contenere un solo documento.|  
|**Documenti multipli**|Crea un'architettura di interfaccia a documenti multipli \(MDI\) per l'applicazione, con una classe di visualizzazione basata su `CView`.  La classe base per la visualizzazione può essere visualizzata nella schermata **Classi generate** della procedura guidata.  Per creare un'applicazione basata su form, ad esempio, utilizzare `CFormView` per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, la finestra cornice del documento può contenere più finestre figlio.|  
|**Documenti a schede**|Posiziona ogni documento in una scheda separata.|  
|**Basato su finestra di dialogo**|Crea un'architettura a finestre di dialogo per l'applicazione, con una classe di finestre di dialogo basata su `CDialog`. Per creare una finestra di dialogo HTML, selezionare la casella **Usa finestra di dialogo HTML**.|  
|**Usa finestra di dialogo HTML**|Solo per le applicazioni basate su finestre di dialogo.  Deriva la classe di finestre di dialogo dalla [CDHtmlDialog Class](../../mfc/reference/cdhtmldialog-class.md) anziché dalla [CDialog Class](../../mfc/reference/cdialog-class.md).  Se si seleziona questa casella di controllo, `CDHtmlDialog` viene riportata nella casella **Classe base** della schermata [Classi generate, Creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) della procedura guidata.<br /><br /> Una finestra di dialogo derivata da `CDHtmlDialog` visualizza finestre di dialogo basate su HTML, scambia dati con i controlli HTML e gestisce gli eventi HTML.|  
|**Documenti multipli di primo livello**|Crea un'architettura a documenti multipli di primo livello per l'applicazione, con una classe di visualizzazione basata su `CView`.<br /><br /> In questo tipo di applicazione, quando si sceglie **Nuovo** \(o **Nuovo frame**\) dal menu **File**, l'applicazione crea una finestra di cui il desktop costituisce implicitamente il padre.  Il nuovo frame del documento viene visualizzato sulla barra delle applicazioni e non è limitato all'area client della finestra dell'applicazione.|  
  
 **Supporto architettura documento\/visualizzazione**  
 Specifica se includere l'architettura documento\/visualizzazione nell'applicazione utilizzando la [CDocument Class](../../mfc/reference/cdocument-class.md) e la [CView Class](../../mfc/reference/cview-class.md) \(impostazione predefinita\).  Deselezionare questa casella di controllo se si trasferisce un'applicazione non MFC oppure si desidera ridurre le dimensioni dell'eseguibile compilato.  Per impostazione predefinita, un'applicazione non dotata dell'architettura documento\/visualizzazione deriva dalla [CWinApp Class](../../mfc/reference/cwinapp-class.md) e non include il supporto MFC per l'apertura di un documento da un file sul disco.  
  
 **Lingua risorse**  
 Imposta la lingua delle risorse.  Nell'elenco vengono visualizzate le lingue disponibili nel sistema, in base all'installazione effettuata da Visual Studio.  Per selezionare una lingua diversa da quella di sistema, è necessario che sia stata installata la cartella di modelli appropriata per la lingua desiderata.  Per ulteriori informazioni sull'installazione di risorse di lingua diverse rispetto alle impostazioni predefinite riportate nell'elenco **Lingua risorse**, vedere [Supporto della procedura guidata per altre lingue](../../ide/wizard-support-for-other-languages.md).  
  
 La lingua selezionata si riflette sull'opzione **Stringhe localizzate** della schermata [Stringhe modello documento, Creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md) della procedura guidata.  
  
 **Usa librerie Unicode**  
 Specifica se viene utilizzata la versione Unicode o non Unicode delle librerie MFC.  
  
 **Stile del progetto**  
 Indica se l'applicazione dispone di uno standard MFC, Esplora file, Visual Studio, o l'architettura e visualizzazione di Office.  Per ulteriori informazioni, vedere [Creazione di un'applicazione MFC di tipo Esplora file](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md).  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Standard MFC**|Fornisce un'architettura di applicazione MFC standard.|  
|**Esplora file**|Implementazione di un'applicazione del tipo di esplorazione del file tramite una finestra con separatore in cui il riquadro sinistro è [CTreeView Class](../../mfc/reference/ctreeview-class.md) e il riquadro di destra è [CListView Class](../../mfc/reference/clistview-class.md).|  
|**Visual Studio**|Implementa un'applicazione di tipo Visual Studio che contiene quattro riquadri ancorabili \(**Visualizzazione file**, **Visualizzazione classi**, **Proprietà** e **Output**\) derivati dalla [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) e una finestra cornice principale derivata dalla [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md) \(impostazione predefinita\).|  
|**Office**|Implementa un'applicazione di tipo Office che contiene una barra multifunzione derivata dalla [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md), una barra di Outlook derivata dalla [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md), una barra del titolo derivata dalla [Classe CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)e un frame principale derivato dalla [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).|  
  
 **Stile visivo e colori**  
 Determina lo stile visivo dell'applicazione.  Sono disponibili le seguenti opzioni:  
  
-   **Windows nativa\/predefinita**  
  
-   **Office 2003**  
  
-   **Visual Studio 2005**  
  
-   **Office 2007 \(stile blu\)**  
  
-   **Office 2007 \(stile nero\)**  
  
-   **Office 2007 \(stile grigio\)**  
  
-   **Office 2007 \(stile azzurro\)**  
  
 **Consenti cambio stile visivo**  
 Specifica se l'utente può modificare lo stile visivo dell'applicazione in fase di esecuzione, generalmente selezionando lo stile visivo appropriato da un menu o una barra multifunzione.  
  
 **Uso di MFC**  
 Specifica come effettuare il collegamento alla libreria MFC.  Per impostazione predefinita, la libreria MFC è collegata come DLL condivisa.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Usa MFC in una DLL condivisa**|Collega la libreria MFC a un'applicazione come DLL condivisa.  Le chiamate alla libreria MFC vengono eseguite dall'applicazione in fase di esecuzione.  Questa opzione riduce i requisiti di spazio su disco e di memoria delle applicazioni composte da più file eseguibili che utilizzano la libreria MFC.  Le chiamate alle funzioni nella DLL possono essere effettuate sia da applicazioni Win32 che MFC \(impostazione predefinita\).|  
|**Usa MFC in una libreria statica**|Collega un'applicazione alla libreria MFC statica in fase di compilazione.|  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Tipi di file creati per i progetti di Visual C\+\+](../../ide/file-types-created-for-visual-cpp-projects.md)
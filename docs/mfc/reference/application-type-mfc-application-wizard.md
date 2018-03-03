---
title: Tipo di applicazione, creazione guidata applicazione MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.exe.apptype
dev_langs:
- C++
helpviewer_keywords:
- static libraries, MFC
ms.assetid: c3f62b0e-3f13-42c5-9859-d3890d0c3e1d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 45253eed40e9a79dbcb372f63cc44aaeb99edbe0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="application-type-mfc-application-wizard"></a>Tipo di applicazione, Creazione guidata applicazione MFC
Utilizzare questa pagina della finestra di [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md) per progettare e aggiungere funzionalità di base a una nuova applicazione MFC.  
  
 **Tipo di applicazione**  
 Specifica il tipo di supporto di documento che si desidera creare nell'applicazione. Il tipo di applicazione selezionato determina le opzioni dell'interfaccia utente disponibili per l'applicazione. Vedere [funzionalità dell'interfaccia utente, creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md) per ulteriori informazioni.  
  
 Per ulteriori informazioni sui tipi di documenti, vedere:  
  
-   [SDI e MDI](../../mfc/sdi-and-mdi.md)  
  
-   [Finestre cornice](../../mfc/frame-windows.md)  
  
-   [Classi di finestre cornice](../../mfc/frame-window-classes.md)  
  
-   [Documenti, visualizzazioni e framework](../../mfc/documents-views-and-the-framework.md)  
  
-   [Finestre di dialogo](../../mfc/dialog-boxes.md)  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Singolo documento**|Crea un'architettura a documento singolo interface (SDI) per l'applicazione, in una classe di visualizzazione è basata su [classe CView](../../mfc/reference/cview-class.md). È possibile modificare la classe base per la visualizzazione di [classi generate, creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della procedura guidata. Per creare un'applicazione basata su form, ad esempio, utilizzare [classe CFormView](../../mfc/reference/cformview-class.md) per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, finestra cornice del documento può contenere un solo documento.|  
|**Più documenti**|Crea un'architettura interface (MDI) di documenti multipli per l'applicazione, in una classe di visualizzazione si basa su `CView`. È possibile modificare la classe base per la visualizzazione di **classi generate** pagina della procedura guidata. Per creare un'applicazione basata su form, ad esempio, utilizzare `CFormView` per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, finestra cornice del documento può contenere più finestre figlio.|  
|**Documenti a schede**|Posiziona ogni documento in una scheda separata.|  
|**Finestra di dialogo in base**|Crea un'architettura basata su finestra di dialogo per l'applicazione in una classe di finestra di dialogo si basa su `CDialog`. (Per creare una finestra di dialogo HTML, selezionare la casella di **finestra di dialogo utilizzare HTML**.)|  
|**Finestra di dialogo HTML**|Finestra di dialogo solo per le applicazioni. Deriva la classe di finestra di dialogo da [classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) anziché [CDialog (classe)](../../mfc/reference/cdialog-class.md). Se si seleziona questa casella, `CDHtmlDialog` è elencato nella **classe di Base** casella il [classi generate, creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della procedura guidata.<br /><br /> Oggetto `CDHtmlDialog`-finestra di dialogo derivata consente di visualizzare finestre di dialogo basate su HTML, scambia dati con HTML controllano e gestisce gli eventi HTML.|  
|**Più documenti di primo livello**|Crea un'architettura più di primo livello per l'applicazione, in una classe di visualizzazione si basa su `CView`.<br /><br /> In questo tipo di applicazione, quando un utente fa clic **New** (o **nuovo Frame**) nei **File** menu, l'applicazione crea una finestra in modo implicito il cui padre è rappresentata dal desktop. Il nuovo frame del documento viene visualizzato nella barra delle applicazioni e non è limitato all'area client della finestra dell'applicazione.|  
  
 **Supporto dell'architettura documento/visualizzazione**  
 Specifica se includere l'architettura documento/visualizzazione all'interno dell'applicazione utilizzando il [CDocument (classe)](../../mfc/reference/cdocument-class.md) e [classe CView](../../mfc/reference/cview-class.md) (impostazione predefinita). Deselezionare questa casella di controllo se si trasferisce un'applicazione non MFC o se si desidera ridurre le dimensioni dell'eseguibile compilato. Per impostazione predefinita, un'applicazione senza l'architettura documento/visualizzazione è derivata da [CWinApp (classe)](../../mfc/reference/cwinapp-class.md), e non includere il supporto MFC per l'apertura di un documento da un file su disco.  
  
 **Lingua della risorsa**  
 Imposta la lingua delle risorse. L'elenco Visualizza le lingue disponibili nel sistema, come installati da Visual Studio. Se si desidera selezionare una lingua diversa dalla lingua del sistema, la cartella di modello appropriato per tale lingua deve essere già installata. Per ulteriori informazioni sull'installazione di risorse di lingua diverse da quello predefinito disponibile nel **lingua della risorsa** elenco, vedere [supporto della procedura guidata per altre lingue](../../ide/wizard-support-for-other-languages.md).  
  
 Il linguaggio selezionato viene riflessa nel **stringhe localizzate** opzione del [stringhe modello documento, creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md) pagina della procedura guidata.  
  
 **Utilizzare le librerie di Unicode**  
 Specifica se viene utilizzata la versione Unicode o non Unicode delle librerie MFC.  
  
 **Stile progetto**  
 Indica se l'applicazione ha un standard MFC, Esplora File, Visual Studio, o architettura di Office e visualizzazione. Per ulteriori informazioni, vedere [la creazione di un'applicazione MFC di tipo Esplora risorse di File](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md).  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Standard MFC**|Fornisce un'architettura di applicazione MFC standard.|  
|**Esplora file**|Implementa un'applicazione simile a Esplora risorse di File tramite una finestra con separatore, in cui il riquadro di sinistra è un [CTreeView (classe)](../../mfc/reference/ctreeview-class.md) e il riquadro di destra è un [CListView (classe)](../../mfc/reference/clistview-class.md).|  
|**Visual Studio**|Implementa un'applicazione di Visual Studio simile che contiene quattro riquadri ancorabili (**visualizzazione File**, **Visualizzazione classi**, **proprietà**, e **Output**) che derivano da [classe CDockablePane](../../mfc/reference/cdockablepane-class.md) e una finestra cornice principale che è derivata da [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md) (impostazione predefinita).|  
|**Office**|Implementa un'applicazione di tipo Office che contiene una barra multifunzione che è derivata da [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md), una barra di Outlook che deriva da [classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md), derivato da una barra del titolo [Classe CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)e un frame principale derivato da [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).|  
  
 **I colori e lo stile visivo**  
 Determina lo stile di visualizzazione dell'applicazione. Sono disponibili le seguenti opzioni:  
  
-   **Windows nativo/predefinito**  
  
-   **Office 2003**  
  
-   **Visual Studio 2005**  
  
-   **Office 2007 (tema blu)**  
  
-   **Office 2007 (tema nero)**  
  
-   **Office 2007 (tema grigio)**  
  
-   **Office 2007 (tema azzurro)**  
  
 **Abilitare il cambio dello stile di visualizzazione**  
 Specifica se l'utente cambiare lo stile di visualizzazione dell'applicazione in fase di esecuzione, in genere selezionando lo stile visivo appropriato da un menu o una barra multifunzione.  
  
 **Uso di MFC**  
 Specifica la modalità di collegamento alla libreria MFC. Per impostazione predefinita, MFC è collegato come DLL condivisa.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Usa MFC in una DLL condivisa**|È possibile collegare la libreria MFC a un'applicazione come DLL condivisa. L'applicazione effettua chiamate alla libreria MFC in fase di esecuzione. Questa opzione consente di ridurre i requisiti di memoria e disco delle applicazioni costituite da più file eseguibili che utilizzano la libreria MFC. Applicazioni Win32 sia MFC è possono chiamare funzioni nella DLL (impostazione predefinita)|  
|**Usa MFC in una libreria statica**|Collega un'applicazione alla libreria MFC statica in fase di compilazione.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Tipi di file creati per i progetti di Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md)


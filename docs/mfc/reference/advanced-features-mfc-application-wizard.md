---
title: "Funzionalit&#224; avanzate, Creazione guidata applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.advanced"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata applicazione MFC, funzionalità avanzate"
ms.assetid: 8a6681c5-6576-4b12-841a-6862beee76fa
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Funzionalit&#224; avanzate, Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento sono elencate opzioni per funzionalità aggiuntive dell'applicazione, ad esempio la Guida, il supporto di stampa e così via.  In ogni sezione specificare supporto aggiuntivo per queste funzionalità avanzate.  
  
 **Guida sensibile al contesto \(HTML\)**  
 Genera un set di file della Guida sensibile al contesto, accessibile premendo F1 e un menu ? oppure facendo clic sul pulsante **?** all'interno di una finestra di dialogo.  Il supporto della Guida richiede il compilatore della Guida.  Se non è disponibile, è possibile installarlo eseguendo nuovamente il programma di installazione.  
  
 Per altre informazioni, vedere [Guida HTML: Guida sensibile al contesto per i programmi](../../mfc/html-help-context-sensitive-help-for-your-programs.md) e [File della Guida \(HTML\)](../../ide/help-files-html-help.md).  
  
 **Stampa e anteprima di stampa**  
 Genera il codice per la gestione dei comandi di stampa, di impostazione stampante e di anteprima chiamando funzioni membro nella [CView Class](../../mfc/reference/cview-class.md) dalla libreria MFC.  Tramite la procedura guidata vengono aggiunti i comandi di queste funzioni al menu dell'applicazione.  Il supporto di stampa è disponibile solo per le applicazioni che indicano il **supporto per l'architettura documento\/visualizzazione** nella pagina [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md).  Per impostazione predefinita, le applicazioni con architettura documento\/visualizzazione dispongono del supporto di stampa.  
  
 **Automazione**  
 Specifica che l'applicazione è in grado di gestire oggetti implementati in un'altra applicazione oppure espone l'applicazione ai client di automazione.  
  
 **Controlli ActiveX**  
 Supporta i controlli ActiveX \(impostazione predefinita\).  Se non si seleziona questa opzione e successivamente si vuole inserire controlli ActiveX nel progetto, è necessario aggiungere una chiamata a [AfxEnableControlContainer](../Topic/AfxEnableControlContainer.md) nella funzione membro [CWinApp::InitInstance](../Topic/CWinApp::InitInstance.md) dell'applicazione.  
  
 **MAPI \(API del sistema di messaggistica\)**  
 Specifica che l'applicazione è in grado di creare, modificare, trasferire e archiviare i messaggi di posta.  
  
 **Windows sockets**  
 Supporta i socket Windows, che è possibile utilizzare per scrivere applicazioni in grado di comunicare su reti TCP\/IP.  
  
 **Active Accessibility**  
 Aggiunge il supporto per [IAccessible](http://msdn.microsoft.com/library/windows/desktop/dd318466) alle classi derivate da [CWnd](../../mfc/reference/cwnd-class.md), che è possibile utilizzare per personalizzare l'interfaccia utente per una migliore interazione con i client per l'accessibilità.  
  
 **Manifesto controlli comuni**  
 Abilitato per impostazione predefinita.  Genera un manifesto dell'applicazione per abilitare la DLL dei controlli comuni fornita con Microsoft Windows XP e i sistemi operativi più recenti.  
  
 La versione 6 della DLL dei controlli comuni non consente l'aggiornamento automatico della versione precedente dei controlli comuni utilizzata dalle applicazioni esistenti.  Per utilizzare la versione 6 della DLL dei controlli comuni, è necessario creare un manifesto dell'applicazione che induca l'applicazione a caricare la DLL.  La DLL dei controlli comuni supporta anche i temi di Windows XP.  
  
 Un manifesto dell'applicazione può anche specificare altre DLL e versioni necessarie all'applicazione.  Per ulteriori informazioni sui manifesti dell'applicazione, vedere [Applicazioni isolate e assembly affiancati](http://msdn.microsoft.com/library/dd408052) in [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
 **Supporto Gestione riavvio**  
 Aggiunge supporto per [Gestione riavvio di Windows](http://msdn.microsoft.com/library/windows/desktop/aa373680\(v=vs.85\).aspx).  Questo video mostra come usare Gestione riavvio da MFC: [Procedura: Usare il nuovo Gestione riavvio](http://msdn.microsoft.com/vstudio/ee886407).  
  
 **Riquadri frame avanzati**  
 |Opzione|Descrizione|  
|-------------|-----------------|  
|**Riquadro ancorato di tipo Esplora soluzioni**|Crea un riquadro ancorato simile a **Esplora soluzioni** di Visual Studio a sinistra della finestra cornice principale.|  
|**Riquadro ancorato di tipo output**|Crea un riquadro ancorato simile al riquadro **Output** di Visual Studio sotto la finestra cornice principale.|  
|**Riquadro ancorato di tipo Proprietà**|Crea un riquadro ancorato simile al riquadro **Proprietà** di Visual Studio a destra della finestra cornice principale.|  
|**Riquadro di navigazione**|Crea un riquadro ancorato simile alla barra di navigazione di Outlook a sinistra della finestra cornice principale.|  
|**Barra del titolo**|Crea una barra del titolo di tipo Office sopra la finestra cornice principale.|  
  
 **Numero di file visualizzati nell'elenco dei file recenti**  
 Specifica il numero di file da inserire nell'elenco dei file recenti.  Il numero predefinito è 4.  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
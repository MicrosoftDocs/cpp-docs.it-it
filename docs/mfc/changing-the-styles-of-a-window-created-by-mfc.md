---
title: "Modifica degli stili di una finestra creata da MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFrameWnd (classe), stili finestra"
  - "finestre figlio, stili"
  - "CMainFrame (classe)"
  - "CMDIChildWnd (classe), modifica degli stili finestra"
  - "CREATESTRUCT (macro)"
  - "stile finestra predefinito"
  - "impostazioni predefinite [C++], stile finestra"
  - "MDI [C++], stili finestra"
  - "MFC [C++], finestre"
  - "stile di interfaccia a documenti multipli"
  - "PreCreateWindow (metodo), modifica degli stili finestra"
  - "PreCreateWindow (metodo), stili finestra"
  - "Single Document Interface (SDI), modifica degli attributi della finestra"
  - "Single Document Interface (SDI), stile"
  - "stili, finestre"
  - "stili finestra [C++]"
  - "finestre [C++], MFC"
  - "WS_OVERLAPPEDWINDOW (macro)"
ms.assetid: 77fa4f03-96b4-4687-9ade-41e46f7e4b0a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Modifica degli stili di una finestra creata da MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella versione della funzione di `WinMain`, MFC registra diverse classi di finestre standard automaticamente.  Poiché in genere non si modifica `WinMain`di MFC, consente di tale funzione non è possibile modificare gli stili di finestre predefinito di MFC.  In questo articolo viene illustrato come modificare gli stili di una classe finestra preregistrato in un'applicazione esistente.  
  
##  <a name="_core_changing_styles_in_a_new_mfc_application"></a> Modificare gli stili in una nuova applicazione MFC  
 Se si utilizza Visual C\+\+ 2.0 o versione successiva, è possibile modificare gli stili predefiniti della finestra nella creazione guidata applicazione quando si crea un'applicazione.  Le funzionalità dell'interfaccia utente pagina della procedura guidata, è possibile modificare gli stili per le finestra cornice principale e finestre figlio MDI.  Per qualsiasi tipo di finestra, è possibile determinarne il peso del frame \(spesso o assottigliarsi\) e i controlli seguenti:  
  
-   Se la finestra può ridurre o ingrandire i controlli.  
  
-   Se la finestra appare inizialmente ridotta, ingrandita, o nessuno.  
  
 Per le finestre principali, è anche possibile specificare se la finestra dispone di un menu di sistema.  Per le finestre figlio MDI, è possibile specificare se una finestra supporta i riquadri splitter.  
  
##  <a name="_core_changing_styles_in_an_existing_application"></a> Modificare gli stili in un'applicazione esistente  
 Se si desidera modificare gli attributi della finestra in un'applicazione esistente, seguire le istruzioni nella parte restante di questo articolo.  
  
 Per modificare gli attributi di finestra predefiniti utilizzati da un'applicazione del framework creata con la procedura guidata, eseguire l'override della funzione membro virtuale di [PreCreateWindow](../Topic/CWnd::PreCreateWindow.md) della finestra.  `PreCreateWindow` consente a un'applicazione di accedere al processo di creazione in genere gestito internamente dalla classe di [CDocTemplate](../mfc/reference/cdoctemplate-class.md).  Il framework chiama `PreCreateWindow` appena prima di creare la finestra.  Modifica della struttura di [CREATESTRUCT](../mfc/reference/createstruct-structure.md) passata a `PreCreateWindow`, l'applicazione può modificare gli attributi utilizzati per creare la finestra.  Ad esempio, per assicurarsi che una finestra non utilizza la barra del titolo, utilizzare la seguente operazione bit per bit:  
  
 [!code-cpp[NVC_MFCDocView#15](../mfc/codesnippet/CPP/changing-the-styles-of-a-window-created-by-mfc_1.cpp)]  
  
 L'applicazione di esempio di [In CTRLBARS](../top/visual-cpp-samples.md) illustrata questa tecnica per modificare gli attributi della finestra.  Secondo cui l'applicazione modifica in `PreCreateWindow`, può essere necessario chiamare l'implementazione della classe base della funzione.  
  
 La discussione seguente viene analizzato il caso SDI e [Caso MDI](#_core_the_mdi_case).  
  
##  <a name="_core_the_sdi_case"></a> Il caso SDI  
 In un'applicazione interface \(SDI\) a documento singolo, lo stile predefinito della finestra nel framework è una combinazione degli stili di **FWS\_ADDTOTITLE** e di **WS\_OVERLAPPEDWINDOW**.  **FWS\_ADDTOTITLE** è uno stile specifico MFC che indica al framework per aggiungere il titolo del documento sulla barra del titolo della finestra.  Per modificare gli attributi della finestra in un'applicazione SDI, eseguire l'override della funzione di `PreCreateWindow` nella classe derivata da `CFrameWnd` \(che la creazione guidata applicazione nome `CMainFrame`\).  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCDocViewSDI#11](../mfc/codesnippet/CPP/changing-the-styles-of-a-window-created-by-mfc_2.cpp)]  
  
 Questo codice crea una finestra cornice principale senza icona e ingrandisci pulsanti e senza un bordo ridimensionabile.  La finestra inizialmente è centrata sullo schermo.  
  
##  <a name="_core_the_mdi_case"></a> Il caso MDI  
 Un poco più lavoro è necessario per modificare lo stile della finestra di una finestra figlio in un'applicazione di multiple\-document interface \(MDI\).  Per impostazione predefinita, un'applicazione MDI creato con la creazione guidata applicazione utilizza la classe di [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) di impostazione predefinita definita in MFC.  Per modificare lo stile della finestra di una finestra figlio MDI, è necessario derivare una nuova classe da `CMDIChildWnd` e sostituire tutti i riferimenti a `CMDIChildWnd` nel progetto i riferimenti alla nuova classe.  In genere, l'unico riferimento a `CMDIChildWnd` nell'applicazione si trova nella funzione membro di `InitInstance` dell'applicazione.  
  
 Lo stile di finestre predefinito utilizzato in un'applicazione MDI è una combinazione degli stili di **WS\_CHILD**, di **WS\_OVERLAPPEDWINDOW** e di **FWS\_ADDTOTITLE**.  Per modificare gli attributi delle finestre figlio di un'applicazione MDI, eseguire l'override della funzione di [PreCreateWindow](../Topic/CWnd::PreCreateWindow.md) nella classe derivata da `CMDIChildWnd`.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCDocView#16](../mfc/codesnippet/CPP/changing-the-styles-of-a-window-created-by-mfc_3.cpp)]  
  
 Questo codice crea le finestre figlio MDI senza il pulsante ingrandisci.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Stili di windows](../mfc/reference/window-styles.md)  
  
-   [Stili finestra cornice](../mfc/frame-window-styles-cpp.md)  
  
-   [\<caps:sentence id\="tgt44" sentenceid\="26254917059da4aba50f886a6c5db931" class\="tgtSentence"\>Stili della finestra\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms632600)  
  
## Vedere anche  
 [Stili Frame\-Window](../mfc/frame-window-styles-cpp.md)
---
title: "Creazione di un&#39;applicazione MFC di tipo Esplora file | Microsoft Docs"
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
  - "vc.appwiz.mfcexplorer.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "browser, applicazioni di tipo Esplora risorse"
  - "applicazioni di tipo Esplora risorse, creazione"
  - "MFC (applicazioni), di tipo Esplora risorse"
ms.assetid: f843ab5d-2d5d-41ca-88a4-badc0d2f8052
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di un&#39;applicazione MFC di tipo Esplora file
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Molte applicazioni del sistema Windows utilizzano l'interfaccia utente \(UI\) per Esplora file.  Quando si avvia Esplora file, ad esempio, viene visualizzata un'applicazione con una barra di divisione verticale che suddivide l'area client.  La parte sinistra dell'area client offre funzionalità di esplorazione e navigazione, mentre nella parte destra vengono riportati i dettagli relativi alla selezione effettuata nel riquadro di sinistra.  Quando si fa clic su un elemento in questo riquadro, il riquadro di destra viene rigenerato.  In un'applicazione MDI, è possibile utilizzare i comandi del menu **Visualizza** per modificare la quantità di dettagli visualizzati nel riquadro di destra. In un'applicazione SDI o a documenti multipli di primo livello, i dettagli possono essere modificati soltanto mediante i pulsanti della barra degli strumenti.  
  
 Il contenuto dei riquadri dipende dall'applicazione.  In un visualizzatore di file system, il riquadro di sinistra riporta una visualizzazione gerarchica delle directory, dei computer o dei gruppi di computer, mentre in quello di destra vengono visualizzati singoli file, cartelle o computer e i relativi dettagli.  Il contenuto non deve necessariamente essere costituito da file,  ma può corrispondere a messaggi di posta elettronica, report di errori o altri elementi di un database.  
  
 La procedura guidata crea le classi riportate di seguito.  
  
-   La classe **CLeftView** definisce il riquadro di sinistra dell'area client.  Viene sempre derivata da [CTreeView](../../mfc/reference/ctreeview-class.md).  
  
-   La classe C*NomeProg*View definisce il riquadro di destra dell'area client.  Per impostazione predefinita, viene derivata da [CListView](../../mfc/reference/clistview-class.md), ma può corrispondere a un diverso tipo di visualizzazione a seconda della classe specificata nell'elenco **Classe base** della schermata [Classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) della procedura guidata.  
  
 L'applicazione generata può essere dotata di un'interfaccia a documento singolo \(SDI\), di un'interfaccia a documenti multipli \(MDI\) oppure di un'architettura a documenti multipli di primo livello.  Ogni finestra cornice creata dall'applicazione viene suddivisa verticalmente mediante [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md).  Il codice di questo tipo di applicazione è simile al codice di una normale applicazione MFC che utilizza una barra di divisione, ad eccezione del fatto che questo tipo di applicazione dispone di visualizzazioni controlli distinte all'interno di ciascun riquadro di divisione.  
  
 Se si utilizza la visualizzazione elenco predefinita nel riquadro di destra, vengono creati i pulsanti della barra degli strumenti che consentono di modificare lo stile della visualizzazione passando alla modalità icone grandi, icone piccole, elenco o dettagli, nonché, nelle applicazioni MDI, opzioni di menu aggiuntive.  
  
### Per iniziare creando un file MFC di tipo esplora eseguibile  
  
1.  Attenersi alla procedura illustrata in [Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  Nella pagina di [Tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) la Creazione guidata applicazione MFC, selezionare lo stile di progetto **Esplora file**.  
  
3.  Impostare le opzioni di progetto desiderate nelle altre schermate della procedura guidata.  
  
4.  Scegliere **Fine** per generare lo scheletro di applicazione.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md)  
  
-   [Classi di visualizzazione derivate](../../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)   
 [Creazione di un'applicazione MFC basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md)
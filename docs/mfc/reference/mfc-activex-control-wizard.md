---
title: "Creazione guidata controllo ActiveX MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.ctl.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], MFC"
  - "Creazione guidata controllo ActiveX MFC"
  - "controlli ActiveX MFC [C++], procedure guidate"
  - "controlli OLE [C++]"
  - "controlli OLE [C++], creazione"
ms.assetid: f19d698c-bdc3-4c74-af97-3d6ccb441b75
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Creazione guidata controllo ActiveX MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un controllo ActiveX costituisce un tipo specifico di [server di automazione](../../mfc/automation-servers.md) nonché un componente riutilizzabile.  L'applicazione contenente il controllo ActiveX ne rappresenta il [client di automazione](../../mfc/automation-clients.md).  Per creare questo tipo di componente riutilizzabile, utilizzare questa procedura guidata.  Per ulteriori informazioni, vedere [Controlli ActiveX MFC](../../mfc/mfc-activex-controls.md).  
  
 In alternativa, è possibile creare un'applicazione MFC server di automazione mediante la [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).  
  
 Un controllo ActiveX creato mediante questa procedura guidata può essere invisibile oppure dotato di un'interfaccia utente.  Questa opzione può essere impostata nella schermata [Impostazioni controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) della procedura guidata.  Un controllo timer costituisce un esempio di controllo ActiveX che viene in genere impostato come invisibile.  
  
 I controlli ActiveX possono disporre di un'interfaccia utente complessa.  Alcuni controlli possono risultare simili a form incapsulati costituiti da un controllo singolo contenente diversi campi, ognuno dei quali è un controllo Windows.  Ad esempio, un oggetto che rappresenti pezzi di ricambio per auto implementato come controllo ActiveX MFC può essere dotato di un'interfaccia analoga a un form mediante la quale è possibile leggere e modificare il numero e il nome del pezzo e altre informazioni.  Per ulteriori informazioni, vedere [Controlli ActiveX MFC](../../mfc/mfc-activex-controls.md).  
  
 Per creare un contenitore per gli oggetti ActiveX, vedere [Creazione di un contenitore per un controllo ActiveX](../../mfc/reference/creating-an-mfc-activex-control-container.md).  
  
 Il programma iniziale MFC comprende file di origine C\+\+ \(CPP\), file di risorse \(RC\) e un file di progetto \(VCXPROJ\).  Il codice generato in questi file iniziali è basato su MFC.  
  
 Nell'elenco di esempi riportato di seguito vengono illustrate le attività e i tipi di miglioramenti disponibili per i controlli ActiveX.  
  
-   [Ottimizzazione di un controllo ActiveX](../../mfc/mfc-activex-controls-optimization.md)  
  
-   [Aggiunta di eventi predefiniti a un controllo ActiveX](../../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)  
  
-   [Aggiunta di eventi personalizzati](../../mfc/mfc-activex-controls-adding-custom-events.md)  
  
-   [Aggiunta di metodi predefiniti](../../mfc/mfc-activex-controls-adding-stock-methods.md)  
  
-   [Aggiunta di metodi personalizzati](../../mfc/mfc-activex-controls-adding-custom-methods.md)  
  
-   [Aggiunta di proprietà predefinite](../../mfc/mfc-activex-controls-adding-stock-properties.md)  
  
-   [Aggiunta di proprietà personalizzate](../../mfc/mfc-activex-controls-adding-custom-properties.md)  
  
-   [Programmazione di controlli ActiveX in un contenitore di controlli ActiveX](../../mfc/programming-activex-controls-in-a-activex-control-container.md)  
  
## Panoramica  
 In questa schermata della procedura guidata vengono descritte le impostazioni correnti dell'applicazione per il progetto di controllo ActiveX MFC che viene creato.  Per impostazione predefinita, il progetto creato con la procedura guidata presenta le caratteristiche indicate di seguito.  
  
-   Il progetto predefinito non genera alcuna licenza runtime né file della Guida.  Queste impostazioni predefinite possono essere modificate nella schermata [Impostazioni applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md).  Nella schermata **Panoramica** vengono indicate solo le selezioni effettuate in questa schermata della Creazione guidata controllo ActiveX.  
  
-   Il progetto comprende una classe Control e una classe delle pagine delle proprietà basate sul nome del progetto.  I nomi del progetto e dei file possono essere modificati nella schermata [Nomi controllo](../../mfc/reference/control-names-mfc-activex-control-wizard.md).  
  
-   Il controllo non è basato su controlli Windows esistenti, viene attivato quando diventa visibile, è dotato di un'interfaccia utente e comprende una finestra di dialogo **Informazioni su**.  Queste impostazioni predefinite possono essere modificate nella schermata [Impostazioni controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md).  
  
## Vedere anche  
 [Creazione e gestione di progetti Visual C\+\+](../../ide/creating-and-managing-visual-cpp-projects.md)   
 [Tipi di progetto Visual C\+\+](../../ide/visual-cpp-project-types.md)   
 [Concetti](../../atl/active-template-library-atl-concepts.md)
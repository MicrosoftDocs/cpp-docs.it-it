---
title: "Sequenza di operazioni per la creazione di controlli ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], creazione"
  - "controlli ActiveX MFC [C++], creazione"
  - "controlli OLE [C++], MFC"
  - "sequenza [C++]"
  - "sequenza [C++], per creazione di controlli ActiveX"
ms.assetid: 7d868c53-a0af-4ef6-a89c-e1c03c583a53
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sequenza di operazioni per la creazione di controlli ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La tabella riportata di seguito viene descritto il ruolo del ruolo del framework durante la modifica dei controlli ActiveX \(precedentemente noto come i controlli OLE\).  
  
### Creare controlli ActiveX  
  
|Attività|Si|Il framework esegue|  
|--------------|--------|-------------------------|  
|Creare un framework del controllo ActiveX.|Eseguire la Creazione guidata controllo ActiveX MFC per creare il controllo.  Specificare le opzioni desiderate nelle pagine di opzioni.  Le opzioni includono il tipo e il nome del controllo nel progetto, licenza, la creazione di una sottoclasse e su in un metodo della casella degli strumenti.|La Creazione guidata controllo ActiveX MFC crea i file per un controllo ActiveX con funzionalità di base, inclusi i file sorgente per l'applicazione, controllo e pagina delle proprietà o pagine; un file di risorse; un file di progetto; e altri, interamente adeguato le specifiche.|  
|Vedere definizione del controllo e la Creazione guidata controllo ActiveX offrono senza aggiungere una riga del codice.|Compilare il controllo ActiveX ed eseguirne il test con Internet Explorer o [Esempio TSTCON](../top/visual-cpp-samples.md).|Il controllo in esecuzione ha la possibilità di essere ridimensionato e spostato.  È inoltre disponibile un metodo di **Finestra Informazioni su** \(se scelto\) che può essere richiamato.|  
|Implementare i metodi e le proprietà del controllo.|Implementare i metodi e le proprietà specifici del controllo aggiungendo le funzioni membro per fornire un'interfaccia esposta ai dati del controllo.  Aggiungere le variabili membro per utilizzare le strutture di dati e utilizzare i gestori eventi per generare gli eventi quando determinate.|Il framework già definito una mappa per supportare gli eventi del controllo, metodi e proprietà, consentendo il concentrarsi sulla proprietà e metodi sono implementati.  La pagina delle proprietà predefinita sono visibili e un'impostazione predefinita sul metodo della casella degli strumenti viene fornita.|  
|Creare la pagina delle proprietà o pagine del controllo.|Utilizzare gli editor di risorse di Visual C\+\+ per modificare visivamente l'interfaccia della pagina proprietà del controllo:<br /><br /> -   Creare pagine delle proprietà aggiuntive.<br />-   Creare e modificare le bitmap, le icone e cursori.<br /><br /> È inoltre possibile testare la pagina delle proprietà nell'editor finestre.|Il file di risorse predefinito creato dalla Creazione guidata applicazione MFC fornisce molte delle risorse necessarie.  Visual C\+\+ consente di modificare le risorse esistenti e aggiungere facilmente e visivamente le nuove risorse.|  
|Verificare gli eventi, i metodi e le proprietà del controllo.|Ricompilare il test container di utilizzo del controllo e verificare che i gestori funzionano correttamente.|È possibile richiamare i metodi del controllo e modificarne le proprietà tramite l'interfaccia della pagina delle proprietà o tramite test container.  Inoltre, test container di utilizzo agli eventi di avanzamento generati dal controllo e le notifiche ricevuti dal contenitore del controllo.|  
  
## Vedere anche  
 [Compilazione nel framework](../mfc/building-on-the-framework.md)   
 [Sequenza delle operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)   
 [Sequenza delle operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)   
 [Sequenza delle operazioni per la creazione di applicazioni database](../mfc/sequence-of-operations-for-creating-database-applications.md)
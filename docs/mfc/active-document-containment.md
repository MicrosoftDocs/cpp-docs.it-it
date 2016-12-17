---
title: "Contenimento dei documenti attivi | Microsoft Docs"
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
  - "contenitori documenti attivi [C++], informazioni sui contenitori documenti attivi"
  - "documenti attivi [C++], contenitori"
  - "contenitori [C++], documento attivo"
  - "MFC [C++], supporto COM"
  - "MFC COM [C++], contenimento dei documenti attivi"
ms.assetid: b8dfa74b-75ce-47df-b75e-fc87b7f7d687
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenimento dei documenti attivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il contenimento del documento attivo è una tecnologia che fornisce un singolo frame in cui utilizzare documenti, anziché forzarvi per creare e utilizzare l'applicazione più incornicia per ogni tipo di documento.  Differisce dalla tecnologia OLE di base in quanto OLE funziona con oggetti incorporati all'interno di un documento composto in cui solo una singola parte di contenuto può essere attiva.  Con contenimento del documento attivo, attiva un intero documento \(ovvero un'intera applicazione, inclusi i menu, barre degli strumenti collegati e così via, nel contesto di un singolo frame.  
  
 La tecnologia di contenimento del documento attivo originariamente è stata compilata per Microsoft Office implementare il Raccoglitore microsoft Office.  Tuttavia, la tecnologia è abbastanza flessibile supportare i contenitori di documenti attivi diverso dal Raccoglitore microsoft Office e può supportare i server del documento diverso da Office e applicazioni personalizzati compatibili.  
  
 L'applicazione che contiene i documenti attivi viene chiamata [contenitore di documenti attivi](../mfc/active-document-containers.md).  Esempi di tali contenitori sono il raccoglitore o Microsoft Internet Explorer di Microsoft Office.  
  
 Il contenimento del documento attivo viene implementato come set di estensioni dei documenti OLE, la tecnologia composta del documento OLE.  Le estensioni sono interfacce aggiuntive che consentono a un oggetto integrabile e sul posto rappresenta un intero documento di una singola parte di contenuto incorporato.  Come per i documenti OLE, il contenimento del documento attivo utilizza un contenitore che fornisce lo spazio visualizzato per i documenti attivi e i server che forniscono funzionalità per i documenti attivi stesse di modifica e dell'interfaccia utente.  
  
 [server di documenti attivi](../mfc/active-document-servers.md) è un'applicazione \(quali Word, Excel, PowerPoint o\) che supporti una o più classi del documento attivo, dove ogni oggetto supporta le interfacce di estensione che consentono all'oggetto venga attivato in un contenitore appropriato.  
  
 [documento attivo](../mfc/active-documents.md) \(fornito da un server di documenti attivi come Word o Excel\) è essenzialmente un documento completo e formale incorporato come oggetto in un altro contenitore di documenti attivi.  A differenza degli oggetti incorporati, documenti attivi sono controllo completo sulle pagine e interfaccia completa dell'applicazione \(con tutti i relativi controlli e gli strumenti sottostanti\) è disponibile all'utente per modificarli.  
  
 Un documento attivo è riconosciuto in modo ottimale distinguendola da un oggetto incorporato OLE standard.  Dopo la convenzione OLE, un oggetto incorporato è uno visualizzato all'interno della pagina del documento che la proprietà e il documento viene gestito da un contenitore OLE.  Il contenitore vengono archiviati i dati incorporati di oggetto con il resto del documento.  Tuttavia, gli oggetti incorporati sono limitati in quanto non controllano la pagina in cui vengano visualizzati.  
  
 Gli utenti di un'applicazione contenitore di documenti attivi possono creare documenti attivi \(chiamati sezioni del Raccoglitore Office\) utilizzando le rispettive applicazioni si preferisce \(fornite queste applicazioni è il documento attivo attivato, per cui gli utenti possono gestire il progetto risultante come una singola entità, che può in modo univoco essere denominata, salvato, visualizzato, e così via.  Analogamente, un utente di un browser Internet può considerare l'intera rete nonché i file system locali, come entità di archiviazione del documento con la possibilità di esplorare i documenti nell'archiviazione da un'unica posizione.  
  
## Programmi di esempio  
  
-   L'esempio di [MFCBIND](../top/visual-cpp-samples.md) viene illustrata l'implementazione di un'applicazione contenitore di documenti attivi.  
  
## Vedere anche  
 [MFC COM](../mfc/mfc-com.md)
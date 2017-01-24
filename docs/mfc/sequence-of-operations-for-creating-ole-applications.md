---
title: "Sequenza delle operazioni per la creazione di applicazioni OLE | Microsoft Docs"
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
  - "applicazioni [OLE]"
  - "applicazioni [OLE], creazione"
  - "applicazioni OLE [C++]"
  - "applicazioni OLE [C++], creazione"
ms.assetid: 84b0f606-36c1-4253-9cea-44427f0074b9
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sequenza delle operazioni per la creazione di applicazioni OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La tabella riportata di seguito viene descritto il ruolo del ruolo del framework nel creare OLE che collega e che incorpora le applicazioni.  Essi rappresentano le opzioni disponibili anziché una sequenza di passi per eseguire.  
  
### Creare applicazioni OLE  
  
|Attività|Si|Il framework esegue|  
|--------------|--------|-------------------------|  
|Creare un componente COM.|Eseguire la Creazione guidata applicazione MFC.  Scegliere **Server completo** o **Mini\-server** nella scheda di **Supporto documenti compositi**.|Il framework genera una struttura di applicazione con funzionalità del componente COM attivata.  Tutte le funzionalità COM può essere trasferita all'applicazione esistente con solo piccola modifica a.|  
|Creare un'applicazione contenitore da zero.|Eseguire la Creazione guidata applicazione MFC.  Scegliere **Contenitore** nella scheda di **Supporto documenti compositi**.  Mediante Visualizzazione classi, passare all'editor del codice sorgente.  Compilare il codice per le funzioni di gestione COM.|Il framework genera una struttura di applicazione che può inserire gli oggetti COM creati dalle applicazioni di componenti COM \(server\).|  
|Creare un'applicazione l'automazione di supportare da zero.|Eseguire la Creazione guidata applicazione MFC.  Scegliere **Automazione** dalla scheda di **Funzionalità avanzate**.  Utilizzare Visualizzazione classi per esporre i metodi e le proprietà dell'applicazione di automazione.|Il framework genera una struttura di applicazione che può essere attivato e automatizzato da altre applicazioni.|  
  
## Vedere anche  
 [Compilazione nel framework](../mfc/building-on-the-framework.md)   
 [Sequenza delle operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)   
 [Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)   
 [Sequenza delle operazioni per la creazione di applicazioni database](../mfc/sequence-of-operations-for-creating-database-applications.md)
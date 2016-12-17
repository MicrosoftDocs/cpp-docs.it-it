---
title: "Classi Document-Template | Microsoft Docs"
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
  - "vc.classes.document"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli di documento, classi"
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi Document-Template
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli oggetti modello di documento coordinamento la creazione del documento, la visualizzazione e oggetti della finestra cornice quando un nuovo documento o una visualizzazione viene creato.  
  
 [CDocTemplate](../mfc/reference/cdoctemplate-class.md)  
 La classe base per i modelli di documento.  Non utilizzare mai direttamente la classe; al contrario, utilizzare una delle altre classi modello di documento derivate dalla classe.  
  
 [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md)  
 Un modello per i documenti nell'interfaccia a documenti multipli \(MDI\).  Le applicazioni MDI possono avere più documenti aperti per volta.  
  
 [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md)  
 Un modello per i documenti nell'interfaccia a documento singolo \(SDI\).  Le applicazioni SDI dispongono solo di un documento aperto per volta.  
  
## Classe correlata  
 [CCreateContext](../mfc/reference/ccreatecontext-structure.md)  
 Una struttura è passato da un modello di documento alle funzioni di input creazione per coordinare la creazione del documento, la visualizzazione e oggetti della finestra cornice.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)
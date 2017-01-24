---
title: "Creazione di documenti/visualizzazioni | Microsoft Docs"
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
  - "architettura documento/visualizzazione, creazione di documenti/visualizzazione"
  - "documenti, creazione"
  - "MFC, documenti"
  - "MFC, visualizzazioni"
  - "creatori di oggetti"
  - "tabelle [C++]"
  - "tabelle [C++], oggetti creati da ciascun oggetto MFC"
  - "visualizzazioni, e finestre cornice"
  - "visualizzazioni, creazione"
ms.assetid: bda14f41-ed50-439d-af9e-591174e7dd64
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di documenti/visualizzazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il framework fornisce le implementazioni dei comandi `Nuovo` e **Apri** \(tra gli altri\) nel menu **File**.  La creazione di un nuovo documento e il relativo punto di vista e finestra cornice collegati sarà uno sforzo cooperativo tra l'oggetto applicazione, un modello di documento, il documento appena creata e la finestra cornice appena creato.  Nella tabella seguente vengono riepilogati gli oggetti che creano cosa.  
  
### Autori dell'oggetto  
  
|Creator|Crea|  
|-------------|----------|  
|Oggetto applicazione|Modello di documento|  
|Modello di documento|Documento|  
|Modello di documento|Finestra cornice|  
|Finestra cornice|Visualizzazione|  
  
## Vedere anche  
 [Modelli di documenti e processo di creazione documento\/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione di modelli di documento](../mfc/document-template-creation.md)   
 [Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)
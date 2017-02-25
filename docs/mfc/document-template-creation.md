---
title: "Creazione di modelli di documento | Microsoft Docs"
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
  - "costruttori [C++], modello di documento"
  - "modelli di documento"
  - "modelli di documento, creazione"
  - "MFC, modelli di documento"
  - "modelli, modelli di documento"
ms.assetid: c87f1821-7cbf-442e-9690-f126ae7fb783
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creazione di modelli di documento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea un nuovo documento in risposta a un comando `Nuovo` o **Apri** dal menu **File**, il modello di documento viene inoltre creata una nuova finestra cornice in cui visualizzare il documento.  
  
 Il costruttore modello di documento specifica il tipo di documenti, a finestre che viene visualizzato il modello potrà creare.  Ciò è determinata dagli argomenti passati al costruttore modello di documento.  Il codice seguente viene illustrata la creazione di [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) per un'applicazione di esempio:  
  
 [!code-cpp[NVC_MFCDocView#7](../mfc/codesnippet/CPP/document-template-creation_1.cpp)]  
  
 Il puntatore a un nuovo oggetto di `CMultiDocTemplate` viene utilizzato come argomento a [AddDocTemplate](../Topic/CWinApp::AddDocTemplate.md).  Gli argomenti del costruttore di `CMultiDocTemplate` includono gli ID di risorsa associato ai menu e i tasti di scelta rapida tipo di documento e tre utilizzare la macro di [RUNTIME\_CLASS](../Topic/RUNTIME_CLASS.md).  `RUNTIME_CLASS` restituisce l'oggetto di [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) per la classe C\+\+ denominata come argomento.  I tre oggetti di `CRuntimeClass` passati a fornire che il costruttore modello di documento le informazioni necessari per creare nuovi oggetti di classi vengono specificati durante il processo di creazione del documento.  Nell'esempio viene illustrata la creazione di un modello di documento che crea oggetti di `CScribDoc` con oggetti di `CScribView` allegati.  Le visualizzazioni sono correntemente dalle finestre cornice figlio MDI standard.  
  
## Vedere anche  
 [Modelli di documenti e processo di creazione documento\/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione di documenti\/visualizzazioni](../mfc/document-view-creation.md)   
 [Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)
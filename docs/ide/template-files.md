---
title: "File di modello | Microsoft Docs"
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
  - "creazioni guidate personalizzate, file di modello"
  - "file [C++], creati tramite una creazione guidata personalizzata"
  - "modelli [C++], per procedure guidate"
ms.assetid: 48fae3d8-3a53-4f62-8010-144c5ffe334e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# File di modello
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I template che compongono una procedura guidata sono una raccolta di file di testo contenenti alcune [semplici direttive](../ide/template-directives.md). Essi vengono analizzati e ne viene eseguito il rendering in base all'input dell'utente, quindi vengono aggiunti al progetto iniziale.  Le informazioni appropriate per l'analisi dei template vengono ottenute mediante l'accesso diretto alla tabella dei simboli del controllo della procedura guidata.  
  
 Nell'esempio che segue è illustrato un file template molto semplice relativo a una procedura guidata in cui all'utente viene chiesto di selezionare A o B.  
  
## Esempio  
  
```  
This file has been created by My Custom wizard.  
You selected:  
[!if TYPE_A]  
Type A  
[!else]  
Type B  
[!endif]  
The name of this project is [!output PROJECT_NAME].root.cpp:  
```  
  
 Se l'utente sceglie Type B, del template sopra descritto viene eseguito il rendering nel modo seguente:  
  
  **Questo file viene creato dalla Creazione guidata personalizzata.  È stato selezionato:**  
**Tipo B**  
**Il nome del progetto è MyApp8.**    
## Output  
  
```  
This file has been created by My Custom wizard.  
You selected:  
Type B  
The name of this project is MyApp8.  
```  
  
 **Nota** La sintassi sopra riportata è nuova per Visual C\+\+ .NET.  La sintassi di versioni precedenti di Visual C\+\+ non è supportata in Visual C\+\+ .NET.  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [File Templates.inf](../ide/templates-inf-file.md)
---
title: "ID comandi | Microsoft Docs"
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
  - "ID di comando"
  - "ID di comando, MFC"
ms.assetid: e0171a2b-45b9-41fa-945d-ec2f7602ded0
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# ID comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un comando viene descritto dettagliatamente dal relativo ID comando da solo \(codificato nel messaggio di **WM\_COMMAND** \).  Questo ID assegnato all'oggetto dell'interfaccia utente che genera il comando.  In genere, gli ID sono denominati per la funzionalità dell'oggetto dell'interfaccia utente assegnati a.  
  
 Ad esempio, una cancella qualsiasi elemento nel menu Modifica potrebbe essere assegnato un ID di **ID\_EDIT\_CLEAR\_ALL**.  La libreria di classi predefinisce alcuni ID, in particolare per i controlli che il framework gestisce stesso, come **ID\_EDIT\_CLEAR\_ALL** o `ID_FILE_OPEN`.  Si creerà altri ID di comando.  
  
 Quando si crea propri menu l'editor menu di Visual C\+\+, è consigliabile utilizzare la convenzione di denominazione delle librerie di classi come illustrato da `ID_FILE_OPEN`.  [Controlli standard](../mfc/standard-commands.md) vengono illustrati i controlli standard definiti dalla libreria di classi.  
  
## Vedere anche  
 [Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)
---
title: "Associating Menu Commands with Status Bar Text in MFC Applications | Microsoft Docs"
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
  - "status bars, associating menu items"
  - "menus, status bar text"
ms.assetid: 757c0e02-bc97-493f-bccd-6cc6887ebc64
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Associating Menu Commands with Status Bar Text in MFC Applications
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'applicazione può visualizzare testo descrittivo per ogni comando di menu se potrebbe selezionare un utente. A tale scopo, assegnare una stringa di testo per ogni comando di menu usando la proprietà **Prompt** nella finestra Proprietà. Se si dispone di una stringa nella [tabella stringhe](../mfc/string-editor.md) il cui ID è uguale al comando, un'applicazione MFC visualizzerà automaticamente questa risorsa stringa nella barra di stato dell'applicazione in esecuzione quando un utente si posiziona su una voce di menu.  
  
### Per associare un comando di menu con un stringa di testo della barra di stato  
  
1.  Nell'**Editor dei menu** selezionare il comando di menu.  
  
2.  Nella [finestra Proprietà](../Topic/Properties%20Window.md) digitare il testo della barra di stato associata nella casella **Prompt**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 MFC  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)   
 [Adding Commands to a Menu](../windows/adding-commands-to-a-menu.md)   
 [Menu Editor](../mfc/menu-editor.md)
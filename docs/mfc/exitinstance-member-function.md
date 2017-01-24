---
title: "Funzione membro ExitInstance | Microsoft Docs"
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
  - "CWinApp::ExitInstance"
  - "CWinApp.ExitInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinApp (classe), ExitInstance"
  - "ExitInstance (metodo)"
  - "programmi [C++], chiusura"
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione membro ExitInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La funzione membro di [ExitInstance](../Topic/CWinApp::ExitInstance.md) di classe [CWinApp](../mfc/reference/cwinapp-class.md) viene chiamata ogni volta una copia dell'applicazione termina, in genere come risultato dell'utente che consente di chiudere l'applicazione.  
  
 Eseguire l'override `ExitInstance` se è necessario disporre dell'elaborazione speciale di pulitura, ad esempio la liberazione di risorse di \(GDI\) di Graphics Device Interface\) o rilascio di memoria utilizzata durante l'esecuzione del programma.  La pulizia di elementi standard quali documenti e visualizzazioni, tuttavia, è fornita dal framework, altre funzioni sottoponibili a override per eseguire la pulizia speciale specifica a tali oggetti.  
  
## Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
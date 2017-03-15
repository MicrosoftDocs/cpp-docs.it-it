---
title: "Quando inizializzare gli oggetti CWnd | Microsoft Docs"
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
  - "oggetti CWnd, quando HWND è associato"
  - "oggetti CWnd, quando inizializzare"
  - "HWND, quando associato all'oggetto CWnd"
  - "inizializzazione di oggetti CWnd"
  - "inizializzazione di oggetti, CWnd"
  - "oggetti delle finestre, quando inizializzare CWnd"
ms.assetid: 4d31bcb1-73db-4f2f-b71c-89b087569a10
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Quando inizializzare gli oggetti CWnd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Non è possibile creare finestre figlio o chiamare alcune funzioni API di Windows nel costruttore di `CWnd`\- oggetto derivato.  Questo perché `HWND` per l'oggetto di `CWnd` non è stato creato nuovamente.  La maggior parte di inizializzazione questa specifica, ad esempio finestre figlio add, deve essere eseguita in un gestore messaggi di [OnCreate](../Topic/CWnd::OnCreate.md).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Creazione delle finestre di documento](../mfc/creating-document-frame-windows.md)  
  
-   [Creazione documento\/visualizzazione](../mfc/document-view-creation.md)  
  
## Vedere anche  
 [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)
---
title: "Relazione tra un oggetto finestra C++ e HWND | Microsoft Docs"
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
  - "HWND"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWnd (classe), HWND"
  - "HWND"
  - "HWND, oggetti delle finestre"
  - "oggetti delle finestre [C++], HWND e"
  - "finestra Windows [C++]"
ms.assetid: f2e76340-6691-4ee6-9424-0345634a9469
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Relazione tra un oggetto finestra C++ e HWND
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'*oggetto* finestra è un oggetto della classe C\+\+ `CWnd` \(o una classe derivata\) che il programma crea direttamente.  E non va in risposta alle chiamate di costruttore e il distruttore del programma.  *La finestra*di windows, invece, è un handle opaco a una struttura di dati interna di windows che corrisponde a una finestra e utilizza le risorse di sistema se presente.  Una finestra di windows è identificata da "l'handle di finestra \("`HWND`\) e viene creata una volta creato l'oggetto di `CWnd` viene creato da una chiamata a una funzione membro di **Crea** di classe `CWnd`.  La finestra può eliminato uno da una chiamata del programma o da un'azione dell'utente.  L'handle della finestra vengono archiviate in variabile membro di `m_hWnd` dell'oggetto window.  Nella figura seguente è illustrata la relazione tra l'oggetto window C\+\+ e la finestra di windows.  Creazione di finestre vengono illustrate in [Creare finestre](../mfc/creating-windows.md).  Eliminazione delle finestre vengono illustrate in [Eliminare gli oggetti Window](../mfc/destroying-window-objects.md).  
  
 ![Oggetto finestra CWnd e finestra risultante](../mfc/media/vc37fj1.png "vc37FJ1")  
Oggetto finestra e finestra di Windows  
  
## Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)
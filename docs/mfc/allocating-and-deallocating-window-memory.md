---
title: "Allocazione e deallocazione di memoria delle finestre | Microsoft Docs"
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
  - "allocazione di memoria, oggetti delle finestre"
  - "deallocazione di memoria"
  - "deallocazione di memoria, memoria di finestra"
  - "archiviazione di oggetti di finestra"
  - "archiviazione di oggetti di finestra, allocazione"
  - "oggetti delle finestre, deallocazione di memoria per"
ms.assetid: 7c962539-8461-4846-b5ca-fe3b15c313dc
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Allocazione e deallocazione di memoria delle finestre
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Non utilizzare l'operatore di C\+\+ **eliminazione** per eliminare in modo permanente una finestra cornice o una visualizzazione.  Al contrario, chiamare la funzione membro `DestroyWindow`di `CWnd`.  Le finestre, pertanto, devono essere allocati nell'heap con l'operatore **nuova**.  Prestare attenzione quando si allocano le finestre cornici sullo stack frame o globalmente.  Altre finestre dovranno essere allocati nello stack frame quando possibile.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Creare finestre](../mfc/creating-windows.md)  
  
-   [Sequenza di distruzione della finestra](../mfc/window-destruction-sequence.md)  
  
-   [Rimuovere un CWnd dal PROVIDER](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
## Vedere anche  
 [Distruzione di oggetti finestra](../mfc/destroying-window-objects.md)
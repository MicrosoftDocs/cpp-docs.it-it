---
title: -Sottoponibili a override commento | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Overridables comment in MFC source files
- MFC source files, Overridables comment
- overriding, Overridables comment in MFC source files
- comments, MFC
ms.assetid: 8968dea5-0d94-451f-bcb2-991580e65ba2
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e0a5e8402f396c78ff02cbf5798c638f7b8b7d4f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="-overridables-comment"></a>// Commento sui sottoponibili a override
Il `// Overridables` sezione di una dichiarazione di classe MFC contiene funzioni virtuali che è possibile eseguire l'override in una classe derivata quando è necessario modificare il comportamento della classe di base. Sono in genere denominate a partire da "On", sebbene non sia strettamente necessario. Funzioni di seguito sono progettate per essere sottoposto a override, spesso implementare o forniscono una sorta di "callback" o "hook". In genere, questi membri sono protetti.  
  
 In MFC, le funzioni virtuali pure sono sempre incluse in questa sezione. Una funzione virtuale pura in C++ fa parte del modulo:  
  
 `virtual void OnDraw( ) = 0;`  
  
 Nell'esempio dell'elenco dalla classe `CStdioFile`nella [un esempio dei commenti](../mfc/an-example-of-the-comments.md), l'elenco non include alcuna sezione sottoponibili a override. Classe **CDocument**, d'altra parte, elenca circa 10 funzioni membro sottoponibili a override.  
  
 In alcune classi, è inoltre possibile visualizzare il commento `// Advanced Overridables`. Queste sono funzioni che solo esperti programmatori devono tentare di eseguire l'override. Non sarà mai necessario eseguirne l'override.  
  
> [!NOTE]
>  Le convenzioni descritte in questo articolo sono valide, in generale, per le proprietà e metodi di automazione (precedentemente nota come automazione OLE). Metodi di automazione sono simili alle operazioni di MFC. Proprietà di automazione sono simili agli attributi MFC. Gli eventi di automazione (supportati per i controlli ActiveX, precedentemente noti come controlli OLE) sono simili alle funzioni membro sottoponibili a override di MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento di costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento di attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)


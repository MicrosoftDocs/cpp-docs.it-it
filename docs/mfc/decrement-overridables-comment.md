---
title: -Sottoponibili a override commento | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Overridables comment in MFC source files
- MFC source files, Overridables comment
- overriding, Overridables comment in MFC source files
- comments, MFC
ms.assetid: 8968dea5-0d94-451f-bcb2-991580e65ba2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6a1b9b04647717fc5892421f2b45947ebd079a0c
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928727"
---
# <a name="-overridables-comment"></a>// Commento sui sottoponibili a override
Il `// Overridables` sezione di una dichiarazione di classe MFC contiene le funzioni virtuali che è possibile eseguire l'override in una classe derivata quando è necessario modificare il comportamento della classe base. Sono in genere denominate iniziano con "On", sebbene non sia strettamente necessario. Funzioni di seguito sono progettate per essere sottoposto a override, spesso implementare o forniscono una sorta di "callback" o "hook". In genere, questi membri sono protetti.  
  
 In MFC, le funzioni virtuali pure sono sempre incluse in questa sezione. Una funzione virtuale pura in C++ fa parte del modulo:  
  
 `virtual void OnDraw( ) = 0;`  
  
 Nell'esempio dell'elenco dalla classe `CStdioFile`, in [un esempio dei commenti](../mfc/an-example-of-the-comments.md), l'elenco non include alcuna sezione sottoponibili a override. Classe `CDocument`, d'altro canto, elenca circa 10 funzioni membro sottoponibili a override.  
  
 In alcune classi, è inoltre possibile visualizzare il commento `// Advanced Overridables`. Queste sono funzioni che solo esperti programmatori devono provare a eseguire l'override. Non sarà mai necessario eseguirne l'override.  
  
> [!NOTE]
>  Le convenzioni descritte in questo articolo inoltre funzionano correttamente, in generale, per le proprietà e metodi di automazione (precedentemente nota come automazione OLE). I metodi di automazione sono simili alle operazioni di MFC. Proprietà di automazione sono simili agli attributi MFC. Eventi di automazione (supportati per i controlli ActiveX, precedentemente noti come controlli OLE) sono simili alle funzioni membro sottoponibili a override di MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Usando i file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)


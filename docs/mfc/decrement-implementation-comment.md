---
title: -Commento all'implementazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Implementation comment in MFC source files
- comments, MFC
- MFC source files, Implementation comment
- comments, Implementation comments
ms.assetid: 4d799c07-8e71-4a6b-90ab-8282d6ff48ce
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 437b091b2237c7219a0afeee46d78164751e6d3c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="-implementation-comment"></a>// Commento all'implementazione
Il `// Implementation` sezione è la parte più importante di qualsiasi dichiarazione di classe MFC.  
  
 In questa sezione sono contenuti tutti i dettagli di implementazione. Sia le variabili membro e funzioni membro possono essere visualizzati in questa sezione. È possibile modificare tutti gli elementi sotto la riga in una versione futura di MFC. A meno che non è possibile evitare, deve fare affidamento su dettagli riportati di seguito il `// Implementation` riga. Inoltre, i membri dichiarati sotto la riga di implementazione non sono documentati, anche se viene illustrata un'implementazione nelle note tecniche. Esegue l'override di funzioni virtuali nella classe base si trovano in questa sezione, indipendentemente dal fatto che sezione la funzione di classe di base è definita, poiché il fatto che una funzione esegue l'override dell'implementazione della classe base viene considerato un dettaglio di implementazione. In genere, questi membri sono protetti, ma non sempre.  
  
 Si noti dal `CStdioFile` visualizzata in [un esempio dei commenti](../mfc/an-example-of-the-comments.md) che i membri dichiarati di sotto il `// Implementation` commento può essere dichiarato come **pubblica**, `protected`, o `private`. È consigliabile utilizzare solo questi membri con cautela, perché queste potrebbero cambiare in futuro. Dichiarazione di un gruppo di membri come **pubblica** potrebbe essere necessario per l'implementazione della libreria di classe funzionare correttamente. Tuttavia, ciò non significa che è possibile utilizzare in modo sicuro i membri dichiarati in modo.  
  
> [!NOTE]
>  È possibile commenti dei tipi rimanenti di sopra o sotto il `// Implementation` commento. In entrambi i casi, vengono descritti i tipi di membri dichiarati di sotto di essi. Se si verificano di sotto di `// Implementation` commento, è opportuno presupporre che i membri potrebbero cambiare nelle future versioni di MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento di costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento di attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)


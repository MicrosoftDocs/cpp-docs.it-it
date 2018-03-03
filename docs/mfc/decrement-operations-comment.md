---
title: -Commento sulle operazioni | Documenti Microsoft
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
- Operations comment in MFC source files
- comments, MFC
- MFC source files, Operations comments
ms.assetid: f3bff48d-26be-4db6-8435-9e4d079838c9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 53d2470e0be0ca314da8486d74d8fc618e134c35
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="-operations-comment"></a>// Commento sulle operazioni
Il `// Operations` sezione di una dichiarazione di classe MFC contiene funzioni membro che è possibile chiamare per l'oggetto per eseguire operazioni o eseguire azioni (operazioni). Queste funzioni sono in genere non -**const** perché in genere hanno effetti collaterali. Possono essere virtuali o non virtuali a seconda delle esigenze della classe. In genere, questi membri sono pubblici.  
  
 Nell'esempio dell'elenco dalla classe `CStdioFile`nella [un esempio dei commenti](../mfc/an-example-of-the-comments.md), nell'elenco sono inclusi due funzioni membro questo commento: `ReadString` e `WriteString`.  
  
 Come con gli attributi, operazioni possono essere suddivisi ulteriormente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento di costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento di attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)


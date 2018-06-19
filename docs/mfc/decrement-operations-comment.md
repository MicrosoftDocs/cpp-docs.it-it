---
title: -Commento sulle operazioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Operations comment in MFC source files
- comments, MFC
- MFC source files, Operations comments
ms.assetid: f3bff48d-26be-4db6-8435-9e4d079838c9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0ee6bf4a330a5fdf1ac294157e69dab39b5f2bdd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33342271"
---
# <a name="-operations-comment"></a>// Commento sulle operazioni
Il `// Operations` sezione di una dichiarazione di classe MFC contiene funzioni membro che è possibile chiamare per l'oggetto per eseguire operazioni o eseguire azioni (operazioni). Queste funzioni sono in genere non -**const** perché in genere hanno effetti collaterali. Possono essere virtuali o non virtuali a seconda delle esigenze della classe. In genere, questi membri sono pubblici.  
  
 Nell'esempio dell'elenco dalla classe `CStdioFile`nella [un esempio dei commenti](../mfc/an-example-of-the-comments.md), nell'elenco sono inclusi due funzioni membro questo commento: `ReadString` e `WriteString`.  
  
 Come con gli attributi, operazioni possono essere suddivisi ulteriormente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)


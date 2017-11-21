---
title: -Commento agli attributi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- comments, Attributes
- Attributes comment in MFC source files
- MFC source files, Attributes comment
- public attributes comment
ms.assetid: 96388e11-42df-4994-aedf-decd152961a7
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c93d27cb5a9c6ef83f5b4f027d0e54cbe69a6bbd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="-attributes-comment"></a>// Commento sugli attributi
Il `// Attributes` sezione di una dichiarazione di classe MFC contiene il pubblico attributi (o una proprietà) dell'oggetto. In genere si tratta di variabili membro, o le funzioni Get/Set. Le funzioni "Get" e "Set" possono o non possono essere virtuali. Le funzioni di "Get" sono in genere **const**, perché nella maggior parte dei casi non hanno effetti collaterali. Questi membri sono solitamente pubblici. gli attributi di protetti e privati in genere si trovano nella sezione di implementazione.  
  
 Nell'esempio dell'elenco dalla classe `CStdioFile`in [un esempio dei commenti](../mfc/an-example-of-the-comments.md), l'elenco include una variabile membro, `m_pStream`. Classe `CDC` Elenca membri quasi 20 sotto questo commento.  
  
> [!NOTE]
>  Classi di grandi dimensioni, ad esempio `CDC` e `CWnd`, potrebbe essere un numero di membri che non sarebbe particolarmente utile il semplice elenco di tutti gli attributi in un gruppo. In questi casi, la libreria di classi utilizzati altri commenti per descrivere meglio i membri come intestazioni. Ad esempio, `CDC` Usa `// Device-Context Functions`, `// Drawing Tool Functions`, `// Drawing Attribute Functions`e altro ancora. Gruppi che rappresentano gli attributi seguirà la normale sintassi sopra descritta. Molte classi OLE dispongono di una sezione di implementazione denominata `// Interface Maps`.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento di costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)


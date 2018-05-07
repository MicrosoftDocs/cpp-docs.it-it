---
title: -Commento agli attributi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- comments, Attributes
- Attributes comment in MFC source files
- MFC source files, Attributes comment
- public attributes comment
ms.assetid: 96388e11-42df-4994-aedf-decd152961a7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 74398d731c51223ea74fc6b827b0626af89286b5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
 [Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)


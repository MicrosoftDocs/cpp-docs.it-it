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
ms.openlocfilehash: 44b34c2e2d22d0a0a2feb15f6bf2793b68dc7042
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929569"
---
# <a name="-attributes-comment"></a>// Commento sugli attributi
Il `// Attributes` sezione di una dichiarazione di classe MFC contiene gli attributi pubblici (o proprietà) dell'oggetto. In genere si tratta di variabili membro, o le funzioni Get/Set. Le funzioni "Get" e "Set" possono o non possono essere virtuali. Le funzioni "Get" sono in genere **const**, perché nella maggior parte dei casi non hanno effetti collaterali. Questi membri sono solitamente pubblici. gli attributi protetti e privati in genere si trovano nella sezione di implementazione.  
  
 Nell'esempio dell'elenco dalla classe `CStdioFile`, sotto [un esempio dei commenti](../mfc/an-example-of-the-comments.md), l'elenco include una variabile membro *m_pStream*. Classe `CDC` Elenca membri quasi 20 sotto questo commento.  
  
> [!NOTE]
>  Classi di grandi dimensioni, ad esempio `CDC` e `CWnd`, possono avere membri moltissimi che semplicemente elencare tutti gli attributi in un gruppo non aggiungono gran parte per maggiore chiarezza. In questi casi, la libreria di classi utilizzati altri commenti come intestazioni al meglio i membri. Ad esempio `CDC` utilizza `// Device-Context Functions`, `// Drawing Tool Functions`, `// Drawing Attribute Functions`e altro ancora. I gruppi che rappresentano gli attributi seguirà la normale sintassi sopra descritta. Molte classi OLE dispongono di una sezione di implementazione denominata `// Interface Maps`.  
  
## <a name="see-also"></a>Vedere anche  
 [Usando i file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)


---
title: File di origine utilizzando MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- public members
- source files
- MFC, source files
- MFC source files
- comments, MFC
- private member access
- protected member access
- source files, MFC
ms.assetid: 3230e8fb-3b69-4ddf-9538-365ac7ea5e72
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 930c205ffd690c190f68766f7a51c83b68ef8d2f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-the-mfc-source-files"></a>Utilizzo dei file di origine MFC
La libreria Microsoft Foundation Class (MFC) fornisce il codice sorgente completo. I file di intestazione (.h) si trovano nella directory \atlmfc\include; i file di implementazione (.cpp) sono nella directory \atlmfc\src\mfc.  
  
 In questa serie di articoli vengono illustrati le convenzioni utilizzate da MFC per commentare le diverse parti di ogni classe, il significato di questi commenti e ciò che ci si aspetta di trovare in ogni sezione. Le procedure guidate di Visual C++ utilizzano convenzioni simili per le classi create automaticamente e, probabilmente, queste convenzioni risulteranno utili anche per il proprio codice.  
  
 È possibile avere familiarità con la **pubblica**, `protected`, e `private` parole chiave C++. Osservando i file di intestazione MFC, si noterà che ogni classe potrebbe includere numerose parole chiave di questo tipo. Ad esempio, potrebbero essere funzioni e variabili membro pubblico in più **pubblica** (parola chiave). Questo perché MFC separa le variabili membro e le funzioni membro in base all'utilizzo, non al tipo di accesso consentito. MFC utilizza la parola chiave `private` sporadicamente; anche gli elementi considerati dettagli di implementazione in genere sono protected e spesso sono public. Sebbene l'accesso ai dettagli di implementazione sia sconsigliato, MFC affida la decisione allo sviluppatore.  
  
 Sia nei file sorgente di MFC che nei file creati dalla Creazione guidata applicazione MFC è possibile trovare commenti simili all'interno delle dichiarazioni di classe (in genere nell'ordine indicato):  
  
 `// Constructors`  
  
 `// Attributes`  
  
 `// Operations`  
  
 `// Overridables`  
  
 `// Implementation`  
  
 Gli argomenti trattati in questa serie di articoli includono:  
  
-   [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)  
  
-   [Il / / commento all'implementazione](../mfc/decrement-implementation-comment.md)  
  
-   [Il / / commento sui costruttori](../mfc/decrement-constructors-comment.md)  
  
-   [Il / / commento agli attributi](../mfc/decrement-attributes-comment.md)  
  
-   [Il / / commento alle operazioni](../mfc/decrement-operations-comment.md)  
  
-   [Il / / commento sottoponibili a override](../mfc/decrement-overridables-comment.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)


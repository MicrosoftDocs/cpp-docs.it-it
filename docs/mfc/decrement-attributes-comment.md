---
title: ': Commento sugli attributi'
ms.date: 11/04/2016
helpviewer_keywords:
- comments, Attributes
- Attributes comment in MFC source files
- MFC source files, Attributes comment
- public attributes comment
ms.assetid: 96388e11-42df-4994-aedf-decd152961a7
ms.openlocfilehash: a74d0f9d6ffb0bd2d057cf46f7308d8b6a81f98c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62241514"
---
# <a name="-attributes-comment"></a>// Commento sugli attributi

Il `// Attributes` sezione di una dichiarazione di classe MFC sono il pubblico attributi (o una proprietà) dell'oggetto. In genere si tratta di variabili membro, o le funzioni Get/Set. Le funzioni "Get" e "Set" possono o potrebbero non essere virtuale. Le funzioni di "Get" sono in genere **const**, perché nella maggior parte dei casi non hanno effetti collaterali. Questi membri sono solitamente pubblici. gli attributi protetti e privati in genere si trovano nella sezione di implementazione.

Nell'esempio di elenco dalla classe `CStdioFile`, sotto [un esempio dei commenti](../mfc/an-example-of-the-comments.md), l'elenco include una variabile membro *m_pStream*. Classe `CDC` Elenca membri quasi 20 sotto questo commento.

> [!NOTE]
>  Classi di grandi dimensioni, ad esempio `CDC` e `CWnd`, potrebbe essere un numero di membri che non aggiungono gran parte per maggiore chiarezza semplicemente elencare tutti gli attributi in un unico gruppo. In questi casi, la libreria di classi Usa altri commenti per descrivere meglio i membri come intestazioni. Ad esempio, `CDC` viene utilizzato `// Device-Context Functions`, `// Drawing Tool Functions`, `// Drawing Attribute Functions`e così via. I gruppi che rappresentano gli attributi seguirà la normale sintassi descritta in precedenza. Molte classi OLE presentano una sezione di implementazione chiamata `// Interface Maps`.

## <a name="see-also"></a>Vedere anche

[Uso dei file di origine MFC](../mfc/using-the-mfc-source-files.md)<br/>
[Esempio dei commenti](../mfc/an-example-of-the-comments.md)<br/>
[Commento all'implementazione](../mfc/decrement-implementation-comment.md)<br/>
[Commento sui costruttori](../mfc/decrement-constructors-comment.md)<br/>
[Commento sulle operazioni](../mfc/decrement-operations-comment.md)<br/>
[Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)

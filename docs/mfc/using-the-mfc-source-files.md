---
title: Utilizzo dei file di origine MFC
ms.date: 11/04/2016
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
ms.openlocfilehash: 6f23f792f750e4352494bf3e4bde08f0fe360439
ms.sourcegitcommit: db1ed91fa7451ade91c3fb76bc7a2b857f8a5eef
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2019
ms.locfileid: "68980496"
---
# <a name="using-the-mfc-source-files"></a>Utilizzo dei file di origine MFC

La libreria Microsoft Foundation Class (MFC) fornisce il codice sorgente completo. I file di intestazione (.h) si trovano nella directory \atlmfc\include; i file di implementazione (.cpp) sono nella directory \atlmfc\src\mfc.

In questa serie di articoli vengono illustrati le convenzioni utilizzate da MFC per commentare le diverse parti di ogni classe, il significato di questi commenti e ciò che ci si aspetta di trovare in ogni sezione. Le procedure guidate di Visual C++ utilizzano convenzioni simili per le classi create automaticamente e, probabilmente, queste convenzioni risulteranno utili anche per il proprio codice.

È possibile avere familiarità con le parolechiave **public**, protected e **private** C++ . Nei file di intestazione MFC si noterà che ogni classe può avere più di ognuna di esse. Ad esempio, le variabili e le funzioni del membro pubblico potrebbero trovarsi in più di una parola chiave **public** . Poiché MFC separa le variabili membro e le funzioni in base all'utilizzo, non al tipo di accesso consentito. MFC utilizza **private** in modo sporadico. Anche gli elementi considerati dettagli di implementazione sono spesso **protetti**e molte volte sono **pubbliche**. Sebbene l'accesso ai dettagli di implementazione sia sconsigliato, MFC affida la decisione allo sviluppatore.

Sia nei file di origine MFC che nei file di intestazione creati dalla creazione guidata applicazione MFC, saranno disponibili commenti come questi all'interno delle dichiarazioni di classe, in genere in questo ordine:

`// Constructors`

`// Attributes`

`// Operations`

`// Overridables`

`// Implementation`

Gli argomenti trattati in questa serie di articoli includono:

- [Esempio dei commenti](../mfc/an-example-of-the-comments.md)

- [Commento all'implementazione](../mfc/decrement-implementation-comment.md)

- [Commento sui costruttori](../mfc/decrement-constructors-comment.md)

- [Commento sugli attributi//](../mfc/decrement-attributes-comment.md)

- [Commento sulle operazioni//](../mfc/decrement-operations-comment.md)

- [Commento per sottoponibili a override](../mfc/decrement-overridables-comment.md)

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)

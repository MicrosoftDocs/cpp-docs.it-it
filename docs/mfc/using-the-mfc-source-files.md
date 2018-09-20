---
title: File di origine utilizzando MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e63383e372227dc14ce90843b03b6cb0c029b52a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46383857"
---
# <a name="using-the-mfc-source-files"></a>Utilizzo dei file di origine MFC

La libreria Microsoft Foundation Class (MFC) fornisce il codice sorgente completo. I file di intestazione (.h) si trovano nella directory \atlmfc\include; i file di implementazione (.cpp) sono nella directory \atlmfc\src\mfc.

In questa serie di articoli vengono illustrati le convenzioni utilizzate da MFC per commentare le diverse parti di ogni classe, il significato di questi commenti e ciò che ci si aspetta di trovare in ogni sezione. Le procedure guidate di Visual C++ utilizzano convenzioni simili per le classi create automaticamente e, probabilmente, queste convenzioni risulteranno utili anche per il proprio codice.

Potrebbe avere familiarità con il **pubblici**, **protetti**, e **privata** parole chiave C++. Osservando i file di intestazione MFC, si noterà che ogni classe potrebbe includere numerose parole chiave di questo tipo. Ad esempio, potrebbero essere funzioni e variabili membro pubblico in base a più di uno **pubblica** (parola chiave). Questo perché MFC separa le variabili membro e le funzioni membro in base all'utilizzo, non al tipo di accesso consentito. Usa MFC **privato** sporadicamente; anche gli elementi considerati dettagli di implementazione in genere sono protected e spesso sono public. Sebbene l'accesso ai dettagli di implementazione sia sconsigliato, MFC affida la decisione allo sviluppatore.

Sia nei file sorgente di MFC che nei file creati dalla Creazione guidata applicazione MFC è possibile trovare commenti simili all'interno delle dichiarazioni di classe (in genere nell'ordine indicato):

`// Constructors`

`// Attributes`

`// Operations`

`// Overridables`

`// Implementation`

Gli argomenti trattati in questa serie di articoli includono:

- [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)

- [Il / commento all'implementazione](../mfc/decrement-implementation-comment.md)

- [I / o commento sui costruttori](../mfc/decrement-constructors-comment.md)

- [Il / commento agli attributi](../mfc/decrement-attributes-comment.md)

- [I / o commento sulle operazioni](../mfc/decrement-operations-comment.md)

- [Il / / commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)


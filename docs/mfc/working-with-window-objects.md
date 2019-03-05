---
title: Utilizzo di oggetti finestra
ms.date: 11/04/2016
helpviewer_keywords:
- child windows [MFC], working with
- window objects [MFC], working with
ms.assetid: f73aa254-90e3-46a9-8e9b-d78b7054a331
ms.openlocfilehash: c696d880ffa69b0a0399c5282621546c5783ebe4
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265639"
---
# <a name="working-with-window-objects"></a>Utilizzo di oggetti finestra

Utilizzo di chiamate di windows per due tipi di attività:

- La gestione dei messaggi di Windows

- Nella finestra di disegno

Per gestire i messaggi di Windows in qualsiasi finestra, incluse le proprie finestre figlio, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) per eseguire il mapping di messaggi per la classe di finestra C++. Quindi scrivere gestore messaggi funzioni membro nella classe.

La maggior parte di disegno in un'applicazione framework si verifica nella visualizzazione, il cui [OnDraw](../mfc/reference/cview-class.md#ondraw) funzione membro viene chiamata ogni volta che il contenuto della finestra deve essere disegnato. Se la finestra è un elemento figlio della visualizzazione, è possibile delegare alcuni di disegno della visualizzazione per la finestra figlio facendo in modo che `OnDraw` chiamare una delle funzioni membro della finestra.

In ogni caso, è necessario un contesto di dispositivo per il disegno. È possibile usare la penna azionario, pennello e altri oggetti grafici contenute nel contesto di dispositivo associato alla finestra. In alternativa, è possibile modificare tali oggetti per ottenere gli effetti di disegno che è necessario. Con il contesto di dispositivo impostato nel modo desiderato, chiamare funzioni membro di classe [CDC](../mfc/reference/cdc-class.md) (classe contesto di dispositivo) per disegnare linee, forme e testo; utilizzare colori; e per lavorare con un sistema di coordinate.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Gestione di messaggi e mapping](../mfc/message-handling-and-mapping.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

- [Contesti di dispositivo](../mfc/device-contexts.md)

- [Oggetti grafici](../mfc/graphic-objects.md)

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)

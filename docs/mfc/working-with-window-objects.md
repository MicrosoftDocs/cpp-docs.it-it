---
description: 'Altre informazioni su: utilizzo di oggetti finestra'
title: Utilizzo di oggetti finestra
ms.date: 11/04/2016
helpviewer_keywords:
- child windows [MFC], working with
- window objects [MFC], working with
ms.assetid: f73aa254-90e3-46a9-8e9b-d78b7054a331
ms.openlocfilehash: 4a8c6f2c40eadbfe53aa79683bea29847adf684f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172589"
---
# <a name="working-with-window-objects"></a>Utilizzo di oggetti finestra

Utilizzo delle chiamate di Windows per due tipi di attività:

- Gestione dei messaggi di Windows

- Disegno nella finestra

Per gestire i messaggi di Windows in qualsiasi finestra, incluse le finestre figlio, vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) per eseguire il mapping dei messaggi alla classe della finestra C++. Quindi scrivere funzioni membro del gestore di messaggi nella classe.

La maggior parte del disegno in un'applicazione Framework viene eseguita nella vista, la cui funzione membro [OnDraw](../mfc/reference/cview-class.md#ondraw) viene chiamata ogni volta che è necessario disegnare il contenuto della finestra. Se la finestra è un elemento figlio della visualizzazione, è possibile delegare parte del disegno della visualizzazione alla finestra figlio chiamando `OnDraw` una delle funzioni membro della finestra.

In ogni caso, sarà necessario un contesto di dispositivo per il disegno. È possibile usare le penne predefinite, il pennello e altri oggetti grafici contenuti nel contesto di dispositivo associato alla finestra. In alternativa, è possibile modificare questi oggetti per ottenere gli effetti di disegno necessari. Con il contesto di dispositivo configurato, chiamare le funzioni membro della classe [CDC](../mfc/reference/cdc-class.md) (classe del contesto del dispositivo) per creare linee, forme e testo; per utilizzare i colori; e per lavorare con un sistema di coordinate.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

- [Contesti di dispositivo](../mfc/device-contexts.md)

- [Oggetti grafici](../mfc/graphic-objects.md)

## <a name="see-also"></a>Vedi anche

[Oggetti finestra](../mfc/window-objects.md)

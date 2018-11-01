---
title: Costruzione di oggetti in una e due fasi
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], creating graphic objects
- object creation [MFC], graphic objects
- objects [MFC], graphic objects
- one-stage and two-stage construction of objects [MFC]
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
ms.openlocfilehash: bdfb7879bc926435bdcd72d6776646c449ffef80
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50623314"
---
# <a name="one-stage-and-two-stage-construction-of-objects"></a>Costruzione di oggetti in una e due fasi

È possibile scegliere tra due tecniche per la creazione di oggetti grafici, come penne e pennelli:

- *Costruzione di una fase*: creare e inizializzare l'oggetto in un'unica fase, tutti con il costruttore.

- *Costruzione di due fasi*: creare e inizializzare l'oggetto in due fasi separate. Costruttore crea l'oggetto e lo inizializza da una funzione di inizializzazione.

Costruzione di due fasi è sempre sicura. Nella costruzione di una fase, il costruttore è stato possibile generare un'eccezione se è fornire argomenti non corretti o si verifica un errore di allocazione della memoria. Tale problema viene evitato da due fasi, anche se è necessario verificare la presenza di errori. In entrambi i casi, l'eliminazione dell'oggetto è lo stesso processo.

> [!NOTE]
>  Queste tecniche si applicano alla creazione di tutti gli oggetti, non solo di oggetti grafici.

## <a name="example-of-both-construction-techniques"></a>Esempio di entrambe le tecniche di costruzione

L'esempio breve seguente illustra entrambi i metodi di creazione di un oggetto pen:

[!code-cpp[NVC_MFCDocViewSDI#6](../mfc/codesnippet/cpp/one-stage-and-two-stage-construction-of-objects_1.cpp)]

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Oggetti grafici](../mfc/graphic-objects.md)

- [Selezione di un oggetto grafico in un contesto di dispositivo](../mfc/selecting-a-graphic-object-into-a-device-context.md)

- [Contesti di dispositivo](../mfc/device-contexts.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

## <a name="see-also"></a>Vedere anche

[Oggetti grafici](../mfc/graphic-objects.md)


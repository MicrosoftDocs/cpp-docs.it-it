---
title: Costruzione di oggetti in una e due fasi
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], creating graphic objects
- object creation [MFC], graphic objects
- objects [MFC], graphic objects
- one-stage and two-stage construction of objects [MFC]
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
ms.openlocfilehash: 8f221ac6b63a06c65f932a695dfbf7b93ae7ac96
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375976"
---
# <a name="one-stage-and-two-stage-construction-of-objects"></a>Costruzione di oggetti in una e due fasi

È possibile scegliere tra due tecniche per la creazione di oggetti grafici, ad esempio penne e pennelli:

- *Costruzione*a una fase : Costruire e inizializzare l'oggetto in una fase, il tutto con il costruttore.

- *Costruzione*in due fasi : Costruire e inizializzare l'oggetto in due fasi separate. Il costruttore crea l'oggetto e una funzione di inizializzazione lo inizializza.

La costruzione in due stadi è sempre più sicura. Nella costruzione a una fase, il costruttore potrebbe generare un'eccezione se si forniscono argomenti non corretti o l'allocazione di memoria ha esito negativo. Questo problema è evitato dalla costruzione in due fasi, anche se è necessario verificare la presenza di errori. In entrambi i casi, distruggere l'oggetto è lo stesso processo.

> [!NOTE]
> Queste tecniche si applicano alla creazione di oggetti, non solo di oggetti grafici.

## <a name="example-of-both-construction-techniques"></a>Esempio di entrambe le tecniche di costruzione

Il breve esempio seguente mostra entrambi i metodi di costruzione di un oggetto penna:

[!code-cpp[NVC_MFCDocViewSDI#6](../mfc/codesnippet/cpp/one-stage-and-two-stage-construction-of-objects_1.cpp)]

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Oggetti grafici](../mfc/graphic-objects.md)

- [Selezione di un oggetto grafico in un contesto di dispositivoSelecting a graphic object into a device context](../mfc/selecting-a-graphic-object-into-a-device-context.md)

- [Contesti di dispositivoDevice contexts](../mfc/device-contexts.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

## <a name="see-also"></a>Vedere anche

[Oggetti grafici](../mfc/graphic-objects.md)

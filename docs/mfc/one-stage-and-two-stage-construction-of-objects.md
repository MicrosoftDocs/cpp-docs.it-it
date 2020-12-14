---
description: 'Altre informazioni su: One-Stage e Two-Stage la costruzione di oggetti'
title: Costruzione di oggetti in una e due fasi
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], creating graphic objects
- object creation [MFC], graphic objects
- objects [MFC], graphic objects
- one-stage and two-stage construction of objects [MFC]
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
ms.openlocfilehash: d46a8d380c263c4ce18671f02b11d5b058bc8410
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243913"
---
# <a name="one-stage-and-two-stage-construction-of-objects"></a>Costruzione di oggetti in una e due fasi

È possibile scegliere tra due tecniche per la creazione di oggetti grafici, ad esempio penne e pennelli:

- *Costruzione in una fase*: costruire e inizializzare l'oggetto in un'unica fase, il tutto con il costruttore.

- *Costruzione in due* fasi: costruire e inizializzare l'oggetto in due fasi separate. Il costruttore crea l'oggetto e una funzione di inizializzazione la Inizializza.

La costruzione in due fasi è sempre più sicura. In una costruzione in una fase, il costruttore potrebbe generare un'eccezione se si forniscono argomenti non corretti o l'allocazione della memoria ha esito negativo. Questo problema viene evitato grazie alla costruzione in due fasi, anche se è necessario verificare la presenza di errori. In entrambi i casi, la distruzione dell'oggetto è lo stesso processo.

> [!NOTE]
> Queste tecniche sono valide per la creazione di oggetti, non solo di oggetti grafici.

## <a name="example-of-both-construction-techniques"></a>Esempio di entrambe le tecniche di costruzione

Il breve esempio seguente illustra entrambi i metodi di costruzione di un oggetto Pen:

[!code-cpp[NVC_MFCDocViewSDI#6](codesnippet/cpp/one-stage-and-two-stage-construction-of-objects_1.cpp)]

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Oggetti grafici](graphic-objects.md)

- [Selezione di un oggetto grafico in un contesto di dispositivo](selecting-a-graphic-object-into-a-device-context.md)

- [Contesti di dispositivo](device-contexts.md)

- [Disegno in una visualizzazione](drawing-in-a-view.md)

## <a name="see-also"></a>Vedi anche

[Oggetti grafici](graphic-objects.md)

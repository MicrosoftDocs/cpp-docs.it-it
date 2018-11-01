---
title: 2.9 Annidamento di direttive
ms.date: 11/04/2016
ms.assetid: 6565a43c-fd2d-4366-8322-8d75e1b06600
ms.openlocfilehash: 804cafd65fde19e501b89c47925f471143d74938
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438727"
---
# <a name="29-directive-nesting"></a>2.9 Annidamento di direttive

Annidamento dinamico delle direttive deve essere conformi alle regole seguenti:

- Oggetto **parallele** direttiva in modo dinamico in un'altra **parallele** logicamente stabilisce un nuovo team, che è costituito dal solo il thread corrente, a meno che non annidati di parallelismo è abilitato.

- **per**, **sezioni**, e **singolo** direttive che associano agli stessi **parallele** non possono essere annidati all'interno di altre.

- **critici** non possono essere annidati all'interno di altre direttive con lo stesso nome. Tenere presente che questa restrizione non è sufficiente per impedire un deadlock.

- **per**, **sezioni**, e **singolo** direttive non sono consentite nella portata dinamica della **critici**, **ordinati**, e **master** aree, se le direttive associati allo stesso **parallele** come le aree.

- **barriera** direttive non sono consentite nella portata dinamica della **per**, **ordinati**, **sezioni**, **singolo**, **master**, e **critici** aree se eseguire l'associazione di direttive allo stesso **parallel** come le aree.

- **master** direttive non sono consentite nella portata dinamica della **per**, **sezioni**, e **singolo** direttive se il **master** direttive associati allo stesso **parallele** come direttive di condivisione del lavoro.

- **ordinati** direttive non sono consentite nella portata dinamica della **critici** aree se eseguire l'associazione di direttive allo stesso **parallel** come le aree.

- Le direttive che sono consentita quando eseguita in modo dinamico all'interno di un'area parallela sono consentita anche se eseguita all'esterno di un'area parallela. Quando viene eseguita in modo dinamico di fuori di un'area parallela specificata dall'utente, la direttiva viene eseguita da un team composto da solo il thread master.
---
title: Chiamate di funzioni naked
ms.date: 11/04/2016
helpviewer_keywords:
- virtual device drivers
- VXD virtual device drivers
- virtual device drivers, naked function calls
- naked functions
- prolog code
- epilog code
- naked keyword [C++]
- naked keyword [C++], storage-class attribute
ms.assetid: 2a66847a-a43f-4541-a7be-c9f5f29b5fdb
ms.openlocfilehash: 9b49d34d7276d3c9260488f23d1821b9708d2481
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227322"
---
# <a name="naked-function-calls"></a>Chiamate di funzioni naked

**Specifico di Microsoft**

Le funzioni dichiarate con l' **`naked`** attributo vengono emesse senza codice di prologo o epilogo, consentendo di scrivere sequenze di prologo/epilogo personalizzate usando l' [assembler inline](../assembler/inline/inline-assembler.md). Le funzioni naked vengono fornite come funzionalità avanzata. Tali funzioni consentono di dichiarare una funzione chiamata da un contesto diverso da C/C++ e di conseguenza si basano su presupposti diversi sulla posizione dei parametri o sui registri mantenuti. Gli esempi includono routine come gestori di interrupt. Questa funzionalità è particolarmente utile per i writer dei driver di dispositivo virtuali (VxDs).

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [naked](../cpp/naked-cpp.md)

- [Regole e limitazioni per le funzioni naked](../cpp/rules-and-limitations-for-naked-functions.md)

- [Considerazioni per la scrittura di codice di prologo/epilogo](../cpp/considerations-for-writing-prolog-epilog-code.md)

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)

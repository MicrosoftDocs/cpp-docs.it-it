---
description: 'Altre informazioni su: chiamate di funzione naked'
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
ms.openlocfilehash: ffc28b65a8c16881164805f0cfa55ffe1bc54e9b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313801"
---
# <a name="naked-function-calls"></a>Chiamate di funzioni naked

**Specifico di Microsoft**

Le funzioni dichiarate con l' **`naked`** attributo vengono emesse senza codice di prologo o epilogo, consentendo di scrivere sequenze di prologo/epilogo personalizzate usando l' [assembler inline](../assembler/inline/inline-assembler.md). Le funzioni naked vengono fornite come funzionalità avanzata. Tali funzioni consentono di dichiarare una funzione chiamata da un contesto diverso da C/C++ e di conseguenza si basano su presupposti diversi sulla posizione dei parametri o sui registri mantenuti. Gli esempi includono routine come gestori di interrupt. Questa funzionalità è particolarmente utile per i writer dei driver di dispositivo virtuali (VxDs).

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [naked](../cpp/naked-cpp.md)

- [Regole e limitazioni per le funzioni naked](../cpp/rules-and-limitations-for-naked-functions.md)

- [Considerazioni per la scrittura di codice di prologo/epilogo](../cpp/considerations-for-writing-prolog-epilog-code.md)

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)

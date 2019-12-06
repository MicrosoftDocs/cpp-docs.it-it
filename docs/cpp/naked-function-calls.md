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
ms.openlocfilehash: 242fe83807c6608a09492d0f1f817e3b6e50e530
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857398"
---
# <a name="naked-function-calls"></a>Chiamate di funzioni naked

**Sezione specifica Microsoft**

Le funzioni dichiarate con l'attributo **naked** vengono emesse senza codice di prologo o epilogo, consentendo di scrivere sequenze di prologo/epilogo personalizzate usando l' [assembler inline](../assembler/inline/inline-assembler.md). Le funzioni naked vengono fornite come funzionalità avanzata. Tali funzioni consentono di dichiarare una funzione chiamata da un contesto diverso da C/C++ e di conseguenza si basano su presupposti diversi sulla posizione dei parametri o sui registri mantenuti. Gli esempi includono routine come gestori di interrupt. Questa funzionalità è particolarmente utile per i writer dei driver di dispositivo virtuali (VxDs).

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [naked](../cpp/naked-cpp.md)

- [Regole e limitazioni per le funzioni naked](../cpp/rules-and-limitations-for-naked-functions.md)

- [Considerazioni per la scrittura di codice di prologo/epilogo](../cpp/considerations-for-writing-prolog-epilog-code.md)

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Convenzioni di chiamata](../cpp/calling-conventions.md)
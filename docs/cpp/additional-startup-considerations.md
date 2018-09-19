---
title: Considerazioni di avvio aggiuntive | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- program startup [C++]
- startup code
- initializing before main
ms.assetid: 0e942aa6-8342-447c-b068-8980ed7622bd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5d629451161d94853558887eb7029fc165d13d9b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079219"
---
# <a name="additional-startup-considerations"></a>Considerazioni di avvio aggiuntive

In C++ la costruzione e la distruzione di un oggetto possono richiedere l'esecuzione di codice utente. Pertanto, è importante comprendere le inizializzazioni eseguite prima della voce `main` e i distruttori richiamati dopo l'uscita da `main`. (Per informazioni dettagliate sulla costruzione e distruzione di oggetti, vedere [costruttori](../cpp/constructors-cpp.md) e [distruttori](../cpp/destructors-cpp.md).)

Le inizializzazioni seguenti vengono eseguite prima della voce da `main`:

- Inizializzazione predefinita dei dati statici a zero. Tutti i dati statici senza inizializzatori espliciti vengono impostati su zero prima dell'esecuzione di qualsiasi altro codice, inclusa l'inizializzazione di runtime. I membri dati statici devono ancora essere definiti in modo esplicito.

- Inizializzazione di oggetti statici globali in un'unità di conversione. Questo problema può verificarsi prima della voce `main` o è precedente al primo utilizzo di qualsiasi oggetto in unità di conversione dell'oggetto o funzione.

**Sezione specifica Microsoft**

In Microsoft C++ gli oggetti statici globali vengono inizializzati prima della voce `main`.

**Fine sezione specifica Microsoft**

Gli oggetti statici globali reciprocamente interdipendenti, ma presenti in unità di conversione diverse, possono causare un comportamento non corretto.

## <a name="see-also"></a>Vedere anche

[Avvio e terminazione](../cpp/startup-and-termination-cpp.md)
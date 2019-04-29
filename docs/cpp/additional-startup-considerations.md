---
title: Considerazioni di avvio aggiuntive
ms.date: 11/04/2016
helpviewer_keywords:
- program startup [C++]
- startup code
- initializing before main
ms.assetid: 0e942aa6-8342-447c-b068-8980ed7622bd
ms.openlocfilehash: 16e48f2e4f7544d28a1bea00e1fdf2d1cff397b5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385076"
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
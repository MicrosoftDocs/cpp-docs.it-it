---
title: Puntatori (C++)
ms.date: 11/19/2019
description: Informazioni sui puntatori non elaborati e sui puntatori intelligenti in Microsoft C++.
helpviewer_keywords:
- pointers (C++)
ms.assetid: 595387c5-8e58-4670-848f-344c7caf985e
ms.openlocfilehash: 21dcc55048e9e378f370f25254e1910b05e49d69
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246414"
---
# <a name="pointers-c"></a>Puntatori (C++)

Un puntatore è una variabile che archivia l'indirizzo di memoria di un oggetto. I puntatori vengono usati estensivamente in C e C++ per tre scopi principali:

- per allocare nuovi oggetti nell'heap,
- per passare funzioni ad altre funzioni
- per eseguire l'iterazione degli elementi nelle matrici o in altre strutture di dati.

Nella programmazione di tipo C, i *puntatori non elaborati* vengono utilizzati per tutti questi scenari. Tuttavia, i puntatori non elaborati sono l'origine di molti errori di programmazione gravi. Di conseguenza, il loro utilizzo è fortemente sconsigliato, tranne nel caso in cui forniscano un notevole vantaggio in merito alle prestazioni e non vi siano ambiguità in merito a quale puntatore è il *puntatore proprietario* responsabile dell'eliminazione dell'oggetto. Il C++ moderno fornisce *puntatori intelligenti* per l'allocazione di oggetti, *iteratori* per l'attraversamento di strutture di dati ed *espressioni lambda* per il passaggio di funzioni. Utilizzando queste funzionalità di linguaggio e libreria anziché i puntatori non elaborati, è possibile rendere il programma più sicuro, più facile da eseguire il debug e più semplice da comprendere e gestire. Per ulteriori informazioni, vedere [puntatori intelligenti](smart-pointers-modern-cpp.md), [iteratori](../standard-library/iterators.md)ed [espressioni lambda](lambda-expressions-in-cpp.md) .

## <a name="in-this-section"></a>In questa sezione

- [Puntatori non elaborati](raw-pointers.md)
- [Puntatori const e volatile](const-and-volatile-pointers.md)
- [operatori new e Delete](new-and-delete-operators.md)
- [Puntatori intelligenti](smart-pointers-modern-cpp.md)
- [Procedura: creare e utilizzare istanze di unique_ptr](how-to-create-and-use-unique-ptr-instances.md)
- [Procedura: creare e utilizzare istanze di shared_ptr](how-to-create-and-use-shared-ptr-instances.md)
- [Procedura: creare e utilizzare istanze di weak_ptr](how-to-create-and-use-weak-ptr-instances.md)
- [Procedura: creare e usare istanze CComPtr e CComQIPtr](how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md)

## <a name="see-also"></a>Vedere anche

[Iteratori](../standard-library/iterators.md)</br>
[Espressioni lambda](lambda-expressions-in-cpp.md)

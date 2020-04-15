---
title: Puntatori (C++)
ms.date: 11/19/2019
description: Informazioni sui puntatori non elaborati e sui puntatori intelligenti in Microsoft C.
helpviewer_keywords:
- pointers (C++)
ms.assetid: 595387c5-8e58-4670-848f-344c7caf985e
ms.openlocfilehash: 485cee667fa288bff76fdeac7c9f229355c276d1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371913"
---
# <a name="pointers-c"></a>Puntatori (C++)

Un puntatore è una variabile che archivia l'indirizzo di memoria di un oggetto. I puntatori sono ampiamente utilizzati sia in C che in C, per tre scopi principali:

- per allocare nuovi oggetti nell'heap,
- per passare funzioni ad altre funzioni
- per scorrere gli elementi in matrici o altre strutture di dati.

Nella programmazione di tipo C, *i puntatori non elaborati* vengono utilizzati per tutti questi scenari. Tuttavia, i puntatori non elaborati sono l'origine di molti errori di programmazione gravi. Pertanto, il loro utilizzo è fortemente sconsigliato tranne quando forniscono un vantaggio significativo in termini di prestazioni e non vi è ambiguità su quale puntatore è il *puntatore proprietario* che è responsabile per l'eliminazione dell'oggetto. Il linguaggio moderno c'è fornisce *puntatori intelligenti* per l'allocazione di oggetti, *iteratori* per l'attraversamento di strutture di dati ed *espressioni lambda* per il passaggio di funzioni. Utilizzando queste strutture di linguaggio e libreria anziché puntatori non elaborati, si renderà il programma più sicuro, più facile da eseguire il debug e più semplice da comprendere e gestire. Per ulteriori informazioni, vedere [Puntatori intelligenti](smart-pointers-modern-cpp.md), [Iteratori](../standard-library/iterators.md)ed [Espressioni lambda](lambda-expressions-in-cpp.md) .

## <a name="in-this-section"></a>Contenuto della sezione

- [Puntatori non elaborati](raw-pointers.md)
- [Puntatori Const e volatile](const-and-volatile-pointers.md)
- [Operatori new e delete](new-and-delete-operators.md)
- [Puntatori intelligenti](smart-pointers-modern-cpp.md)
- [Procedura: Creare e usare istanze di unique_ptr](how-to-create-and-use-unique-ptr-instances.md)
- [Procedura: creare e usare istanze di shared_ptrHow to: Create and use shared_ptr instances](how-to-create-and-use-shared-ptr-instances.md)
- [Procedura: creare e usare istanze di weak_ptr](how-to-create-and-use-weak-ptr-instances.md)
- [Procedura: creare e utilizzare istanze CComPtr e CComQIPtr](how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md)

## <a name="see-also"></a>Vedere anche

[Iterators](../standard-library/iterators.md)</br>
[Espressioni lambda](lambda-expressions-in-cpp.md)

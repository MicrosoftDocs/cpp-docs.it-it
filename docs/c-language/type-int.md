---
title: Tipo int
ms.date: 11/04/2016
helpviewer_keywords:
- int data type
- type int
- portability [C++], type int
- signed integers
ms.assetid: 0067ce9a-281e-491a-ae63-632952981e13
ms.openlocfilehash: ebce276c8c4efa822601fe36652057b37e922570
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81334442"
---
# <a name="type-int"></a>Tipo int

La dimensione di un elemento `int` signed o unsigned è la dimensione standard di un Integer in un computer specifico. Ad esempio, in sistemi operativi a 16 bit, il tipo `int` è rappresentato in genere con 16 bit o con 2 byte. Nei sistemi operativi a 32 bit il tipo `int` è rappresentato in genere con 32 bit oppure con 4 byte. Di conseguenza, il tipo `int` equivale a `short int` o al tipo **long int**, mentre il tipo `unsigned int` equivale a **unsigned short** o al tipo `unsigned long`, a seconda dell'ambiente di destinazione. Se non specificato diversamente, i tipi `int` rappresentano tutti i valori signed.

Gli identificatori di tipo `int` e `unsigned int` (o semplicemente `unsigned`) definiscono determinate funzionalità del linguaggio C, ad esempio il tipo `enum`. In questi casi, le definizioni di `int` e unsigned int per un'implementazione effettiva determinano l'archiviazione effettiva.

**Specifico di Microsoft**

I valori Signed Integer sono rappresentati in complemento a due. Il bit più significativo rappresenta il segno, ovvero 1 per il segno negativo, 0 per il segno positivo e zero. L'intervallo di valori viene specificato nei [limiti di interi C e C++](../c-language/cpp-integer-limits.md), che viene ricavato dai limiti. File di intestazione H.

**TERMINA specifica Microsoft**

> [!NOTE]
> Gli identificatori di tipo int e unsigned int sono diffusi nei programmi C perché consentono la gestione più efficiente possibile di Integer in un computer specifico. Tuttavia, poiché le dimensioni dei tipi int e unsigned int variano, i programmi che dipendono da una dimensione specifica di int potrebbero non essere eseguiti in altri computer. Per rendere più portabili i programmi, è possibile usare espressioni con l'operatore sizeof (come illustrato in [Operatore sizeof](../c-language/sizeof-operator-c.md)) anziché dimensioni di dati hardcoded.

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)

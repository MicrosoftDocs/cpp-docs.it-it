---
title: Tipo int
ms.date: 11/04/2016
helpviewer_keywords:
- int data type
- type int
- portability [C++], type int
- signed integers
ms.assetid: 0067ce9a-281e-491a-ae63-632952981e13
ms.openlocfilehash: 848c9799e7ab5cfdfd2b25cc84e55de02c673f3e
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56150012"
---
# <a name="type-int"></a>Tipo int

La dimensione di un elemento `int` signed o unsigned è la dimensione standard di un Integer in un computer specifico. Ad esempio, in sistemi operativi a 16 bit, il tipo `int` è rappresentato in genere con 16 bit o con 2 byte. Nei sistemi operativi a 32 bit il tipo `int` è rappresentato in genere con 32 bit oppure con 4 byte. Di conseguenza, il tipo `int` equivale a `short int` o al tipo **long int**, mentre il tipo `unsigned int` equivale a **unsigned short** o al tipo `unsigned long`, a seconda dell'ambiente di destinazione. Se non specificato diversamente, i tipi `int` rappresentano tutti i valori signed.

Gli identificatori di tipo `int` e `unsigned int` (o semplicemente `unsigned`) definiscono determinate funzionalità del linguaggio C, ad esempio il tipo `enum`. In questi casi, le definizioni di `int` e unsigned int per un'implementazione effettiva determinano l'archiviazione effettiva.

**Sezione specifica Microsoft**

I valori Signed Integer sono rappresentati in complemento a due. Il bit più significativo contiene il segno: 1 per negativo, 0 per positivo e zero. L'intervallo di valori è definito in [Limiti per i tipi Integer in C++](../c-language/cpp-integer-limits.md) ed è ricavato dal file di intestazione LIMITS.H.

**Fine sezione specifica Microsoft**

> [!NOTE]
>  Gli identificatori di tipo int e unsigned int sono diffusi nei programmi C perché consentono la gestione più efficiente possibile di Integer in un computer specifico. Tuttavia, poiché le dimensioni dei tipi int e unsigned int variano, i programmi che dipendono da una dimensione specifica di int potrebbero non essere eseguiti in altri computer. Per rendere più portabili i programmi, è possibile usare espressioni con l'operatore sizeof (come illustrato in [Operatore sizeof](../c-language/sizeof-operator-c.md)) anziché dimensioni di dati hardcoded.

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)

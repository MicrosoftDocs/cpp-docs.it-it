---
title: 'Gestione della memoria: esempi'
ms.date: 11/04/2016
helpviewer_keywords:
- objects [MFC], memory allocation
- data structures [MFC]
- arrays [MFC], allocating resources
- objects [MFC], allocating memory
- data structures [MFC], allocating memory
- examples [MFC], memory allocation
- heap allocation [MFC], examples
- memory allocation [MFC], arrays
- MFC, memory management
- struct memory allocation [MFC]
- types [MFC], memory allocation
- memory allocation [MFC], objects
- memory allocation [MFC], examples
- arrays [MFC], memory management
- frame allocation [MFC]
- memory allocation [MFC], data structures
ms.assetid: f10240f8-b698-4c83-9288-97a54318930b
ms.openlocfilehash: a236dbda9baca7bf7e165edf63a61ffb6eb92a2d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50548122"
---
# <a name="memory-management-examples"></a>Gestione della memoria: esempi

Questo articolo descrive come MFC esegue frame e le allocazioni di heap per ognuno dei tre tipi tipici delle allocazioni di memoria:

- [Una matrice di byte](#_core_allocation_of_an_array_of_bytes)

- [Una struttura di dati](#_core_allocation_of_a_data_structure)

- [Un oggetto](#_core_allocation_of_an_object)

##  <a name="_core_allocation_of_an_array_of_bytes"></a> Allocazione di una matrice di byte

#### <a name="to-allocate-an-array-of-bytes-on-the-frame"></a>Per allocare una matrice di byte sul frame

1. Definire la matrice come illustrato nel codice seguente. La matrice viene eliminata automaticamente e la relativa memoria recuperata quando la variabile di matrice esce dal proprio ambito.

   [!code-cpp[NVC_MFC_Utilities#1](../mfc/codesnippet/cpp/memory-management-examples_1.cpp)]

#### <a name="to-allocate-an-array-of-bytes-or-any-primitive-data-type-on-the-heap"></a>Per allocare una matrice di byte (o qualsiasi tipo di dati primitivo) nell'heap

1. Usare la **nuovo** operatore con la sintassi di matrice illustrata in questo esempio:

   [!code-cpp[NVC_MFC_Utilities#2](../mfc/codesnippet/cpp/memory-management-examples_2.cpp)]

#### <a name="to-deallocate-the-arrays-from-the-heap"></a>Per deallocare le matrici dall'heap

1. Usare la **eliminare** operatore come indicato di seguito:

   [!code-cpp[NVC_MFC_Utilities#3](../mfc/codesnippet/cpp/memory-management-examples_3.cpp)]

##  <a name="_core_allocation_of_a_data_structure"></a> Allocazione di una struttura di dati

#### <a name="to-allocate-a-data-structure-on-the-frame"></a>Per allocare una struttura di dati sul frame

1. Definire la variabile di struttura come indicato di seguito:

   [!code-cpp[NVC_MFC_Utilities#4](../mfc/codesnippet/cpp/memory-management-examples_4.cpp)]

   Quando esce dal proprio ambito, viene recuperata la memoria occupata dalla struttura.

#### <a name="to-allocate-data-structures-on-the-heap"></a>Per allocare le strutture di dati nell'heap

1. Uso **nuove** allocare delle strutture di dati nell'heap e **eliminare** dealloca, come illustrato negli esempi seguenti:

   [!code-cpp[NVC_MFC_Utilities#5](../mfc/codesnippet/cpp/memory-management-examples_5.cpp)]

##  <a name="_core_allocation_of_an_object"></a> Allocazione di un oggetto

#### <a name="to-allocate-an-object-on-the-frame"></a>Per allocare un oggetto sul frame

1. Dichiarare l'oggetto come indicato di seguito:

   [!code-cpp[NVC_MFC_Utilities#6](../mfc/codesnippet/cpp/memory-management-examples_6.cpp)]

   Il distruttore per l'oggetto viene automaticamente richiamato quando l'oggetto esce dal proprio ambito.

#### <a name="to-allocate-an-object-on-the-heap"></a>Per allocare un oggetto nell'heap

1. Usare la **nuovo** operatore, che restituisce un puntatore all'oggetto, per allocare oggetti sull'heap. Usare la **eliminare** operatore per eliminarli.

   Gli esempi di heap e frame seguenti presuppongono che il `CPerson` costruttore non accetta argomenti.

   [!code-cpp[NVC_MFC_Utilities#7](../mfc/codesnippet/cpp/memory-management-examples_7.cpp)]

   Se l'argomento per il `CPerson` costruttore è un puntatore a **char**, l'istruzione per l'allocazione di frame è:

   [!code-cpp[NVC_MFC_Utilities#8](../mfc/codesnippet/cpp/memory-management-examples_8.cpp)]

   L'istruzione per l'allocazione dell'heap è:

   [!code-cpp[NVC_MFC_Utilities#9](../mfc/codesnippet/cpp/memory-management-examples_9.cpp)]

## <a name="see-also"></a>Vedere anche

[Gestione della memoria: allocazione di heap](../mfc/memory-management-heap-allocation.md)


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
ms.openlocfilehash: 0568b3abbcd5776eab4d0ab9748bcbcd79c2a84b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228609"
---
# <a name="memory-management-examples"></a>Gestione della memoria: esempi

Questo articolo descrive in che modo MFC esegue allocazioni di frame e allocazioni di heap per ognuno dei tre tipi tipici di allocazioni di memoria:

- [Matrice di byte](#_core_allocation_of_an_array_of_bytes)

- [Una struttura di dati](#_core_allocation_of_a_data_structure)

- [Un oggetto](#_core_allocation_of_an_object)

## <a name="allocation-of-an-array-of-bytes"></a><a name="_core_allocation_of_an_array_of_bytes"></a>Allocazione di una matrice di byte

#### <a name="to-allocate-an-array-of-bytes-on-the-frame"></a>Per allocare una matrice di byte nel frame

1. Definire la matrice come illustrato dal codice seguente. La matrice viene automaticamente eliminata e la relativa memoria viene recuperata quando la variabile di matrice esce dall'ambito.

   [!code-cpp[NVC_MFC_Utilities#1](codesnippet/cpp/memory-management-examples_1.cpp)]

#### <a name="to-allocate-an-array-of-bytes-or-any-primitive-data-type-on-the-heap"></a>Per allocare una matrice di byte (o qualsiasi tipo di dati primitivo) nell'heap

1. Usare l' **`new`** operatore con la sintassi della matrice illustrata in questo esempio:

   [!code-cpp[NVC_MFC_Utilities#2](codesnippet/cpp/memory-management-examples_2.cpp)]

#### <a name="to-deallocate-the-arrays-from-the-heap"></a>Per deallocare le matrici dall'heap

1. Usare l' **`delete`** operatore come indicato di seguito:

   [!code-cpp[NVC_MFC_Utilities#3](codesnippet/cpp/memory-management-examples_3.cpp)]

## <a name="allocation-of-a-data-structure"></a><a name="_core_allocation_of_a_data_structure"></a>Allocazione di una struttura di dati

#### <a name="to-allocate-a-data-structure-on-the-frame"></a>Per allocare una struttura di dati nel frame

1. Definire la variabile di struttura come segue:

   [!code-cpp[NVC_MFC_Utilities#4](codesnippet/cpp/memory-management-examples_4.cpp)]

   La memoria occupata dalla struttura viene recuperata quando esce dall'ambito.

#### <a name="to-allocate-data-structures-on-the-heap"></a>Per allocare strutture di dati nell'heap

1. Usare **`new`** per allocare strutture di dati nell'heap e **`delete`** deallocarle, come illustrato negli esempi seguenti:

   [!code-cpp[NVC_MFC_Utilities#5](codesnippet/cpp/memory-management-examples_5.cpp)]

## <a name="allocation-of-an-object"></a><a name="_core_allocation_of_an_object"></a>Allocazione di un oggetto

#### <a name="to-allocate-an-object-on-the-frame"></a>Per allocare un oggetto nel frame

1. Dichiarare l'oggetto come segue:

   [!code-cpp[NVC_MFC_Utilities#6](codesnippet/cpp/memory-management-examples_6.cpp)]

   Il distruttore per l'oggetto viene richiamato automaticamente quando l'oggetto esce dall'ambito.

#### <a name="to-allocate-an-object-on-the-heap"></a>Per allocare un oggetto nell'heap

1. Usare l' **`new`** operatore, che restituisce un puntatore all'oggetto, per allocare oggetti nell'heap. Usare l' **`delete`** operatore per eliminarli.

   Negli esempi di heap e frame seguenti si presuppone che il `CPerson` costruttore non accetti argomenti.

   [!code-cpp[NVC_MFC_Utilities#7](codesnippet/cpp/memory-management-examples_7.cpp)]

   Se l'argomento per il `CPerson` costruttore è un puntatore a **`char`** , l'istruzione per l'allocazione dei frame è:

   [!code-cpp[NVC_MFC_Utilities#8](codesnippet/cpp/memory-management-examples_8.cpp)]

   L'istruzione per l'allocazione dell'heap è:

   [!code-cpp[NVC_MFC_Utilities#9](codesnippet/cpp/memory-management-examples_9.cpp)]

## <a name="see-also"></a>Vedere anche

[Gestione della memoria: allocazione dell'heap](memory-management-heap-allocation.md)

---
title: 'Gestione della memoria: allocazione di frame'
ms.date: 11/04/2016
helpviewer_keywords:
- memory leaks [MFC], frame allocation
- memory [MFC], detecting leaks
- memory [MFC], reclaiming
- memory allocation [MFC], frames
- frame variables [MFC], automatic deletion of
- scope [MFC], frame variables
- heap allocation [MFC], vs. frame allocation
- variables [MFC], frame variables
- memory leaks [MFC], detecting
- memory, releasing [MFC]
- stack frames [MFC]
- memory leaks [MFC], allocating objects on the frame
- detecting memory leaks [MFC]
- frame allocation [MFC]
- frame variables [MFC]
ms.assetid: 945a211a-6f4f-4679-bb6a-b0f2a0d4a6c1
ms.openlocfilehash: 1ecf1c08164d1a760fce62457a6019e767ed2605
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626295"
---
# <a name="memory-management-frame-allocation"></a>Gestione della memoria: allocazione di frame

L'allocazione nel frame prende il nome dal "stack frame" configurato ogni volta che viene chiamata una funzione. Il stack frame è un'area di memoria che include temporaneamente gli argomenti per la funzione e le variabili definite localmente per la funzione. Le variabili di frame vengono spesso denominate variabili "automatiche" perché il compilatore alloca automaticamente lo spazio.

Esistono due caratteristiche principali delle allocazioni di frame. In primo luogo, quando si definisce una variabile locale, nello stack frame viene allocato spazio sufficiente per conservare l'intera variabile, anche se si tratta di una matrice di grandi dimensioni o di una struttura di dati. Secondo, le variabili di frame vengono eliminate automaticamente quando escono dall'ambito:

[!code-cpp[NVC_MFC_Utilities#10](codesnippet/cpp/memory-management-frame-allocation_1.cpp)]

Per le variabili della funzione locale, questa transizione dell'ambito si verifica quando la funzione viene chiusa, ma l'ambito di una variabile di frame può essere minore di una funzione se vengono utilizzate parentesi graffe nidificate. Questa eliminazione automatica delle variabili del frame è molto importante. Nel caso di tipi primitivi semplici (ad esempio **int** o **byte**), matrici o strutture di dati, l'eliminazione automatica recupera semplicemente la memoria usata dalla variabile. Poiché la variabile è uscita dall'ambito, non è possibile accedervi comunque. Nel caso di oggetti C++, tuttavia, il processo di eliminazione automatica è un po' più complesso.

Quando un oggetto viene definito come una variabile di frame, il relativo costruttore viene richiamato automaticamente nel punto in cui viene rilevata la definizione. Quando l'oggetto esce dall'ambito, il relativo distruttore viene richiamato automaticamente prima che venga recuperata la memoria per l'oggetto. Questa costruzione e distruzione automatica può essere molto utile, ma è necessario essere a conoscenza delle chiamate automatiche, soprattutto del distruttore.

Il vantaggio principale dell'allocazione di oggetti nel frame è che vengono eliminati automaticamente. Quando si allocano gli oggetti nel frame, non è necessario preoccuparsi degli oggetti dimenticati che provocano perdite di memoria. Per informazioni dettagliate sulle perdite di memoria, vedere l'articolo [rilevamento di perdite di memoria in MFC](/previous-versions/visualstudio/visual-studio-2010/c99kz476(v=vs.100)). Uno svantaggio dell'allocazione dei frame è che non è possibile usare le variabili di frame al di fuori dell'ambito. Un altro fattore nella scelta dell'allocazione di frame e dell'allocazione dell'heap è che per strutture e oggetti di grandi dimensioni è spesso preferibile usare l'heap invece dello stack per l'archiviazione perché lo spazio dello stack è spesso limitato.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria](memory-management.md)

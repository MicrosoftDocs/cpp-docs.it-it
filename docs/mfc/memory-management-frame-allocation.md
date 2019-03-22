---
title: 'Gestione della memoria: Allocazione di frame'
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
ms.openlocfilehash: 1acf2ce89e18dd64c166103b59b5eb7007214efd
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328454"
---
# <a name="memory-management-frame-allocation"></a>Gestione della memoria: Allocazione di frame

Allocazione sul frame prende il nome da "frame dello stack" è impostato ogni volta che viene chiamata una funzione. Il frame dello stack è un'area di memoria che temporaneamente contiene gli argomenti alla funzione, nonché eventuali variabili definite locali rispetto alla funzione. Variabili di frame vengono spesso denominate "automatiche" variabili perché il compilatore alloca automaticamente lo spazio per loro.

Esistono due caratteristiche principali delle allocazioni di frame. In primo luogo, quando si definisce una variabile locale, viene allocato spazio sufficiente sul frame dello stack per contenere la variabile di tipo intera, anche se è una matrice di grandi dimensioni o una struttura di dati. In secondo luogo, variabili di frame vengono eliminate automaticamente quando escono dall'ambito:

[!code-cpp[NVC_MFC_Utilities#10](../mfc/codesnippet/cpp/memory-management-frame-allocation_1.cpp)]

Per le variabili di funzione locale, questa transizione ambito si verifica quando uscita della funzione, ma l'ambito di una variabile di intervallo può essere inferiore a una funzione se vengono usate parentesi graffe annidate. L'eliminazione automatica delle variabili di frame è molto importante. Nel caso di semplici tipi primitivi (ad esempio **int** oppure **byte**), matrici o strutture di dati, l'eliminazione automatica recupera semplicemente la memoria usata dalla variabile. Poiché la variabile esce dall'ambito, non è accessibile comunque. Nel caso degli oggetti C++, tuttavia, il processo di eliminazione automatica è un po' più complicato.

Quando un oggetto viene definito come una variabile di frame, il relativo costruttore viene richiamato automaticamente in corrispondenza del punto in cui viene rilevata la definizione. Quando l'oggetto esce dall'ambito, il relativo distruttore viene chiamato automaticamente prima che la memoria per l'oggetto venga recuperata. La costruzione e distruzione di $ può essere molto utile, ma occorre tenere presenti le chiamate automatiche, in particolare al distruttore.

Il vantaggio principale di allocazione di oggetti nel frame è che questi vengono eliminati automaticamente. Quando si allocano oggetti sul frame, non devi preoccuparti oggetti dimenticati causando perdite di memoria. (Per informazioni dettagliate sulle perdite di memoria, vedere l'articolo [rilevamento di perdite di memoria in MFC](/previous-versions/visualstudio/visual-studio-2010/c99kz476(v=vs.100)).) Uno svantaggio dell'allocazione di frame è che le variabili di frame possono essere usate all'esterno all'ambito. Un altro fattore nella scelta di allocazione di frame e allocazione dell'heap è che per gli oggetti e strutture di grandi dimensioni, è spesso preferibile usare heap anziché lo stack per l'archiviazione, poiché lo spazio dello stack è spesso limitato.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria](../mfc/memory-management.md)

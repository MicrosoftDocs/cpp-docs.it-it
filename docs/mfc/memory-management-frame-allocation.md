---
title: 'Gestione della memoria: Allocazione di Frame | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 03a8e5f81e55398ffba30479ecfafc42726e9519
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="memory-management-frame-allocation"></a>Gestione della memoria: allocazione di frame
Allocazione di frame lo stesso nome "frame dello stack" è impostato ogni volta che viene chiamata una funzione. Lo stack frame è un'area di memoria che è temporaneamente contiene gli argomenti per la funzione, nonché tutte le variabili definite locali rispetto alla funzione. Variabili di frame vengono spesso denominate "automatiche" variabili perché il compilatore alloca automaticamente lo spazio per loro.  
  
 Esistono due caratteristiche principali delle allocazioni di frame. Innanzitutto, quando si definisce una variabile locale, viene allocato spazio sufficiente nel frame dello stack per contenere l'intera variabile, anche se è una matrice di grandi dimensioni o una struttura di dati. In secondo luogo, variabili di frame vengono automaticamente eliminate quando escono dall'ambito:  
  
 [!code-cpp[NVC_MFC_Utilities#10](../mfc/codesnippet/cpp/memory-management-frame-allocation_1.cpp)]  
  
 Per le variabili di funzione locale, questa transizione ambito si verifica quando uscita della funzione, ma l'ambito di una variabile di frame può essere inferiore a una funzione se si utilizzano parentesi graffe annidate. L'eliminazione automatica delle variabili di frame è molto importante. Nel caso di semplici tipi primitivi (ad esempio `int` o **byte**), matrici o strutture di dati, l'eliminazione automatica consente di recuperare semplicemente la memoria utilizzata dalla variabile. Poiché la variabile esce dall'ambito, non è possibile accedervi comunque. Nel caso degli oggetti C++, tuttavia, il processo di eliminazione automatica è un po' più complesso.  
  
 Quando un oggetto viene definito come variabile di frame, il relativo costruttore viene chiamato automaticamente nel punto in cui viene rilevata la definizione. Quando l'oggetto esce dall'ambito, il relativo distruttore viene chiamato automaticamente prima che la memoria per l'oggetto venga recuperata. La costruzione e distruzione può essere molto utile, ma è necessario considerare le chiamate automatiche, in particolare per il distruttore.  
  
 Il vantaggio principale dell'allocazione di oggetti nel frame è che questi vengono eliminati automaticamente. Quando si allocano oggetti sul frame, non è necessario preoccuparsi oggetti dimenticati causare perdite di memoria. (Per informazioni dettagliate sulle perdite di memoria, vedere l'articolo [rilevamento di perdite di memoria in MFC](http://msdn.microsoft.com/en-us/29ee8909-96e9-4246-9332-d3a8aa8d4658).) Uno svantaggio dell'allocazione di frame è variabili di frame non possono essere utilizzate all'esterno all'ambito. Un altro fattore determinante nella scelta di allocazione di frame e allocazione di heap è che per gli oggetti e strutture di grandi dimensioni, è spesso preferibile usare l'heap anziché lo stack per l'archiviazione, poiché lo spazio dello stack è spesso limitato.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria](../mfc/memory-management.md)


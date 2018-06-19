---
title: Matrice, elenco e classi di mappe | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.mfc
dev_langs:
- C++
helpviewer_keywords:
- arrays [MFC], classes
- list classes [MFC]
- collection classes [MFC], maps
- map classes [MFC]
- collection classes [MFC], lists
ms.assetid: 81a13a7f-0c2c-4efd-b6bb-b4e624a0743d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 41dfe0b36548d87b5e0501c557e70f3cf11eea5d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33345293"
---
# <a name="array-list-and-map-classes"></a>Classi Array, List e Map
Per la gestione delle aggregazioni di dati, la libreria di classi fornisce un gruppo di classi di raccolte, le matrici, elenchi e mappe, che può contenere una varietà di oggetti e i tipi predefiniti. Le raccolte in modo dinamico vengono ridimensionate. Queste classi possono essere utilizzate in qualsiasi programma se scritte per Windows o non. Tuttavia, sono utili per implementare le strutture di dati che definiscono le classi di documento in framework applicazione. È possibile derivare facilmente classi collection specifiche da questi o è possibile crearli basati sulle classi del modello. Per ulteriori informazioni su questi approcci, vedere l'articolo [raccolte](../mfc/collections.md). Per un elenco delle classi di raccolta di modello, vedere l'articolo [classi modello per matrici, elenchi e mappe](../mfc/template-classes-for-arrays-lists-and-maps.md).  
  
 Le matrici sono strutture di dati unidimensionale che vengono archiviate in modo contiguo nella memoria. Supportano l'accesso casuale molto veloce perché l'indirizzo di memoria di qualsiasi elemento specificato può essere calcolata moltiplicando l'indice dell'elemento per le dimensioni di un elemento e aggiungendo il risultato all'indirizzo di base della matrice. Le matrici sono molto costose se è necessario inserire gli elementi nella matrice, poiché l'intera matrice precedente l'elemento inserito deve essere spostata per liberare spazio per l'elemento da inserire. Le matrici possono aumentare e ridursi in base alle esigenze.  
  
 Gli elenchi sono simili alle matrici, ma vengono archiviati in modo molto diverso. Ogni elemento in un elenco include anche un puntatore agli elementi precedenti e successivi, rendendolo un elenco a doppio collegamento. È molto veloce per aggiungere o eliminare elementi perché in questo modo solo implica la modifica di alcuni puntatori. Tuttavia, un elenco di ricerca può essere costosa, poiché tutte le ricerche devono iniziare in corrispondenza di una delle estremità dell'elenco.  
  
 Mappe riguardano un valore di dati di un valore di chiave. Ad esempio, la chiave di una mappa potrebbe essere una stringa e i dati di un puntatore in un elenco. Chiedere la mappa per fornire l'indicatore di misura associata a una determinata stringa. Le ricerche di mappa sono veloci poiché mappe vengono utilizzate tabelle hash per ricerche chiave. Aggiunta ed eliminazione di elementi è veloce. Le mappe vengono spesso usate con altre strutture di dati come indici ausiliari. MFC utilizza un tipo speciale di mappa denominata un [mappa messaggi](../mfc/mapping-messages.md) per eseguire il mapping di messaggi di Windows in un puntatore a funzione del gestore per il messaggio.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)


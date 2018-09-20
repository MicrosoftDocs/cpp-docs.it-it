---
title: Matrice, elenco e mappare le classi | Microsoft Docs
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
ms.openlocfilehash: a8d044f8844fdf46969342d1b4fc5cf2f007c041
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436338"
---
# <a name="array-list-and-map-classes"></a>Classi Array, List e Map

Per la gestione delle aggregazioni di dati, la libreria di classi fornisce un gruppo di classi collection, matrici, elenchi e mappe, che può contenere numerosi oggetti e tipi predefiniti. Le raccolte vengono ridimensionate in modo dinamico. Queste classi possono essere utilizzate in qualsiasi programma, se scritto per Windows o meno. Tuttavia, sono particolarmente utili per implementare le strutture di dati che definiscono le classi documento in framework dell'applicazione. È possibile derivare facilmente classi collection specializzato da questi oppure è possibile crearli basati sulle classi del modello. Per altre informazioni su questi approcci, vedere l'articolo [raccolte](../mfc/collections.md). Per un elenco delle classi di raccolta di modello, vedere l'articolo [classi modello per matrici, elenchi e mappe](../mfc/template-classes-for-arrays-lists-and-maps.md).

Le matrici sono strutture di dati unidimensionale che vengono archiviate in modo contiguo nella memoria. Supportano l'accesso casuale molto veloce perché l'indirizzo di memoria di qualsiasi elemento specificato può essere calcolato moltiplicando l'indice dell'elemento per le dimensioni di un elemento e aggiungendo il risultato all'indirizzo di base della matrice. Le matrici sono molto costose se si dispone per inserire elementi nella matrice, poiché l'intera matrice precedente l'elemento inserito deve essere spostata per liberare spazio per l'elemento da inserire. Le matrici possono allargarsi e restringersi base alle esigenze.

Gli elenchi sono simili alle matrici, ma vengono archiviati in modo molto diverso. Ogni elemento in un elenco include anche un puntatore agli elementi precedenti e successivi, rendendolo un elenco a doppio collegamento. È molto veloce per aggiungere o eliminare elementi, poiché solo questa operazione comporta la modifica di alcune informazioni utili. Tuttavia, la ricerca di un elenco può essere costosa perché è necessario partire da una delle entità finali dell'elenco tutte le ricerche.

Mappe di correlare un valore di chiave su un valore di dati. La chiave di una mappa, ad esempio, potrebbe essere una stringa e i dati di un puntatore in un elenco. Si potrebbe chiedere la mappa per offrirti il puntatore del mouse associata a una determinata stringa. Le ricerche di mappa sono veloci poiché mappe di utilizzano tabelle hash per le ricerche chiave. Aggiunta ed eliminazione di elementi anche è veloce. Le mappe vengono spesso utilizzate con altre strutture di dati come indici ausiliari. MFC utilizza un tipo speciale di mappa denominata un [mappa messaggi](../mfc/mapping-messages.md) per eseguire il mapping dei messaggi Windows a un puntatore alla funzione del gestore per il messaggio.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)


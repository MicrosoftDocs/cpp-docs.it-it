---
title: Classi Array, List e Map
ms.date: 11/04/2016
helpviewer_keywords:
- arrays [MFC], classes
- list classes [MFC]
- collection classes [MFC], maps
- map classes [MFC]
- collection classes [MFC], lists
ms.assetid: 81a13a7f-0c2c-4efd-b6bb-b4e624a0743d
ms.openlocfilehash: 9583d8263901c4a135a3ba1f560856b2a8915168
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626111"
---
# <a name="array-list-and-map-classes"></a>Classi Array, List e Map

Per la gestione di aggregazioni di dati, la libreria di classi fornisce un gruppo di classi di raccolta, ovvero matrici, elenchi e mappe, che possono ospitare un'ampia gamma di oggetti e tipi predefiniti. Le raccolte vengono ridimensionate dinamicamente. Queste classi possono essere usate in qualsiasi programma, se scritte per Windows o meno. Tuttavia, sono particolarmente utili per l'implementazione delle strutture di dati che definiscono le classi del documento nel Framework applicazione. È possibile derivare facilmente classi di raccolta specializzate da questi elementi oppure è possibile crearle in base alle classi modello. Per ulteriori informazioni su questi approcci, vedere le [raccolte](collections.md)di articoli. Per un elenco delle classi di raccolte di modelli, vedere l'articolo [classi modello per matrici, elenchi e mappe](template-classes-for-arrays-lists-and-maps.md).

Le matrici sono strutture di dati unidimensionali archiviate in modo contiguo nella memoria. Supportano l'accesso casuale molto veloce, poiché l'indirizzo di memoria di un dato elemento può essere calcolato moltiplicando l'indice dell'elemento per la dimensione di un elemento e aggiungendo il risultato all'indirizzo di base della matrice. Tuttavia, le matrici sono molto costose se è necessario inserire elementi nella matrice, perché l'intera matrice oltre l'elemento inserito deve essere spostata per fare spazio all'elemento da inserire. Le matrici possono aumentare e ridurre in modo necessario.

Gli elenchi sono simili a matrici ma sono archiviati in modo molto diverso. Ogni elemento di un elenco include anche un puntatore agli elementi precedenti e successivi, che lo rendono un elenco con collegamento doppio. È molto veloce aggiungere o eliminare elementi perché questa operazione comporta solo la modifica di alcuni puntatori. Tuttavia, la ricerca in un elenco può essere costosa poiché tutte le ricerche devono iniziare da una delle estremità dell'elenco.

Le mappe correlano un valore di chiave a un valore di dati. Ad esempio, la chiave di una mappa può essere una stringa e i dati un puntatore in un elenco. Si chiede alla mappa di fornire il puntatore associato a una determinata stringa. Le ricerche con mapping sono veloci perché le mappe usano tabelle hash per le ricerche chiave. Anche l'aggiunta e l'eliminazione di elementi è veloce. Le mappe vengono spesso usate con altre strutture di dati come indici ausiliari. MFC utilizza un tipo speciale di mapping denominato [mappa messaggi](mapping-messages.md) per eseguire il mapping dei messaggi di Windows a un puntatore alla funzione del gestore per quel messaggio.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)

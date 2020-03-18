---
title: Definizione di oggetto CArchive
ms.date: 11/04/2016
helpviewer_keywords:
- archive objects [MFC]
- archives [MFC], for serialization
- buffers, serializable objects
- CArchive class [MFC], about CArchive class [MFC]
- buffering, serializable objects
ms.assetid: 843f1825-288d-4d89-a1fa-70e1f92d9b8b
ms.openlocfilehash: 0a78385c81c43a4b0c925bbe89ccd3937873ee8b
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446027"
---
# <a name="what-is-a-carchive-object"></a>Definizione di oggetto CArchive

Un oggetto `CArchive` fornisce un meccanismo di buffering indipendente dai tipi per la scrittura o la lettura di oggetti serializzabili da e verso un oggetto `CFile`. In genere l'oggetto `CFile` rappresenta un file su disco; Tuttavia, può anche essere un file di memoria (`CSharedFile` oggetto), probabilmente che rappresenta gli Appunti.

Un oggetto `CArchive` specificato archivia (scrive, serializza) dati o carica (letture, deserializza) dati, ma mai entrambi. Il ciclo di vita di un oggetto `CArchive` è limitato a un passaggio attraverso la scrittura di oggetti in un file o la lettura di oggetti da un file. Pertanto, due oggetti `CArchive` creati successivamente sono necessari per serializzare i dati in un file e quindi deserializzarli nuovamente dal file.

Quando un archivio archivia oggetti in un file, l'archivio connette il nome del `CRuntimeClass` agli oggetti. Quindi, quando un altro archivio carica oggetti da un file in memoria, gli oggetti derivati da `CObject`vengono ricostruiti in modo dinamico in base al `CRuntimeClass` degli oggetti. È possibile fare riferimento a un oggetto specificato più di una volta quando viene scritto nel file dall'archivio di archiviazione. L'archivio di caricamento, tuttavia, ricostruirà l'oggetto solo una volta. I dettagli sul modo in cui un archivio connette `CRuntimeClass` informazioni agli oggetti e ricostruisce gli oggetti, tenendo conto dei possibili riferimenti più, sono descritti nella [Nota tecnica 2](../mfc/tn002-persistent-object-data-format.md).

Poiché i dati vengono serializzati in un archivio, l'archivio accumula i dati fino a quando il buffer non è pieno. L'archivio scrive quindi il buffer nel `CFile` oggetto a cui fa riferimento l'oggetto `CArchive`. Analogamente, quando si leggono i dati da un archivio, i dati vengono letti dal file nel buffer e quindi dal buffer all'oggetto deserializzato. Questo buffer riduce il numero di volte in cui un disco rigido viene letto fisicamente, migliorando così le prestazioni dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

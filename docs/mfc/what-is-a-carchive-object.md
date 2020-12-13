---
description: "Altre informazioni su: che cos'è un oggetto CArchive"
title: Definizione di oggetto CArchive
ms.date: 11/04/2016
helpviewer_keywords:
- archive objects [MFC]
- archives [MFC], for serialization
- buffers, serializable objects
- CArchive class [MFC], about CArchive class [MFC]
- buffering, serializable objects
ms.assetid: 843f1825-288d-4d89-a1fa-70e1f92d9b8b
ms.openlocfilehash: 7d98200f87f4b428a9450894aca5f8958115d627
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142792"
---
# <a name="what-is-a-carchive-object"></a>Definizione di oggetto CArchive

Un `CArchive` oggetto fornisce un meccanismo di buffering indipendente dai tipi per la scrittura o la lettura di oggetti serializzabili in o da un `CFile` oggetto. In genere l' `CFile` oggetto rappresenta un file su disco; tuttavia, può anche essere un file di memoria ( `CSharedFile` oggetto), probabilmente che rappresenta gli Appunti.

Un determinato `CArchive` oggetto archivia (scrive, serializza) dati o carica (letture, deserializza) dati, ma mai entrambi. Il ciclo di vita di un `CArchive` oggetto è limitato a un pass-through per la scrittura di oggetti in un file o per la lettura di oggetti da un file. Pertanto, due oggetti creati successivamente `CArchive` sono necessari per serializzare i dati in un file e quindi deserializzarli nuovamente dal file.

Quando un archivio archivia oggetti in un file, l'archivio aggiunge il `CRuntimeClass` nome agli oggetti. Quindi, quando un altro archivio carica oggetti da un file in memoria, gli `CObject` oggetti derivati da vengono ricostruiti in modo dinamico in base all'oggetto `CRuntimeClass` degli oggetti. È possibile fare riferimento a un oggetto specificato più di una volta quando viene scritto nel file dall'archivio di archiviazione. L'archivio di caricamento, tuttavia, ricostruirà l'oggetto solo una volta. I dettagli relativi al modo in cui un archivio connette `CRuntimeClass` le informazioni agli oggetti e ricostruisce gli oggetti, tenendo conto dei possibili riferimenti più, sono descritti nella [Nota tecnica 2](../mfc/tn002-persistent-object-data-format.md).

Poiché i dati vengono serializzati in un archivio, l'archivio accumula i dati fino a quando il buffer non è pieno. L'archivio scrive quindi il buffer nell' `CFile` oggetto a cui fa riferimento l' `CArchive` oggetto. Analogamente, quando si leggono i dati da un archivio, i dati vengono letti dal file nel buffer e quindi dal buffer all'oggetto deserializzato. Questo buffer riduce il numero di volte in cui un disco rigido viene letto fisicamente, migliorando così le prestazioni dell'applicazione.

## <a name="see-also"></a>Vedi anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

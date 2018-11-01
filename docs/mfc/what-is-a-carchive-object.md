---
title: Definizione di oggetto CArchive
ms.date: 11/04/2016
f1_keywords:
- CArchive
helpviewer_keywords:
- archive objects [MFC]
- archives [MFC], for serialization
- buffers, serializable objects
- CArchive class [MFC], about CArchive class [MFC]
- buffering, serializable objects
ms.assetid: 843f1825-288d-4d89-a1fa-70e1f92d9b8b
ms.openlocfilehash: 08260d1a1b21658e879410ff5201e5f455535332
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50519340"
---
# <a name="what-is-a-carchive-object"></a>Definizione di oggetto CArchive

Oggetto `CArchive` oggetto fornisce un meccanismo di memorizzazione nel buffer indipendente dai tipi per la scrittura o lettura oggetti serializzabili da o verso un `CFile` oggetto. In genere il `CFile` oggetto rappresenta un file su disco, tuttavia, può anche essere un file di memoria (`CSharedFile` oggetto), che rappresenta ad esempio gli Appunti.

Una determinata `CArchive` entrambi gli archivi dell'oggetto (scrive, serializza) dei dati o caricamenti (legge, deserializza) dei dati, ma non entrambe. Il ciclo di vita di un `CArchive` l'oggetto è limitato a un'operazione di scrittura di oggetti in un file o la lettura di oggetti da un file. Di conseguenza, due in successione creato `CArchive` gli oggetti necessari per serializzare i dati in un file e quindi deserializzarli il file.

Quando un archivio archivia gli oggetti in un file, l'archivio Allega il `CRuntimeClass` nome agli oggetti. Quindi, quando un altro archivio carica gli oggetti da un file in memoria, il `CObject`-gli oggetti derivati da vengono ricostruiti in modo dinamico in base il `CRuntimeClass` degli oggetti. Un oggetto specificato può farvi riferimento più volte mentre viene scritto nel file dall'archivio di memorizzazione. L'archivio di caricamento, tuttavia, verrà ricostruire l'oggetto una sola volta. I dettagli sulla modalità collega un archivio `CRuntimeClass` le informazioni per gli oggetti e ricostruisce, prendendo in considerazione possibili più riferimenti, sono descritti nella [tecnica nota 2](../mfc/tn002-persistent-object-data-format.md).

Come i dati vengono serializzati in un archivio, l'archivio accumula i dati fino a quando il buffer è pieno. Quindi l'archivio inserisce il buffer per il `CFile` oggetto a cui punta il `CArchive` oggetto. Analogamente, durante la lettura dei dati da un archivio, legge i dati dal file per il buffer e quindi dal buffer per l'oggetto deserializzato. Il buffering riduce il numero di volte in cui che un disco rigido viene letta fisicamente, migliorando così le prestazioni dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)


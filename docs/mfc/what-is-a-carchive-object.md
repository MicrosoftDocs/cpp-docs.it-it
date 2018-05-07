---
title: Che cos'è un oggetto CArchive | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CArchive
dev_langs:
- C++
helpviewer_keywords:
- archive objects [MFC]
- archives [MFC], for serialization
- buffers, serializable objects
- CArchive class [MFC], about CArchive class [MFC]
- buffering, serializable objects
ms.assetid: 843f1825-288d-4d89-a1fa-70e1f92d9b8b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 55b97843a8aeb2599d2bdf34458b362fc5899368
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="what-is-a-carchive-object"></a>Definizione di oggetto CArchive
Oggetto `CArchive` oggetto fornisce un meccanismo di memorizzazione nel buffer indipendente dai tipi per la scrittura o lettura di oggetti serializzabili a o da un `CFile` oggetto. In genere il `CFile` oggetto rappresenta un file su disco, tuttavia, può essere anche un file di memoria (`CSharedFile` oggetto), che rappresenta ad esempio negli Appunti.  
  
 Un determinato `CArchive` oggetto consente di memorizzare (scrive, serializza) oppure di caricare (legge, deserializza) dei dati, ma non entrambe. Il ciclo di vita di un `CArchive` l'oggetto è limitato a un'operazione di scrittura di oggetti in un file o la lettura di oggetti da un file. Di conseguenza, due creato successivamente `CArchive` gli oggetti necessari per serializzare i dati in un file e quindi deserializzarli il file.  
  
 Quando un archivio vengono memorizzati gli oggetti in un file, l'archivio Allega il `CRuntimeClass` nome agli oggetti. Quindi, quando un altro archivio carica gli oggetti da un file in memoria, il `CObject`-oggetti derivati vengono ricostruiti in modo dinamico in base il `CRuntimeClass` degli oggetti. Un oggetto specificato è possibile fare riferimento più volte durante la scrittura del file dall'archivio di memorizzazione. L'archivio di caricamento, tuttavia, verrà ricostruire l'oggetto una sola volta. I dettagli sulla modalità in cui viene associato un archivio `CRuntimeClass` in cui sono riportate informazioni per gli oggetti e ricostruisce, prendendo in considerazione possibili più riferimenti, [Nota tecnica 2](../mfc/tn002-persistent-object-data-format.md).  
  
 Come i dati vengono serializzati in un archivio, l'archivio accumula i dati fino a quando il buffer è pieno. Quindi, l'archivio scrive nel proprio buffer di `CFile` oggetto a cui fa riferimento il `CArchive` oggetto. Analogamente, durante la lettura dei dati da un archivio, legge i dati dal buffer di file e quindi dal buffer per l'oggetto deserializzato. Questo buffering riduce il numero di volte in che un disco rigido viene letto fisicamente, migliorando le prestazioni dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)


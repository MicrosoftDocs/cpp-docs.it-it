---
title: La serializzazione dei dati da e verso i file | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- documents [MFC], serialization
- documents [MFC], saving
- saving documents
- deserialization [MFC]
- serialization [MFC], role of document
- serialization [MFC], role of data
- data [MFC]
- data [MFC], serializing
- document data [MFC]
ms.assetid: b42a0c68-4bc4-4012-9938-5433a26d2c24
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 65cf6d8944c1b14d6c55ce2c35a257bfa63a3606
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46395388"
---
# <a name="serializing-data-to-and-from-files"></a>Serializzazione dei dati da e verso i file

L'idea alla base della persistenza è che un oggetto deve essere in grado di scrivere il proprio stato corrente, indicato dai valori delle variabili membro, in un archivio permanente. In un secondo momento, l'oggetto può essere ricreato mediante la lettura, o "deserializzazione", lo stato dell'oggetto dall'archivio permanente. Un aspetto essenziale qui è che l'oggetto stesso è responsabile della lettura e scrittura di un proprio stato. Di conseguenza, per una classe essere permanente, deve implementare le operazioni di serializzazione di base.

Il framework fornisce un'implementazione predefinita per il salvataggio di file su disco in risposta al comando Salva e Salva i comandi dal menu File e per il caricamento dei documenti dai file su disco in risposta al comando Apri. Con uno sforzo, è possibile implementare la capacità del documento per scrivere e leggere i dati da e verso un file. La cosa principale da eseguire è eseguire l'override di [Serialize](../mfc/reference/cobject-class.md#serialize) funzione membro nella classe del documento.

La creazione guidata applicazione MFC inserisce uno schema di override del `CDocument` funzione membro `Serialize` nella classe documento viene creato automaticamente. Dopo aver implementato le variabili membro dell'applicazione, è possibile compilare il `Serialize` esegue l'override con il codice che invia i dati a un "oggetto archivio" connesso a un file. Oggetto [CArchive](../mfc/reference/carchive-class.md) oggetto è simile al **cin** e **cout** oggetti dalla libreria iostream C++ di input/output. Tuttavia, `CArchive` scrive e legge il formato binario, testo non formattato.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Serializzazione](../mfc/serialization-in-mfc.md)

- [Ruolo del documento nella serializzazione](#_core_the_document.92.s_role_in_serialization)

- [Ruolo dei dati di serializzazione](#_core_the_data.92.s_role_in_serialization)

- [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)

##  <a name="_core_the_document.92.s_role_in_serialization"></a> Ruolo del documento nella serializzazione

Il framework risponde automaticamente per Apri del menu File, salvare e salvare come comandi chiamando il documento `Serialize` funzione membro se viene implementato. Un ID_FILE_OPEN (comando), ad esempio, chiama una funzione del gestore dell'oggetto dell'applicazione. Durante questo processo, l'utente vede e risponde alla finestra di dialogo Apri File e il framework Ottiene l'utente sceglie il nome del file. Il framework crea una `CArchive` oggetto impostato per il caricamento dei dati nel documento e passa l'archivio `Serialize`. Il framework è già aperto il file. Il codice all'interno del documento `Serialize` funzione membro legge i dati attraverso l'archivio, ricostruire gli oggetti dati in base alle esigenze. Per altre informazioni sulla serializzazione, vedere l'articolo [serializzazione](../mfc/serialization-in-mfc.md).

##  <a name="_core_the_data.92.s_role_in_serialization"></a> Ruolo dei dati di serializzazione

In generale, i dati di tipo classe devono essere in grado di serializzarsi. Vale a dire, quando si passa un oggetto in un archivio, l'oggetto deve sapere come scrivere stesso all'archivio e come stessa lettura dall'archivio. MFC fornisce supporto per la serializzazione in questo modo delle classi. Se si progetta una classe per definire un tipo di dati e si desidera serializzare i dati di quel tipo, progettare per la serializzazione.

## <a name="see-also"></a>Vedere anche

[Uso di documenti](../mfc/using-documents.md)


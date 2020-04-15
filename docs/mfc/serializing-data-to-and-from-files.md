---
title: Serializzazione dei dati da e verso i file
ms.date: 11/04/2016
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
ms.openlocfilehash: 043ba019c6b5ad79db2cedb6314c9e65f14b14b5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376927"
---
# <a name="serializing-data-to-and-from-files"></a>Serializzazione dei dati da e verso i file

L'idea di base della persistenza è che un oggetto deve essere in grado di scrivere lo stato corrente, indicato dai valori delle variabili membro, in un archivio permanente. Successivamente, l'oggetto può essere ricreato leggendo, o "deserializzando", lo stato dell'oggetto dall'archivio permanente. Un punto chiave qui è che l'oggetto stesso è responsabile per la lettura e la scrittura del proprio stato. Pertanto, affinché una classe sia persistente, deve implementare le operazioni di serializzazione di base.

Il framework fornisce un'implementazione predefinita per il salvataggio di documenti su file su disco in risposta ai comandi Salva e Salva con nome del menu File e per il caricamento di documenti da file su disco in risposta al comando Apri. Con pochissimo lavoro, è possibile implementare la capacità di un documento di scrivere e leggere i dati da e verso un file. L'operazione principale da eseguire è eseguire l'override della funzione membro [Serialize](../mfc/reference/cobject-class.md#serialize) nella classe documento.

La Creazione guidata applicazione MFC inserisce `CDocument` un `Serialize` override scheletrico della funzione membro nella classe documento creata automaticamente. Dopo aver implementato le variabili membro dell'applicazione, `Serialize` è possibile compilare l'override con il codice che invia i dati a un "oggetto archivio" connesso a un file. Un oggetto [CArchive](../mfc/reference/carchive-class.md) è simile agli oggetti di input/output **cin** e **cout** della libreria iostream di C. Tuttavia, `CArchive` scrive e legge il formato binario, non il testo formattato.

## <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Serializzazione](../mfc/serialization-in-mfc.md)

- [Ruolo del documento nella serializzazione](#_core_the_document.92.s_role_in_serialization)

- [Ruolo dei dati nella serializzazione](#_core_the_data.92.s_role_in_serialization)

- [Ignorare il meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)

## <a name="the-documents-role-in-serialization"></a><a name="_core_the_document.92.s_role_in_serialization"></a>Ruolo del documento nella serializzazione

Il framework risponde automaticamente ai comandi Apri, Salva e Salva con nome `Serialize` del menu File chiamando la funzione membro del documento se implementata. Un comando ID_FILE_OPEN, ad esempio, chiama una funzione del gestore nell'oggetto applicazione. Durante questo processo, l'utente vede e risponde alla finestra di dialogo Apri file e il framework ottiene il nome file scelto dall'utente. Il framework `CArchive` crea un oggetto impostato per il caricamento `Serialize`dei dati nel documento e passa l'archivio a . Il framework ha già aperto il file. Il codice nella funzione `Serialize` membro del documento legge i dati tramite l'archivio, ricostruendo gli oggetti dati in base alle esigenze. Per ulteriori informazioni sulla serializzazione, vedere l'articolo [Serializzazione](../mfc/serialization-in-mfc.md).

## <a name="the-datas-role-in-serialization"></a><a name="_core_the_data.92.s_role_in_serialization"></a>Ruolo dei dati nella serializzazioneThe Data's Role in Serialization

In generale, i dati di tipo classe devono essere in grado di serializzare se stessi. Vale a dire, quando si passa un oggetto a un archivio, l'oggetto deve sapere come scrivere se stesso per l'archivio e come leggere se stesso dall'archivio. MFC fornisce il supporto per rendere le classi serializzabili in questo modo. Se si progetta una classe per definire un tipo di dati e si intende serializzare i dati di tale tipo, progettare per la serializzazione.

## <a name="see-also"></a>Vedere anche

[Utilizzo di documenti](../mfc/using-documents.md)

---
description: 'Altre informazioni su: serializzazione dei dati da e verso i file'
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
ms.openlocfilehash: 58956b2f11b8f0131aae74a6c5b51715fe25c7e6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217445"
---
# <a name="serializing-data-to-and-from-files"></a>Serializzazione dei dati da e verso i file

L'idea di base della persistenza è che un oggetto deve essere in grado di scrivere lo stato corrente, indicato dai valori delle variabili membro, nell'archivio permanente. Successivamente, è possibile ricreare l'oggetto leggendo, o "deserializzazione", lo stato dell'oggetto dall'archivio permanente. Un punto chiave è che l'oggetto stesso è responsabile della lettura e della scrittura del proprio stato. Pertanto, per rendere persistente una classe, è necessario implementare le operazioni di serializzazione di base.

Il Framework fornisce un'implementazione predefinita per il salvataggio dei documenti su file su disco in risposta ai comandi Salva e Salva con nome nel menu file e per il caricamento di documenti da file su disco in risposta al comando Apri. Con pochissimo lavoro, è possibile implementare la capacità di un documento di scrivere e leggere i dati da e in un file. La cosa principale da fare è eseguire l'override della funzione membro [Serialize](../mfc/reference/cobject-class.md#serialize) nella classe del documento.

La creazione guidata applicazione MFC inserisce un override scheletrico della `CDocument` funzione membro `Serialize` nella classe del documento creata automaticamente. Dopo aver implementato le variabili membro dell'applicazione, è possibile compilare la `Serialize` sostituzione con il codice che invia i dati a un "oggetto archivio" connesso a un file. Un oggetto [CArchive](../mfc/reference/carchive-class.md) è simile agli oggetti di input/output **cin** e **cout** della libreria iostream di C++. Tuttavia, `CArchive` scrive e legge il formato binario, non il testo formattato.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Serializzazione](../mfc/serialization-in-mfc.md)

- [Il ruolo del documento nella serializzazione](#_core_the_document.92.s_role_in_serialization)

- [Ruolo dei dati nella serializzazione](#_core_the_data.92.s_role_in_serialization)

- [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)

## <a name="the-documents-role-in-serialization"></a><a name="_core_the_document.92.s_role_in_serialization"></a> Il ruolo del documento nella serializzazione

Il Framework risponde automaticamente ai comandi Apri, Salva e Salva con nome del menu file chiamando la funzione membro del documento, `Serialize` se implementata. Un comando ID_FILE_OPEN, ad esempio, chiama una funzione del gestore nell'oggetto applicazione. Durante questo processo, l'utente Visualizza e risponde alla finestra di dialogo Apri file e il Framework ottiene il nome file scelto dall'utente. Il Framework crea un `CArchive` oggetto configurato per il caricamento di dati nel documento e passa l'archivio a `Serialize` . Il Framework ha già aperto il file. Il codice nella `Serialize` funzione membro del documento legge i dati nell'archivio, ricostruendo gli oggetti dati in base alle esigenze. Per ulteriori informazioni sulla serializzazione, vedere l'articolo relativo alla [serializzazione](../mfc/serialization-in-mfc.md).

## <a name="the-datas-role-in-serialization"></a><a name="_core_the_data.92.s_role_in_serialization"></a> Ruolo dei dati nella serializzazione

In generale, i dati di tipo classe devono essere in grado di serializzare se stesso. In altre informazioni, quando si passa un oggetto a un archivio, l'oggetto deve essere in grado di scrivere nell'archivio e come leggerlo dall'archivio. MFC fornisce supporto per rendere le classi serializzabili in questo modo. Se si progetta una classe per definire un tipo di dati e si intende serializzare i dati di quel tipo, progettare per la serializzazione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di documenti](../mfc/using-documents.md)

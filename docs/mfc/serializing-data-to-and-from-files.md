---
title: La serializzazione dei dati da e verso i file | Documenti Microsoft
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
ms.openlocfilehash: ec6bfbe647045a334af9fe95cd6d1ab40625a51f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33380432"
---
# <a name="serializing-data-to-and-from-files"></a>Serializzazione dei dati da e verso i file
L'idea di base di persistenza è che un oggetto deve essere in grado di scrivere il proprio stato corrente, indicato per i valori delle variabili membro, in un archivio permanente. In un secondo momento, l'oggetto può essere ricreato mediante la lettura, o "deserializzazione", lo stato dell'oggetto dall'archivio permanente. Un punto chiave è che l'oggetto stesso è responsabile per leggere e scrivere il proprio stato. Di conseguenza, per una classe come permanente, deve implementare le operazioni di serializzazione di base.  
  
 Il framework fornisce un'implementazione predefinita per il salvataggio di documenti in file su disco in risposta a Salva e Salva i comandi dal menu File e per il caricamento di documenti da file su disco in risposta al comando Apri. Con un impegno minimo, è possibile implementare la capacità del documento per scrivere e leggere i dati da e verso un file. L'aspetto principale da eseguire è l'override di [Serialize](../mfc/reference/cobject-class.md#serialize) funzione membro nella classe del documento.  
  
 La creazione guidata applicazione MFC inserisce un override di base di **CDocument** funzione membro `Serialize` nella classe documento viene creato automaticamente. Dopo aver implementato le variabili membro dell'applicazione, è possibile compilare il `Serialize` eseguire l'override con il codice che invia i dati a un "oggetto archivio" connesso a un file. Oggetto [CArchive](../mfc/reference/carchive-class.md) è simile all'oggetto di `cin` e `cout` oggetti dalla libreria iostream C++ di input/output. Tuttavia, `CArchive` scrive e legge il formato binario, testo non formattato.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Serializzazione](../mfc/serialization-in-mfc.md)  
  
-   [Ruolo del documento nella serializzazione](#_core_the_document.92.s_role_in_serialization)  
  
-   [Ruolo dei dati di serializzazione](#_core_the_data.92.s_role_in_serialization)  
  
-   [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)  
  
##  <a name="_core_the_document.92.s_role_in_serialization"></a> Ruolo del documento nella serializzazione  
 Il framework risponde automaticamente per l'apertura del menu File, salvare e salvare come comandi chiamando il documento `Serialize` funzione membro se è implementato. Un `ID_FILE_OPEN` comando, ad esempio, chiama una funzione del gestore dell'oggetto dell'applicazione. Durante questo processo, l'utente vede e risponde alla finestra di dialogo Apri File e il framework Ottiene l'utente sceglie il nome del file. Il framework crea un `CArchive` oggetto impostato per il caricamento dei dati nel documento e passa l'archivio in `Serialize`. Il framework è già aperto il file. Il codice all'interno del documento `Serialize` funzione membro legge i dati attraverso l'archivio, ricostruire gli oggetti dati in base alle esigenze. Per ulteriori informazioni sulla serializzazione, vedere l'articolo [serializzazione](../mfc/serialization-in-mfc.md).  
  
##  <a name="_core_the_data.92.s_role_in_serialization"></a> Ruolo dei dati di serializzazione  
 In generale, i dati di tipo classe devono essere in grado di serializzarsi. Vale a dire, quando si passa un oggetto in un archivio, tenere presente l'oggetto come per se stesso scrivere sull'archivio e come leggere se stesso dall'archivio. MFC fornisce supporto per la serializzazione in questo modo delle classi. Se si progetta una classe per definire un tipo di dati e si desidera serializzare il tipo di dati, progettare per la serializzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)


---
description: 'Altre informazioni su: serializzazione in MFC'
title: Serializzazione in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- collection classes [MFC], serialization
- bypassing serialization [MFC]
- MFC, serialization
- serialization [MFC], MFC
- serialization [MFC], bypassing
ms.assetid: fb596a18-4522-47e0-96e0-192732d24c12
ms.openlocfilehash: 278de59c6e091fd59826622553f50503b12602bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217575"
---
# <a name="serialization-in-mfc"></a>Serializzazione in MFC

In questo articolo viene illustrato il meccanismo di serializzazione fornito nella libreria Microsoft Foundation Class (MFC) per consentire la permanenza degli oggetti tra le esecuzioni del programma.

La serializzazione è il processo di scrittura o lettura di un oggetto da o verso un supporto di archiviazione persistente, ad esempio un file su disco. La serializzazione è ideale per le situazioni in cui si desidera mantenere lo stato dei dati strutturati, ad esempio le classi o le strutture C++, durante o dopo l'esecuzione di un programma. L'utilizzo degli oggetti di serializzazione forniti da MFC consente di eseguire questa operazione in modo standard e coerente, evitando all'utente la necessità di eseguire manualmente le operazioni sui file.

MFC fornisce supporto incorporato per la serializzazione nella classe `CObject` . Pertanto, tutte le classi derivate da `CObject` possono sfruttare `CObject` il protocollo di serializzazione di.

L'idea di base della serializzazione è che un oggetto deve essere in grado di scrivere lo stato corrente, generalmente indicato dal valore delle variabili membro, nell'archivio permanente. Successivamente, è possibile ricreare l'oggetto leggendo, o deserializzazione, lo stato dell'oggetto dalla risorsa di archiviazione. La serializzazione gestisce tutti i dettagli dei puntatori all'oggetto e i riferimenti circolari agli oggetti utilizzati durante la serializzazione di un oggetto. Un punto chiave è che l'oggetto stesso è responsabile della lettura e della scrittura del proprio stato. Pertanto, per poter serializzare una classe, è necessario implementare le operazioni di serializzazione di base. Come illustrato nel gruppo serializzazione di articoli, è facile aggiungere questa funzionalità a una classe.

MFC utilizza un oggetto della `CArchive` classe come intermediario tra l'oggetto da serializzare e il supporto di archiviazione. Questo oggetto è sempre associato a un `CFile` oggetto, dal quale ottiene le informazioni necessarie per la serializzazione, incluso il nome del file e se l'operazione richiesta è di lettura o scrittura. L'oggetto che esegue un'operazione di serializzazione può utilizzare l' `CArchive` oggetto senza considerare la natura del supporto di archiviazione.

`CArchive` **<\<**) and extraction (**>>** Per eseguire operazioni di scrittura e lettura, un oggetto utilizza operatori di inserimento () di overload. Per altre informazioni, vedere [archiviazione e caricamento di CObject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md) nell'articolo serializzazione: serializzazione di un oggetto.

> [!NOTE]
> Non confondere la `CArchive` classe con le classi iostream per utilizzo generico, che sono solo per testo formattato. La `CArchive` classe è destinata a oggetti serializzati in formato binario.

Se lo si desidera, è possibile ignorare la serializzazione MFC per creare un meccanismo personalizzato per l'archiviazione permanente dei dati. Sarà necessario eseguire l'override delle funzioni membro della classe che avviano la serializzazione al comando dell'utente. Vedere la discussione nella [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) dei comandi ID_FILE_OPEN, ID_FILE_SAVE e ID_FILE_SAVE_AS standard.

Gli articoli seguenti illustrano le due attività principali necessarie per la serializzazione:

- [Serializzazione: creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)

- [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

L'articolo [serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md) descrive quando la serializzazione è una tecnica di input/output appropriata nelle applicazioni di database.

## <a name="see-also"></a>Vedi anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[CArchive (classe)](../mfc/reference/carchive-class.md)<br/>
[Classe CObject](../mfc/reference/cobject-class.md)<br/>
[CDocument (classe)](../mfc/reference/cdocument-class.md)<br/>
[Classe CFile](../mfc/reference/cfile-class.md)

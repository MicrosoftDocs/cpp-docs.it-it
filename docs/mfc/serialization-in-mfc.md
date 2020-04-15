---
title: Serializzazione in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- collection classes [MFC], serialization
- bypassing serialization [MFC]
- MFC, serialization
- serialization [MFC], MFC
- serialization [MFC], bypassing
ms.assetid: fb596a18-4522-47e0-96e0-192732d24c12
ms.openlocfilehash: eca4d0357977bc7ef21063718c738ae5bd8e7431
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372745"
---
# <a name="serialization-in-mfc"></a>Serializzazione in MFC

In questo articolo viene illustrato il meccanismo di serializzazione fornito nella libreria MFC (Microsoft Foundation Class) per consentire la persistenza degli oggetti tra le esecuzioni del programma.

La serializzazione è il processo di scrittura o lettura di un oggetto in o da un supporto di archiviazione persistente, ad esempio un file su disco. La serializzazione è ideale per le situazioni in cui si desidera mantenere lo stato dei dati strutturati (ad esempio, classi o strutture di C, durante o dopo l'esecuzione di un programma. L'utilizzo degli oggetti di serializzazione forniti da MFC consente di eseguire questa operazione in modo standard e coerente, eliminando l'utente dalla necessità di eseguire le operazioni sui file a mano.

MFC fornisce il supporto incorporato per `CObject`la serializzazione nella classe . Di conseguenza, `CObject` tutte le `CObject`classi derivate da possono sfruttare il protocollo di serializzazione di '.So, all classes derived from can take advantage of 's serialization protocol.

L'idea di base della serializzazione è che un oggetto deve essere in grado di scrivere lo stato corrente, in genere indicato dal valore delle variabili membro, in un archivio permanente. Successivamente, l'oggetto può essere ricreato leggendo o deserializzando lo stato dell'oggetto dall'archivio. La serializzazione gestisce tutti i dettagli dei puntatori a oggetti e i riferimenti circolari agli oggetti utilizzati quando si serializza un oggetto. Un punto chiave è che l'oggetto stesso è responsabile della lettura e della scrittura del proprio stato. Pertanto, affinché una classe sia serializzabile, deve implementare le operazioni di serializzazione di base. Come illustrato nel gruppo di articoli Serializzazione, è facile aggiungere questa funzionalità a una classe.

MFC utilizza un `CArchive` oggetto della classe come intermediario tra l'oggetto da serializzare e il supporto di archiviazione. Questo oggetto è sempre `CFile` associato a un oggetto, da cui ottiene le informazioni necessarie per la serializzazione, incluso il nome del file e se l'operazione richiesta è una lettura o scrittura. L'oggetto che esegue un'operazione di serializzazione può utilizzare l'oggetto `CArchive` indipendentemente dalla natura del supporto di archiviazione.

Un `CArchive` oggetto utilizza gli**<** operatori di**>>** inserimento di overload ( ) ed extraction ( ) per eseguire operazioni di scrittura e lettura. Per altre informazioni, vedere [archiviazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md) nell'articolo Serializzazione: serializzazione di un oggetto.

> [!NOTE]
> Non confondere `CArchive` la classe con le classi iostream generiche, che sono solo per testo formattato. La `CArchive` classe è per gli oggetti serializzati in formato binario.

Se si desidera, è possibile ignorare la serializzazione MFC per creare un meccanismo personalizzato per l'archiviazione permanente dei dati. È necessario eseguire l'override delle funzioni membro della classe che avviano la serializzazione al comando dell'utente. Vedere la discussione nella [nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) dei comandi standard ID_FILE_OPEN, ID_FILE_SAVE e ID_FILE_SAVE_AS.

Gli articoli seguenti trattano le due attività principali necessarie per la serializzazione:The following articles cover the two main tasks required for serialization:

- [Serializzazione: creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)

- [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

L'articolo [Serializzazione: serializzazione e input/output del database](../mfc/serialization-serialization-vs-database-input-output.md) descrive quando la serializzazione è una tecnica di input/output appropriata nelle applicazioni di database.

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Classe CArchive](../mfc/reference/carchive-class.md)<br/>
[Classe CObject](../mfc/reference/cobject-class.md)<br/>
[Classe CDocument](../mfc/reference/cdocument-class.md)<br/>
[Classe CFile](../mfc/reference/cfile-class.md)

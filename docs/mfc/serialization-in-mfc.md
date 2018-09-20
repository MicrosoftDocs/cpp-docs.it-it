---
title: Serializzazione in MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- collection classes [MFC], serialization
- bypassing serialization [MFC]
- MFC, serialization
- serialization [MFC], MFC
- serialization [MFC], bypassing
ms.assetid: fb596a18-4522-47e0-96e0-192732d24c12
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ebd11488f0f86123bcf95d210072cc61dcc31c60
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409233"
---
# <a name="serialization-in-mfc"></a>Serializzazione in MFC

Questo articolo illustra il meccanismo di serializzazione fornito in Microsoft Foundation classe libreria (MFC) per consentire agli oggetti di persistere tra le esecuzioni del programma.

La serializzazione è il processo di scrittura o lettura di un oggetto a o da un supporto di archiviazione permanente, ad esempio un file su disco. La serializzazione è ideale nelle situazioni in cui si desidera mantenere lo stato dei dati strutturati (ad esempio C++ classi o strutture), durante o dopo l'esecuzione di un programma. Utilizzando gli oggetti di serializzazione forniti da MFC consente tale operazione in modo coerente e standard, l'utente di dover eseguire manualmente operazioni di file di sblocco.

MFC fornisce supporto incorporato per la serializzazione nella classe `CObject`. Di conseguenza, tutte le classi derivate da `CObject` possono sfruttare `CObject`del protocollo di serializzazione.

L'idea alla base della serializzazione è che un oggetto deve essere in grado di scrivere il proprio stato corrente, in genere indicato dal valore delle variabili membro, in un archivio permanente. In un secondo momento, l'oggetto può essere ricreato mediante la lettura, o deserializzazione, lo stato dell'oggetto dalla risorsa di archiviazione. Serializzazione consente di gestire tutti i dettagli dei puntatori a oggetti e i riferimenti circolari agli oggetti che vengono usati quando si serializza un oggetto. Un punto chiave è che l'oggetto stesso è responsabile della lettura e scrittura di un proprio stato. Per una classe venga serializzato, di conseguenza, deve implementare le operazioni di serializzazione di base. Come illustrato nel gruppo di serializzazione degli articoli, è facile aggiungere questa funzionalità a una classe.

MFC utilizza un oggetto del `CArchive` classe come intermediario tra l'oggetto da serializzare e il supporto di archiviazione. Questo oggetto è sempre associato un `CFile` oggetto, da cui Ottiene le informazioni necessarie per la serializzazione, incluso il nome file e indica se l'operazione richiesta è una lettura o scrittura. Oggetto che esegue un'operazione di serializzazione è possibile usare il `CArchive` oggetto indipendentemente dalla natura del supporto di archiviazione.

Oggetto `CArchive` oggetto Usa l'inserimento di overload (**<\<**) e l'estrazione (**>>**) gli operatori per eseguire operazioni di lettura e scrittura. Per altre informazioni, vedere [memorizzazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md) nell'articolo di serializzazione: serializzazione di un oggetto.

> [!NOTE]
>  Non confondere la `CArchive` classe con le classi iostream per utilizzo generico, ovvero per il solo testo formattato. Il `CArchive` classe è per gli oggetti serializzati in formato binario.

Se si desidera, è possibile ignorare la serializzazione di MFC per creare il proprio meccanismo per l'archiviazione persistente dei dati. È necessario eseguire l'override di funzioni membro della classe per avviare la serializzazione al prompt dei comandi dell'utente. Vedere la discussione nella [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) ID_FILE_OPEN ID_FILE_SAVE e ID_FILE_SAVE_AS comandi standard.

Gli articoli seguenti illustrano due attività principali richieste per la serializzazione:

- [Serializzazione: creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)

- [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)

L'articolo [serializzazione: serializzazione Visual Studio. Input/Output del database](../mfc/serialization-serialization-vs-database-input-output.md) descrive quando la serializzazione è una tecnica di input/output appropriata in applicazioni di database.

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Classe CArchive](../mfc/reference/carchive-class.md)<br/>
[Classe CObject](../mfc/reference/cobject-class.md)<br/>
[Classe CDocument](../mfc/reference/cdocument-class.md)<br/>
[Classe CFile](../mfc/reference/cfile-class.md)

---
title: Serializzazione in MFC | Documenti Microsoft
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
ms.openlocfilehash: dd5cf36722dd1ed6ea96dd839bd0935d78df0b32
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33381023"
---
# <a name="serialization-in-mfc"></a>Serializzazione in MFC
In questo articolo viene illustrato il meccanismo di serializzazione fornito in Microsoft Foundation classe libreria (MFC) per rendere persistenti tra gli oggetti viene eseguito il programma.  
  
 La serializzazione è il processo di scrittura o lettura di un oggetto a o da un supporto di archiviazione permanente, ad esempio un file su disco. La serializzazione è ideale per le situazioni in cui si desidera mantenere lo stato dei dati strutturati (ad esempio, strutture o classi di C++) durante o dopo l'esecuzione di un programma. Utilizzando gli oggetti di serializzazione forniti da MFC consente questa operazione venga eseguita in modo coerenza e standard, l'utente debba eseguire manualmente operazioni sui file di sblocco.  
  
 MFC fornisce supporto incorporato per la serializzazione nella classe `CObject`. Di conseguenza, tutte le classi derivate da `CObject` possono sfruttare `CObject`del protocollo di serializzazione.  
  
 L'idea di base di serializzazione è che un oggetto deve essere in grado di scrivere il proprio stato corrente, in genere indicato dal valore delle variabili membro, in un archivio permanente. In un secondo momento, essere ricreare l'oggetto tramite la lettura o la deserializzazione, lo stato dell'oggetto dalla risorsa di archiviazione. Serializzazione gestisce tutti i dettagli di puntatori a oggetti e i riferimenti circolari agli oggetti che vengono utilizzati quando si serializza un oggetto. Un punto chiave è che l'oggetto stesso è responsabile per leggere e scrivere il proprio stato. Per una classe serializzabile, pertanto, deve implementare le operazioni di serializzazione di base. Come illustrato nel gruppo di serializzazione di articoli, è facile aggiungere questa funzionalità a una classe.  
  
 MFC utilizza un oggetto del `CArchive` classe come intermediario tra l'oggetto da serializzare e il supporto di archiviazione. Questo oggetto è sempre associato un `CFile` oggetto, che ottiene le informazioni necessarie per la serializzazione, incluso il nome del file e se l'operazione richiesta è di lettura o scrittura. Oggetto che esegue un'operazione di serializzazione è possibile utilizzare il `CArchive` oggetto senza tenere in considerazione della natura del supporto di archiviazione.  
  
 Oggetto `CArchive` oggetto utilizza l'inserimento di overload (**<\<**) e di estrazione (**>>**) operatori per eseguire la scrittura e le operazioni di lettura. Per ulteriori informazioni, vedere [memorizzazione e caricamento di CObjects tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md) nell'articolo serializzazione: serializzazione di un oggetto.  
  
> [!NOTE]
>  Non confondere la `CArchive` classe con classi iostream generica, che sono formattati solo testo. La `CArchive` classe è per gli oggetti serializzati in formato binario.  
  
 Se si desidera, è possibile ignorare la serializzazione di MFC per creare un proprio meccanismo per l'archiviazione dei dati persistenti. È necessario eseguire l'override di funzioni membro della classe per avviare la serializzazione al prompt dei comandi dell'utente. Vedere la discussione nella [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md) del `ID_FILE_OPEN`, **ID_FILE_SAVE**, e **ID_FILE_SAVE_AS** comandi standard.  
  
 Gli articoli seguenti illustrano le due attività principali necessarie per la serializzazione:  
  
-   [Serializzazione: creazione di una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)  
  
-   [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)  
  
 L'articolo [serializzazione: serializzazione e. Database di Input/Output](../mfc/serialization-serialization-vs-database-input-output.md) descrive quando la serializzazione è una tecnica di input/output appropriata in applicazioni di database.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [CArchive (classe)](../mfc/reference/carchive-class.md)   
 [CObject (classe)](../mfc/reference/cobject-class.md)   
 [CDocument (classe)](../mfc/reference/cdocument-class.md)   
 [Classe CFile](../mfc/reference/cfile-class.md)

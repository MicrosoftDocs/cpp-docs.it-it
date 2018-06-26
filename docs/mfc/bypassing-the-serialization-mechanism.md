---
title: Esclusione del meccanismo di serializzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- archive objects [MFC]
- bypassing serialization
- archives [MFC], serialization
- serialization [MFC], bypassing
- archives [MFC]
- serialization [MFC], role of framework
- serialization [MFC], overriding
ms.assetid: 48d4a279-b51c-4ba5-81cd-ed043312b582
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9252e08fe672f111dcf2b289b1b12891022a318d
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931088"
---
# <a name="bypassing-the-serialization-mechanism"></a>Esclusione del meccanismo di serializzazione
Come si è visto, il framework fornisce una modalità predefinita per leggere e scrivere i dati da e verso i file. La serializzazione tramite un oggetto di archiviazione più adatta a soddisfare le esigenze di numerose applicazioni. Tale applicazione legge un file completamente in memoria, consente all'utente di aggiornare il file e quindi scrive la versione aggiornata sul disco.  
  
 Tuttavia, alcune applicazioni di operano sui dati in modo molto diverso e per queste applicazioni non è adatta serializzazione tramite un archivio. Sono esempi di programmi di database, i programmi che modificano solo parti di file di grandi dimensioni, programmi che scrivono i file di solo testo e i programmi che condividono i file di dati.  
  
 In questi casi, è possibile eseguire l'override di [Serialize](../mfc/reference/cobject-class.md#serialize) funzione in modo diverso per la mediazione azioni del file tramite un [CFile](../mfc/reference/cfile-class.md) oggetto anziché da un [CArchive](../mfc/reference/carchive-class.md) oggetto.  
  
 È possibile usare il `Open`, `Read`, `Write`, `Close`, e `Seek` funzioni membro della classe `CFile` per aprire un file, spostare il puntatore del file (ricerca) a un momento specifico nel file di leggere un record (un numero specificato di byte ) a questo punto, consentire all'utente di aggiornare il record, quindi cercare nuovamente allo stesso punto e scrivere il record nel file. Il framework verrà aperto il file per l'utente ed è possibile usare il `GetFile` funzione membro della classe `CArchive` per ottenere un puntatore al `CFile` oggetto. Per l'utilizzo di più complesso e flessibile, è possibile eseguire l'override di [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) e [OnSaveDocument](../mfc/reference/cdocument-class.md#onsavedocument) funzioni membro della classe `CWinApp`. Per altre informazioni, vedere la classe [CFile](../mfc/reference/cfile-class.md) nel *riferimenti alla libreria MFC*.  
  
 In questo scenario, il `Serialize` override non esegue alcuna operazione, a meno che non, ad esempio, si desidera per la lettura e scrittura di un'intestazione di file per mantenere aggiornati alla chiusura del documento.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)


---
title: Esclusione del meccanismo di serializzazione | Microsoft Docs
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
ms.openlocfilehash: 25fc281e35fc07151fa609d07be540430a6a1da6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399814"
---
# <a name="bypassing-the-serialization-mechanism"></a>Esclusione del meccanismo di serializzazione

Come si è visto, il framework fornisce una modalità predefinita per leggere e scrivere dati da e verso i file. La serializzazione tramite un oggetto archivio appropriato per numerose applicazioni. Tale applicazione legge un file completamente in memoria, consente all'utente di aggiornare il file e quindi scrive la versione aggiornata sul disco.

Tuttavia, alcune applicazioni di operano sui dati in modo molto diverso e per queste applicazioni serializzazione tramite un archivio non è adatta. Sono esempi di programmi di database, i programmi che modificano solo le parti del file di grandi dimensioni, i programmi che scrivere i file di solo testo e i programmi che condividono i file di dati.

In questi casi, è possibile eseguire l'override di [Serialize](../mfc/reference/cobject-class.md#serialize) funzione in modo diverso per la mediazione delle azioni del file tramite un [CFile](../mfc/reference/cfile-class.md) oggetto anziché un [CArchive](../mfc/reference/carchive-class.md) oggetto.

È possibile usare la `Open`, `Read`, `Write`, `Close`, e `Seek` funzioni membro della classe `CFile` per aprire un file, spostare il puntatore del file (ricerca) a un momento specifico nel file di leggere un record (un numero specificato di byte ) a questo punto, consentire all'utente di aggiornare il record, quindi tentare nuovamente allo stesso punto e scrivere il record nel file. Il framework verrà aperto il file per l'utente ed è possibile usare la `GetFile` la funzione membro della classe `CArchive` per ottenere un puntatore al `CFile` oggetto. Per l'uso ancora più sofisticata e flessibile, è possibile eseguire l'override di [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) e [OnSaveDocument](../mfc/reference/cdocument-class.md#onsavedocument) funzioni membro della classe `CWinApp`. Per altre informazioni, vedere la classe [CFile](../mfc/reference/cfile-class.md) nel *riferimento MFC*.

In questo scenario il `Serialize` override non esegue alcuna operazione, a meno che non, ad esempio, si desidera leggere e scrivere un'intestazione di file per impedire che venga aggiornato alla chiusura del documento.

## <a name="see-also"></a>Vedere anche

[Uso di documenti](../mfc/using-documents.md)


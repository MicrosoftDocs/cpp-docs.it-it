---
description: 'Altre informazioni su: bypass del meccanismo di serializzazione'
title: Esclusione del meccanismo di serializzazione
ms.date: 11/04/2016
helpviewer_keywords:
- archive objects [MFC]
- bypassing serialization
- archives [MFC], serialization
- serialization [MFC], bypassing
- archives [MFC]
- serialization [MFC], role of framework
- serialization [MFC], overriding
ms.assetid: 48d4a279-b51c-4ba5-81cd-ed043312b582
ms.openlocfilehash: 18d31267ca2dd7760daa839556790af26ff38f6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339774"
---
# <a name="bypassing-the-serialization-mechanism"></a>Esclusione del meccanismo di serializzazione

Come si è visto, il Framework fornisce un modo predefinito per leggere e scrivere i dati da e verso i file. La serializzazione tramite un oggetto archivio soddisfa le esigenze di un numero elevato di applicazioni. Tale applicazione legge un file completamente in memoria, consente all'utente di aggiornare il file e quindi scrive nuovamente la versione aggiornata sul disco.

Tuttavia, alcune applicazioni operano sui dati in modo molto diverso e per queste applicazioni la serializzazione tramite un archivio non è adatta. Gli esempi includono programmi di database, programmi che modificano solo parti di file di grandi dimensioni, programmi che scrivono file di solo testo e programmi che condividono file di dati.

In questi casi, è possibile eseguire l'override della funzione [Serialize](reference/cobject-class.md#serialize) in modo diverso per mediare le azioni dei file tramite un oggetto [CFile](reference/cfile-class.md) anziché un oggetto [CArchive](reference/carchive-class.md) .

È possibile usare le `Open` `Read` `Write` funzioni membro,,, `Close` e `Seek` della classe `CFile` per aprire un file, spostare il puntatore del file (Seek) in un punto specifico nel file, leggere un record (un numero specificato di byte) a questo punto, consentire all'utente di aggiornare il record, quindi cercare nuovamente allo stesso punto e scrivere di nuovo il record nel file. Il Framework aprirà il file per l'utente ed è possibile usare la `GetFile` funzione membro della classe `CArchive` per ottenere un puntatore all' `CFile` oggetto. Per un uso ancora più sofisticato e flessibile, è possibile eseguire l'override delle funzioni membro [OnOpenDocument](reference/cdocument-class.md#onopendocument) e [OnSaveDocument](reference/cdocument-class.md#onsavedocument) della classe `CWinApp` . Per ulteriori informazioni, vedere la classe [CFile](reference/cfile-class.md) nella Guida di *riferimento a MFC*.

In questo scenario, l' `Serialize` override non esegue alcuna operazione, a meno che, ad esempio, non si voglia leggere e scrivere un'intestazione di file per mantenerla aggiornata quando il documento viene chiuso.

## <a name="see-also"></a>Vedi anche

[Utilizzo di documenti](using-documents.md)

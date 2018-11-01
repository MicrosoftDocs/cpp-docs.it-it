---
title: 'Contenitori: elementi client'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE containers [MFC], client items
- client items and OLE containers
ms.assetid: 231528b5-0744-4f83-8897-083bf55ed087
ms.openlocfilehash: e0d56d4a8f25828de954a78e9bafd8df150c7ff9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50437011"
---
# <a name="containers-client-items"></a>Contenitori: elementi client

In questo articolo viene illustrato il significato degli elementi client e da quali classi l'applicazione dovrebbe derivare i relativi elementi client.

Gli elementi client sono elementi di dati che appartengono a un'altra applicazione in cui sono contenuti, oppure ai quali viene fatto riferimento da un documento di un'applicazione contenitore OLE. Gli elementi client i cui dati sono contenuti nel documento sono incorporati; quelli con dati archiviati in un'altra posizione a cui fa riferimento il documento contenitore sono collegati.

La classe documento in un'applicazione OLE è derivata dalla classe [COleDocument](../mfc/reference/coledocument-class.md) piuttosto che da `CDocument`. Il `COleDocument` classe eredita da `CDocument` tutte le funzionalità necessarie per l'uso dell'architettura documento/visualizzazione su quali MFC si basano le applicazioni. `COleDocument` definisce anche un'interfaccia che tratta un documento come raccolta di oggetti `CDocItem`. Sono disponibili numerose funzioni membro `COleDocument` per l'aggiunta, il recupero e l'eliminazione di elementi della raccolta.

Ogni applicazione contenitore deve derivare almeno una classe da `COleClientItem`. Gli oggetti di questa classe rappresentano elementi, incorporati o collegati, nel documento OLE. Questi oggetti esistono per la durata del documento che li contiene, a meno che non vengano eliminati dal documento.

`CDocItem` è la classe base per `COleClientItem` e `COleServerItem`. Gli oggetti di classi derivate da queste due agiscono come intermediari tra l'elemento OLE e le applicazioni client e server, rispettivamente. Ogni volta che un nuovo elemento OLE viene aggiunto al documento, il framework MFC aggiunge un nuovo oggetto della classe derivata da `COleClientItem` dell'applicazione client alla raccolta di oggetti `CDocItem` del documento.

## <a name="see-also"></a>Vedere anche

[Contenitori](../mfc/containers.md)<br/>
[Contenitori: file composti](../mfc/containers-compound-files.md)<br/>
[Contenitori: problemi dell'interfaccia utente](../mfc/containers-user-interface-issues.md)<br/>
[Contenitori: funzionalità avanzate](../mfc/containers-advanced-features.md)<br/>
[Classe COleClientItem](../mfc/reference/coleclientitem-class.md)<br/>
[Classe COleServerItem](../mfc/reference/coleserveritem-class.md)

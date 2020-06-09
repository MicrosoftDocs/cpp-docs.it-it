---
title: 'Contenitori: elementi client'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE containers [MFC], client items
- client items and OLE containers
ms.assetid: 231528b5-0744-4f83-8897-083bf55ed087
ms.openlocfilehash: ad347c78fb6aa7af94b306a3edb538b9f740c305
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619011"
---
# <a name="containers-client-items"></a>Contenitori: elementi client

In questo articolo viene illustrato il significato degli elementi client e da quali classi l'applicazione dovrebbe derivare i relativi elementi client.

Gli elementi client sono elementi di dati che appartengono a un'altra applicazione in cui sono contenuti, oppure ai quali viene fatto riferimento da un documento di un'applicazione contenitore OLE. Gli elementi client i cui dati sono contenuti nel documento sono incorporati; quelli con dati archiviati in un'altra posizione a cui fa riferimento il documento contenitore sono collegati.

La classe Document in un'applicazione OLE deriva dalla classe [COleDocument](reference/coledocument-class.md) anziché da `CDocument` . La `COleDocument` classe eredita da `CDocument` tutte le funzionalità necessarie per utilizzare l'architettura documento/visualizzazione su cui si basano le applicazioni MFC. `COleDocument` definisce anche un'interfaccia che tratta un documento come raccolta di oggetti `CDocItem`. Sono disponibili numerose funzioni membro `COleDocument` per l'aggiunta, il recupero e l'eliminazione di elementi della raccolta.

Ogni applicazione contenitore deve derivare almeno una classe da `COleClientItem`. Gli oggetti di questa classe rappresentano elementi, incorporati o collegati, nel documento OLE. Questi oggetti esistono per la durata del documento che li contiene, a meno che non vengano eliminati dal documento.

`CDocItem`è la classe di base per `COleClientItem` e `COleServerItem` . Gli oggetti di classi derivate da queste due agiscono come intermediari tra l'elemento OLE e le applicazioni client e server, rispettivamente. Ogni volta che un nuovo elemento OLE viene aggiunto al documento, il framework MFC aggiunge un nuovo oggetto della classe derivata da `COleClientItem` dell'applicazione client alla raccolta di oggetti `CDocItem` del documento.

## <a name="see-also"></a>Vedere anche

[Contenitori](containers.md)<br/>
[Contenitori: file composti](containers-compound-files.md)<br/>
[Contenitori: problemi dell'interfaccia utente](containers-user-interface-issues.md)<br/>
[Contenitori: funzionalità avanzate](containers-advanced-features.md)<br/>
[COleClientItem (classe)](reference/coleclientitem-class.md)<br/>
[Classe COleServerItem](reference/coleserveritem-class.md)

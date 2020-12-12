---
description: 'Altre informazioni su: Server: implementazione di documenti server'
title: 'Server: implementazione di documenti server'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE server applications [MFC], managing server documents
- OLE server applications [MFC], implementing OLE servers
- servers, server documents
- server documents [MFC], implementing
ms.assetid: cca1451a-ad09-47ed-b56e-bccd78fc86d1
ms.openlocfilehash: b8843d3e2ac662cbb018a3063c9f04f5dd8d6f10
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217328"
---
# <a name="servers-implementing-server-documents"></a>Server: implementazione di documenti server

In questo articolo vengono illustrati i passaggi da eseguire per implementare correttamente un documento del server se non è stata specificata l'opzione server OLE nella creazione guidata applicazione.

#### <a name="to-define-a-server-document-class"></a>Per definire una classe del documento del server

1. Derivare la classe del documento da `COleServerDoc` anziché da `CDocument`.

1. Creare una classe di elemento del server derivata da `COleServerItem` .

1. Implementare la `OnGetEmbeddedItem` funzione membro della classe del documento del server.

   `OnGetEmbeddedItem` viene chiamato quando l'utente di un'applicazione contenitore crea o modifica un elemento incorporato. Deve restituire un elemento che rappresenta l'intero documento. Deve trattarsi di un oggetto della `COleServerItem` classe derivata da.

1. Eseguire l'override della `Serialize` funzione membro per serializzare il contenuto del documento. Non è necessario serializzare l'elenco di elementi del server a meno che non vengano utilizzati per rappresentare i dati nativi nel documento. Per ulteriori informazioni, vedere *Implementing Server Items* in the article Servers [: Server Items](../mfc/servers-server-items.md).

Quando viene creato un documento server, il Framework registra automaticamente il documento con le DLL di sistema OLE. Questo consente alle DLL di identificare i documenti del server.

Per ulteriori informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md) e [COleServerDoc](../mfc/reference/coleserverdoc-class.md) in *riferimenti alla libreria di classi*.

## <a name="see-also"></a>Vedi anche

[Server](../mfc/servers.md)<br/>
[Server: elementi server](../mfc/servers-server-items.md)<br/>
[Server: implementazione di un server](../mfc/servers-implementing-a-server.md)<br/>
[Server: implementazione di finestre cornice In-Place](../mfc/servers-implementing-in-place-frame-windows.md)

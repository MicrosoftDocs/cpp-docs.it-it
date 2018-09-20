---
title: 'Server: Implementazione di documenti Server | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE server applications [MFC], managing server documents
- OLE server applications [MFC], implementing OLE servers
- servers, server documents
- server documents [MFC], implementing
ms.assetid: cca1451a-ad09-47ed-b56e-bccd78fc86d1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b62de2a1e6cba6ecbb29521518f5442ab002ddf3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381946"
---
# <a name="servers-implementing-server-documents"></a>Server: implementazione di documenti server

Questo articolo illustra i passaggi che necessari per implementare correttamente un documento del server se non è stato specificato l'opzione Server OLE nella creazione guidata applicazione.

#### <a name="to-define-a-server-document-class"></a>Per definire una classe documento server

1. Derivare la classe del documento da `COleServerDoc` anziché da `CDocument`.

1. Creare una classe dell'elemento server derivata da `COleServerItem`.

1. Implementare il `OnGetEmbeddedItem` funzione membro di classe documento server.

     `OnGetEmbeddedItem` viene chiamato quando l'utente di un'applicazione contenitore crea o modifica un elemento incorporato. Deve restituire un elemento che rappresenta l'intero documento. Deve trattarsi di un oggetto del `COleServerItem`-classe derivata.

1. Eseguire l'override di `Serialize` funzione membro per serializzare il contenuto del documento. Non è necessaria serializzare l'elenco di elementi del server a meno che non vengano utilizzati per rappresentare i dati nativi nel documento. Per altre informazioni, vedere *implementare gli elementi del Server* nell'articolo [server: elementi Server](../mfc/servers-server-items.md).

Quando viene creato un documento di server, il framework registra automaticamente il documento con le DLL di sistema OLE. In questo modo le DLL identificare i documenti del server.

Per altre informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md) e [COleServerDoc](../mfc/reference/coleserverdoc-class.md) nel *Class Library Reference*.

## <a name="see-also"></a>Vedere anche

[Server](../mfc/servers.md)<br/>
[Server: elementi server](../mfc/servers-server-items.md)<br/>
[Server: implementazione di un server](../mfc/servers-implementing-a-server.md)<br/>
[Server: implementazione di finestre cornice sul posto](../mfc/servers-implementing-in-place-frame-windows.md)


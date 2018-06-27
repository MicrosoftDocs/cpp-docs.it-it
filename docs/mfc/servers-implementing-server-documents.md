---
title: 'Server: Implementazione di documenti Server | Documenti Microsoft'
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
ms.openlocfilehash: 273fd1e5afefb8a10b3e1ae8e3c2f81ccec05e7f
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950828"
---
# <a name="servers-implementing-server-documents"></a>Server: implementazione di documenti server
In questo articolo illustra i passaggi che necessari per implementare correttamente un documento server se non è stato specificato l'opzione Server OLE nella creazione guidata applicazione.  
  
#### <a name="to-define-a-server-document-class"></a>Per definire una classe documento server  
  
1.  Derivare la classe del documento da `COleServerDoc` anziché da `CDocument`.  
  
2.  Creare una classe dell'elemento server derivata da `COleServerItem`.  
  
3.  Implementare il `OnGetEmbeddedItem` funzione membro della classe documento server.  
  
     `OnGetEmbeddedItem` viene chiamato quando l'utente di un'applicazione contenitore crea o modifica un elemento incorporato. Deve restituire un elemento che rappresenta l'intero documento. Deve trattarsi di un oggetto del `COleServerItem`-classe derivata.  
  
4.  Eseguire l'override di `Serialize` funzione membro per serializzare il contenuto del documento. Non è necessaria serializzare l'elenco di elementi del server a meno che non vengano utilizzati per rappresentare i dati nativi del documento. Per altre informazioni, vedere *implementazione di elementi del Server* nell'articolo [server: elementi Server](../mfc/servers-server-items.md).  
  
 Quando viene creato un documento del server, il framework registra automaticamente il documento con le DLL di sistema OLE. In questo modo le DLL identificare i documenti del server.  
  
 Per altre informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md) e [COleServerDoc](../mfc/reference/coleserverdoc-class.md) nel *riferimenti alla libreria di classe*.  
  
## <a name="see-also"></a>Vedere anche  
 [Server](../mfc/servers.md)   
 [Server: Elementi Server](../mfc/servers-server-items.md)   
 [Server: Implementazione di un Server](../mfc/servers-implementing-a-server.md)   
 [Server: implementazione di finestre cornice sul posto](../mfc/servers-implementing-in-place-frame-windows.md)


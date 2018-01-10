---
title: 'Server: Implementazione di documenti Server | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE server applications [MFC], managing server documents
- OLE server applications [MFC], implementing OLE servers
- servers, server documents
- server documents [MFC], implementing
ms.assetid: cca1451a-ad09-47ed-b56e-bccd78fc86d1
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1c4b8618e4951ac499d504cc68b0552ea45eed03
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="servers-implementing-server-documents"></a>Server: implementazione di documenti server
In questo articolo illustra i passaggi da eseguire per implementare correttamente un documento server se è necessario specificarne l'opzione Server OLE nella creazione guidata applicazione.  
  
#### <a name="to-define-a-server-document-class"></a>Per definire una classe documento server  
  
1.  Derivare la classe documento da `COleServerDoc` anziché **CDocument**.  
  
2.  Creare una classe dell'elemento server derivata da `COleServerItem`.  
  
3.  Implementare il `OnGetEmbeddedItem` funzione membro della classe documento server.  
  
     `OnGetEmbeddedItem`viene chiamato quando l'utente di un'applicazione contenitore crea o modifica un elemento incorporato. Deve restituire un elemento che rappresenta l'intero documento. Deve trattarsi di un oggetto del `COleServerItem`-classe derivata.  
  
4.  Eseguire l'override di `Serialize` funzione membro per serializzare il contenuto del documento. Non è necessario serializzare l'elenco di elementi del server, a meno che non vengano utilizzati per rappresentare i dati nativi del documento. Per ulteriori informazioni, vedere *implementazione di elementi Server* nell'articolo [server: elementi Server](../mfc/servers-server-items.md).  
  
 Quando viene creato un documento del server, il framework registra automaticamente il documento con le DLL di sistema OLE. In questo modo le DLL identificare i documenti del server.  
  
 Per ulteriori informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md) e [COleServerDoc](../mfc/reference/coleserverdoc-class.md) nel *riferimenti alla libreria di classe*.  
  
## <a name="see-also"></a>Vedere anche  
 [Server](../mfc/servers.md)   
 [Server: Elementi Server](../mfc/servers-server-items.md)   
 [Server: Implementazione di un Server](../mfc/servers-implementing-a-server.md)   
 [Server: implementazione di finestre cornice sul posto](../mfc/servers-implementing-in-place-frame-windows.md)


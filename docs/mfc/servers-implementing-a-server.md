---
title: 'Server: Implementazione di un Server | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- servers, implementing
- OLE server applications [MFC], implementing OLE servers
ms.assetid: 5bd57e8e-3b23-4f23-9597-496fac2d24b5
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 148a3da3c904f5c314c75fb71deede3c92163cc6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="servers-implementing-a-server"></a>Server: implementazione di un server
In questo articolo viene illustrato il codice di che Creazione guidata applicazione MFC crea per un'applicazione server di modifica visiva. Se non si utilizza la creazione guidata applicazione, in questo articolo sono elencate le aree in cui è necessario scrivere codice per implementare un'applicazione server.  
  
 Se si utilizza la creazione guidata applicazione per creare una nuova applicazione server, fornisce una quantità significativa di codice specifico del server per l'utente. Se si aggiunge una funzionalità server modifica visiva a un'applicazione esistente, è necessario duplicare il codice che potrebbe aver fornito la creazione guidata applicazione prima di aggiungere il resto del codice server necessari.  
  
 Il codice di server che fornisce la creazione guidata applicazione rientra in diverse categorie:  
  
-   Definizione delle risorse di server:  
  
    -   La risorsa di menu utilizzata quando il server viene modificato un elemento incorporato in una finestra.  
  
    -   Le risorse di menu e barra degli strumenti utilizzate quando il server è attivo sul posto.  
  
     Per ulteriori informazioni su queste risorse, vedere [menu e risorse: aggiunte di Server](../mfc/menus-and-resources-server-additions.md).  
  
-   Definizione di una classe dell'elemento derivato da `COleServerItem`. Per ulteriori informazioni su elementi del server, vedere [server: elementi Server](../mfc/servers-server-items.md).  
  
-   Modifica della classe di base della classe di documento per `COleServerDoc`. Per ulteriori informazioni, vedere [server: implementazione di documenti Server](../mfc/servers-implementing-server-documents.md).  
  
-   Definizione di una classe finestra cornice derivato da `COleIPFrameWnd`. Per ulteriori informazioni, vedere [server: implementazione di finestre cornice sul posto](../mfc/servers-implementing-in-place-frame-windows.md).  
  
-   Creazione di una voce per l'applicazione server nel database di registrazione di Windows e la nuova istanza del server di registrazione con il sistema OLE. Per informazioni su questo argomento, vedere [registrazione](../mfc/registration.md).  
  
-   Inizializzazione e avvio dell'applicazione server. Per informazioni su questo argomento, vedere [registrazione](../mfc/registration.md).  
  
 Per ulteriori informazioni, vedere [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerDoc](../mfc/reference/coleserverdoc-class.md), e [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md) nel *riferimenti alla libreria di classe*.  
  
## <a name="see-also"></a>Vedere anche  
 [Server](../mfc/servers.md)   
 [Contenitori](../mfc/containers.md)   
 [Menu e risorse (OLE)](../mfc/menus-and-resources-ole.md)   
 [Registrazione](../mfc/registration.md)


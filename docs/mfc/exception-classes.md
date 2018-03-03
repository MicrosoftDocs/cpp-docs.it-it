---
title: Classi di eccezione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.exception
dev_langs:
- C++
helpviewer_keywords:
- exception classes [MFC]
- exception handling [MFC], exception classes
- MFC, exceptions
ms.assetid: 1a2caf12-b3e9-4189-86d2-bf7a595bf025
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b848cf1a839940925222a50ce016ba91da4d371d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exception-classes"></a>Classi di eccezioni
La libreria di classi fornisce un meccanismo di gestione delle eccezioni basato sulla classe `CException`. Il framework applicazione utilizza le eccezioni nel codice; che possono essere utilizzate anche nel proprio codice. Per ulteriori informazioni, vedere l'articolo [eccezioni](../mfc/exception-handling-in-mfc.md). È possibile derivare tipi personalizzati dell'eccezione da `CException`.  
  
 MFC fornisce una classe di eccezioni da cui è possibile derivare le eccezioni personalizzate nonché classi di eccezioni per tutte le eccezioni supportate.  
  
 [CException](../mfc/reference/cexception-class.md)  
 Classe base per le eccezioni.  
  
 [Eccezione CArchiveException](../mfc/reference/carchiveexception-class.md)  
 Eccezione di archiviazione.  
  
 [CDaoException](../mfc/reference/cdaoexception-class.md)  
 Eccezione generata da un errore in un'operazione sul database DAO.  
  
 [CDBException](../mfc/reference/cdbexception-class.md)  
 Eccezione generata da un errore nell'elaborazione di un database ODBC.  
  
 [CFileException](../mfc/reference/cfileexception-class.md)  
 Eccezione orientata a un file.  
  
 [CMemoryException](../mfc/reference/cmemoryexception-class.md)  
 Eccezione relativa alla memoria insufficiente.  
  
 [Eccezione CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md)  
 Eccezione generata dall'utilizzo di una funzionalità non supportata.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.  
  
 [COleDispatchException](../mfc/reference/coledispatchexception-class.md)  
 Eccezione generata da un errore durante l'automazione. Le eccezioni di automazione sono generate dai server di automazione e vengono acquisite dai client di automazione.  
  
 [CResourceException](../mfc/reference/cresourceexception-class.md)  
 Eccezione generata dall'impossibilità di caricare una risorsa di Windows.  
  
 [CUserException](../mfc/reference/cuserexception-class.md)  
 Eccezione utilizzata per arrestare un'operazione avviata dall'utente. In genere, all'utente viene notificato il problema prima che questa eccezione venga generata.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)


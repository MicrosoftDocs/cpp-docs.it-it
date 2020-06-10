---
title: Classi di eccezioni
ms.date: 11/04/2016
f1_keywords:
- vc.classes.exception
helpviewer_keywords:
- exception classes [MFC]
- exception handling [MFC], exception classes
- MFC, exceptions
ms.assetid: 1a2caf12-b3e9-4189-86d2-bf7a595bf025
ms.openlocfilehash: 907b34b12ffdaa70c4377a1012a66662fbba12d0
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619517"
---
# <a name="exception-classes"></a>Classi di eccezioni

La libreria di classi fornisce un meccanismo di gestione delle eccezioni basato sulla classe `CException`. Il framework applicazione utilizza le eccezioni nel codice; che possono essere utilizzate anche nel proprio codice. Per ulteriori informazioni, vedere l'articolo [eccezioni](exception-handling-in-mfc.md). È possibile derivare tipi personalizzati dell'eccezione da `CException`.

MFC fornisce una classe di eccezioni da cui è possibile derivare le eccezioni personalizzate nonché classi di eccezioni per tutte le eccezioni supportate.

[CException](reference/cexception-class.md)<br/>
Classe base per le eccezioni.

[CArchiveException](reference/carchiveexception-class.md)<br/>
Eccezione di archiviazione.

[CDaoException](reference/cdaoexception-class.md)<br/>
Eccezione generata da un errore in un'operazione sul database DAO.

[CDBException](reference/cdbexception-class.md)<br/>
Eccezione generata da un errore nell'elaborazione di un database ODBC.

[CFileException](reference/cfileexception-class.md)<br/>
Eccezione orientata a un file.

[CMemoryException](reference/cmemoryexception-class.md)<br/>
Eccezione relativa alla memoria insufficiente.

[CNotSupportedException](reference/cnotsupportedexception-class.md)<br/>
Eccezione generata dall'utilizzo di una funzionalità non supportata.

[COleException](reference/coleexception-class.md)<br/>
Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.

[COleDispatchException](reference/coledispatchexception-class.md)<br/>
Eccezione generata da un errore durante l'automazione. Le eccezioni di automazione sono generate dai server di automazione e vengono acquisite dai client di automazione.

[CResourceException](reference/cresourceexception-class.md)<br/>
Eccezione generata dall'impossibilità di caricare una risorsa di Windows.

[CUserException](reference/cuserexception-class.md)<br/>
Eccezione utilizzata per arrestare un'operazione avviata dall'utente. In genere, all'utente viene notificato il problema prima che questa eccezione venga generata.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)

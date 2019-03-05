---
title: 'Eccezioni: Eccezioni OLE'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE, exceptions
- OLE exceptions [MFC]
- exceptions [MFC], OLE
- exception handling [MFC], OLE
- OLE exceptions [MFC], classes for handling
ms.assetid: 2f8e0161-b94f-48bb-a5a2-6f644b192527
ms.openlocfilehash: e404005a88398ec909e3043cfa55c7e8fbe2f594
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297905"
---
# <a name="exceptions-ole-exceptions"></a>Eccezioni: Eccezioni OLE

Le tecniche e le funzionalità per la gestione delle eccezioni in OLE sono uguali a quelle utilizzate per gestire le altre eccezioni. Per ulteriori informazioni sulla gestione delle eccezioni, vedere l'articolo [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md).

Tutti gli oggetti eccezione derivano dalla classe base astratta `CException`. MFC fornisce due classi per gestire le eccezioni OLE:

- [COleException](../mfc/reference/coleexception-class.md) per la gestione delle eccezioni OLE generali.

- [COleDispatchException](../mfc/reference/coledispatchexception-class.md) per la generazione e la gestione OLE dispatch (automazione).

La differenza tra queste due classi è la quantità di informazioni che forniscono e il punto in cui vengono utilizzate. `COleException` dispone di un membro dati pubblico che contiene il codice di stato OLE per l'eccezione. `COleDispatchException` fornisce ulteriori informazioni, incluse le seguenti:

- Un codice di errore specifico dell'applicazione

- Una descrizione dell'errore, ad esempio "disco pieno"

- Una Guida contestuale attraverso cui l'applicazione può fornire informazioni aggiuntive per l'utente

- Il nome del file della Guida dell'applicazione

- Il nome dell'applicazione che ha generato l'eccezione

`COleDispatchException` fornisce più informazioni, pertanto può essere utilizzata con prodotti quali Microsoft Visual Basic. La descrizione dell'errore verbale può essere utilizzata in una finestra di messaggio o in un'altra notifica; le informazioni della Guida possono essere utilizzate per consentire all'utente di rispondere alle condizioni che hanno causato l'eccezione.

Due funzioni globali corrispondono alle due classi di eccezione OLE: [AfxThrowOleException](../mfc/reference/exception-processing.md#afxthrowoleexception) e [AfxThrowOleDispatchException](../mfc/reference/exception-processing.md#afxthrowoledispatchexception). Utilizzarle per generare rispettivamente eccezioni OLE generali ed eccezioni OLE dispatch.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

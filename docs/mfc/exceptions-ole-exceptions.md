---
title: 'Eccezioni: Eccezioni OLE | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE, exceptions
- OLE exceptions [MFC]
- exceptions [MFC], OLE
- exception handling [MFC], OLE
- OLE exceptions [MFC], classes for handling
ms.assetid: 2f8e0161-b94f-48bb-a5a2-6f644b192527
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 991848e9b5b78ad960fb8ed0bdf09dd56db47e2c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33345541"
---
# <a name="exceptions-ole-exceptions"></a>Eccezioni: eccezioni OLE
Le tecniche e le funzionalità per la gestione delle eccezioni in OLE sono uguali a quelle utilizzate per gestire le altre eccezioni. Per ulteriori informazioni sulla gestione delle eccezioni, vedere l'articolo [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md).  
  
 Tutti gli oggetti eccezione derivano dalla classe base astratta `CException`. MFC fornisce due classi per gestire le eccezioni OLE:  
  
-   [COleException](../mfc/reference/coleexception-class.md) per la gestione delle eccezioni OLE generali.  
  
-   [COleDispatchException](../mfc/reference/coledispatchexception-class.md) per la generazione e la gestione OLE dispatch (automazione).  
  
 La differenza tra queste due classi è la quantità di informazioni che forniscono e il punto in cui vengono utilizzate. `COleException` dispone di un membro dati pubblico che contiene il codice di stato OLE per l'eccezione. `COleDispatchException` fornisce ulteriori informazioni, incluse le seguenti:  
  
-   Un codice di errore specifico dell'applicazione  
  
-   Una descrizione dell'errore, ad esempio "disco pieno"  
  
-   Una Guida contestuale attraverso cui l'applicazione può fornire informazioni aggiuntive per l'utente  
  
-   Il nome del file della Guida dell'applicazione  
  
-   Il nome dell'applicazione che ha generato l'eccezione  
  
 `COleDispatchException` fornisce più informazioni, pertanto può essere utilizzata con prodotti quali Microsoft Visual Basic. La descrizione dell'errore verbale può essere utilizzata in una finestra di messaggio o in un'altra notifica; le informazioni della Guida possono essere utilizzate per consentire all'utente di rispondere alle condizioni che hanno causato l'eccezione.  
  
 Due funzioni globali corrispondono alle due classi di eccezione OLE: [AfxThrowOleException](../mfc/reference/exception-processing.md#afxthrowoleexception) e [AfxThrowOleDispatchException](../mfc/reference/exception-processing.md#afxthrowoledispatchexception). Utilizzarle per generare rispettivamente eccezioni OLE generali ed eccezioni OLE dispatch.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)


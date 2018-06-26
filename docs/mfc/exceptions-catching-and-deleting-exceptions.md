---
title: 'Eccezioni: Rilevamento ed eliminazione di eccezioni | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- exceptions [MFC], deleting
- AND_CATCH macro [MFC]
- try-catch exception handling [MFC], catching and deleting exceptions
- exception handling [MFC], catching and deleting exceptions
- catch blocks [MFC], catching and deleting exceptions
- execution [MFC], returns from within catch block
ms.assetid: 7c233ff0-89de-4de0-a68a-9e9cdb164311
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 29dea08d778ba91c5b8ab3a10aaff998095e7123
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928769"
---
# <a name="exceptions-catching-and-deleting-exceptions"></a>Eccezioni: rilevamento ed eliminazione di eccezioni
Le istruzioni e gli esempi seguenti viene illustrato come rilevare ed eliminare le eccezioni. Per ulteriori informazioni sul **provare**, **catch**, e **throw** parole chiave, vedere [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md).  
  
 Gestori di eccezioni devono eliminare gli oggetti eccezione gestiti, perché l'errore per eliminare l'eccezione causa una perdita di memoria ogni volta che tale codice rileva un'eccezione.  
  
 il **catch** blocco deve eliminare un'eccezione quando:  
  
-   Il **catch** blocco genera una nuova eccezione.  
  
     Ovviamente, non è necessario eliminare l'eccezione quando viene generata nuovamente la stessa eccezione:  
  
     [!code-cpp[NVC_MFCExceptions#3](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_1.cpp)]  
  
-   Restituisce l'esecuzione dall'interno di **catch** blocco.  
  
> [!NOTE]
>  Quando si elimina un `CException`, utilizzare il `Delete` funzione membro per eliminare l'eccezione. Non usare la **eliminare** (parola chiave), poiché può non riuscire se l'eccezione non è nell'heap.  
  
#### <a name="to-catch-and-delete-exceptions"></a>Per rilevare ed eliminare le eccezioni  
  
1.  Usare la **provare** (parola chiave) per impostare un **provare** blocco. Esecuzione delle istruzioni di programma che potrebbero generare un'eccezione all'interno di un **provare** blocco.  
  
     Usare la **catch** (parola chiave) per impostare un **catch** blocco. Inserire il codice di gestione delle eccezioni in un **catch** blocco. Il codice nel **catch** blocco viene eseguito solo se il codice all'interno di **provare** blocco genera un'eccezione del tipo specificato nel **catch** istruzione.  
  
     La struttura seguente viene illustrato come **provare** e **catch** blocchi vengono disposte in genere:  
  
     [!code-cpp[NVC_MFCExceptions#4](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_2.cpp)]  
  
     Quando viene generata un'eccezione, il controllo passa al primo **catch** blocco la cui dichiarazione di eccezione corrispondente al tipo di eccezione. È possibile gestire in modo selettivo i diversi tipi di eccezioni con sequenziale **catch** blocca come indicato di seguito:  
  
     [!code-cpp[NVC_MFCExceptions#5](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_3.cpp)]  
  
 Per altre informazioni, vedere [eccezioni: conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)


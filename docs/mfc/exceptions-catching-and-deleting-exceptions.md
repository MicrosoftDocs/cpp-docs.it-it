---
title: 'Eccezioni: Rilevamento ed eliminazione di eccezioni'
ms.date: 11/04/2016
helpviewer_keywords:
- exceptions [MFC], deleting
- AND_CATCH macro [MFC]
- try-catch exception handling [MFC], catching and deleting exceptions
- exception handling [MFC], catching and deleting exceptions
- catch blocks [MFC], catching and deleting exceptions
- execution [MFC], returns from within catch block
ms.assetid: 7c233ff0-89de-4de0-a68a-9e9cdb164311
ms.openlocfilehash: 511850c3c17a4eb70529202f4b0c2b36132fc8ff
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57287204"
---
# <a name="exceptions-catching-and-deleting-exceptions"></a>Eccezioni: Rilevamento ed eliminazione di eccezioni

Istruzioni ed esempi seguenti mostrano come rilevare ed eliminare le eccezioni. Per altre informazioni sul **provare**, **catch**, e **throw** parole chiave, vedere [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md).

Gestori di eccezioni devono eliminare gli oggetti eccezione gestiti, perché l'errore di eliminazione l'eccezione causa una perdita di memoria ogni volta che il codice rileva un'eccezione.

I **catch** blocco necessario eliminare un'eccezione quando:

- Il **catch** blocco genera una nuova eccezione.

   Naturalmente, non è necessario eliminare l'eccezione quando viene generata nuovamente la stessa eccezione:

   [!code-cpp[NVC_MFCExceptions#3](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_1.cpp)]

- Restituisce l'esecuzione dall'interno di **catch** blocco.

> [!NOTE]
>  Quando si elimina una `CException`, usare il `Delete` funzione membro per eliminare l'eccezione. Non usare la **eliminare** (parola chiave), poiché può non riuscire se l'eccezione non è nell'heap.

#### <a name="to-catch-and-delete-exceptions"></a>Per rilevare ed eliminare le eccezioni

1. Usare la **provare** parola chiave per configurare un **provare** blocco. Eseguire le istruzioni di programma che potrebbero generare un'eccezione all'interno di un **provare** blocco.

   Usare la **intercettare** parola chiave per configurare un **catch** blocco. Inserire il codice di gestione delle eccezioni in un **catch** blocco. Il codice nel **catch** blocco viene eseguito solo se il codice all'interno di **provare** blocco genera un'eccezione del tipo specificato nel **catch** istruzione.

   La struttura seguente viene illustrato come **provare** e **catch** blocchi vengono in genere disposti:

   [!code-cpp[NVC_MFCExceptions#4](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_2.cpp)]

   Quando viene generata un'eccezione, il controllo passa al primo **catch** blocco la cui dichiarazione di eccezione corrisponde al tipo dell'eccezione. È possibile gestire in modo selettivo i diversi tipi di eccezioni con sequenziali **catch** blocca come indicato di seguito:

   [!code-cpp[NVC_MFCExceptions#5](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_3.cpp)]

Per altre informazioni, vedere [alle eccezioni: Conversione da macro eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

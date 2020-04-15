---
title: 'Eccezioni: rilevamento ed eliminazione di eccezioni'
ms.date: 11/04/2016
helpviewer_keywords:
- exceptions [MFC], deleting
- AND_CATCH macro [MFC]
- try-catch exception handling [MFC], catching and deleting exceptions
- exception handling [MFC], catching and deleting exceptions
- catch blocks [MFC], catching and deleting exceptions
- execution [MFC], returns from within catch block
ms.assetid: 7c233ff0-89de-4de0-a68a-9e9cdb164311
ms.openlocfilehash: 74022c8bc6af1d2cdf74fa452d4e0483637e542e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365522"
---
# <a name="exceptions-catching-and-deleting-exceptions"></a>Eccezioni: rilevamento ed eliminazione di eccezioni

Le istruzioni e gli esempi seguenti illustrano come intercettare ed eliminare le eccezioni. Per ulteriori informazioni sulle parole chiave **try**, **catch**e **throw** , vedere [Modern C' per le eccezioni e](../cpp/errors-and-exception-handling-modern-cpp.md)la gestione degli errori .

I gestori di eccezioni devono eliminare gli oggetti eccezione che gestiscono, perché la mancata eliminazione dell'eccezione causa una perdita di memoria ogni volta che il codice rileva un'eccezione.

Il blocco catch deve eliminare un'eccezione quando:Your **catch** block must delete an exception when:

- Il blocco **catch** genera una nuova eccezione.

   Naturalmente, non è necessario eliminare l'eccezione se si genera nuovamente la stessa eccezione:

   [!code-cpp[NVC_MFCExceptions#3](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_1.cpp)]

- L'esecuzione restituisce dall'interno del blocco **catch.**

> [!NOTE]
> Quando si `CException`elimina `Delete` un oggetto , utilizzare la funzione membro per eliminare l'eccezione. Non utilizzare la parola chiave **delete,** perché può avere esito negativo se l'eccezione non si trova nell'heap.

#### <a name="to-catch-and-delete-exceptions"></a>Per intercettare ed eliminare le eccezioni

1. Utilizzare la parola chiave **try** per impostare un blocco **try.** Eseguire tutte le istruzioni di programma che potrebbero generare un'eccezione all'interno di un blocco **try.**

   Utilizzare la parola chiave **catch** per impostare un blocco **catch.** Inserire il codice di gestione delle eccezioni in un blocco **catch.** Il codice nel blocco **catch** viene eseguito solo se il codice all'interno del blocco **try** genera un'eccezione del tipo specificato nell'istruzione **catch.**

   Lo scheletro seguente mostra come sono normalmente disposti i blocchi **try** e **catch:**

   [!code-cpp[NVC_MFCExceptions#4](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_2.cpp)]

   Quando viene generata un'eccezione, il controllo passa al primo blocco **catch** la cui dichiarazione di eccezione corrisponde al tipo dell'eccezione. È possibile gestire in modo selettivo diversi tipi di eccezioni con blocchi catch sequenziali, come elencato di seguito:You can selectively handle different types of **exceptions** with sequential catch blocks as listed below:

   [!code-cpp[NVC_MFCExceptions#5](../mfc/codesnippet/cpp/exceptions-catching-and-deleting-exceptions_3.cpp)]

Per ulteriori informazioni, vedere [Eccezioni: conversione da macro](../mfc/exceptions-converting-from-mfc-exception-macros.md)di eccezioni MFC .

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

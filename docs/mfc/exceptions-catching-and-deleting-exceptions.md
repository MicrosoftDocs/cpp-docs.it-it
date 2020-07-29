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
ms.openlocfilehash: 5c1edd4c5d31d9a0e8e5270d074d25b5dd129a0f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87184247"
---
# <a name="exceptions-catching-and-deleting-exceptions"></a>Eccezioni: rilevamento ed eliminazione di eccezioni

Nelle istruzioni e negli esempi seguenti viene illustrato come intercettare ed eliminare le eccezioni. Per ulteriori informazioni sulle **`try`** **`catch`** parole chiave, e, vedere la pagina relativa alle **`throw`** [procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md).

I gestori di eccezioni devono eliminare gli oggetti eccezione che gestiscono, in quanto la mancata eliminazione dell'eccezione causa una perdita di memoria ogni volta che il codice rileva un'eccezione.

Il **`catch`** blocco deve eliminare un'eccezione nei casi seguenti:

- Il **`catch`** blocco genera una nuova eccezione.

   Naturalmente, non è necessario eliminare l'eccezione se si genera di nuovo la stessa eccezione:

   [!code-cpp[NVC_MFCExceptions#3](codesnippet/cpp/exceptions-catching-and-deleting-exceptions_1.cpp)]

- L'esecuzione viene restituita dall'interno del **`catch`** blocco.

> [!NOTE]
> Quando si elimina un oggetto `CException` , utilizzare la `Delete` funzione membro per eliminare l'eccezione. Non usare la **`delete`** parola chiave perché può avere esito negativo se l'eccezione non è presente nell'heap.

#### <a name="to-catch-and-delete-exceptions"></a>Per intercettare ed eliminare le eccezioni

1. Usare la **`try`** parola chiave per impostare un **`try`** blocco. Eseguire tutte le istruzioni di programma che potrebbero generare un'eccezione all'interno di un **`try`** blocco.

   Usare la **`catch`** parola chiave per impostare un **`catch`** blocco. Inserire il codice di gestione delle eccezioni in un **`catch`** blocco. Il codice nel **`catch`** blocco viene eseguito solo se il codice all'interno del **`try`** blocco genera un'eccezione del tipo specificato nell' **`catch`** istruzione.

   La struttura seguente mostra come **`try`** i **`catch`** blocchi e sono in genere disposti:

   [!code-cpp[NVC_MFCExceptions#4](codesnippet/cpp/exceptions-catching-and-deleting-exceptions_2.cpp)]

   Quando viene generata un'eccezione, il controllo passa al primo **`catch`** blocco la cui dichiarazione di eccezione corrisponde al tipo dell'eccezione. È possibile gestire in modo selettivo tipi diversi di eccezioni con blocchi sequenziali **`catch`** , come indicato di seguito:

   [!code-cpp[NVC_MFCExceptions#5](codesnippet/cpp/exceptions-catching-and-deleting-exceptions_3.cpp)]

Per ulteriori informazioni, vedere [eccezioni: conversione da macro di eccezioni MFC](exceptions-converting-from-mfc-exception-macros.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)

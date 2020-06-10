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
ms.openlocfilehash: 50e3a3f8c064b2a054f0018e87c4e8782a5dc363
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618839"
---
# <a name="exceptions-catching-and-deleting-exceptions"></a>Eccezioni: rilevamento ed eliminazione di eccezioni

Nelle istruzioni e negli esempi seguenti viene illustrato come intercettare ed eliminare le eccezioni. Per ulteriori informazioni sulle parole chiave **try**, **catch**e **throw** , vedere la pagina relativa alle [procedure consigliate C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md).

I gestori di eccezioni devono eliminare gli oggetti eccezione che gestiscono, in quanto la mancata eliminazione dell'eccezione causa una perdita di memoria ogni volta che il codice rileva un'eccezione.

Il blocco **catch** deve eliminare un'eccezione nei casi seguenti:

- Il blocco **catch** genera una nuova eccezione.

   Naturalmente, non è necessario eliminare l'eccezione se si genera di nuovo la stessa eccezione:

   [!code-cpp[NVC_MFCExceptions#3](codesnippet/cpp/exceptions-catching-and-deleting-exceptions_1.cpp)]

- L'esecuzione viene restituita dall'interno del blocco **catch** .

> [!NOTE]
> Quando si elimina un oggetto `CException` , utilizzare la `Delete` funzione membro per eliminare l'eccezione. Non usare la parola chiave **Delete** perché può avere esito negativo se l'eccezione non è presente nell'heap.

#### <a name="to-catch-and-delete-exceptions"></a>Per intercettare ed eliminare le eccezioni

1. Usare la parola chiave **try** per configurare un blocco **try** . Eseguire istruzioni di programma che potrebbero generare un'eccezione all'interno di un blocco **try** .

   Usare la parola chiave **catch** per impostare un blocco **catch** . Inserire il codice di gestione delle eccezioni in un blocco **catch** . Il codice nel blocco **catch** viene eseguito solo se il codice all'interno del blocco **try** genera un'eccezione del tipo specificato nell'istruzione **catch** .

   La struttura seguente mostra come vengono organizzati in genere i blocchi **try** e **catch** :

   [!code-cpp[NVC_MFCExceptions#4](codesnippet/cpp/exceptions-catching-and-deleting-exceptions_2.cpp)]

   Quando viene generata un'eccezione, il controllo passa al primo blocco **catch** la cui dichiarazione di eccezione corrisponde al tipo dell'eccezione. È possibile gestire in modo selettivo tipi diversi di eccezioni con blocchi **catch** sequenziali, come indicato di seguito:

   [!code-cpp[NVC_MFCExceptions#5](codesnippet/cpp/exceptions-catching-and-deleting-exceptions_3.cpp)]

Per ulteriori informazioni, vedere [eccezioni: conversione da macro di eccezioni MFC](exceptions-converting-from-mfc-exception-macros.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)

---
title: 'Eccezioni: modifiche alle macro eccezioni nella versione 3.0'
ms.date: 11/04/2016
helpviewer_keywords:
- C++ exception handling [MFC], upgrade considerations
- CATCH macro [MFC]
- exceptions [MFC], what's changed
- THROW_LAST macro [MFC]
ms.assetid: 3aa20d8c-229e-449c-995c-ab879eac84bc
ms.openlocfilehash: 72b343641b0b43d408c5820ca2a2af1de94ce327
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225059"
---
# <a name="exceptions-changes-to-exception-macros-in-version-30"></a>Eccezioni: modifiche alle macro eccezioni nella versione 3.0

Si tratta di un argomento avanzato.

In MFC versione 3,0 e successive, le macro di gestione delle eccezioni sono state modificate in modo da utilizzare le eccezioni C++. Questo articolo spiega in che modo tali modifiche possono influire sul comportamento del codice esistente che usa le macro.

Questo articolo include gli argomenti seguenti:

- [Tipi di eccezione e la macro CATCH](#_core_exception_types_and_the_catch_macro)

- [Generazione di eccezioni](#_core_re.2d.throwing_exceptions)

## <a name="exception-types-and-the-catch-macro"></a><a name="_core_exception_types_and_the_catch_macro"></a>Tipi di eccezione e la macro CATCH

Nelle versioni precedenti di MFC, la macro **catch** usava le informazioni sul tipo in fase di esecuzione MFC per determinare il tipo di un'eccezione. il tipo dell'eccezione viene determinato, in altre parole, nel sito catch. Con le eccezioni C++, tuttavia, il tipo dell'eccezione viene sempre determinato nel sito Throw dal tipo dell'oggetto eccezione generato. Ciò causerà incompatibilità nel caso raro in cui il tipo del puntatore all'oggetto generato è diverso dal tipo dell'oggetto generato.

Nell'esempio seguente viene illustrata la conseguenza di questa differenza tra la versione MFC 3,0 e le versioni precedenti:

[!code-cpp[NVC_MFCExceptions#1](codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_1.cpp)]

Questo codice si comporta in modo diverso nella versione 3,0 perché il controllo passa sempre al primo **`catch`** blocco con una dichiarazione di eccezione corrispondente. Risultato dell'espressione throw

[!code-cpp[NVC_MFCExceptions#19](codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_2.cpp)]

viene generata come `CException*` , anche se viene costruita come `CCustomException` . La macro **catch** nelle versioni MFC 2,5 e precedenti USA `CObject::IsKindOf` per testare il tipo in fase di esecuzione. Poiché l'espressione

[!code-cpp[NVC_MFCExceptions#20](codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_3.cpp)]

è true, il primo blocco catch rileva l'eccezione. Nella versione 3,0, che usa le eccezioni C++ per implementare molte delle macro di gestione delle eccezioni, il secondo blocco catch corrisponde alla generata `CException` .

Il codice come questo non è comune. Viene in genere visualizzato quando un oggetto eccezione viene passato a un'altra funzione che accetta un oggetto generico `CException*` , esegue l'elaborazione "pre-throw" e infine genera l'eccezione.

Per ovviare a questo problema, spostare l'espressione throw dalla funzione al codice chiamante e generare un'eccezione del tipo effettivo noto al compilatore nel momento in cui viene generata l'eccezione.

## <a name="re-throwing-exceptions"></a><a name="_core_re.2d.throwing_exceptions"></a>Generazione di eccezioni

Un blocco catch non può generare lo stesso puntatore di eccezione rilevato.

Questo codice, ad esempio, era valido nelle versioni precedenti, ma avrà risultati imprevisti con la versione 3,0:

[!code-cpp[NVC_MFCExceptions#2](codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_4.cpp)]

Se si utilizza **throw** nel blocco catch, il puntatore viene `e` eliminato, in modo che il sito catch esterno riceva un puntatore non valido. Usare **THROW_LAST** per generare nuovamente `e` .

Per altre informazioni, vedere [Exceptions: catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)

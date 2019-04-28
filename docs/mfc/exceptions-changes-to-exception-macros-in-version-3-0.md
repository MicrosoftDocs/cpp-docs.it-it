---
title: 'Eccezioni: Modifiche alle macro eccezioni nella versione 3.0'
ms.date: 11/04/2016
helpviewer_keywords:
- C++ exception handling [MFC], upgrade considerations
- CATCH macro [MFC]
- exceptions [MFC], what's changed
- THROW_LAST macro [MFC]
ms.assetid: 3aa20d8c-229e-449c-995c-ab879eac84bc
ms.openlocfilehash: fb51ad91e001f0ed153bf4fdb5aa598ab5ba5042
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62173277"
---
# <a name="exceptions-changes-to-exception-macros-in-version-30"></a>Eccezioni: Modifiche alle macro eccezioni nella versione 3.0

Si tratta di un argomento avanzato.

In MFC 3.0 e versioni successive, le macro di eccezioni sono state modificate per utilizzare le eccezioni C++. Questo articolo descrive come le modifiche possono influenzare il comportamento del codice esistente che usa le macro.

Questo articolo illustra gli argomenti seguenti:

- [Tipi di eccezione e la macro CATCH](#_core_exception_types_and_the_catch_macro)

- [Rigenerazione di un'eccezione](#_core_re.2d.throwing_exceptions)

##  <a name="_core_exception_types_and_the_catch_macro"></a> Tipi di eccezione e la Macro CATCH

Nelle versioni precedenti di MFC, la **CATCH** macro utilizzato le informazioni sul tipo in fase di esecuzione MFC per determinare un tipo di eccezione, viene determinato il tipo di eccezione, in altre parole, sito di rilevamento. Con le eccezioni C++, tuttavia, il tipo di eccezione viene sempre determinato al sito di generazione dal tipo dell'oggetto eccezione che viene generata un'eccezione. Ciò causerà problemi di incompatibilità nel raro caso in cui il tipo del puntatore all'oggetto generata è diverso dal tipo dell'oggetto generato.

Nell'esempio seguente viene illustrata la conseguenza di tale differenza tra MFC versione 3.0 e versioni precedenti:

[!code-cpp[NVC_MFCExceptions#1](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_1.cpp)]

Questo codice si comporta in modo diverso nella versione 3.0 di perché il controllo passa sempre il primo **catch** blocco con una dichiarazione di eccezione corrispondente. Il risultato dell'espressione throw

[!code-cpp[NVC_MFCExceptions#19](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_2.cpp)]

viene generata come una `CException*`, anche se viene creata come un `CCustomException`. Il **INTERCETTARE** macro MFC versioni 2.5 e versioni precedenti usano `CObject::IsKindOf` per testare il tipo in fase di esecuzione. Poiché l'espressione

[!code-cpp[NVC_MFCExceptions#20](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_3.cpp)]

è true, il primo blocco catch intercetta l'eccezione. Nella versione 3.0, che utilizza le eccezioni di C++ per implementano molte delle macro di eccezioni, il secondo blocco catch corrisponde l'oggetto generato `CException`.

È raro che codice simile al seguente. Viene in genere visualizzato quando un oggetto eccezione viene passato a un'altra funzione che accetta un oggetto generico `CException*`, esegue l'elaborazione "pre-throw" e infine viene generata l'eccezione.

Per risolvere questo problema, spostare l'espressione throw dalla funzione per il codice chiamante e generare un'eccezione di tipo effettivo nota al compilatore al momento che della generazione dell'eccezione.

##  <a name="_core_re.2d.throwing_exceptions"></a> Rigenerazione di un'eccezione

Un blocco catch non è possibile generare lo stesso puntatore di eccezione che viene individuato.

Ad esempio, questo codice è valido nelle versioni precedenti, ma avranno risultati imprevisti con la versione 3.0:

[!code-cpp[NVC_MFCExceptions#2](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_4.cpp)]

Usando **THROW** in catch block, il puntatore `e` da eliminare, in modo che il sito di rilevamento esterno verrà visualizzato un puntatore non valido. Uso **THROW_LAST** da generare nuovamente `e`.

Per altre informazioni, vedere [alle eccezioni: Rilevamento ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

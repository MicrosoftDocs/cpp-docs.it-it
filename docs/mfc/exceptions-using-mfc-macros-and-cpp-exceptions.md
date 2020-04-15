---
title: 'Eccezioni: utilizzo di macro MFC ed eccezioni C++'
ms.date: 11/04/2016
helpviewer_keywords:
- exception objects [MFC]
- memory leaks [MFC], exception object not deleted
- exception handling [MFC], MFC
- try-catch exception handling [MFC], mixing MFC macros and C++ keywords
- exception objects [MFC], deleting
- exceptions [MFC], MFC macros vs. C++ keywords
- catch blocks [MFC], mixed
- exception handling [MFC], mixed-language
- nested try blocks [MFC]
- catch blocks [MFC], explicitly deleting code in
- try-catch exception handling [MFC], nested try blocks
- heap corruption [MFC]
- nested catch blocks [MFC]
ms.assetid: d664a83d-879b-44d4-bdf0-029f0aca69e9
ms.openlocfilehash: afad5335bedf001329ecb401a8a16c663afb5571
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371595"
---
# <a name="exceptions-using-mfc-macros-and-c-exceptions"></a>Eccezioni: utilizzo di macro MFC ed eccezioni C++

In questo articolo vengono illustrate le considerazioni per la scrittura di codice che utilizza sia le macro di gestione delle eccezioni MFC e le parole chiave di gestione delle eccezioni di C .

Questo articolo include gli argomenti seguenti:

- [Combinazione di macro e parole chiave di eccezione](#_core_mixing_exception_keywords_and_macros)

- [Prova i blocchi all'interno dei blocchi catch](#_core_try_blocks_inside_catch_blocks)

## <a name="mixing-exception-keywords-and-macros"></a><a name="_core_mixing_exception_keywords_and_macros"></a>Combinazione di parole chiave e macro di eccezione

È possibile combinare le macro di eccezioni MFC e le parole chiave di eccezione c, nello stesso programma. Tuttavia, non è possibile combinare le macro MFC con le parole chiave di eccezione c'è nello stesso blocco perché le macro eliminano automaticamente gli oggetti eccezione quando escono dall'ambito, mentre il codice che utilizza le parole chiave di gestione delle eccezioni non lo fa. Per ulteriori informazioni, vedere l'articolo [eccezioni: intercettazione ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

La differenza principale tra le macro e le parole chiave è che le macro "automaticamente" eliminano un'eccezione intercettata quando l'eccezione esce dall'ambito. Il codice che utilizza le parole chiave non lo fa; le eccezioni rilevate in un blocco catch devono essere eliminate in modo esplicito. La combinazione di macro e parole chiave di eccezione c'è può causare perdite di memoria quando un oggetto eccezione non viene eliminato o il danneggiamento dell'heap quando un'eccezione viene eliminata due volte.

Il codice seguente, ad esempio, invalida il puntatore all'eccezione:The following code, for example, invalidates the exception pointer:

[!code-cpp[NVC_MFCExceptions#10](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_1.cpp)]

Il problema `e` si verifica perché viene eliminato quando l'esecuzione passa dal blocco **CATCH** "interno". Se **si** utilizza la macro THROW_LAST anziché l'istruzione **THROW,** il blocco **CATCH** "esterno" riceverà un puntatore valido:

[!code-cpp[NVC_MFCExceptions#11](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_2.cpp)]

## <a name="try-blocks-inside-catch-blocks"></a><a name="_core_try_blocks_inside_catch_blocks"></a>Prova blocchi all'interno dei blocchi Catch

Non è possibile generare nuovamente l'eccezione corrente dall'interno di un blocco **try** che si trova all'interno di un blocco **CATCH.** L'esempio seguente non è valido:

[!code-cpp[NVC_MFCExceptions#12](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_3.cpp)]

Per ulteriori informazioni, vedere [Eccezioni: esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

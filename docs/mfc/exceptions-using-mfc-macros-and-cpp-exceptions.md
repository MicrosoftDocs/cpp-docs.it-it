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
ms.openlocfilehash: 9e97eb545dedd3ac38dd93471f82aecc382717ae
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223174"
---
# <a name="exceptions-using-mfc-macros-and-c-exceptions"></a>Eccezioni: utilizzo di macro MFC ed eccezioni C++

Questo articolo illustra le considerazioni per la scrittura di codice che usa le macro di gestione delle eccezioni MFC e le parole chiave di gestione delle eccezioni C++.

Questo articolo include gli argomenti seguenti:

- [Combinazione di parole chiave e macro di eccezione](#_core_mixing_exception_keywords_and_macros)

- [Blocchi try all'interno di blocchi catch](#_core_try_blocks_inside_catch_blocks)

## <a name="mixing-exception-keywords-and-macros"></a><a name="_core_mixing_exception_keywords_and_macros"></a>Combinazione di parole chiave e macro di eccezione

È possibile combinare macro di eccezioni MFC e parole chiave dell'eccezione C++ nello stesso programma. Tuttavia, non è possibile combinare macro MFC con parole chiave di eccezione C++ nello stesso blocco perché le macro eliminano automaticamente gli oggetti eccezione quando escono dall'ambito, mentre il codice che usa le parole chiave per la gestione delle eccezioni non lo fa. Per ulteriori informazioni, vedere l'articolo [eccezioni: catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

La differenza principale tra le macro e le parole chiave è che le macro eliminano automaticamente un'eccezione rilevata quando l'eccezione esce dall'ambito. Il codice che usa le parole chiave non lo è. le eccezioni rilevate in un blocco catch devono essere eliminate in modo esplicito. Combinare le macro e le parole chiave delle eccezioni C++ possono causare perdite di memoria quando un oggetto eccezione non viene eliminato oppure un danneggiamento dell'heap quando un'eccezione viene eliminata due volte.

Il codice seguente, ad esempio, invalida il puntatore di eccezione:

[!code-cpp[NVC_MFCExceptions#10](codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_1.cpp)]

Il problema si verifica perché `e` viene eliminato quando l'esecuzione passa all'esterno del blocco **catch** "Inner". Se si utilizza la macro **THROW_LAST** anziché l'istruzione **throw** , il blocco **catch** "Outer" riceverà un puntatore valido:

[!code-cpp[NVC_MFCExceptions#11](codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_2.cpp)]

## <a name="try-blocks-inside-catch-blocks"></a><a name="_core_try_blocks_inside_catch_blocks"></a>Blocchi try all'interno di blocchi catch

Non è possibile generare di nuovo l'eccezione corrente da un **`try`** blocco all'interno di un blocco **catch** . L'esempio seguente non è valido:

[!code-cpp[NVC_MFCExceptions#12](codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_3.cpp)]

Per altre informazioni, vedere [eccezioni: esame del contenuto delle eccezioni](exceptions-examining-exception-contents.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)

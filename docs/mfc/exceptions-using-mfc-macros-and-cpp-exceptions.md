---
title: 'Eccezioni: Utilizzo delle macro MFC ed eccezioni C++'
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
ms.openlocfilehash: 00e88ddabf3a8e8b591bebae7ebc8ced0e1dc637
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297710"
---
# <a name="exceptions-using-mfc-macros-and-c-exceptions"></a>Eccezioni: Utilizzo delle macro MFC ed eccezioni C++

Questo articolo illustra considerazioni per la scrittura di codice che usa le macro di eccezioni MFC e parole chiave di gestione delle eccezioni C++.

Questo articolo illustra gli argomenti seguenti:

- [La combinazione di macro e parole chiave delle eccezioni](#_core_mixing_exception_keywords_and_macros)

- [Blocchi try all'interno di blocchi catch](#_core_try_blocks_inside_catch_blocks)

##  <a name="_core_mixing_exception_keywords_and_macros"></a> La combinazione di macro e parole chiave delle eccezioni

È possibile combinare macro eccezioni MFC e parole chiave delle eccezioni C++ nello stesso programma. Ma non è possibile combinare le macro MFC con parole chiave delle eccezioni C++ nello stesso blocco poiché le macro vengono eliminati gli oggetti eccezione automaticamente quando escono dall'ambito, mentre non le supporta codice usando le parole chiave di gestione delle eccezioni. Per altre informazioni, vedere l'articolo [alle eccezioni: Rilevamento ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

La differenza principale tra le macro e le parole chiave è che le macro "automatico" eliminano un'eccezione rilevata quando l'eccezione esce dall'ambito. Il codice tramite le parole chiave non li restituiscono. le eccezioni rilevate in un blocco catch devono essere eliminate in modo esplicito. La combinazione di macro e parole chiave delle eccezioni C++ può causare perdite di memoria quando un oggetto eccezione non viene eliminato o danneggiare la memoria heap, quando un'eccezione viene eliminata due volte.

Il codice seguente, ad esempio, consente di invalidare il puntatore di eccezione:

[!code-cpp[NVC_MFCExceptions#10](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_1.cpp)]

Il problema si verifica perché `e` viene eliminato quando l'esecuzione passa all'esterno di "interna" **CATCH** blocco. Usando il **THROW_LAST** macro anziché il **THROW** istruzione causerà il "esterno" **CATCH** blocco per la ricezione di un puntatore valido:

[!code-cpp[NVC_MFCExceptions#11](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_2.cpp)]

##  <a name="_core_try_blocks_inside_catch_blocks"></a> Blocchi try all'interno di blocchi Catch

Non è possibile generare nuovamente l'eccezione corrente dall'interno una **provare** blocco che si trova all'interno un **CATCH** blocco. Nell'esempio seguente non è valido:

[!code-cpp[NVC_MFCExceptions#12](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_3.cpp)]

Per altre informazioni, vedere [alle eccezioni: Esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

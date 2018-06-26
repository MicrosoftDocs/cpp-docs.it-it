---
title: 'Eccezioni: Utilizzo di macro MFC ed eccezioni C++ | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 698d8a754716f6876f9a72a0d5043807a32d2089
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932208"
---
# <a name="exceptions-using-mfc-macros-and-c-exceptions"></a>Eccezioni: utilizzo di macro MFC ed eccezioni C++
In questo articolo verranno illustrate alcune considerazioni per la scrittura di codice che usa le macro di gestione delle eccezioni MFC e parole chiave di gestione delle eccezioni C++.  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
-   [La combinazione di macro e parole chiave delle eccezioni](#_core_mixing_exception_keywords_and_macros)  
  
-   [Blocchi catch nei blocchi try](#_core_try_blocks_inside_catch_blocks)  
  
##  <a name="_core_mixing_exception_keywords_and_macros"></a> La combinazione di macro e parole chiave delle eccezioni  
 È possibile combinare macro eccezioni MFC e parole chiave delle eccezioni C++ nello stesso programma. Ma non è possibile combinare le macro MFC con parole chiave delle eccezioni C++ nello stesso blocco poiché le macro non eliminano oggetti eccezione automaticamente quando escono dall'ambito, mentre non codice utilizzando le parole chiave di gestione delle eccezioni. Per altre informazioni, vedere l'articolo [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
 La differenza principale tra le macro e le parole chiave è che le macro di eliminano un'eccezione intercettata "automatico" quando l'eccezione esce dall'ambito. Codice che usa le parole chiave non li restituiscono. le eccezioni rilevate in un blocco catch devono essere eliminate in modo esplicito. La combinazione di macro e parole chiave delle eccezioni C++ può causare perdite di memoria quando un oggetto eccezione non viene eliminato o danneggiamento dell'heap quando un'eccezione viene eliminata due volte.  
  
 Il codice seguente, ad esempio, invalida il puntatore di eccezione:  
  
 [!code-cpp[NVC_MFCExceptions#10](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_1.cpp)]  
  
 Il problema si verifica perché `e` viene eliminato quando l'esecuzione passa all'esterno di "interni" **CATCH** blocco. Utilizzando il **THROW_LAST** macro anziché il **THROW** istruzione causerà il "esterno" **CATCH** blocco per la ricezione di un puntatore valido:  
  
 [!code-cpp[NVC_MFCExceptions#11](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_2.cpp)]  
  
##  <a name="_core_try_blocks_inside_catch_blocks"></a> Blocchi Catch nei blocchi try  
 Non è possibile generare nuovamente l'eccezione corrente dall'interno una **provare** blocco che si trova all'interno un **CATCH** blocco. Nell'esempio seguente non è valido:  
  
 [!code-cpp[NVC_MFCExceptions#12](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_3.cpp)]  
  
 Per altre informazioni, vedere [eccezioni: esame del contenuto delle eccezioni](../mfc/exceptions-examining-exception-contents.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)


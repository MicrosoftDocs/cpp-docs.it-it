---
title: 'Eccezioni: Modifiche alle macro eccezioni nella versione 3.0 | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- C++ exception handling [MFC], upgrade considerations
- CATCH macro [MFC]
- exceptions [MFC], what's changed
- THROW_LAST macro [MFC]
ms.assetid: 3aa20d8c-229e-449c-995c-ab879eac84bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 92d1691f9a61a11dc4d9dfe7e869ccb7899746bc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33350012"
---
# <a name="exceptions-changes-to-exception-macros-in-version-30"></a>Eccezioni: modifiche alle macro eccezioni nella versione 3.0
Questo è un argomento avanzato.  
  
 In MFC versione 3.0 e versioni successive, le macro di gestione delle eccezioni sono state modificate per utilizzare le eccezioni C++. In questo articolo viene come tali modifiche possono influenzare il comportamento del codice esistente che utilizza le macro.  
  
 In questo articolo vengono illustrati gli argomenti seguenti:  
  
-   [Tipi di eccezione e la macro CATCH](#_core_exception_types_and_the_catch_macro)  
  
-   [Rigenerazione di un'eccezione](#_core_re.2d.throwing_exceptions)  
  
##  <a name="_core_exception_types_and_the_catch_macro"></a> Tipi di eccezione e la Macro CATCH  
 Nelle versioni precedenti di MFC, la **CATCH** macro utilizzata informazioni sul tipo di runtime MFC per determinare un tipo di eccezione, viene determinato il tipo di eccezione, in altre parole, sito di rilevamento. Con le eccezioni C++, tuttavia, il tipo di eccezione viene sempre determinato al sito di generazione dal tipo dell'oggetto eccezione che viene generata un'eccezione. In questo modo le incompatibilità nel raro caso in cui il tipo del puntatore all'oggetto generato differisce dal tipo dell'oggetto.  
  
 L'esempio seguente illustra la conseguenza di questa differenza tra MFC versione 3.0 e versioni precedenti:  
  
 [!code-cpp[NVC_MFCExceptions#1](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_1.cpp)]  
  
 Questo codice si comporta in modo diverso nella versione 3.0 di poiché sempre il controllo passa al primo **catch** blocco con una dichiarazione di eccezione corrispondente. Il risultato dell'espressione throw  
  
 [!code-cpp[NVC_MFCExceptions#19](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_2.cpp)]  
  
 viene generato come un **CException\***, anche se viene creata come un **CCustomException**. Il **CATCH** macro MFC versione 2.5 e versioni precedenti viene utilizzato `CObject::IsKindOf` per verificare il tipo in fase di esecuzione. Poiché l'espressione  
  
 [!code-cpp[NVC_MFCExceptions#20](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_3.cpp)]  
  
 è true, il primo blocco catch intercetta l'eccezione. Nella versione 3.0, che utilizza le eccezioni C++ per implementare molte delle macro di gestione delle eccezioni, il secondo blocco catch corrisponde l'eccezione `CException`.  
  
 Codice simile al seguente non è comune. In genere viene visualizzato quando un oggetto eccezione viene passato a un'altra funzione che accetta un oggetto generico **CException\***, esegue l'elaborazione di pre-""throw e infine l'eccezione.  
  
 Per risolvere questo problema, spostare l'espressione throw dalla funzione al codice chiamante e genera un'eccezione del tipo effettivo nota al compilatore che al momento che della generazione dell'eccezione.  
  
##  <a name="_core_re.2d.throwing_exceptions"></a> Rigenerazione di un'eccezione  
 Un blocco catch non può generare lo stesso puntatore di eccezione che viene individuato.  
  
 Ad esempio, questo codice è valido nelle versioni precedenti, ma avrà risultati imprevisti dalla versione 3.0:  
  
 [!code-cpp[NVC_MFCExceptions#2](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_4.cpp)]  
  
 Utilizzando **generare** in catch blocco, il puntatore `e` da eliminare, in modo che il sito di rilevamento esterno riceverà un puntatore non valido. Utilizzare `THROW_LAST` da generare nuovamente `e`.  
  
 Per ulteriori informazioni, vedere [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)


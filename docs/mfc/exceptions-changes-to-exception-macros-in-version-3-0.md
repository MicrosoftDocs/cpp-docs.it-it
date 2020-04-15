---
title: 'Eccezioni: modifiche alle macro eccezioni nella versione 3.0'
ms.date: 11/04/2016
helpviewer_keywords:
- C++ exception handling [MFC], upgrade considerations
- CATCH macro [MFC]
- exceptions [MFC], what's changed
- THROW_LAST macro [MFC]
ms.assetid: 3aa20d8c-229e-449c-995c-ab879eac84bc
ms.openlocfilehash: 82320b0c7ccd6766e016f0437633339f8f8f61d6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365488"
---
# <a name="exceptions-changes-to-exception-macros-in-version-30"></a>Eccezioni: modifiche alle macro eccezioni nella versione 3.0

Questo è un argomento avanzato.

In MFC versione 3.0 e successive, le macro di gestione delle eccezioni sono state modificate per l'utilizzo di eccezioni C . In questo articolo viene illustrato come tali modifiche possono influire sul comportamento del codice esistente che utilizza le macro.

Questo articolo include gli argomenti seguenti:

- [Tipi di eccezione e macro CATCH](#_core_exception_types_and_the_catch_macro)

- [Rigenerazione delle eccezioniRe-throwing exceptions](#_core_re.2d.throwing_exceptions)

## <a name="exception-types-and-the-catch-macro"></a><a name="_core_exception_types_and_the_catch_macro"></a>Tipi di eccezione e macro CATCH

Nelle versioni precedenti di MFC, la macro **CATCH** utilizzava le informazioni sul tipo di runtime MFC per determinare il tipo di un'eccezione; il tipo dell'eccezione viene determinato, in altre parole, nel sito catch. Tuttavia, con le eccezioni di C, il tipo dell'eccezione viene sempre determinato nel sito di generazione dal tipo dell'oggetto eccezione che viene generato. Ciò causerà incompatibilità nel raro caso in cui il tipo del puntatore all'oggetto generato è diverso dal tipo dell'oggetto generato.

Nell'esempio seguente viene illustrata la conseguenza di questa differenza tra MFC versione 3.0 e versioni precedenti:

[!code-cpp[NVC_MFCExceptions#1](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_1.cpp)]

Questo codice si comporta in modo diverso nella versione 3.0 perché il controllo passa sempre al primo blocco **catch** con una dichiarazione di eccezione corrispondente. Il risultato dell'espressione throw

[!code-cpp[NVC_MFCExceptions#19](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_2.cpp)]

viene gettato `CException*`come , anche se `CCustomException`è costruito come un . La macro **CATCH** in MFC versioni `CObject::IsKindOf` 2.5 e precedenti utilizza per testare il tipo in fase di esecuzione. Perché l'espressione

[!code-cpp[NVC_MFCExceptions#20](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_3.cpp)]

è true, il primo blocco catch intercetta l'eccezione. Nella versione 3.0, che utilizza le eccezioni di C, per implementare molte delle `CException`macro di gestione delle eccezioni, il secondo blocco catch corrisponde a quello generato.

Codice come questo è raro. Viene in genere visualizzato quando un oggetto eccezione `CException*`viene passato a un'altra funzione che accetta un generico , esegue l'elaborazione "pre-generazione" e infine genera l'eccezione.

Per risolvere questo problema, spostare l'espressione throw dalla funzione al codice chiamante e generare un'eccezione del tipo effettivo noto al compilatore al momento della generazione dell'eccezione.

## <a name="re-throwing-exceptions"></a><a name="_core_re.2d.throwing_exceptions"></a>Eccezioni di rigenerazioneRe-Throwing Exceptions

Un blocco catch non può generare lo stesso puntatore di eccezione intercettato.

Ad esempio, questo codice era valido nelle versioni precedenti, ma avrà risultati imprevisti con la versione 3.0:For example, this code was valid in previous versions, but will have unexpected results with version 3.0:

[!code-cpp[NVC_MFCExceptions#2](../mfc/codesnippet/cpp/exceptions-changes-to-exception-macros-in-version-3-0_4.cpp)]

L'utilizzo di **THROW** nel `e` blocco catch determina l'eliminazione del puntatore, in modo che il sito catch esterno riceva un puntatore non valido. Utilizzare **THROW_LAST** per `e`rilanciare .

Per ulteriori informazioni, vedere [eccezioni: intercettazione ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)

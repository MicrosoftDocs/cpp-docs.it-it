---
title: 'Eccezioni: conversione da macro eccezioni MFC'
ms.date: 08/27/2018
helpviewer_keywords:
- converting exceptions [MFC]
- exception objects [MFC]
- conversions [MFC], code written with MFC macros
- keywords [MFC], macros
- macrosv, C++ keywords
- exception objects [MFC], deleting
- CException class [MFC], deleting CException class objects
- exceptions [MFC], converting
- exceptions [MFC], deleting exception objects
- catch blocks [MFC], delimiting
- exception handling [MFC], converting exceptions
ms.assetid: bd3ac3b3-f3ce-4fdd-a168-a2cff13ed796
ms.openlocfilehash: 330f66b1f46542082637645ad53da016b434d4a2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372022"
---
# <a name="exceptions-converting-from-mfc-exception-macros"></a>Eccezioni: conversione da macro eccezioni MFC

Questo è un argomento avanzato.

In questo articolo viene illustrato come convertire il codice esistente scritto con le macro di Microsoft Foundation Class, ovvero **TRY**, **CATCH**, **THROW**e così via, per utilizzare le parole chiave di gestione delle eccezioni di C, **try**, **catch**e **throw**. Gli argomenti includono:

- [Vantaggi di conversione](#_core_advantages_of_converting)

- [Conversione di codice con macro di eccezioni per l'utilizzo di eccezioni C](#_core_doing_the_conversion)

## <a name="advantages-of-converting"></a><a name="_core_advantages_of_converting"></a>Vantaggi della conversione

Probabilmente non è necessario convertire il codice esistente, anche se è necessario tenere presenti le differenze tra le implementazioni delle macro in MFC versione 3.0 e le implementazioni nelle versioni precedenti. Queste differenze e le successive modifiche nel comportamento del codice sono descritte in [Eccezioni: modifiche alle macro di eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).

I principali vantaggi della conversione sono:

- Il codice che utilizza le parole chiave di gestione delle eccezioni di C. viene compilato in un file leggermente più piccolo. EXE o . DLL.

- Le parole chiave di gestione delle eccezioni di C, è più versatile: possono gestire eccezioni di qualsiasi tipo di dati che possono `CException` essere copiate (**int**, **float**, **char**e così via), mentre le macro gestiscono le eccezioni solo delle classi e delle classi derivate da esso.

La differenza principale tra le macro e le parole chiave è che il codice che utilizza le macro "automaticamente" elimina un'eccezione intercettata quando l'eccezione esce dall'ambito. Il codice che usa le parole chiave non lo fa, pertanto è necessario eliminare in modo esplicito un'eccezione intercettata. Per ulteriori informazioni, vedere l'articolo [eccezioni: intercettazione ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

Un'altra differenza è la sintassi. La sintassi per macro e parole chiave differisce per tre aspetti:

1. Argomenti macro e dichiarazioni di eccezione:

   Una chiamata di macro **CATCH** ha la seguente sintassi:

   **CATCH(** *exception_class*, *exception_object_pointer_name* **)**

   Si noti la virgola tra il nome della classe e il nome del puntatore all'oggetto.

   La dichiarazione di eccezione per la parola chiave catch utilizza la sintassi seguente:The exception declaration for the **catch** keyword uses this syntax:

   **catch(** *exception_type* *exception_name* **)**

   Questa istruzione di dichiarazione di eccezione indica il tipo di eccezione handle di blocco catch.

2. Delimitazione dei blocchi catch:

   Con le macro, la macro **CATCH** (con i relativi argomenti) inizia il primo blocco catch; la macro **AND_CATCH** inizia i blocchi catch successivi e la macro **END_CATCH** termina la sequenza di blocchi catch.

   Con le parole chiave, la parola chiave **catch** (con la relativa dichiarazione di eccezione) inizia ogni blocco catch. Non esiste una controparte della macro **END_CATCH;** il blocco catch termina con la parentesi graffa di chiusura.

3. L'espressione throw:

   Le macro utilizzano **THROW_LAST** per generare nuovamente l'eccezione corrente. La parola chiave **throw,** senza argomenti, ha lo stesso effetto.

## <a name="doing-the-conversion"></a><a name="_core_doing_the_conversion"></a>Fare la conversione

#### <a name="to-convert-code-using-macros-to-use-the-c-exception-handling-keywords"></a>Per convertire il codice utilizzando le macro in modo da utilizzare le parole chiave di gestione delle eccezioni di C

1. Individuare tutte le occorrenze delle macro MFC **TRY**, **CATCH**, **AND_CATCH**, **END_CATCH**, **THROW**e **THROW_LAST**.

2. Sostituire o eliminare tutte le occorrenze delle seguenti macro:

   **PROVA** (sostituirlo con **try**)

   **CATCH** (sostituirlo con **catch)**

   **AND_CATCH** (sostituirlo con **catch**)

   **END_CATCH** (Elimina)

   **THROW** (sostituirlo con **throw**)

   **THROW_LAST** (sostituirlo con **throw**)

3. Modificare gli argomenti della macro in modo che formino dichiarazioni di eccezione valide.

   Ad esempio, modificare

   [!code-cpp[NVC_MFCExceptions#6](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_1.cpp)]

   to

   [!code-cpp[NVC_MFCExceptions#7](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_2.cpp)]

4. Modificare il codice nei blocchi catch in modo che elimini gli oggetti eccezione in base alle esigenze. Per ulteriori informazioni, vedere l'articolo [eccezioni: intercettazione ed eliminazione di eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).

Di seguito è riportato un esempio di codice di gestione delle eccezioni utilizzando le macro di eccezioni MFC. Si noti che, poiché il codice nell'esempio seguente utilizza le macro, l'eccezione `e` viene eliminata automaticamente:

[!code-cpp[NVC_MFCExceptions#8](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_3.cpp)]

Nel codice dell'esempio successivo vengono utilizzate le parole chiave dell'eccezione di C, pertanto l'eccezione deve essere eliminata in modo esplicito:

[!code-cpp[NVC_MFCExceptions#9](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_4.cpp)]

Per ulteriori informazioni, vedere [Eccezioni: utilizzo delle macro MFC e delle eccezioni c.](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md)

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)<br/>

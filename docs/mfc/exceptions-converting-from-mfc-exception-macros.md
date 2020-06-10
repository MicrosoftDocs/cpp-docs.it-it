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
ms.openlocfilehash: 8a936a0af9927aa0dc453a93c98676a77f4ad6dc
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621761"
---
# <a name="exceptions-converting-from-mfc-exception-macros"></a>Eccezioni: conversione da macro eccezioni MFC

Si tratta di un argomento avanzato.

Questo articolo illustra come convertire il codice esistente scritto con le macro di Microsoft Foundation Class ( **try**, **catch**, **throw**e così via) per usare le parole chiave di gestione delle eccezioni C++ **try**, **catch**e **throw**. Gli argomenti includono:

- [Vantaggi della conversione](#_core_advantages_of_converting)

- [Conversione di codice con macro di eccezione per l'utilizzo di eccezioni C++](#_core_doing_the_conversion)

## <a name="advantages-of-converting"></a><a name="_core_advantages_of_converting"></a>Vantaggi della conversione

Probabilmente non è necessario convertire il codice esistente, anche se è necessario essere a conoscenza delle differenze tra le implementazioni di macro nella versione MFC 3,0 e le implementazioni nelle versioni precedenti. Queste differenze e le successive modifiche al comportamento del codice sono illustrate in [eccezioni: modifiche alle macro delle eccezioni nella versione 3,0](exceptions-changes-to-exception-macros-in-version-3-0.md).

I principali vantaggi della conversione sono:

- Il codice che usa le parole chiave di gestione delle eccezioni C++ viene compilato in un valore leggermente inferiore. EXE o. DLL.

- Le parole chiave di gestione delle eccezioni C++ sono più versatili: possono gestire eccezioni di qualsiasi tipo di dati che può essere copiato (**int**, **float**, **char**e così via), mentre le macro gestiscono le eccezioni solo della classe `CException` e delle classi derivate.

La differenza principale tra le macro e le parole chiave è che il codice che usa le macro "automaticamente" Elimina un'eccezione rilevata quando l'eccezione esce dall'ambito. Il codice che usa le parole chiave non lo consente, quindi è necessario eliminare in modo esplicito un'eccezione rilevata. Per ulteriori informazioni, vedere l'articolo [eccezioni: catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

Un'altra differenza è la sintassi. La sintassi per macro e parole chiave è diversa in tre aspetti:

1. Argomenti macro e dichiarazioni di eccezioni:

   Una chiamata della macro **catch** presenta la sintassi seguente:

   **Catch (** *exception_class*, *exception_object_pointer_name* **)**

   Si noti la virgola tra il nome della classe e il nome del puntatore all'oggetto.

   La dichiarazione di eccezione per la parola chiave **catch** usa questa sintassi:

   **catch (** *exception_type* *EXCEPTION_NAME* **)**

   Questa istruzione di dichiarazione di eccezione indica il tipo di eccezione gestita dal blocco catch.

2. Delimitazione dei blocchi catch:

   Con le macro, la macro **catch** (con i relativi argomenti) inizia il primo blocco catch; la macro **AND_CATCH** avvia i blocchi catch successivi e la macro **END_CATCH** termina la sequenza dei blocchi catch.

   Con le parole chiave, la parola chiave **catch** , con la relativa dichiarazione di eccezione, inizia ogni blocco catch. Non esiste alcuna controparte della macro **END_CATCH** . il blocco catch termina con la parentesi graffa di chiusura.

3. Espressione throw:

   Le macro usano **THROW_LAST** per generare di nuovo l'eccezione corrente. La parola chiave **throw** , senza argomento, ha lo stesso effetto.

## <a name="doing-the-conversion"></a><a name="_core_doing_the_conversion"></a>Eseguire la conversione

#### <a name="to-convert-code-using-macros-to-use-the-c-exception-handling-keywords"></a>Per convertire il codice usando le macro per usare le parole chiave di gestione delle eccezioni C++

1. Individuare tutte le occorrenze delle macro MFC **try**, **catch**, **AND_CATCH**, **END_CATCH**, **throw**e **THROW_LAST**.

2. Sostituire o eliminare tutte le occorrenze delle macro seguenti:

   **Prova** (Sostituisci con **try**)

   **Catch** (Sostituisci con **catch**)

   **AND_CATCH** (sostituirla con **catch**)

   **END_CATCH** (Elimina)

   **Throw** (Sostituisci con **throw**)

   **THROW_LAST** (sostituirla con **throw**)

3. Modificare gli argomenti della macro in modo da formare dichiarazioni di eccezioni valide.

   Ad esempio, modificare

   [!code-cpp[NVC_MFCExceptions#6](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_1.cpp)]

   to

   [!code-cpp[NVC_MFCExceptions#7](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_2.cpp)]

4. Modificare il codice nei blocchi catch in modo che elimini gli oggetti eccezione in base alle esigenze. Per ulteriori informazioni, vedere l'articolo [eccezioni: catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

Di seguito è riportato un esempio di codice di gestione delle eccezioni mediante macro di eccezioni MFC. Si noti che poiché il codice nell'esempio seguente usa le macro, l'eccezione `e` viene eliminata automaticamente:

[!code-cpp[NVC_MFCExceptions#8](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_3.cpp)]

Il codice nell'esempio seguente usa le parole chiave dell'eccezione C++, quindi l'eccezione deve essere eliminata in modo esplicito:

[!code-cpp[NVC_MFCExceptions#9](codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_4.cpp)]

Per ulteriori informazioni, vedere [eccezioni: utilizzo delle macro MFC e delle eccezioni C++](exceptions-using-mfc-macros-and-cpp-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](exception-handling-in-mfc.md)<br/>

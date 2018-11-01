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
ms.openlocfilehash: 59b83438d5341fd6a139af64a2f365a739438741
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50525893"
---
# <a name="exceptions-converting-from-mfc-exception-macros"></a>Eccezioni: conversione da macro eccezioni MFC

Si tratta di un argomento avanzato.

Questo articolo illustra come convertire un codice esistente scritto con macro di Microsoft Foundation Class, ovvero **PROVARE**, **CATCH**, **GENERANO**e così via, utilizzare la gestione delle eccezioni C++ parole chiave **provare**, **catch**, e **throw**. Gli argomenti trattati includono:

- [Vantaggi di conversione](#_core_advantages_of_converting)

- [Conversione di codice con macro di eccezioni per utilizzare le eccezioni C++](#_core_doing_the_conversion)

##  <a name="_core_advantages_of_converting"></a> Vantaggi della conversione

È probabile che non necessario convertire il codice esistente, anche se è necessario essere consapevoli delle differenze tra le implementazioni di macro in MFC versione 3.0 e le implementazioni nelle versioni precedenti. Queste differenze e le successive modifiche nel comportamento del codice sono illustrate nella [eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).

I principali vantaggi di conversione sono:

- Codice che usa le parole chiave Gestione delle eccezioni C++ compila una leggermente più piccoli. File EXE o. DLL.

- Le parole chiave Gestione delle eccezioni C++ sono più versatili: È possibile gestire le eccezioni di qualsiasi tipo di dati che possono essere copiati (**int**, **float**, **char**e così via), mentre il macro di gestiscono delle eccezioni solo della classe `CException` e le classi derivate da quest'ultimo.

La differenza principale tra le macro e le parole chiave è che codice usando le macro "automatico" Elimina un'eccezione rilevata quando l'eccezione esce dall'ambito. Il codice tramite le parole chiave non le utilizza, pertanto è necessario eliminare esplicitamente un'eccezione rilevata. Per altre informazioni, vedere l'articolo [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).

Un'altra differenza è la sintassi. La sintassi per le parole chiave e le macro differisce per tre aspetti:

1. Gli argomenti di macro e le dichiarazioni di eccezione:

   Oggetto **CATCH** chiamata della macro ha la sintassi seguente:

   **CATCH (** *classe_eccezione*, *nome_puntatore_oggetto_eccezione* **)**

   Si noti che le virgole tra il nome della classe e il nome dell'oggetto puntatore.

   La dichiarazione di eccezione per il **catch** parola chiave viene utilizzata questa sintassi:

   **catch (** *tipo_eccezione* *nome_eccezione* **)**

   Questa istruzione di dichiarazione di eccezione indica il tipo di eccezione catch gestito dal blocco.

2. Delimitazione dei blocchi catch:

   Con le macro, il **INTERCETTARE** macro (con i relativi argomenti) inizia il primo blocco catch; gli **AND_CATCH** macro inizia il blocco catch successivo finalizzato e il **END_CATCH** (macro) Termina la sequenza di blocchi catch.

   Con le parole chiave, il **catch** inizia a ogni blocco catch (parola chiave) (con la dichiarazione di eccezione). Ha un equivalente per la **END_CATCH** macro; catch block termina con la parentesi graffa di chiusura.

3. L'espressione throw:

   Usano le macro **THROW_LAST** per generare nuovamente l'eccezione corrente. Il **throw** (parola chiave), senza alcun argomento, ha lo stesso effetto.

##  <a name="_core_doing_the_conversion"></a> Eseguire la conversione

#### <a name="to-convert-code-using-macros-to-use-the-c-exception-handling-keywords"></a>Per convertire il codice usando le macro per utilizzare le parole chiave Gestione delle eccezioni C++

1. Individuare tutte le occorrenze delle macro MFC **PROVARE**, **CATCH**, **AND_CATCH**, **END_CATCH**, **THROW**, e **THROW_LAST**.

2. Sostituire o eliminare tutte le occorrenze delle macro seguenti:

   **PROVARE** (sostituirla con **provare**)

   **INTERCETTARE** (sostituirla con **catch**)

   **AND_CATCH** (sostituirla con **catch**)

   **END_CATCH** (Elimina)

   **GENERARE** (sostituirla con **throw**)

   **THROW_LAST** (sostituirla con **throw**)

3. Modificare gli argomenti di macro in modo da formare le dichiarazioni di eccezioni validi.

   Ad esempio, modifica

   [!code-cpp[NVC_MFCExceptions#6](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_1.cpp)]

   in

   [!code-cpp[NVC_MFCExceptions#7](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_2.cpp)]

4. Modificare il codice nei blocchi catch, in modo che Elimina oggetti eccezione, se necessario. Per altre informazioni, vedere l'articolo [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).

Di seguito è riportato un esempio di codice di gestione delle eccezioni con macro eccezioni MFC. Si noti che poiché il codice nell'esempio seguente usa le macro, l'eccezione `e` viene eliminato automaticamente:

[!code-cpp[NVC_MFCExceptions#8](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_3.cpp)]

Il codice nell'esempio seguente usa le parole chiave delle eccezioni C++, in modo che l'eccezione deve essere eliminato in modo esplicito:

[!code-cpp[NVC_MFCExceptions#9](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_4.cpp)]

Per altre informazioni, vedere [eccezioni: utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)<br/>

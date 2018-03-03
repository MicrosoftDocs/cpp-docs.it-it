---
title: 'Eccezioni: Conversione da macro eccezioni MFC | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 36adda235cf71d1a44218c98c109e72847ca9136
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exceptions-converting-from-mfc-exception-macros"></a>Eccezioni: conversione da macro eccezioni MFC
Questo è un argomento avanzato.  
  
 In questo articolo viene descritto come convertire il codice esistente scritto con macro di Microsoft Foundation Class: **PROVARE**, **CATCH**, **generare**e così via, utilizzare la gestione delle eccezioni C++ parole chiave **provare**, **catch**, e `throw`. Gli argomenti trattati includono:  
  
-   [Vantaggi di conversione](#_core_advantages_of_converting)  
  
-   [Conversione di codice con macro delle eccezioni per utilizzare le eccezioni C++](#_core_doing_the_conversion)  
  
##  <a name="_core_advantages_of_converting"></a>Vantaggi della conversione  
 È probabile che non necessario convertire il codice esistente, anche se è necessario essere consapevoli delle differenze tra le implementazioni delle macro MFC versione 3.0 e nelle versioni precedenti. Queste differenze e le successive modifiche nel funzionamento del codice vengono illustrate [eccezioni: modifiche alle macro eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).  
  
 I principali vantaggi di conversione sono:  
  
-   Il codice che utilizza le parole chiave Gestione delle eccezioni C++ viene compilata leggermente inferiori. File EXE o. DLL.  
  
-   Le parole chiave Gestione delle eccezioni C++ sono più versatili: È possibile gestire le eccezioni di qualsiasi tipo di dati che possono essere copiati (`int`, **float**, `char`e così via), mentre le macro di gestiscono delle eccezioni solo della classe `CException` e le classi derivate da esso.  
  
 La differenza principale tra le macro e le parole chiave è che codice usando le macro "automatico" Elimina un'eccezione intercettata quando l'eccezione esce dall'ambito. Codice che usa le parole chiave esiste, pertanto è necessario eliminare esplicitamente un'eccezione rilevata. Per ulteriori informazioni, vedere l'articolo [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
 Un'altra differenza è la sintassi. La sintassi per le parole chiave e le macro differisce per tre aspetti:  
  
1.  Gli argomenti di macro e dichiarazioni di eccezione:  
  
     Oggetto **CATCH** la chiamata di macro con la seguente sintassi:  
  
     **CATCH (** *classe_eccezione*, *nome_puntatore_oggetto_eccezione* **)**  
  
     Si noti la virgola tra il nome della classe e il nome oggetto del puntatore.  
  
     La dichiarazione di eccezione per il **catch** parola chiave viene utilizzata questa sintassi:  
  
     **catch (** *tipo_eccezione* *nome_eccezione***)**  
  
     Questa istruzione di dichiarazione di eccezione indica il tipo di eccezione catch gestito dal blocco.  
  
2.  Delimitazione dei blocchi catch:  
  
     Con le macro di **CATCH** macro (con i relativi argomenti) inizia il primo blocco catch; il `AND_CATCH` macro inizia il blocco catch successivo finalizzato e `END_CATCH` macro termina la sequenza di blocchi catch.  
  
     Con le parole chiave, il **catch** ciascun blocco catch inizia (parola chiave) (con la dichiarazione di eccezione). Equivalente per il `END_CATCH` macro; catch blocco termina con la parentesi graffa di chiusura.  
  
3.  L'espressione throw:  
  
     Utilizzano le macro `THROW_LAST` per rigenerare l'eccezione corrente. Il `throw` (parola chiave), senza alcun argomento, ha lo stesso effetto.  
  
##  <a name="_core_doing_the_conversion"></a>Eseguire la conversione  
  
#### <a name="to-convert-code-using-macros-to-use-the-c-exception-handling-keywords"></a>Per convertire il codice di utilizzo di macro per utilizzare la gestione delle eccezioni C++  
  
1.  Individuare tutte le occorrenze delle macro MFC **PROVARE**, **CATCH**, `AND_CATCH`, `END_CATCH`, **generare**, e `THROW_LAST`.  
  
2.  Sostituire o eliminare tutte le occorrenze delle macro seguenti:  
  
     **PROVARE a** (sostituirla con **provare**)  
  
     **CATCH** (sostituirla con **catch**)  
  
     `AND_CATCH`(Sostituire con **catch**)  
  
     `END_CATCH`(Eliminare)  
  
     **GENERARE** (sostituirla con `throw`)  
  
     `THROW_LAST`(Sostituire con `throw`)  
  
3.  Modificare gli argomenti di macro in modo da formare dichiarazioni di eccezione valido.  
  
     Ad esempio, modifica  
  
     [!code-cpp[NVC_MFCExceptions#6](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_1.cpp)]  
  
     in  
  
     [!code-cpp[NVC_MFCExceptions#7](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_2.cpp)]  
  
4.  Modificare il codice nei blocchi catch in modo che elimina gli oggetti eccezione in base alle esigenze. Per ulteriori informazioni, vedere l'articolo [eccezioni: eccezioni di intercettazione ed eliminazione](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
 Di seguito è riportato un esempio di codice di gestione delle eccezioni con macro eccezioni MFC. Si noti che poiché il codice nell'esempio seguente usa le macro, l'eccezione `e` viene eliminato automaticamente:  
  
 [!code-cpp[NVC_MFCExceptions#8](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_3.cpp)]  
  
 Il codice nell'esempio seguente usa le parole chiave delle eccezioni C++, pertanto l'eccezione deve essere eliminato in modo esplicito:  
  
 [!code-cpp[NVC_MFCExceptions#9](../mfc/codesnippet/cpp/exceptions-converting-from-mfc-exception-macros_4.cpp)]  
  
 Per ulteriori informazioni, vedere [eccezioni: utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)


---
title: "Eccezioni: modifiche alle macro eccezioni nella versione 3.0 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, considerazioni per l'aggiornamento"
  - "CATCH (macro)"
  - "eccezioni, novità"
  - "THROW_LAST (macro)"
ms.assetid: 3aa20d8c-229e-449c-995c-ab879eac84bc
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezioni: modifiche alle macro eccezioni nella versione 3.0
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Si tratta di un argomento avanzato.  
  
 Nelle versioni di MFC 3,0 e versioni successive, le macro di gestione delle eccezioni sono state modificate per utilizzare le eccezioni C\+\+.  Questo articolo descrive come tali modifiche possono influire sul comportamento del codice esistente che utilizza le macro.  
  
 Questo articolo tratta i seguenti argomenti:  
  
-   [Tipi di eccezione e la macro CATCH](#_core_exception_types_and_the_catch_macro)  
  
-   [Ri\-generazione di eccezioni](#_core_re.2d.throwing_exceptions)  
  
##  <a name="_core_exception_types_and_the_catch_macro"></a> Tipi di eccezione e la macro CATCH  
 Nelle versioni precedenti di MFC, la macro **CATCH** utilizza le informazioni sui tipi di runtime MFC per determinare il tipo di eccezioni; il tipo di eccezioni è determinato, ovvero al sito catch.  Con le eccezioni C\+\+, tuttavia, il tipo di eccezione sono sempre determinate al sito throw dal tipo dell'oggetto dell'eccezione generato.  Ciò causerà incompatibilità nei rari casi in cui il tipo del puntatore all'oggetto generato è diverso dal tipo dell'oggetto generato.  
  
 Nell'esempio seguente viene illustrato il risultato di questa differenza tra la versione di MFC 3,0 e versioni precedenti:  
  
 [!code-cpp[NVC_MFCExceptions#1](../mfc/codesnippet/CPP/exceptions-changes-to-exception-macros-in-version-3-0_1.cpp)]  
  
 Questo codice si comporta in modo diverso nella versione 3,0 perché il controllo passa sempre prima a **Catch** il blocco con una dichiarazione dell'eccezione corrispondente.  Risultato dell'espressione lanciata  
  
 [!code-cpp[NVC_MFCExceptions#19](../mfc/codesnippet/CPP/exceptions-changes-to-exception-macros-in-version-3-0_2.cpp)]  
  
 viene generato come **CException\***, anche se viene costruito come **CCustomException**.  La macro **CATCH** in MFC versione 2.5 e precedente usa `CObject::IsKindOf` per verificare il tipo in fase di esecuzione.  A causa dell'espressione  
  
 [!code-cpp[NVC_MFCExceptions#20](../mfc/codesnippet/CPP/exceptions-changes-to-exception-macros-in-version-3-0_3.cpp)]  
  
 è true, i primi blocchi catch catturano l'eccezione.  Nella versione 3,0, che utilizza le eccezioni C\+\+ per implementare molte delle macro di gestione delle eccezioni, il secondo blocco catch corrisponde l'eccezione `CException`.  
  
 Il codice di questo tipo è raro.  In genere viene visualizzato quando un oggetto eccezione viene passato a un'altra funzione che accetta **CException\*** generico, esegue l'elaborazione "pre\-throw" e infine genera l'eccezione.  
  
 Per risolvere questo problema, spostare l'espressione throw dalla funzione nel codice chiamante e genera un'eccezione di tipo conosciuto dal compilatore quando viene generata un'eccezione.  
  
##  <a name="_core_re.2d.throwing_exceptions"></a> Ri\-generazione di eccezioni  
 Un blocco catch non può generare lo stesso puntatore di eccezione che ha intercettato.  
  
 Ad esempio, questo codice è valido nelle versioni precedenti, ma avrà risultati imprevisti con la versione 3.0:  
  
 [!code-cpp[NVC_MFCExceptions#2](../mfc/codesnippet/CPP/exceptions-changes-to-exception-macros-in-version-3-0_4.cpp)]  
  
 Utilizzando **THROW** nel blocco catch causa l'eliminazione del puntatore `e` in modo che il sito esterno catch riceverà un puntatore non valido.  Utilizzare `THROW_LAST` per generare nuovamente `e`.  
  
 Per ulteriori informazioni, consultare [Eccezioni: Rilevazione e l'eliminazione delle eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
---
title: "Eccezioni: conversione da macro eccezioni MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocchi catch, delimitazione"
  - "CException (classe), eliminazione di oggetti classe CException"
  - "conversioni, codice scritto con macro MFC"
  - "eccezioni di conversione"
  - "gestione eccezioni, eccezioni di conversione"
  - "oggetti eccezione"
  - "oggetti eccezione, eliminazione"
  - "eccezioni, conversione"
  - "eccezioni, eliminazione di oggetti eccezione"
  - "parole chiave [C++], macro"
  - "macro, parole chiave C++"
ms.assetid: bd3ac3b3-f3ce-4fdd-a168-a2cff13ed796
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Eccezioni: conversione da macro eccezioni MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Si tratta di un argomento avanzato.  
  
 In questo articolo viene illustrato come convertire il codice esistente scritto con le macro MFC \- **PROVA**, **CATCH**, **THROW** e così via, per utilizzare le parole chiave **Prova**, **Catch** e `throw`di gestione delle eccezioni C\+\+.  Gli argomenti trattati includono  
  
-   [Vantaggi di conversione](#_core_advantages_of_converting)  
  
-   [Conversione del codice con le macro di eccezione per utilizzare le eccezioni C\+\+](#_core_doing_the_conversion)  
  
##  <a name="_core_advantages_of_converting"></a> Vantaggi di conversione  
 Non è probabilmente necessario convertire il codice esistente, anche se è opportuno conoscere le differenze tra le macro implementazioni in MFC versione 3,0 e le implementazioni nelle versioni precedenti.  Queste differenze e successive modifiche apportate al comportamento di codice vengono trattate in [Eccezioni: Modifiche alle macro di eccezione nella versione 3,0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).  
  
 I principali vantaggi di conversione sono:  
  
-   Il codice che utilizza le parole chiave di gestione delle eccezioni C\+\+ viene compilato in un file EXE o DLL leggermente più piccolo.  
  
-   Le parole chiave di gestione delle eccezioni C\+\+ sono più versatili: Possono gestire le eccezioni di qualsiasi tipo di dati che possono essere copiate \(`int`, **mobile**, `char`, e così via\), sebbene le macro gestiscono le eccezioni solo di classe `CException` e delle classi derivate da.  
  
 La differenza principale tra le macro e le parole chiave del codice utilizzando le macro "automaticamente eliminato" un'eccezione rilevata quando viene generata dall'ambito.  Il codice utilizzando le parole chiave contrario, pertanto è necessario eliminare in modo esplicito un'eccezione intercettata.  Per ulteriori informazioni, vedere l'articolo [Eccezioni: Rilevazione e l'eliminazione delle eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
 Un'altra differenza consiste sintassi.  La sintassi per le macro e le parole chiave è diverso in tre aspetti:  
  
1.  Macro argomenti e le dichiarazioni di un'eccezione:  
  
     Una chiamata di macro di **CATCH** con la seguente sintassi:  
  
     **CATCH\(** *exception\_class*, *exception\_object\_pointer\_name* **\)**  
  
     Si noti la virgola tra il nome della classe e il nome del puntatore all'oggetto.  
  
     La dichiarazione di eccezione per la parola chiave di **Catch** utilizza questa sintassi:  
  
     **catch\(** *exception\_type* *exception\_name***\)**  
  
     Questa istruzione di dichiarazione di eccezione indica il tipo di eccezione che il blocco catch.  
  
2.  Delimitazione dei blocchi catch:  
  
     Con le macro, la macro di **CATCH** \(con i relativi argomenti\) inizia il primo blocco catch; i blocchi catch successivi di avviare macro di `AND_CATCH` e le macro di `END_CATCH` termina la sequenza di blocchi catch.  
  
     Con parole chiave, la parola chiave di **Catch** \(con la dichiarazione di eccezione\) avvia ogni blocco catch.  Non esiste alcuna controparte alla macro di `END_CATCH` ; il blocco catch termina con la parentesi graffa di chiusura.  
  
3.  L'espressione throw:  
  
     Le macro utilizzano il generare nuovamente di `THROW_LAST` l'eccezione corrente.  La parola chiave di `throw`, senza argomenti, ha lo stesso effetto.  
  
##  <a name="_core_doing_the_conversion"></a> Effettuare la conversione  
  
#### Per convertire codice utilizzando le macro per utilizzare le parole chiave di gestione delle eccezioni C\+\+  
  
1.  Individuare tutte le occorrenze delle macro **PROVA**, **CATCH**, `AND_CATCH`, `END_CATCH`, **THROW** e `THROW_LAST`MFC.  
  
2.  Sostituire o eliminare tutte le occorrenze di macro seguenti:  
  
     **PROVA** \(Sostituirlo con **Prova**\)  
  
     **CATCH** \(Sostituirlo con **Catch**\)  
  
     `AND_CATCH` \(sostituirlo con **Catch**\)  
  
     `END_CATCH` \(elimina\)  
  
     **THROW** \(Sostituirlo con `throw`\)  
  
     `THROW_LAST` \(sostituirlo con `throw`\)  
  
3.  Modificare la macro argomenti in modo che formino le dichiarazioni valide di eccezione.  
  
     Ad esempio, modifica  
  
     [!code-cpp[NVC_MFCExceptions#6](../mfc/codesnippet/CPP/exceptions-converting-from-mfc-exception-macros_1.cpp)]  
  
     in  
  
     [!code-cpp[NVC_MFCExceptions#7](../mfc/codesnippet/CPP/exceptions-converting-from-mfc-exception-macros_2.cpp)]  
  
4.  Modificare il codice nei blocchi catch in modo da eliminare in base alle esigenze gli oggetti exception.  Per ulteriori informazioni, vedere l'articolo [Eccezioni: Rilevazione e l'eliminazione delle eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
 Di seguito è riportato un esempio di codice di gestione delle eccezioni utilizzando le macro di eccezione MFC.  Si noti che poiché il codice nell'esempio vengono utilizzate le macro, l'eccezione `e` viene eliminato automaticamente:  
  
 [!code-cpp[NVC_MFCExceptions#8](../mfc/codesnippet/CPP/exceptions-converting-from-mfc-exception-macros_3.cpp)]  
  
 Il codice nell'esempio seguente vengono utilizzate le parole chiave delle eccezioni C\+\+, pertanto eccezione venga eliminata esplicitamente:  
  
 [!code-cpp[NVC_MFCExceptions#9](../mfc/codesnippet/CPP/exceptions-converting-from-mfc-exception-macros_4.cpp)]  
  
 Per ulteriori informazioni, vedere [Eccezioni: Utilizzando le macro MFC e delle eccezioni C\+\+](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
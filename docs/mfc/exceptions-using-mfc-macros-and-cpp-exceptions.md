---
title: "Eccezioni: utilizzo di macro MFC ed eccezioni C++ | Microsoft Docs"
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
  - "blocchi catch, eliminazione esplicita di codice in"
  - "blocchi catch, misto"
  - "gestione eccezioni, MFC"
  - "gestione eccezioni, linguaggio misto"
  - "oggetti eccezione"
  - "oggetti eccezione, eliminazione"
  - "eccezioni, macro MFC e parole chiave C++"
  - "danneggiamento dell'heap"
  - "perdite di memoria, oggetto eccezione non eliminato"
  - "blocchi catch annidati"
  - "blocchi try annidati"
  - "gestione eccezioni try-catch, combinazione di macro MFC e parole chiave C++"
  - "gestione eccezioni try-catch, blocchi try annidati"
ms.assetid: d664a83d-879b-44d4-bdf0-029f0aca69e9
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezioni: utilizzo di macro MFC ed eccezioni C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato considerazioni per scrivere codice che utilizza sia le macro di gestione delle eccezioni MFC che le parole chiave di gestione delle eccezioni C\+\+.  
  
 Questo articolo vengono trattati i seguenti argomenti:  
  
-   [Parole chiave e macro di eccezione di combinazione](#_core_mixing_exception_keywords_and_macros)  
  
-   [Blocco try nei blocchi catch](#_core_try_blocks_inside_catch_blocks)  
  
##  <a name="_core_mixing_exception_keywords_and_macros"></a> Parole chiave e macro di eccezione di combinazione  
 È possibile combinare parole chiave di macro di eccezione MFC e delle eccezioni C\+\+ nello stesso programma.  Ma non è possibile combinare le macro MFC le parole chiave delle eccezioni C\+\+ nello stesso blocco perché macro eliminano gli oggetti exception automaticamente quando escono di ambito, mentre il codice utilizzando le parole chiave di gestione delle eccezioni non è possibile.  Per ulteriori informazioni, vedere l'articolo [Eccezioni: Rilevazione e l'eliminazione delle eccezioni](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
 La differenza principale tra le macro e le parole chiave delle macro "automaticamente" delete un'eccezione rilevata quando viene generata dall'ambito.  Il codice utilizzando le parole chiave non fa; le eccezioni individuate in un blocco catch devono eliminata esplicitamente.  Le macro di combinazione e parole chiave delle eccezioni C\+\+ possono causare perdite di memoria a un oggetto eccezione non viene eliminato, o il danneggiamento dell'heap quando un'eccezione viene eliminato due volte.  
  
 Il codice seguente, ad esempio, invalida il puntatore di un'eccezione:  
  
 [!code-cpp[NVC_MFCExceptions#10](../mfc/codesnippet/CPP/exceptions-using-mfc-macros-and-cpp-exceptions_1.cpp)]  
  
 Il problema si verifica perché `e` eliminato quando l'esecuzione esce dal blocco "" interno di **CATCH**.  L'utilizzo della macro di `THROW_LAST` anziché l'istruzione di **THROW** causerà il blocco "extern" di **CATCH** a ricevere un puntatore valido:  
  
 [!code-cpp[NVC_MFCExceptions#11](../mfc/codesnippet/CPP/exceptions-using-mfc-macros-and-cpp-exceptions_2.cpp)]  
  
##  <a name="_core_try_blocks_inside_catch_blocks"></a> Blocco try nei blocchi catch  
 Non è possibile generare nuovamente l'eccezione corrente dall'interno di un blocco di **Prova** presente in un blocco di **CATCH**.  Nell'esempio non è valido:  
  
 [!code-cpp[NVC_MFCExceptions#12](../mfc/codesnippet/CPP/exceptions-using-mfc-macros-and-cpp-exceptions_3.cpp)]  
  
 Per ulteriori informazioni, vedere [Eccezioni: Indice esame di eccezione](../mfc/exceptions-examining-exception-contents.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)
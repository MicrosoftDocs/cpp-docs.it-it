---
title: "Gestione di eccezioni in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "try-catch (parola chiave) [C++], gestione eccezioni"
ms.assetid: a6aa08de-669d-4ce8-9ec3-ec20d1354fcf
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione di eccezioni in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'eccezione è una condizione di errore, probabilmente non controllata dal programma, che impedisce al programma di proseguire il proprio percorso di esecuzione normale.  Alcune operazioni, tra cui la creazione di oggetti, i file di input\/output e le chiamate di funzione effettuate da altri moduli, possono dare origine a delle eccezioni anche quando il programma viene eseguito correttamente.  Quando è affidabile, il codice prevede e gestisce le eccezioni.  
  
 Per rilevare errori logici all'interno di un solo programma o modulo, utilizzare le asserzioni, anziché le eccezioni \(vedere [Utilizzo delle asserzioni](../Topic/C-C++%20Assertions.md)\).  
  
 Visual C\+\+ supporta tre tipi di gestione delle eccezioni:  
  
-   [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md)  
  
     Per la maggior parte dei programmi C\+\+, si dovrebbe utilizzare la gestione delle eccezioni C\+\+, che è indipendente dai tipi e assicura che i distruttori di oggetti siano richiamati durante la rimozione dello stack.  
  
-   [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)  
  
     Windows fornisce il proprio meccanismo di eccezione, denominato SEH.  Non è consigliato per la programmazione in MFC o in C\+\+.  Usare SEH solo nei programmi C non MFC.  
  
-   [Eccezioni MFC](../mfc/exception-handling-in-mfc.md)  
  
     A partire dalla versione 3.0, MCF utilizza le eccezioni C\+\+, ma supporta ancora le precedenti macro di gestione delle eccezioni, che sono simili, nella forma, alle eccezioni C\+\+.  Sebbene per la creazione di nuovi programmi non sia consigliato utilizzare tali macro, le stesse sono ancora supportate per garantire la compatibilità con le versioni precedenti.  Nei programmi che già utilizzano le macro, è possibile usare liberamente anche le eccezioni C\+\+.  A partire dalla versione 2.0 di Visual C\+\+, durante la pre\-elaborazione, le macro vengono valutate nelle parole chiave di gestione delle eccezioni definite nell'implementazione di Visual C\+\+ del linguaggio C\+\+.  È possibile lasciare le macro di gestione delle eccezioni esistenti al loro posto, quando si inizia a utilizzare le eccezioni C\+\+.  
  
 Usare l'opzione del compilatore [\/EH](../build/reference/eh-exception-handling-model.md) per specificare il tipo di gestione delle eccezioni da utilizzare in un progetto. Il tipo predefinito corrisponde alla gestione delle eccezioni C\+\+.  Non combinare i meccanismi di gestione degli errori; ad esempio non usare le eccezioni C\+\+ con la gestione strutturata delle eccezioni.  L'uso della gestione delle eccezioni C\+\+ rende il codice più portabile e consente di gestire eccezioni di ogni tipo.  Per altre informazioni sugli svantaggi della gestione strutturata delle eccezioni, vedere [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md).  Per consigli su come combinare le macro MFC e le eccezioni C\+\+, vedere [Eccezioni: Utilizzo delle macro MFC e delle eccezioni C\+\+](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md).  
  
 Per informazioni sulla gestione delle eccezioni nelle applicazioni CLR, vedere [Exception Handling](../windows/exception-handling-cpp-component-extensions.md).  
  
 Per informazioni sulla gestione delle eccezioni nei processori x64, vedere [Gestione delle eccezioni \(x64\)](../build/exception-handling-x64.md).  
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)
---
title: "Exception Handling  (C++ Component Extensions) | Microsoft Docs"
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
  - "structured exception handling, managed exceptions"
  - "Exception class, managed applications"
  - "exception handling"
  - "C++ exception handling"
  - "exception handling, types of"
  - "managed exceptions"
  - "System::Exception class in managed applications"
ms.assetid: ccb11fe8-6938-41ac-b477-a183e85865b9
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Exception Handling  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le applicazioni compilate con l'opzione di compilatore **\/ZW** o l'opzione di compilatore **\/clr** usano entrambe le *eccezioni* per gestire gli errori imprevisti durante l'esecuzione del programma.  Gli argomenti seguenti discutono la gestione delle eccezioni nelle applicazioni C\+\+\/CLI o C\+\+\/CX.  
  
## In questa sezione  
 [Concetti di base per l'utilizzo delle eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md)  
 Viene descritto il generare eccezioni e l'utilizzo di blocchi `try`\/`catch`.  
  
 [Differenze nel comportamento di gestione delle eccezioni](../dotnet/differences-in-exception-handling-behavior-under-clr.md)  
 Discute le differenze dal comportamento standard di gestione delle eccezioni C\+\+.  
  
 [finally](../dotnet/finally.md)  
 Discute come utilizzare la parola chiave finally.  
  
 [Procedura: definire e installare un gestore eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)  
 Dimostra come le eccezioni non gestite possono essere catturate.  
  
 [Procedura: rilevare eccezioni nel codice nativo generate da MSIL](../dotnet/how-to-catch-exceptions-in-native-code-thrown-from-msil.md)  
 Discute come intercettare le eccezioni C\+\+ e CLR nel codice nativo.  
  
 [Procedura: definire e installare un gestore eccezioni globale](../dotnet/how-to-define-and-install-a-global-exception-handler.md)  
 Dimostra come catturare tutte le eccezioni non gestite.  
  
## Sezioni correlate  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)  
 Descrive la gestione delle eccezioni in C\+\+.  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)
---
title: "Avviso del compilatore (livello 1) C4297 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4297"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4297"
ms.assetid: ba92fcdc-9f70-4f60-abe6-281f9582ca59
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4297
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': la funzione genera un'eccezione benché ciò non fosse previsto  
  
 Una dichiarazione di funzione contiene un identificatore `noexcept` \(possibilmente implicito\), un identificatore di eccezione `throw` vuoto o un attributo [\_\_declspec\(nothrow\)](../../cpp/nothrow-cpp.md) e la definizione contiene una o più istruzioni [throw](../../cpp/try-throw-and-catch-statements-cpp.md).  Per risolvere l'errore C4297, non tentare di generare eccezioni in funzioni dichiarate `__declspec(nothrow)`, `noexcept(true)` o `throw()`.  In alternativa, rimuovere la specifica `noexcept`, `throw()` o `__declspec(nothrow)`.  
  
 Per impostazione predefinita, il compilatore genera identificatori `noexcept(true)` impliciti per le funzioni di deallocatori e distruttori definiti dall'utente e le speciali funzioni membro generate dal compilatore.  Ciò è conforme allo standard ISO C\+\+11.  Per evitare la generazione di identificatori noexcept impliciti e ripristinare il comportamento non standard del compilatore di Visual Studio 2013, usare l'opzione del compilatore **\/Zc:implicitNoexcept\-**.  Per altre informazioni, vedere [\/Zc:implicitNoexcept \(identificatori di eccezioni implicite\)](../../build/reference/zc-implicitnoexcept-implicit-exception-specifiers.md).  
  
 Per ulteriori informazioni sulle specifiche di eccezione, vedere [Specifiche di eccezioni \(generazione\)](../../cpp/exception-specifications-throw-cpp.md).  Inoltre, per informazioni su come modificare il comportamento di gestione delle eccezioni in fase di compilazione, vedere [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md)  
  
 Questo avviso viene generato anche per le funzioni \_\_declspec\([dllexport](../../cpp/dllexport-dllimport.md)\) contrassegnate come "C" esterno, anche se sono funzioni C\+\+.  
  
 L'esempio seguente genera l'errore C4297:  
  
```  
// C4297.cpp  
// compile with: /W1 /LD  
void __declspec(nothrow) f1()   // declared nothrow  
// try the following line instead  
// void f1()  
{  
   throw 1;   // C4297  
}  
```
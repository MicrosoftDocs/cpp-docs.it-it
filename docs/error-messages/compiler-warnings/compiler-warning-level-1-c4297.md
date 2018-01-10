---
title: Avviso (livello 1) del compilatore C4297 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4297
dev_langs: C++
helpviewer_keywords: C4297
ms.assetid: ba92fcdc-9f70-4f60-abe6-281f9582ca59
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9253ae709109927e69940d5023b542dfb543c6de
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4297"></a>Avviso del compilatore (livello 1) C4297
'function': la funzione genera un'eccezione benché ciò non fosse previsto  
  
 Una dichiarazione di funzione contiene un (possibilmente implicita) `noexcept` identificatore, un oggetto vuoto `throw` identificatore di eccezione o un [__declspec(nothrow)](../../cpp/nothrow-cpp.md) attributo e la definizione contiene uno o più [throw ](../../cpp/try-throw-and-catch-statements-cpp.md) istruzioni. Per risolvere l'errore C4297, non tentare di generare eccezioni in funzioni dichiarate `__declspec(nothrow)`, `noexcept(true)` o `throw()`. In alternativa, rimuovere la specifica `noexcept`, `throw()` o `__declspec(nothrow)`.  
  
 Per impostazione predefinita, il compilatore genera identificatori `noexcept(true)` impliciti per le funzioni di deallocatori e distruttori definiti dall'utente e le speciali funzioni membro generate dal compilatore. Ciò è conforme allo standard ISO C++11. Per evitare la generazione di identificatori noexcept impliciti e ripristinare il compilatore per il comportamento non standard di Visual Studio 2013, utilizzare il **/Zc:implicitNoexcept-** l'opzione del compilatore. Per ulteriori informazioni, vedere [/Zc: implicitnoexcept (identificatori di eccezioni implicite)](../../build/reference/zc-implicitnoexcept-implicit-exception-specifiers.md).  
  
 Per ulteriori informazioni sulle specifiche di eccezione, vedere [specifiche di eccezioni (generazione)](../../cpp/exception-specifications-throw-cpp.md). Vedere anche [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) per informazioni su come modificare il comportamento delle eccezioni in fase di compilazione.  
  
 Questo avviso viene generato anche per declspec ([dllexport](../../cpp/dllexport-dllimport.md)) funzioni contrassegnate extern "C", anche se sono funzioni C++.  
  
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
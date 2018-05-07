---
title: Compilatore avviso (livello 4) C4702 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4702
dev_langs:
- C++
helpviewer_keywords:
- C4702
ms.assetid: d8198c1e-8762-42a6-9e6b-cb568b7a1686
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29c2d6b0328fd8dd4cd6f9a226253036b62d03ab
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4702"></a>Avviso del compilatore (livello 4) C4702
codice non raggiungibile  
  
 Questo avviso è il risultato di operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: codice non eseguibile. Quando il compilatore (back-end) rileva codice non eseguibile, C4702, verrà generato un avviso di livello 4.  
  
 Per il codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rimuovere il codice non eseguibile o assicurarsi che tutto il codice sorgente sia raggiungibile tramite un flusso di esecuzione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4702.  
  
```  
// C4702.cpp  
// compile with: /W4  
#include <stdio.h>  
  
int main() {  
   return 1;  
   printf_s("I won't print.\n");   // C4702 unreachable  
}  
```  
  
## <a name="example"></a>Esempio  
 Durante la compilazione con **/GX**, **/EHc**, **/EHsc**, o **/EHac** e utilizza le funzioni extern C, codice può diventare non è raggiungibile perché extern C si presuppone che le funzioni non generino, quindi il blocco catch non è raggiungibile.  Se si ritiene che questo avviso non è valido perché una funzione può generare un'eccezione, eseguire la compilazione con **/EHa** o **/EHs**, a seconda dell'eccezione generata.  
  
 Per ulteriori informazioni, vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) per ulteriori informazioni.  
  
 L'esempio seguente genera l'errore C4702.  
  
```  
// C4702b.cpp  
// compile with: /W4 /EHsc  
#include <iostream>  
  
using namespace std;  
extern "C" __declspec(dllexport) void Function2(){}  
  
int main() {  
   try {  
      Function2();  
   }  
   catch (...) {  
      cout << "Exp: Function2!" << endl;   // C4702  
   }  
}  
```
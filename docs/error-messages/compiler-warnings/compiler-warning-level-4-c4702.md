---
title: Compilatore avviso (livello 4) C4702 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4702
dev_langs: C++
helpviewer_keywords: C4702
ms.assetid: d8198c1e-8762-42a6-9e6b-cb568b7a1686
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9ef7420f3699363d33d195e2455ab9fddf88de40
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
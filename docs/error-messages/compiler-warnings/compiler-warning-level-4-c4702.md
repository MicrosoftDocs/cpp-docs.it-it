---
title: Avviso del compilatore (livello 4) C4702
ms.date: 11/04/2016
f1_keywords:
- C4702
helpviewer_keywords:
- C4702
ms.assetid: d8198c1e-8762-42a6-9e6b-cb568b7a1686
ms.openlocfilehash: 5e46bfef925f999ed7f04b5bbe7c88800209ed14
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990642"
---
# <a name="compiler-warning-level-4-c4702"></a>Avviso del compilatore (livello 4) C4702

codice non eseguibile

Questo avviso è il risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: codice non eseguibile. Quando il compilatore (back-end) rileva codice non eseguibile, genererà C4702, un avviso di livello 4.

Per il codice valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++studio, rimuovere il codice non eseguibile o assicurarsi che tutto il codice sorgente sia raggiungibile da un certo flusso di esecuzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4702.

```cpp
// C4702.cpp
// compile with: /W4
#include <stdio.h>

int main() {
   return 1;
   printf_s("I won't print.\n");   // C4702 unreachable
}
```

## <a name="example"></a>Esempio

Quando si esegue la compilazione con **/GX**, **/EHC**, **/EHsc**o **/EHac** e si usano le funzioni extern c, il codice può diventare irraggiungibile perché si presuppone che le funzioni extern c non vengano generate, quindi il blocco catch non è raggiungibile.  Se si ritiene che questo avviso non sia valido perché una funzione può generare, compilare con **/EHA** o **/EHS**, a seconda dell'eccezione generata.

Per ulteriori informazioni, vedere [/eh (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) .

L'esempio seguente genera l'C4702.

```cpp
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

---
title: Compilatore avviso (livello 4) C4702 | Microsoft Docs
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
ms.openlocfilehash: 1d15072099c6329eced8ab9dd9c78f8f48c31fe7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057137"
---
# <a name="compiler-warning-level-4-c4702"></a>Avviso del compilatore (livello 4) C4702

codice non eseguibile

Questo avviso è il risultato di operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: codice non raggiungibile. Quando il compilatore (back-end) rilevato codice non eseguibile, C4702, verrà generato un avviso di livello 4.

Per il codice che è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rimuovere il codice non eseguibile o assicurarsi che tutto il codice sorgente sia raggiungibile da un flusso di esecuzione.

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

Durante la compilazione con **/GX**, **/EHc**, **/EHsc**, oppure **/EHac** e Usa le funzioni extern C, codice può diventare non raggiungibile perché extern C le funzioni si presuppone che non generino, pertanto il blocco catch non raggiungibile.  Se si ritiene che questo avviso non è valido perché una funzione può generare un'eccezione, eseguire la compilazione con **/EHa** oppure **/EHs**, in base all'eccezione generata.

Per altre informazioni, vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) per altre informazioni.

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
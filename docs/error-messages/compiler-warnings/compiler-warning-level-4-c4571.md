---
title: Avviso del compilatore (livello 4) C4571
ms.date: 11/04/2016
f1_keywords:
- C4571
helpviewer_keywords:
- C4571
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
ms.openlocfilehash: 4fe99e12c5d2dfb725e1e4aa0ac2fb0b1ccb4f28
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219885"
---
# <a name="compiler-warning-level-4-c4571"></a>Avviso del compilatore (livello 4) C4571

Informativo: la semantica di catch (...) è cambiata da Visual C++ 7,1; le eccezioni strutturate (SEH) non vengono più rilevate

C4571 viene generato per ogni blocco catch (...) quando si esegue la compilazione con **/EHS**.

Quando si esegue la compilazione con **/EHS**, un blocco catch (...) non rileverà un'eccezione strutturata, ad esempio la divisione per zero, il puntatore null. un blocco catch (...) rileverà solo le eccezioni C++ generate in modo esplicito.  Per altre informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).

Per impostazione predefinita, questo avviso non è attivo.  Attivare questo avviso per assicurarsi che, quando si esegue la compilazione con **/EHS** , i blocchi catch (...) non intendano rilevare eccezioni strutturate.  Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

È possibile risolvere C4571 in uno dei modi seguenti:

- Compilare con **/EHA** se si vuole ancora che i blocchi catch (...) rilevano eccezioni strutturate.

- Non abilitare C4571 se non si desidera che i blocchi catch (...) rilevano eccezioni strutturate, ma si desidera comunque utilizzare blocchi catch (...).  È comunque possibile intercettare le eccezioni strutturate usando le parole chiave di gestione delle eccezioni strutturate (**__try**, **`__except`** e **`__finally`** ).  Tenere tuttavia presente che, quando viene generata un'eccezione C++, i distruttori **/EHS** compilati verranno chiamati solo quando si verifica un'eccezione SEH.

- Sostituire il blocco catch (...) con blocchi catch per specifiche eccezioni C++ e, facoltativamente, aggiungere la gestione delle eccezioni strutturata attorno alla gestione delle eccezioni C++ (**__try**, **`__except`** e **`__finally`** ).  Per ulteriori informazioni, vedere [gestione delle eccezioni strutturata (C/C++)](../../cpp/structured-exception-handling-c-cpp.md) .

Per ulteriori informazioni, vedere [/eh (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4571.

```cpp
// C4571.cpp
// compile with: /EHs /W4 /c
#pragma warning(default : 4571)
int main() {
   try {
      int i = 0, j = 1;
      j /= i;   // this will throw a SE (divide by zero)
   }
   catch(...) {}   // C4571 warning
}
```

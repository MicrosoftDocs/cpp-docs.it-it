---
title: Avviso del compilatore (livello 4) C4571
ms.date: 11/04/2016
f1_keywords:
- C4571
helpviewer_keywords:
- C4571
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
ms.openlocfilehash: 3a8f2093e90f8a681d171e19e2b8a066546f8684
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990667"
---
# <a name="compiler-warning-level-4-c4571"></a>Avviso del compilatore (livello 4) C4571

informativo: la semantica di catch (...) C++ è cambiata da Visual 7,1; le eccezioni strutturate (SEH) non vengono più rilevate

C4571 viene generato per ogni blocco catch (...) quando si esegue la compilazione con **/EHS**.

Quando si esegue la compilazione con **/EHS**, un blocco catch (...) non rileverà un'eccezione strutturata, ad esempio la divisione per zero, il puntatore null. un blocco catch (...) rileverà solo le C++ eccezioni generate in modo esplicito.  Per altre informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).

Per impostazione predefinita, questo avviso non è attivo.  Attivare questo avviso per assicurarsi che, quando si esegue la compilazione con **/EHS** , i blocchi catch (...) non intendano rilevare eccezioni strutturate.  Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

È possibile risolvere C4571 in uno dei modi seguenti:

- Compilare con **/EHA** se si vuole ancora che i blocchi catch (...) rilevano eccezioni strutturate.

- Non abilitare C4571 se non si desidera che i blocchi catch (...) rilevano eccezioni strutturate, ma si desidera comunque utilizzare blocchi catch (...).  È comunque possibile intercettare le eccezioni strutturate usando le parole chiave di gestione delle eccezioni strutturate ( **__try**, **__except**e **__finally**).  Tenere tuttavia presente che, quando viene generata un' C++ eccezione, i distruttori/EHS compilati verranno chiamati solo quando si verifica un'eccezione SEH.

- Sostituire il blocco catch (...) con i blocchi catch C++ per le eccezioni specifiche e, facoltativamente, aggiungere la gestione C++ delle eccezioni strutturata attorno alla gestione delle eccezioni ( **__try**, **__except**e **__finally**).  Per ulteriori informazioni, vedere [gestione delleC++eccezioni strutturata (C/)](../../cpp/structured-exception-handling-c-cpp.md) .

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

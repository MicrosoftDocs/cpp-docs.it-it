---
title: Avviso del compilatore (livello 4) C4571
description: Documenta l'avviso del compilatore C++ Microsoft C4571.
ms.date: 08/24/2020
f1_keywords:
- C4571
helpviewer_keywords:
- C4571
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
ms.openlocfilehash: 35f2b30a8ab7cfcc27ed7aae3aedd9bc81efacc8
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898559"
---
# <a name="compiler-warning-level-4-c4571"></a>Avviso del compilatore (livello 4) C4571

> Informativo: la `catch(...)` semantica è cambiata da Visual C++ 7,1; le eccezioni strutturate (SEH) non vengono più rilevate

C4571 viene generato per ogni `catch(...)` blocco quando si specifica l' **`/EHs`** opzione del compilatore.

## <a name="remarks"></a>Osservazioni

Quando si specifica l' **`/EHs`** opzione del compilatore, i `catch(...)` blocchi non intercettano le eccezioni strutturate. (Dividere per zero o eccezioni del puntatore null, ad esempio). Un `catch(...)` blocco intercetta solo le eccezioni C++ generate in modo esplicito. Per altre informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).

Per impostazione predefinita, questo avviso non è attivo.  Attivare questo avviso per assicurarsi che, quando si esegue la compilazione con **`/EHs`** i `catch (...)` blocchi, non rilevano eccezioni strutturate. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

È possibile risolvere C4571 in uno dei modi seguenti:

- Compilare con **`/EHa`** se si vuole ancora che i blocchi rilevano `catch(...)` eccezioni strutturate.

- Non abilitare C4571 se non si desidera che i blocchi rilevano `catch(...)` eccezioni strutturate, ma si desidera comunque utilizzare i `catch(...)` blocchi.  È comunque possibile intercettare le eccezioni strutturate usando le parole chiave di gestione delle eccezioni strutturate ( **`__try`** , **`__except`** e **`__finally`** ).  Tuttavia, quando viene compilato usando **`/EHs`** , i distruttori vengono chiamati solo quando viene generata un'eccezione C++, non quando si verifica un'eccezione SEH.

- Sostituire `catch(...)` i blocchi con blocchi catch per specifiche eccezioni C++ e, facoltativamente, aggiungere la gestione delle eccezioni strutturata attorno alla gestione delle eccezioni c++ ( **`__try`** , **`__except`** e **`__finally`** ).   Per ulteriori informazioni, vedere [gestione delle eccezioni strutturate (C/C++)](../../cpp/structured-exception-handling-c-cpp.md) e [ `/EH` (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md).

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

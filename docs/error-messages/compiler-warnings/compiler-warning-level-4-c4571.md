---
title: Avviso del compilatore (livello 4) C4571
ms.date: 11/04/2016
f1_keywords:
- C4571
helpviewer_keywords:
- C4571
ms.assetid: 07aa17bd-b15c-4266-824c-57cc445e8edd
ms.openlocfilehash: 92164bf297a44871897b6c6150eb54f8c5ccf3cc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62220455"
---
# <a name="compiler-warning-level-4-c4571"></a>Avviso del compilatore (livello 4) C4571

Messaggio informativo: catch è cambiata dopo Visual C++ 7.1; le eccezioni strutturate (SEH) non vengono più rilevate

Quando la compilazione con C4571 viene generato per ogni blocco catch **/EHs**.

Durante la compilazione con **/EHs**, un blocco catch non rileverà un'eccezione strutturata (di divisione per zero o un puntatore null, ad esempio); un catch rileverà solo generate in modo esplicito, le eccezioni C++.  Per altre informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).

Per impostazione predefinita, questo avviso non è attivo.  Attivare la visualizzazione dell'avviso per assicurare che quando si esegue la compilazione con **/EHs** i blocchi catch (...) non si prevede di intercettare le eccezioni strutturate.  Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

È possibile risolvere C4571 in uno dei modi seguenti,

- Eseguire la compilazione con **/EHa** se si desidera che i blocchi catch per intercettare le eccezioni strutturate.

- Non abilitare C4571 se non si desidera che i blocchi catch per intercettare le eccezioni strutturate, ma si desidera usare i blocchi catch.  È ancora possibile intercettare le eccezioni strutturate utilizzando le parole chiave di gestione delle eccezioni (**try**, **except**, e **finally**).  Ma ricordate che, quando compilato **/EHs** distruttori verranno chiamati solo quando viene generata un'eccezione C++, non quando si verifica un'eccezione SEH.

- Sostituire il blocco catch con i blocchi catch per specifico C++ le eccezioni e, facoltativamente, aggiungere Gestione delle eccezioni strutturata di C++ la gestione delle eccezioni (**try**, **except**, e **finally**).  Visualizzare [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md) per altre informazioni.

Visualizzare [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4571.

```
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
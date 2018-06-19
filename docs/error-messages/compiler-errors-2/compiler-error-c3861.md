---
title: Errore del compilatore C3861 | Documenti Microsoft
ms.custom: ''
ms.date: 03/23/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3861
dev_langs:
- C++
helpviewer_keywords:
- C3861
ms.assetid: 0a1eee30-b3db-41b1-b1e5-35949c3924d7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6dbfbb11184928331b94b7addc747ffb7e44d6d4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33270264"
---
# <a name="compiler-error-c3861"></a>Errore del compilatore C3861

> '*identificatore*': identificatore non trovato

Il compilatore non è riuscito a risolvere un riferimento a un identificatore, nemmeno usando la ricerca dipendente dall'argomento.

## <a name="remarks"></a>Note

Per correggere l'errore, confrontare l'uso di *identificatore* per la dichiarazione dell'identificatore case ed errori di ortografia. Verificare che [operatori di risoluzione ambito](../../cpp/scope-resolution-operator.md) e spazio dei nomi [direttive using](../../cpp/namespaces-cpp.md#using_directives) siano usati correttamente. Se l'identificatore è dichiarato in un file di intestazione, verificare che l'intestazione venga inclusa prima che l'identificatore viene fatto riferimento. Se l'identificatore deve essere visibile esternamente, assicurarsi che sia dichiarato in qualsiasi file di origine che lo utilizza. Verificare inoltre che la dichiarazione dell'identificatore o la definizione non venga escluso da [direttive di compilazione condizionale](../../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

Modifiche di rimuovere funzioni obsolete dalla libreria di Runtime C in Visual Studio 2015 possono causare C3861. Per correggere l'errore, rimuovere i riferimenti alle funzioni o sostituirli con le alternative, se presente. Per ulteriori informazioni, vedere [funzioni Obsolete](../../c-runtime-library/obsolete-functions.md).

Se l'errore C3861 viene visualizzato dopo la migrazione dei progetti da versioni precedenti del compilatore, si potrebbero verificare problemi relativi a versioni supportate di Windows. Visual C++ non supporta più i sistemi operativi Windows 95, Windows 98, Windows ME, Windows NT o Windows 2000. Se le macro **WINVER** o **_WIN32_WINNT** vengono assegnate a una di queste versioni di Windows, è necessario modificarle. Per ulteriori informazioni, vedere [la modifica di WINVER e _WIN32_WINNT](../../porting/modifying-winver-and-win32-winnt.md).

## <a name="examples"></a>Esempi

### <a name="undefined-identifier"></a>Identificatore non definito

L'esempio seguente genera l'errore C3861 perché l'identificatore non è definito.

```cpp
// C3861.cpp
void f2(){}
int main() {
   f();    // C3861
   f2();   // OK
}
```

### <a name="identifier-not-in-scope"></a>Identificatore non è nell'ambito

L'esempio seguente genera l'errore C3861 perché un identificatore è disponibile solo nell'ambito del file di definizione, a meno che non è stato dichiarato in altri file di origine che lo utilizzano.

```cpp
// C3861_a1.cpp
// Compile with: cl /EHsc /W4 C3861_a1.cpp C3861_a2.cpp
#include <iostream>
// Uncomment the following line to fix:
// int f();  // declaration makes external function visible
int main() {
   std::cout << f() << std::endl;    // C3861
}
```

```cpp
// C3861_a2.cpp
int f() {  // declared and defined here
   return 42;
}
```

### <a name="namespace-qualification-required"></a>Qualifica Namespace necessaria

Classi di eccezioni nella libreria Standard C++ richiedono la `std` dello spazio dei nomi.

```cpp
// C3861_b.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   try {
      throw exception("Exception");   // C3861
      // try the following line instead
      // throw std::exception("Exception");
   }
   catch (...) {
      std::cout << "caught an exception" << std::endl;
   }
}
```

### <a name="obsolete-function-called"></a>Funzione obsoleta

Funzioni obsolete sono state rimosse dalla libreria CRT.

```cpp
// C3861_c.cpp
#include <stdio.h>
int main() {
   char line[21]; // room for 20 chars + '\0'
   gets( line );  // C3861
   // Use gets_s instead.
   printf( "The line entered was: %s\n", line );
}
```

### <a name="adl-and-friend-functions"></a>Funzioni ADL e friend

L'esempio seguente genera l'errore C3767 perché il compilatore non è possibile usare la ricerca dipendente dall'argomento per `FriendFunc`:

```cpp
namespace N {
   class C {
      friend void FriendFunc() {}
      friend void AnotherFriendFunc(C* c) {}
   };
}

int main() {
   using namespace N;
   FriendFunc();   // C3861 error
   C* pC = new C();
   AnotherFriendFunc(pC);   // found via argument-dependent lookup
}
```

Per correggere l'errore, dichiarare la funzione friend nell'ambito della classe e definirla nell'ambito dello spazio dei nomi:

```cpp
class MyClass {
   int m_private;
   friend void func();
};

void func() {
   MyClass s;
   s.m_private = 0;
}

int main() {
   func();
}
```

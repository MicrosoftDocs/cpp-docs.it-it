---
description: 'Altre informazioni su: errore del compilatore C3861'
title: Errore del compilatore C3861
ms.date: 03/23/2018
f1_keywords:
- C3861
helpviewer_keywords:
- C3861
ms.assetid: 0a1eee30-b3db-41b1-b1e5-35949c3924d7
ms.openlocfilehash: bba259496de09e86b59f9cad1ac1bf89a697a1da
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222905"
---
# <a name="compiler-error-c3861"></a>Errore del compilatore C3861

> '*Identifier*': identificatore non trovato

Il compilatore non è riuscito a risolvere un riferimento a un identificatore, nemmeno usando la ricerca dipendente dall'argomento.

## <a name="remarks"></a>Commenti

Per correggere l'errore, confrontare l'uso dell' *identificatore* con la dichiarazione dell'identificatore per la distinzione tra maiuscole e minuscole. Verificare che [gli operatori di risoluzione dell'ambito](../../cpp/scope-resolution-operator.md) e le [direttive using](../../cpp/namespaces-cpp.md#using_directives) dello spazio dei nomi siano utilizzati correttamente. Se l'identificatore viene dichiarato in un file di intestazione, verificare che l'intestazione sia inclusa prima che venga fatto riferimento all'identificatore. Se l'identificatore deve essere visibile esternamente, assicurarsi che sia dichiarato in qualsiasi file di origine che lo usi. Verificare inoltre che la dichiarazione o la definizione dell'identificatore non sia esclusa dalle [direttive di compilazione condizionale](../../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

Le modifiche per rimuovere le funzioni obsolete dalla libreria di runtime C in Visual Studio 2015 possono causare C3861. Per correggere l'errore, rimuovere i riferimenti a queste funzioni o sostituirli con le alternative sicure, se presenti. Per altre informazioni, vedere [funzioni obsolete](../../c-runtime-library/obsolete-functions.md).

Se il C3861 di errore viene visualizzato dopo la migrazione del progetto da versioni precedenti del compilatore, è possibile che si verifichino problemi relativi alle versioni di Windows supportate. Visual C++ non supporta più i sistemi operativi Windows 95, Windows 98, Windows ME, Windows NT o Windows 2000. Se le macro **WINVER** o **_WIN32_WINNT** vengono assegnate a una di queste versioni di Windows, è necessario modificarle. Per ulteriori informazioni, vedere [modifica di WINVER e _WIN32_WINNT](../../porting/modifying-winver-and-win32-winnt.md).

## <a name="examples"></a>Esempio

### <a name="undefined-identifier"></a>Identificatore non definito

L'esempio seguente genera l'oggetto C3861 perché l'identificatore non è definito.

```cpp
// C3861.cpp
void f2(){}
int main() {
   f();    // C3861
   f2();   // OK
}
```

### <a name="identifier-not-in-scope"></a>Identificatore non nell'ambito

L'esempio seguente genera l'errore C3861 perché un identificatore è visibile solo nell'ambito del file della relativa definizione, a meno che non sia dichiarato in altri file di origine che lo usano.

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

### <a name="namespace-qualification-required"></a>Qualificazione spazio dei nomi obbligatoria

Per le classi di eccezioni nella libreria standard C++ è necessario lo `std` spazio dei nomi.

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

### <a name="obsolete-function-called"></a>Funzione obsoleta chiamata

Le funzioni obsolete sono state rimosse dalla libreria CRT.

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

### <a name="adl-and-friend-functions"></a>Funzioni ADL e Friend

L'esempio seguente genera l'errore C3767 perché il compilatore non può usare la ricerca dipendente dall'argomento per `FriendFunc` :

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

Per correggere l'errore, dichiarare l'elemento Friend nell'ambito della classe e definirlo nell'ambito dello spazio dei nomi:

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

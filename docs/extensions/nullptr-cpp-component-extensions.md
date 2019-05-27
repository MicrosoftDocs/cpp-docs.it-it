---
title: nullptr (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- __nullptr keyword (C++)
- nullptr keyword [C++]
ms.assetid: 594cfbf7-06cb-4366-9ede-c0b703e1d095
ms.openlocfilehash: 05aaaa8a0d0056e0f5318f5e9329d90824760728
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515636"
---
# <a name="nullptr--ccli-and-ccx"></a>nullptr (C++/CLI e C++/CX)

La parola chiave **nullptr** rappresenta un *valore di puntatore Null*. Usare un valore di puntatore Null per indicare che un handle di oggetto, un puntatore interno o un tipo di puntatore nativo non punta a un oggetto.

Usare **nullptr** con codice gestito o nativo. Il compilatore genera istruzioni appropriate ma diverse per i valori di puntatore Null gestito e nativo. Per informazioni sull'uso della versione C++ standard ISO di questa parola chiave, vedere [nullptr](../cpp/nullptr.md).

La parola chiave **__nullptr** è una parola chiave specifica di Microsoft che ha lo stesso significato di **nullptr**, ma che si applica solo al codice nativo. Se si usa **nullptr** con codice C/C++ nativo e quindi si esegue la compilazione con l'opzione del compilatore [/clr](../build/reference/clr-common-language-runtime-compilation.md), il compilatore non può determinare se **nullptr** indica un valore di puntatore Null nativo o gestito. Per indicare questo aspetto al compilatore, usare **nullptr** per specificare un valore gestito o **__nullptr** per specificare un valore nativo.

La parola chiave **nullptr** è equivalente a **Nothing** in Visual Basic e **null** in C#.

## <a name="usage"></a>Utilizzo

La parola chiave **nullptr** può essere usata ovunque sia possibile usare un handle, un puntatore nativo o un argomento di funzione.

La parola chiave **nullptr** non è un tipo e non è supportata per l'uso con:

- [sizeof](../cpp/sizeof-operator.md)

- [typeid](../cpp/typeid-operator.md)

- `throw nullptr` (sebbene sia possibile usare `throw (Object^)nullptr;`)

La parola chiave **nullptr** può essere usata nell'inizializzazione dei tipi di puntatore seguenti:

- Puntatore nativo

- Handle di Windows Runtime

- Handle gestito

- Puntatore interno gestito

La parola chiave **nullptr** può essere usata per verificare se un riferimento a un handle o un puntatore è Null, prima di usare il riferimento.

Le chiamate di funzione tra linguaggi che usano valori di puntatore Null per il controllo degli errori devono essere interpretate correttamente.

Non è possibile inizializzare un handle con un valore zero. È possibile usare solo **nullptr**. L'assegnazione di una costante 0 a un handle di oggetto produce un valore `Int32` boxed e un cast a `Object^`.

## <a name="example"></a>Esempio

L'esempio di codice seguente illustra che la parola chiave **nullptr** può essere usata ovunque sia possibile usare un handle, un puntatore nativo o un argomento di funzione. L'esempio illustra anche che la parola chiave **nullptr** consente di verificare un riferimento prima di usarlo.

```cpp
// mcpp_nullptr.cpp
// compile with: /clr
value class V {};
ref class G {};
void f(System::Object ^) {}

int main() {
// Native pointer.
   int *pN = nullptr;
// Managed handle.
   G ^pG = nullptr;
   V ^pV1 = nullptr;
// Managed interior pointer.
   interior_ptr<V> pV2 = nullptr;
// Reference checking before using a pointer.
   if (pN == nullptr) {}
   if (pG == nullptr) {}
   if (pV1 == nullptr) {}
   if (pV2 == nullptr) {}
// nullptr can be used as a function argument.
   f(nullptr);   // calls f(System::Object ^)
}
```

## <a name="example"></a>Esempio

L'esempio di codice seguente mostra che è possibile usare **nullptr** e zero in modo intercambiabile nei puntatori nativi.

```cpp
// mcpp_nullptr_1.cpp
// compile with: /clr
class MyClass {
public:
   int i;
};

int main() {
   MyClass * pMyClass = nullptr;
   if ( pMyClass == nullptr)
      System::Console::WriteLine("pMyClass == nullptr");

   if ( pMyClass == 0)
      System::Console::WriteLine("pMyClass == 0");

   pMyClass = 0;
   if ( pMyClass == nullptr)
      System::Console::WriteLine("pMyClass == nullptr");

   if ( pMyClass == 0)
      System::Console::WriteLine("pMyClass == 0");
}
```

```Output
pMyClass == nullptr

pMyClass == 0

pMyClass == nullptr

pMyClass == 0
```

## <a name="example"></a>Esempio

L'esempio di codice seguente mostra che **nullptr** viene interpretato come handle a qualsiasi tipo o puntatore nativo di qualsiasi tipo. Nel caso di overload di funzioni con handle a tipi diversi, verrà generato un errore di ambiguità. In questo caso è necessario eseguire il cast esplicito di **nullptr** a un tipo.

```cpp
// mcpp_nullptr_2.cpp
// compile with: /clr /LD
void f(int *){}
void f(int ^){}

void f_null() {
   f(nullptr);   // C2668
   // try one of the following lines instead
   f((int *) nullptr);
   f((int ^) nullptr);
}
```

## <a name="example"></a>Esempio

L'esempio di codice seguente mostra che il cast di **nullptr** è consentito e restituisce un puntatore o un handle al tipo di cast che contiene il valore **nullptr**.

```cpp
// mcpp_nullptr_3.cpp
// compile with: /clr /LD
using namespace System;
template <typename T>
void f(T) {}   // C2036 cannot deduce template type because nullptr can be any type

int main() {
   f((Object ^) nullptr);   // T = Object^, call f(Object ^)

   // Delete the following line to resolve.
   f(nullptr);

   f(0);   // T = int, call f(int)
}
```

## <a name="example"></a>Esempio

L'esempio di codice seguente mostra che è possibile usare **nullptr** come parametro di funzione.

```cpp
// mcpp_nullptr_4.cpp
// compile with: /clr
using namespace System;
void f(Object ^ x) {
   Console::WriteLine("test");
}

int main() {
   f(nullptr);
}
```

```Output
test
```

## <a name="example"></a>Esempio

L'esempio di codice seguente mostra che quando gli handle vengono dichiarati e non inizializzati in modo esplicito, vengono inizializzati per impostazione predefinita su **nullptr**.

```cpp
// mcpp_nullptr_5.cpp
// compile with: /clr
using namespace System;
ref class MyClass {
public:
   void Test() {
      MyClass ^pMyClass;   // gc type
      if (pMyClass == nullptr)
         Console::WriteLine("NULL");
   }
};

int main() {
   MyClass ^ x = gcnew MyClass();
   x -> Test();
}
```

```Output
NULL
```

## <a name="example"></a>Esempio

L'esempio di codice seguente mostra che è possibile assegnare **nullptr** a un puntatore nativo quando si esegue la compilazione con `/clr`.

```cpp
// mcpp_nullptr_6.cpp
// compile with: /clr
int main() {
   int * i = 0;
   int * j = nullptr;
}
```

## <a name="requirements"></a>Requisiti

Opzione del compilatore: (non obbligatoria, supportata da tutte le opzioni di generazione di codice, tra cui `/ZW` e `/clr`)

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)<br/>
[nullptr](../cpp/nullptr.md)
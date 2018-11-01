---
title: Errore del compilatore C2259
ms.date: 11/04/2016
f1_keywords:
- C2259
helpviewer_keywords:
- C2259
ms.assetid: e458236f-bdea-4786-9aa6-a98d8bffa5f4
ms.openlocfilehash: 0310f20854185a6f8a5ccb0ce7b087c4d7c5f29d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50440404"
---
# <a name="compiler-error-c2259"></a>Errore del compilatore C2259

'class': Impossibile creare un'istanza di classe astratta

Codice dichiara un'istanza di una struttura o classe astratta.

È possibile creare istanze di una classe o struttura con uno o più funzioni virtuali pure. Per creare istanze degli oggetti di una classe derivata, la classe derivata deve eseguire l'override di ogni funzione virtuale pura.

Per altre informazioni, vedere [classi astratte implicite](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Implicitly_abstract_classes).

L'esempio seguente genera l'errore C2259:

```
// C2259.cpp
// compile with: /c
class V {
public:
   void virtual func() = 0;
};
class A : public V {};
class B : public V {
public:
   void func();
};
V v;  // C2259, V is an abstract class
A a;  // C2259, A inherits func() as pure virtual
B b;  // OK, B defines func()
```

Ogni volta che si deriva da un'interfaccia e implementano i metodi di interfaccia nella classe derivata con autorizzazioni di accesso diverso da public, si potrebbe ricevere C2259.  Ciò si verifica perché il compilatore prevede che i metodi di interfaccia implementati nella classe derivata per avere l'accesso pubblico. Quando si implementano le funzioni membro per un'interfaccia con le autorizzazioni di accesso più restrittive, il compilatore non considera le implementazioni per i metodi definiti nell'interfaccia, che a sua volta la classe derivata una classe astratta.

Esistono due possibili soluzioni alternative per il problema:

- Verificare le autorizzazioni di accesso pubblico per i metodi implementati.

- Usare l'operatore di risoluzione dell'ambito per i metodi di interfaccia implementati nella classe derivata per qualificare il nome di metodo implementato con il nome dell'interfaccia.

C2259 può verificarsi anche in seguito a operazioni di conformità che in Visual C++ 2005, è stata eseguita **/Zc: wchar_t** ora è attivata per impostazione predefinita. In questo caso, può essere risolto eseguendo la compilazione con C2599 **/Zc:wchar_t-**, per ottenere il comportamento rispetto alle versioni precedenti, o preferibilmente aggiornando i tipi in modo che siano compatibili. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

L'esempio seguente genera l'errore C2259:

```
// C2259b.cpp
// compile with: /c
#include <windows.h>

class MyClass {
public:
   // WCHAR now typedef'ed to wchar_t
   virtual void func(WCHAR*) = 0;
};

class MyClass2 : MyClass {
public:
   void func(unsigned short*);
};

MyClass2 x;   // C2259

// OK
class MyClass3 {
public:
   virtual void func(WCHAR*) = 0;
   virtual void func2(wchar_t*) = 0;
   virtual void func3(unsigned short*) = 0;
};

class MyClass4 : MyClass3 {
public:
   void func(WCHAR*) {}
   void func2(wchar_t*) {}
   void func3(unsigned short*) {}
};

MyClass4 y;
```

L'esempio seguente genera l'errore C2259:

```
// C2259c.cpp
// compile with: /clr
interface class MyInterface {
   void MyMethod();
};

ref class MyDerivedClass: public MyInterface {
private:
   // Uncomment the following line to resolve.
   // public:
   void MyMethod(){}
   // or the following line
   // void MyInterface::MyMethod() {};
};

int main() {
   MyDerivedClass^ instance = gcnew MyDerivedClass; // C2259
}
```

---
description: 'Altre informazioni su: errore del compilatore C2259'
title: Errore del compilatore C2259
ms.date: 11/04/2016
f1_keywords:
- C2259
helpviewer_keywords:
- C2259
ms.assetid: e458236f-bdea-4786-9aa6-a98d8bffa5f4
ms.openlocfilehash: 640349f5870cd818019029c7f04db3e33a068ec9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134693"
---
# <a name="compiler-error-c2259"></a>Errore del compilatore C2259

' Class ': Impossibile creare un'istanza di una classe astratta

Il codice dichiara un'istanza di una classe o di una struttura astratta.

Non è possibile creare un'istanza di una classe o di una struttura con una o più funzioni virtuali pure. Per creare un'istanza di oggetti di una classe derivata, la classe derivata deve eseguire l'override di ogni funzione virtuale pura.

Per ulteriori informazioni, vedere [classi astratte implicite](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Implicitly_abstract_classes).

L'esempio seguente genera l'C2259:

```cpp
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

Ogni volta che si esegue la derivazione da un'interfaccia e si implementano i metodi di interfaccia nella classe derivata con autorizzazioni di accesso diverse da Public, è possibile che venga visualizzato C2259.  Questo problema si verifica perché il compilatore prevede che i metodi di interfaccia implementati nella classe derivata dispongano di accesso pubblico. Quando si implementano le funzioni membro per un'interfaccia con autorizzazioni di accesso più restrittive, il compilatore non le considera come implementazioni per i metodi di interfaccia definiti nell'interfaccia, che a sua volta rende la classe derivata una classe astratta.

Esistono due possibili soluzioni per il problema:

- Rendere pubbliche le autorizzazioni di accesso per i metodi implementati.

- Utilizzare l'operatore di risoluzione dell'ambito per i metodi di interfaccia implementati nella classe derivata per qualificare il nome del metodo implementato con il nome dell'interfaccia.

C2259 può anche verificarsi in seguito alle operazioni di conformità eseguite in Visual Studio 2005, **/Zc: wchar_t** è ora attiva per impostazione predefinita. In questa situazione, C2599 può essere risolto eseguendo la compilazione con **/Zc: wchar_t-**, per ottenere il comportamento da versioni precedenti o preferibilmente aggiornando i tipi in modo che siano compatibili. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

L'esempio seguente genera l'C2259:

```cpp
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

L'esempio seguente genera l'C2259:

```cpp
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

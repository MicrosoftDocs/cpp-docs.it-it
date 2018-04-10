---
title: Errore del compilatore C2259 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: error-reference
f1_keywords:
- C2259
dev_langs:
- C++
helpviewer_keywords:
- C2259
ms.assetid: e458236f-bdea-4786-9aa6-a98d8bffa5f4
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bcb7b24bb39ba204653d2a99d6bc1d3e5d8142b1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2259"></a>Errore del compilatore C2259
'class': Impossibile creare un'istanza di classe astratta  
  
 Codice dichiara un'istanza di una struttura o una classe astratta.  
  
 Non è possibile creare una classe o struttura con uno o più funzioni virtuali pure. Per creare un'istanza di oggetti di una classe derivata, la classe derivata deve eseguire l'override di ogni funzione virtuale pura.  
  
 Per ulteriori informazioni, vedere [classi implicitamente astratte](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Implicitly_abstract_classes).  
  
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
  
 Quando si deriva da un'interfaccia e implementano i metodi di interfaccia della classe derivata con autorizzazioni di accesso sono pubblici, si potrebbe ricevere l'errore C2259.  Questo errore si verifica perché il compilatore prevede che i metodi di interfaccia implementati nella classe derivata per avere accesso pubblico. Quando si implementano le funzioni membro per un'interfaccia con le autorizzazioni di accesso più restrittive, il compilatore non considera le implementazioni per i metodi definiti nell'interfaccia, che consente a sua volta la classe derivata una classe astratta.  
  
 Esistono due possibili soluzioni del problema:  
  
-   Verificare le autorizzazioni di accesso pubblico per i metodi implementati.  
  
-   Utilizzare l'operatore di risoluzione dell'ambito per i metodi di interfaccia implementati nella classe derivata per qualificare il nome del metodo implementato con il nome dell'interfaccia.  
  
 C2259 può verificarsi anche in seguito a operazioni di conformità è stata eseguita in Visual C++ 2005, **/Zc: wchar_t** è ora attivata per impostazione predefinita. In questo caso, può essere risolto eseguendo la compilazione con C2599 **/Zc:wchar_t-**, per ottenere il comportamento rispetto alle versioni precedenti o, preferibilmente, aggiornando i tipi in modo che siano compatibili. Per altre informazioni, vedere [/Zc:wchar_t (Tipo nativo wchar_t)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
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

---
title: "Errore del compilatore C2259 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2259"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2259"
ms.assetid: e458236f-bdea-4786-9aa6-a98d8bffa5f4
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Errore del compilatore C2259
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': impossibile creare un'istanza di classe astratta  
  
 Viene dichiarata un'istanza di una struttura o di una classe astratta.  
  
 Non è possibile creare un'istanza di una classe o una struttura con una o più funzioni virtuali pure.  Per creare un'istanza degli oggetti di una classe derivata, quest'ultima deve eseguire l'override di ogni funzione virtuale pura.  
  
 Per ulteriori informazioni, vedere [Classi astratte implicite](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Implicitly_abstract_classes).  
  
 Il seguente codice di esempio genera l'errore C2259:  
  
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
  
 Quando si deriva da un'interfaccia e i metodi di quest'ultima vengono implementati nella classe derivata con autorizzazioni di accesso diverse da quelle pubbliche, è possibile che venga visualizzato l'errore C2259.  Questa situazione si verifica perché l'accesso previsto dal compilatore per i metodi dell'interfaccia implementati nella classe derivata è di tipo pubblico.  Quando vengono implementate le funzioni membro per un'interfaccia con autorizzazioni di accesso più restrittive, il compilatore non le considera implementazioni per i metodi definiti nell'interfaccia. La classe derivata diviene pertanto una classe astratta.  
  
 Esistono due possibili soluzioni per il problema:  
  
-   Rendere pubbliche le autorizzazioni di accesso per i metodi implementati.  
  
-   Utilizzare l'operatore di risoluzione dell'ambito per i metodi di interfaccia implementati nella classe derivata per qualificare il nome dei metodi implementati con il nome dell'interfaccia.  
  
 L'errore C2259 può inoltre verificarsi in seguito alle operazioni di conformità eseguite in Visual C\+\+ 2005, **\/Zc:wchar\_t** è ora attivata per impostazione predefinita.  In tal caso è possibile risolvere l'errore C2599 eseguendo la compilazione con **\/Zc:wchar\_t\-**, per ottenere il comportamento dalle versioni precedenti o, preferibilmente, aggiornando i tipi in modo da renderli compatibili.  Per ulteriori informazioni, vedere [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md).  
  
 Il seguente codice di esempio genera l'errore C2259:  
  
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
  
 Il seguente codice di esempio genera l'errore C2259:  
  
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
  
 Il seguente codice di esempio genera l'errore C2259:  
  
```  
// C2259d.cpp  
// compile with: /clr:oldSyntax  
public __gc __interface MyInterface {  
   void MyMethod();  
};  
  
__gc class MyDerivedClass : public MyInterface {  
// Uncomment the following line to resolve.  
// public:  
   void MyMethod() {};  
   // or the following line  
   // void MyInterface::MyMethod() {};  
};  
  
int main() {  
   MyDerivedClass *instance = new MyDerivedClass();   // C2259  
}  
```
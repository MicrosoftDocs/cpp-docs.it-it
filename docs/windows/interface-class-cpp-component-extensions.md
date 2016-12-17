---
title: "interface class  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "interface_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interface class keyword"
  - "interface struct keyword"
ms.assetid: 3ccea701-f50b-4da7-ad6b-f0ee1203e2b9
caps.latest.revision: 30
caps.handback.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# interface class  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dichiara un'interfaccia.  Per informazioni sulle interfacce native, vedere [\_\_interfaccia](../cpp/interface.md).  
  
## Tutti i runtime  
 **Sintassi**  
  
```  
  
        interface_access interface class  name :  inherit_access base_interface {};  
interface_access interface struct name :  inherit_access base_interface {};  
```  
  
 **Parametri**  
  
 *interface\_access*  
 L'accessibilità di un'interfaccia esterna all'assembly.  I valori possibili sono **public** e `private`.  `private` è l'impostazione predefinita.  Le interfacce annidate non possono avere un identificatore di *interface\_access*.  
  
 *name*  
 Nome dell'interfaccia.  
  
 *inherit\_access*  
 L'accessibilità a *base\_interface*.  L'unica accessibilità consentita per un'interfaccia di base è `public` \(impostazione predefinita\).  
  
 *base\_interface* \(facoltativo\)  
 Un'interfaccia di base per l'interfaccia *name*.  
  
 **Osservazioni**  
  
 **struttura interfaccia** equivale a **classe interfaccia**.  
  
 Un'interfaccia può contenere dichiarazioni per funzioni, eventi e proprietà.  Tutti i membri di interfaccia hanno accessibilità pubblica.  Un'interfaccia può contenere anche membri dati statici, funzioni, eventi e proprietà e questi membri statici devono essere definiti nell'interfaccia.  
  
 Un'interfaccia definisce come una classe può essere implementata.  Un'interfaccia non è una classe e le classi possono implementare solo interfacce.  Quando una classe definisce una funzione dichiarata in un'interfaccia, la funzione viene implementata, non viene fatto l'override.  Pertanto, la ricerca del nome non include i membri di interfaccia.  
  
 Una classe o una struttura che derivano da un'interfaccia deve implementare tutti i membri dell'interfaccia.  Quando si implementa *il nome* dell'interfaccia è inoltre necessario implementare le interfacce nella lista `base_interface`.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Costruttore Statico di Interfaccia](../dotnet/how-to-define-an-interface-static-constructor-cpp-cli.md)  
  
-   [Generic Interfaces \(Visual C\+\+\)](../windows/generic-interfaces-visual-cpp.md)  
  
 Per informazioni su altri tipi CLR, vedere [Classi e strutture](../windows/classes-and-structs-cpp-component-extensions.md).  
  
 È possibile rilevare in fase di compilazione se un tipo è un'interfaccia con `__is_interface_class(``type``)`.  Per ulteriori informazioni, vedere [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 Nell'ambiente di sviluppo, è possibile ottenere una guida su queste parole chiave evidenziando la parola chiave \(ad esempio `interface class`\) e premendo F1.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Osservazioni**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Osservazioni**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 L'esempio di codice seguente illustra come un'interfaccia può definire il comportamento di una funzione dell'orologio.  
  
```  
// mcppv2_interface_class.cpp  
// compile with: /clr  
using namespace System;  
  
public delegate void ClickEventHandler(int, double);  
  
// define interface with nested interface  
public interface class Interface_A {  
   void Function_1();  
  
   interface class Interface_Nested_A {  
      void Function_2();  
   };  
};  
  
// interface with a base interface  
public interface class Interface_B : Interface_A {  
   property int Property_Block;  
   event ClickEventHandler^ OnClick;     
   static void Function_3() { Console::WriteLine("in Function_3"); }  
};  
  
// implement nested interface  
public ref class MyClass : public Interface_A::Interface_Nested_A {  
public:  
   virtual void Function_2() { Console::WriteLine("in Function_2"); }  
};  
  
// implement interface and base interface  
public ref class MyClass2 : public Interface_B {  
private:  
   int MyInt;  
  
public:  
   // implement non-static function  
   virtual void Function_1() { Console::WriteLine("in Function_1"); }  
  
   // implement property  
   property int Property_Block {  
      virtual int get() { return MyInt; }  
      virtual void set(int value) { MyInt = value; }  
   }  
   // implement event  
   virtual event ClickEventHandler^ OnClick;  
  
   void FireEvents() {  
      OnClick(7, 3.14159);  
   }  
};  
  
// class that defines method called when event occurs  
ref class EventReceiver {  
public:  
   void OnMyClick(int i, double d) {  
      Console::WriteLine("OnClick: {0}, {1}", i, d);  
   }  
};  
  
int main() {  
   // call static function in an interface  
   Interface_B::Function_3();  
  
   // instantiate class that implements nested interface  
   MyClass ^ x = gcnew MyClass;  
   x->Function_2();  
  
   // instantiate class that implements interface with base interface  
   MyClass2 ^ y = gcnew MyClass2;  
   y->Function_1();  
   y->Property_Block = 8;  
   Console::WriteLine(y->Property_Block);  
  
   EventReceiver^ MyEventReceiver = gcnew EventReceiver();  
  
   // hook handler to event  
   y->OnClick += gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);  
  
   // invoke events  
   y->FireEvents();  
  
   // unhook handler to event  
   y->OnClick -= gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);  
  
   // call implemented function via interface handle  
   Interface_A^ hi = gcnew MyClass2();  
   hi->Function_1();  
}  
```  
  
 **Output**  
  
  **in Funzione\_3**  
 **in Funzione\_2**  
 **in Funzione\_1**  
 **8**  
 **OnClick: 7, 3.14159**  
 **in Funzione\_1** **Esempio**  
  
 L'esempio di codice seguente illustra due modi per implementare le funzioni con la stessa firma dichiarata in più interfacce e in cui tali interfacce vengono utilizzate da una classe.  
  
```  
// mcppv2_interface_class_2.cpp  
// compile with: /clr /c  
interface class I {  
   void Test();  
   void Test2();  
};  
  
interface class J : I {  
   void Test();  
   void Test2();  
};  
  
ref struct R : I, J {  
   // satisfies the requirement to implement Test in both interfaces  
   virtual void Test() {}  
  
   // implement both interface functions with explicit overrides  
   virtual void A() = I::Test2 {}  
   virtual void B() = J::Test2 {}  
};  
```  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)
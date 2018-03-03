---
title: interfaccia di classe (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- interface_CPP
dev_langs:
- C++
helpviewer_keywords:
- interface class keyword
- interface struct keyword
ms.assetid: 3ccea701-f50b-4da7-ad6b-f0ee1203e2b9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: abe4173dabd20442b96c8e5536b040483df4f150
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="interface-class--c-component-extensions"></a>classe di interfaccia (Estensioni del componente C++)
Dichiara un'interfaccia.  Per informazioni sulle interfacce native, vedere [Interface](../cpp/interface.md).  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 **Sintassi**  
  
```  
  
interface_access  
interface class  
 name :  inherit_accessbase_interface{};interface_accessinterface structname :  inherit_accessbase_interface{};  
```  
  
 **Parametri**  
  
 *interface_access*  
 L'accessibilità di un'interfaccia all'esterno dell'assembly.  I valori possibili sono **pubblica** e `private`.  Il valore predefinito è `private`.  Interfacce nidificate non possono avere un *interface_access* identificatore.  
  
 *name*  
 Nome dell'interfaccia.  
  
 *inherit_access*  
 L'accessibilità di *base_interface*.  L'unico consentito accessibilità per un'interfaccia di base è `public` (impostazione predefinita).  
  
 *base_interface* (facoltativo)  
 Un'interfaccia di base per l'interfaccia *nome*.  
  
 **Note**  
  
 **interfaccia struct** equivale a **classe interfaccia**.  
  
 Un'interfaccia può contenere dichiarazioni di funzioni, proprietà ed eventi.  Tutti i membri di interfaccia avere accessibilità pubblica. Un'interfaccia può anche contenere le proprietà, funzioni, gli eventi e i membri dati statici e questi membri statici devono essere definiti nell'interfaccia.  
  
 Un'interfaccia definisce la modalità può essere implementata una classe. Un'interfaccia non è una classe e le classi possono implementare solo le interfacce. Quando una classe definisce una funzione dichiarata in un'interfaccia, la funzione viene implementata, non viene sottoposto a override. Ricerca del nome, pertanto, non include i membri di interfaccia.  
  
 Una classe o struct che deriva da un'interfaccia deve implementare tutti i membri dell'interfaccia. Quando si implementa l'interfaccia *nome* è inoltre necessario implementare le interfacce di `base_interface` elenco.  
  
 Per altre informazioni, vedere:  
  
-   [Costruttore statico di interfaccia](../dotnet/how-to-define-an-interface-static-constructor-cpp-cli.md)  
  
-   [Interfacce generiche (Visual C++)](../windows/generic-interfaces-visual-cpp.md)  
  
 Per informazioni su altri tipi CLR, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
 È possibile rilevare in fase di compilazione se un tipo è un'interfaccia con `__is_interface_class(type)`. Per ulteriori informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 Nell'ambiente di sviluppo, è possibile ottenere la Guida F1 in queste parole chiave evidenziando la parola chiave, (`interface class`, ad esempio) e premere F1.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 **Note**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Note**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato come un'interfaccia può definire il comportamento di una funzione di orologio.  
  
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
  
```Output  
in Function_3  
  
in Function_2  
  
in Function_1  
  
8  
  
OnClick: 7, 3.14159  
  
in Function_1  
```  
  
 **Esempio**  
  
 Esempio di codice seguente mostra due modi per implementare funzioni con la stessa firma dichiarata in più interfacce e in cui queste interfacce vengono utilizzate da una classe.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)
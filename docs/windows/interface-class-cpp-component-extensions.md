---
title: interfaccia class (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- interface_CPP
dev_langs:
- C++
helpviewer_keywords:
- interface class keyword
- interface struct keyword
ms.assetid: 3ccea701-f50b-4da7-ad6b-f0ee1203e2b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 74b4ea6b82de65f691d5d0350e161725625e4e1f
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604486"
---
# <a name="interface-class--c-component-extensions"></a>classe di interfaccia (Estensioni del componente C++)
Dichiara un'interfaccia.  Per informazioni sulle interfacce native, vedere [Interface](../cpp/interface.md).  
  
## <a name="all-runtimes"></a>Tutti i runtime  

### <a name="syntax"></a>Sintassi  
  
```  
interface_access  
interface class  
 name :  inherit_accessbase_interface{};interface_accessinterface structname :  inherit_accessbase_interface{};  
```  
  
### <a name="parameters"></a>Parametri  
  
 *interface_access*  
 L'accessibilità di un'interfaccia all'esterno dell'assembly.  I valori possibili sono **pubbliche** e **privati**.  **privato** è il valore predefinito. Interfacce annidate non possono avere un *interface_access* identificatore.  
  
 *name*  
 Nome dell'interfaccia.  
  
 *inherit_access*  
 L'accessibilità delle *base_interface*.  Gli unici consentiti accessibilità per è un'interfaccia di base **pubblica** (predefinito).  
  
 *base_interface* (facoltativo)  
 Un'interfaccia di base per l'interfaccia *nome*.  
  
### <a name="remarks"></a>Note  
  
 **struct di interfaccia** equivale a **classe interfaccia**.  
  
 Un'interfaccia può contenere dichiarazioni per le funzioni, proprietà ed eventi.  Tutti i membri di interfaccia avere accessibilità pubblica. Un'interfaccia può anche contenere le proprietà, funzioni, eventi e i membri dati statici e questi membri statici devono essere definiti nell'interfaccia.  
  
 Un'interfaccia definisce come una classe può essere implementata. Un'interfaccia non è una classe e le classi possono implementare solo le interfacce. Quando una classe definisce una funzione dichiarata in un'interfaccia, la funzione è implementata, non viene sottoposto a override. Pertanto, la ricerca del nome non include i membri di interfaccia.  
  
 Una classe o struct che deriva da un'interfaccia deve implementare tutti i membri dell'interfaccia. Quando si implementa l'interfaccia *name* è inoltre necessario implementare le interfacce nel `base_interface` elenco.  
  
 Per altre informazioni, vedere:  
  
-   [Costruttore statico di interfaccia](../dotnet/how-to-define-an-interface-static-constructor-cpp-cli.md)  
  
-   [Interfacce generiche (Visual C++)](../windows/generic-interfaces-visual-cpp.md)  
  
 Per informazioni su altri tipi CLR, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
 È possibile rilevare in fase di compilazione se un tipo è un'interfaccia con `__is_interface_class(type)`. Per altre informazioni, vedere [supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
 Nell'ambiente di sviluppo, è possibile ottenere la Guida F1 in queste parole chiave per evidenziare la parola chiave, (`interface class`, ad esempio), premendo F1.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 **Note**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/ZW`  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Note**  
  
 Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/clr`  
  
### <a name="examples"></a>Esempi  
  
 Esempio di codice seguente viene illustrato come un'interfaccia può definire il comportamento di una funzione di orologio.  
  
```cpp  
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
  
 Esempio di codice seguente mostra due modi per implementare funzioni con la stessa firma dichiarata in più interfacce e in cui queste interfacce vengono usate da una classe.  
  
```cpp  
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
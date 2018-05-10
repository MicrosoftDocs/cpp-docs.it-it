---
title: Conversione boxing (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- boxing, Visual C++
ms.assetid: b5fd2c98-c578-4f83-8257-6dd663478665
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1f689255af653e5dfdf69250e4988aa809393461
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="boxing--c-component-extensions"></a>Boxing (Estensioni del componente C++)
Il compilatore Visual C++ è possibile convertire i tipi di valore agli oggetti in un processo denominato *boxing*e convertire gli oggetti per i tipi di valore in un processo denominato *unboxing*.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 C + + CX supporta una sintassi abbreviata per i tipi di valore di conversione boxing e unboxing di tipi di riferimento. Un tipo valore viene sottoposto a boxing quando viene assegnato a una variabile di tipo `Object`. Una variabile `Object` è unboxed quando viene assegnata a una variabile di tipo valore e viene specificato il tipo unboxed tra parentesi, ovvero quando viene eseguito il cast della variabile oggetto a un tipo valore.  
  
```  
  
  Platform::Object^  
  object_variable  = value_variable;  
value_variable = (value_type) object_variable;  
  
```  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
### <a name="examples"></a>Esempi  
 Nell'esempio di codice seguente viene eseguita la conversione boxing e unboxing di un valore `DateTime`. Innanzitutto, nell'esempio si ottiene un valore DateTime che rappresenta la data e l'ora correnti e le assegna a una variabile DateTime. Quindi il valore DateTime è sottoposto a boxing tramite l'assegnazione a una variabile Object. Infine, viene eseguita la conversione unboxing del valore boxed tramite l'assegnazione a un'altra variabile DateTime.  
  
 Per verificare l'esempio, creare un progetto BlankApplication, sostituire il metodo BlankPage::OnNavigatedTo() e quindi specificare i punti di interruzione nella parentesi quadra di chiusura e l'assegnazione alla variabile str1. Quando l'esempio raggiunge la parentesi di chiusura, esaminare str1.  
  
```  
  
void BlankPage::OnNavigatedTo(NavigationEventArgs^ e)  
{  
    using namespace Windows::Globalization::DateTimeFormatting;  
  
    Windows::Foundation::DateTime dt, dtAnother;  
    Platform::Object^ obj1;  
  
    Windows::Globalization::Calendar^ c =   
        ref new Windows::Globalization::Calendar;  
    c->SetToNow();  
    dt = c->GetDateTime();  
    auto dtf = ref new DateTimeFormatter(  
                           YearFormat::Full,   
                           MonthFormat::Numeric,   
                           DayFormat::Default,   
                           DayOfWeekFormat::None);  
    String^ str1 = dtf->Format(dt);  
    OutputDebugString(str1->Data());  
    OutputDebugString(L"\r\n");  
  
    // Box the value type and assign to a reference type.  
    obj1 = dt;  
    // Unbox the reference type and assign to a value type.  
    dtAnother = (Windows::Foundation::DateTime) obj1;  
  
    // Format the DateTime for display.  
    String^ str2 = dtf->Format(dtAnother);  
    OutputDebugString(str2->Data());  
}  
  
```  
  
 Per ulteriori informazioni, vedere [Boxing (C + + CX)](http://msdn.microsoft.com/library/windows/apps/hh969554.aspx).  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 Il compilatore Visual C++ ora esegue la conversione boxing dei tipi valore in <xref:System.Object>.  Ciò è possibile a causa di una conversione definita dal compilatore per convertire i tipi valore in <xref:System.Object>.  
  
 La conversione boxing e unboxing consente di trattare i tipi valore come oggetti. I tipi valore, inclusi i tipi di struct e i tipi predefiniti quali int, possono essere convertiti da e verso il tipo <xref:System.Object>.  
  
 Per altre informazioni, vedere:  
  
-   [Procedura: Richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)  
  
-   [Procedura: Usare gcnew per creare tipi di valore e usare la conversione boxing implicita](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)  
  
-   [Procedura: Unbox](../dotnet/how-to-unbox.md)  
  
-   [Conversioni standard e conversione boxing implicita](../dotnet/standard-conversions-and-implicit-boxing.md)  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Nell'esempio seguente viene illustrato come funziona la conversione boxing implicita.  
  
```cpp  
// vcmcppv2_explicit_boxing2.cpp  
// compile with: /clr  
using namespace System;  
  
ref class A {  
public:  
   void func(System::Object^ o){Console::WriteLine("in A");}  
};  
  
value class V {};  
  
interface struct IFace {  
   void func();  
};  
  
value class V1 : public IFace {  
public:  
   virtual void func() {  
      Console::WriteLine("Interface function");  
   }  
};  
  
value struct V2 {  
   // conversion operator to System::Object  
   static operator System::Object^(V2 v2) {  
      Console::WriteLine("operator System::Object^");  
      return (V2^)v2;  
   }  
};  
  
void func1(System::Object^){Console::WriteLine("in void func1(System::Object^)");}  
void func1(V2^){Console::WriteLine("in func1(V2^)");}  
  
void func2(System::ValueType^){Console::WriteLine("in func2(System::ValueType^)");}  
void func2(System::Object^){Console::WriteLine("in func2(System::Object^)");}  
  
int main() {  
   // example 1 simple implicit boxing  
   Int32^ bi = 1;  
   Console::WriteLine(bi);  
  
   // example 2 calling a member with implicit boxing  
   Int32 n = 10;  
   Console::WriteLine("xx = {0}", n.ToString());  
  
   // example 3 implicit boxing for function calls  
   A^ a = gcnew A;  
   a->func(n);  
  
   // example 4 implicit boxing for WriteLine function call  
   V v;  
   Console::WriteLine("Class {0} passed using implicit boxing", v);  
   Console::WriteLine("Class {0} passed with forced boxing", (V^)(v));   // force boxing  
  
   // example 5 casting to a base with implicit boxing  
   V1 v1;  
   IFace ^ iface = v1;  
   iface->func();  
  
   // example 6 user-defined conversion preferred over implicit boxing for function-call parameter matching  
   V2 v2;  
   func1(v2);   // user defined conversion from V2 to System::Object preferred over implicit boxing  
                // Will call void func1(System::Object^);  
  
   func2(v2);   // OK: Calls "static V2::operator System::Object^(V2 v2)"  
   func2((V2^)v2);   // Using explicit boxing: calls func2(System::ValueType^)  
}  
```  
  
 **Output**  
  
```Output  
1  
  
xx = 10  
  
in A  
  
Class V passed using implicit boxing  
  
Class V passed with forced boxing  
  
Interface function  
  
in func1(V2^)  
  
in func2(System::ValueType^)  
  
in func2(System::ValueType^)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)
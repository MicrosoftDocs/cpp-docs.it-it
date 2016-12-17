---
title: "Boxing  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "boxing, Visual C++"
ms.assetid: b5fd2c98-c578-4f83-8257-6dd663478665
caps.latest.revision: 27
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Boxing  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore Visual C\+\+ è in grado di convertire i tipi valore in oggetti in un processo denominato *conversione boxing* e di convertire gli oggetti in tipi valore in un processo denominato *conversione unboxing*.  
  
## Tutti i runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.  
  
## Windows Runtime  
 [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] supporta una sintassi abbreviata per eseguire il boxing dei tipi valore ed eseguire l'unboxing dei tipi riferimento.  Un tipo valore viene sottoposto a boxing quando viene assegnato a una variabile di tipo `Object`.  Una variabile `Object` è unboxed quando viene assegnata a una variabile di tipo valore e viene specificato il tipo unboxed tra parentesi, ovvero quando viene eseguito il cast della variabile oggetto a un tipo valore.  
  
```  
  
Platform::Object^ object_variable  = value_variable;  
value_variable = (value_type) object_variable;  
  
```  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
### Esempi  
 Nell'esempio di codice seguente viene eseguita la conversione boxing e unboxing di un valore `DateTime`.  Innanzitutto, nell'esempio si ottiene un valore DateTime che rappresenta la data e l'ora correnti e le assegna a una variabile DateTime.  Quindi il valore DateTime è sottoposto a boxing tramite l'assegnazione a una variabile Object.  Infine, viene eseguita la conversione unboxing del valore boxed tramite l'assegnazione a un'altra variabile DateTime.  
  
 Per verificare l'esempio, creare un progetto BlankApplication, sostituire il metodo BlankPage::OnNavigatedTo\(\) e quindi specificare i punti di interruzione nella parentesi quadra di chiusura e l'assegnazione alla variabile str1.  Quando l'esempio raggiunge la parentesi di chiusura, esaminare str1.  
  
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
  
 Per altre informazioni, vedere [Boxing \(C\+\+ CX\)](http://msdn.microsoft.com/library/windows/apps/hh969554.aspx).  
  
## Common Language Runtime  
 Il compilatore Visual C\+\+ ora esegue la conversione boxing dei tipi valore in <xref:System.Object>.  Ciò è possibile a causa di una conversione definita dal compilatore per convertire i tipi valore in <xref:System.Object>.  
  
 La conversione boxing e unboxing consente di trattare i tipi valore come oggetti.  I tipi valore, inclusi i tipi di struct e i tipi predefiniti quali int, possono essere convertiti da e verso il tipo <xref:System.Object>.  
  
 Per altre informazioni, vedere:  
  
-   [Procedura: richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)  
  
-   [Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)  
  
-   [Procedura: Unbox](../dotnet/how-to-unbox.md)  
  
-   [Conversioni standard e conversione boxing implicita](../dotnet/standard-conversions-and-implicit-boxing.md)  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
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
  
  **1**  
 **xx \= 10**  
 **in A**  
 **Classe V passata con la conversione boxing implicita**  
 **Classe V passata con la conversione boxing forzata**  
 **Funzione interfaccia**  
 **in func1\(V2^\)**  
 **in func2\(System::ValueType^\)**  
 **in func2\(System::ValueType^\)**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)
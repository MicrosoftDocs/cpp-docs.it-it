---
title: "attribute | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.attribute"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__typeof keyword"
  - "custom attributes, creating"
  - "attribute attribute"
  - "attributes [C++], custom"
ms.assetid: 8cb3489f-65c4-44ea-b0aa-3c3c6b15741d
caps.latest.revision: 18
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# attribute
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di creare un attributo personalizzato.  
  
## Sintassi  
  
```  
  
      [ attribute(  
   AllowOn,  
   AllowMultiple=boolean,  
   Inherited=boolean  
) ]  
```  
  
#### Parametri  
 *AllowOn*  
 Specifica gli elementi del linguaggio in cui è possibile applicare l'attributo personalizzato.  l'impostazione predefinita è **System:: AttributeTargets:: tutti** \(vedere  [System:: AttributeTargets](https://msdn.microsoft.com/en-us/library/system.attributetargets.aspx)\).  
  
 `AllowMultiple`  
 Specifica se è possibile applicare l'attributo personalizzato ripetutamente a un costrutto.  l'impostazione predefinita è **FALSE**.  
  
 `Inherited`  
 Indica se l'attributo deve essere ereditato da sottoclassi.  Il compilatore non fornisce supporto speciale a questa funzionalità, è il processo di utenti di attributo \(reflection, ad esempio\) rispettano queste informazioni.  se `Inherited` viene  **TRUE**, l'attributo viene ereditato.  se `AllowMultiple` viene  **TRUE**, l'attributo è accumulerà sul membro derivato; se  `AllowMultiple` viene  **FALSE**, l'attributo verrà ignorato \(o sostituire\) nell'erediterietà.  se `Inherited` viene  **FALSE**, l'attributo non verrà ereditato.  l'impostazione predefinita è **TRUE**.  
  
## Note  
  
> [!NOTE]
>  `attribute` l'attributo è ora deprecata.  Utilizzare l'attributo System.Attribute di Common Language Runtime a direttamente per creare i attirbutes definiti dall'utente.  Per ulteriori informazioni, vedere [User\-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md).  
  
 Definire una classe [attributo personalizzato](../windows/custom-attributes-cpp.md) inserendo  `attribute` attributo a una definizione della struttura o della classe gestita.  Il nome della classe è l'attributo personalizzato.  Di seguito è riportato un esempio:  
  
```  
[ attribute(Parameter) ]  
public ref class MyAttr {};  
```  
  
 definisce un attributo denominato MyAttr applicabile ai parametri di funzione.  La classe deve essere pubblica se l'attributo verrà mantenuto in altri assembly.  
  
> [!NOTE]
>  Per impedire conflitti dello spazio dei nomi, tutti i nomi di attributo in modo implicito terminano con “attribute„; in questo esempio, il nome dell'attributo e la classe è effettivamente MyAttrAttribute, ma MyAttr e MyAttrAttribute possono essere utilizzati indifferentemente.  
  
 I costruttori pubblici della classe definisce i parametri senza nome dell'attributo.  I costruttori di overload consentono più modalità di specificare l'attributo, pertanto un attributo personalizzato definito il modo seguente:  
  
```  
// cpp_attr_ref_attribute.cpp  
// compile with: /c /clr  
using namespace System;  
[ attribute(AttributeTargets::Class) ]   // apply attribute to classes  
public ref class MyAttr {  
public:  
   MyAttr() {}   // Constructor with no parameters  
   MyAttr(int arg1) {}   // Constructor with one parameter  
};  
  
[MyAttr]  
ref class ClassA {};   // Attribute with no parameters  
  
[MyAttr(123)]  
ref class ClassB {};   // Attribute with one parameter  
```  
  
 I membri dati pubblici e le proprietà della classe sono i parametri denominati facoltativi dell'attributo:  
  
```  
// cpp_attr_ref_attribute_2.cpp  
// compile with: /c /clr  
using namespace System;  
[ attribute(AttributeTargets::Class) ]  
ref class MyAttr {  
public:  
   // Property Priority becomes attribute's named parameter Priority  
    property int Priority {  
       void set(int value) {}  
       int get() { return 0;}  
   }  
   // Data member Version becomes attribute's named parameter Version  
   int Version;  
   MyAttr() {}   // constructor with no parameters  
   MyAttr(int arg1) {}   // constructor with one parameter  
};  
  
[MyAttr(123, Version=2)]   
ref class ClassC {};  
```  
  
 Per un elenco di tipi di parametro possibili dell'attributo, vedere [attributi personalizzati](../windows/custom-attributes-cpp.md).  
  
 vedere [User\-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md) per una descrizione delle destinazioni dell'attributo.  
  
 `attribute` l'attributo presenta  `AllowMultiple` parametro che specifica se l'attributo personalizzato è di utilizzo singolo o multiuse \(possibile visualizzata più volte alla stessa entità\).  
  
```  
// cpp_attr_ref_attribute_3.cpp  
// compile with: /c /clr  
using namespace System;  
[ attribute(AttributeTargets::Class, AllowMultiple = true) ]  
ref struct MyAttr {  
   MyAttr(){}  
};   // MyAttr is a multiuse attribute  
  
[MyAttr, MyAttr()]  
ref class ClassA {};  
```  
  
 Le classi di attributi personalizzati che derivano direttamente o indirettamente da <xref:System.ComponentModel.AttributeCollection.%23ctor%2A>, che rappresenta l'id delle definizioni di attributo in rapido e semplice di metadati.  `attribute` l'attributo implica l'ereditarietà da system:: L'attributo, pertanto la derivazione esplicita non è necessario:  
  
```  
[ attribute(Class) ]  
ref class MyAttr  
```  
  
 equivale a  
  
```  
[ attribute(Class) ]  
ref class MyAttr : System::Attribute   // OK, but redundant.  
```  
  
 `attribute` è un alias per  <xref:System.AttributeUsageAttribute?displayProperty=fullName> \(non AttributeAttribute; ciò è un'eccezione all'attributo che indica la regola\).  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`ref` **classe**,  **struttura di riferimento**|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Esempio  
  
```  
// cpp_attr_ref_attribute_4.cpp  
// compile with: /c /clr  
using namespace System;  
[attribute(AttributeTargets::Class)]  
ref struct ABC {  
   ABC(Type ^) {}  
};  
  
[ABC(String::typeid)]   // typeid operator yields System::Type ^  
ref class MyClass {};  
```  
  
## Esempio  
 `Inherited` l'argomento predefinito specifica se un attributo personalizzato applicato a una classe base indicherà sulla reflection di una classe derivata.  
  
```  
// cpp_attr_ref_attribute_5.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Reflection;  
  
[attribute( AttributeTargets::Method, Inherited=false )]  
ref class BaseOnlyAttribute { };  
  
[attribute( AttributeTargets::Method, Inherited=true )]  
ref class DerivedTooAttribute { };  
  
ref struct IBase {  
public:  
   [BaseOnly, DerivedToo]  
   virtual void meth() {}  
};  
  
// Reflection on Derived::meth will show DerivedTooAttribute   
// but not BaseOnlyAttribute.  
ref class Derived : public IBase {  
public:  
   virtual void meth() override {}  
};  
  
int main() {  
   IBase ^ pIB = gcnew Derived;  
  
   MemberInfo ^ pMI = pIB->GetType( )->GetMethod( "meth" );  
   array<Object ^> ^ pObjs = pMI->GetCustomAttributes( true );  
   Console::WriteLine( pObjs->Length ) ;  
}  
```  
  
  **2**   
## Vedere anche  
 [Attributes Alphabetical Reference](../windows/attributes-alphabetical-reference.md)   
 [Custom Attributes](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)
---
title: attributo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.attribute
dev_langs:
- C++
helpviewer_keywords:
- __typeof keyword
- custom attributes, creating
- attribute attribute
- attributes [C++], custom
ms.assetid: 8cb3489f-65c4-44ea-b0aa-3c3c6b15741d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d72506e3f384a784bce4d159e8e76e88098c79f7
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461809"
---
# <a name="attribute"></a>Attributo
Consente di creare un attributo personalizzato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ attribute(  
   AllowOn,  
   AllowMultiple=boolean,  
   Inherited=boolean  
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *AllowOn*  
 Specifica gli elementi del linguaggio a cui può essere applicato l'attributo personalizzato. Il valore predefinito è `System::AttributeTargets::All` (vedere [System::AttributeTargets](https://msdn.microsoft.com/library/system.attributetargets.aspx)).  
  
 *AllowMultiple*  
 Specifica se l'attributo personalizzato può essere applicato più volte a un costrutto. Valore predefinito è FALSE.  
  
 *Ereditata*  
 Indica se l'attributo deve essere ereditate dalle sottoclassi. Il compilatore non offre alcun supporto speciale per questa funzionalità. è il processo i consumer di attributo (Reflection, ad esempio) in modo da rispettare queste informazioni. Se *ereditato* è TRUE, l'attributo viene ereditato. Se *AllowMultiple* è TRUE, l'attributo si accumulerà nel membro derivato; se *AllowMultiple* è FALSE, l'attributo eseguirà l'override (o sostituire) nell'ereditarietà. Se *ereditato* è FALSE, l'attributo non viene ereditato. Valore predefinito è TRUE.  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il `attribute` attributo è deprecato.  Consente di creare attirbutes definite dall'utente common language runtime attributo System. Attribute da direttamente.  Per altre informazioni, vedere [User-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md).  
  
 Si definisce una [attributi personalizzati](../windows/custom-attributes-cpp.md) inserendo il `attribute` attributo in una definizione di classe o struct gestita. Il nome della classe è l'attributo personalizzato. Ad esempio:  
  
```  
[ attribute(Parameter) ]  
public ref class MyAttr {};  
```  
  
 definisce un attributo denominato `MyAttr` che può essere applicato a parametri di funzione. La classe deve essere pubblica se l'attributo sta per essere usato in altri assembly.  
  
> [!NOTE]
>  Per evitare conflitti di spazio dei nomi, tutti i nomi di attributo in modo implicito terminano con "Attribute"; In questo esempio, il nome dell'attributo e la classe è effettivamente `MyAttrAttribute`, ma `MyAttr` e `MyAttrAttribute` possono essere usati indifferentemente.  
  
 I costruttori pubblici della classe definiscono i parametri senza nome dell'attributo. Costruttori di overload consentono più modi per specificare l'attributo, in modo che un attributo personalizzato che viene definito nel modo seguente:  
  
```cpp  
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
  
 I membri dati pubblici e le proprietà della classe sono parametri denominati facoltativo dell'attributo:  
  
```cpp  
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
  
 Per un elenco dei tipi di parametro possibili dell'attributo, vedere [Custom Attributes](../windows/custom-attributes-cpp.md).  
  
 Visualizzare [User-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md) per una discussione sulle destinazioni degli attributi.  
  
 Il `attribute` attributo ha un *AllowMultiple* parametro che specifica se l'attributo personalizzato monouso o multiuso (può apparire più di una volta per la stessa entità).  
  
```cpp  
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
  
 Classi di attributo personalizzato che derivano direttamente o indirettamente da <xref:System.ComponentModel.AttributeCollection.%23ctor%2A>, rendendo identificazione delle definizioni degli attributi nei metadati semplici e veloci. Il `attribute` attributo implica l'ereditarietà da System:: Attribute, in modo esplicita derivazione non è necessaria:  
  
```  
[ attribute(Class) ]  
ref class MyAttr  
```  
  
 equivale a  
  
```  
[ attribute(Class) ]  
ref class MyAttr : System::Attribute   // OK, but redundant.  
```  
  
 `attribute` è un alias per <xref:System.AttributeUsageAttribute?displayProperty=fullName> (non AttributeAttribute; si tratta di un'eccezione alla regola di denominazione di attributo).  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe di riferimento**, **uno struct di riferimento**|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="example"></a>Esempio  
  
```cpp  
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
  
## <a name="example"></a>Esempio  
 Il `Inherited` argomento denominato specifica se un attributo personalizzato applicato in una classe di base verrà visualizzati sulla reflection di una classe derivata.  
  
```cpp  
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
  
```Output  
2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico agli attributi](../windows/attributes-alphabetical-reference.md)   
 [Attributi personalizzati](http://msdn.microsoft.com/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)
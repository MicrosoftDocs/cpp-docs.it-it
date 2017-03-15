---
title: "typeid (Estensioni del componente C++) | Microsoft Docs"
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
  - "typeid (parola chiave) [C++]"
ms.assetid: e9706cae-e7c4-4d6d-b474-646d73df3e70
caps.latest.revision: 35
caps.handback.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# typeid (Estensioni del componente C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene un valore che indica il tipo di un oggetto.  
  
> [!WARNING]
>  Questo articolo si riferisce alla versione Estensioni Componenti C\+\+ di typeid.  Per la versione dello standard ISO di C\+\+ di questa parola chiave, vedere [Operatore typeid](../cpp/typeid-operator.md).  
  
## Tutti i runtime  
  
### Sintassi  
  
```cpp  
  
T::typeid  
```  
  
### Parametri  
 *T*  
 Un tipo di nome.  
  
## Windows Runtime  
  
### Sintassi  
  
```cpp  
Platform::Type^ type = T::typeid;  
```  
  
### Parametri  
 `T`  
 Un tipo di nome.  
  
### Note  
 In [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)], typeid restituisce [Platform::Type](../Topic/Platform::Type%20Class.md) che viene costruito con le informazioni sui tipi in fase di esecuzione.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Sintassi**  
  
```  
  
type::typeid  
```  
  
 **Parametri**  
  
 *type*  
 Il nome di un tipo \(dichiaratore astratto\) per il quale si desidera l'oggetto System::Type.  
  
 **Note**  
  
 `typeid` viene utilizzato per ottenere <xref:System.Type> per un tipo in fase di compilazione.  
  
 `typeid` ottiene in modo simile System::Type per un tipo in fase di esecuzione rispetto a <xref:System.Type.GetType%2A> o <xref:System.Object.GetType%2A>.  Tuttavia, typeid accetta un solo nome del tipo come parametro.  Se si desidera utilizzare un'istanza di un tipo per ottenere il nome System::Type, utilizzare GetType.  
  
 `typeid` deve essere in grado di valutare un nome del tipo \(tipo\) in fase di compilazione, mentre GetType valuta il tipo che deve essere restituito in fase di esecuzione.  
  
 `typeid` può accettare un alias per il nome del tipo nativo o un alias di Common Language Runtime per il nome del tipo nativo; vedere la pagina [.Equivalenti di .NET Framework a tipi nativi C\+\+](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md) per ulteriori informazioni.  
  
 `typeid` è applicabile anche ai tipi nativi, sebbene sia ancora restituito un System::Type.  Per ottenere una struttura type\_info, utilizzare [Operatore typeid](../cpp/typeid-operator.md).  
  
 `typeid` è il successore di [\_\_typeof](../misc/typeof.md) nella precedente sintassi **\/clr**.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio seguente vengono confrontate la parola chiave typeid e il membro GetType\(\) .  
  
```  
// keyword__typeid.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct G {  
   int i;  
};  
  
int main() {  
   G ^ pG = gcnew G;  
   Type ^ pType = pG->GetType();  
   Type ^ pType2 = G::typeid;  
  
   if (pType == pType2)  
      Console::WriteLine("typeid and GetType returned the same System::Type");  
   Console::WriteLine(G::typeid);  
  
   typedef float* FloatPtr;  
   Console::WriteLine(FloatPtr::typeid);  
}  
```  
  
 **Output**  
  
  **typeid and GetType returned the same System::Type**  
**G**  
 **System.Single\*** **Esempio**  
  
 Nell'esempio seguente viene illustrata una variabile di tipo System::Type che può essere utilizzata per ottenere gli attributi su un tipo.  Mostra inoltre che per alcuni tipi, è necessario creare un typedef per utilizzare `typeid`.  
  
```  
// keyword__typeid_2.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Security;  
using namespace System::Security::Permissions;  
  
typedef int ^ handle_to_int;  
typedef int * pointer_to_int;  
  
public ref class MyClass {};  
  
class MyClass2 {};  
  
[attribute(AttributeTargets::All)]  
ref class AtClass {  
public:  
   AtClass(Type ^) {  
      Console::WriteLine("in AtClass Type ^ constructor");  
   }  
};  
  
[attribute(AttributeTargets::All)]  
ref class AtClass2 {  
public:  
   AtClass2() {  
      Console::WriteLine("in AtClass2 constructor");  
   }  
};  
  
// Apply the AtClass and AtClass2 attributes to class B  
[AtClass(MyClass::typeid), AtClass2]     
[AttributeUsage(AttributeTargets::All)]  
ref class B : Attribute {};  
  
int main() {  
   Type ^ MyType = B::typeid;  
  
   Console::WriteLine(MyType->IsClass);  
  
   array<Object^>^ MyArray = MyType -> GetCustomAttributes(true);  
   for (int i = 0 ; i < MyArray->Length ; i++ )  
      Console::WriteLine(MyArray[i]);  
  
   if (int::typeid != pointer_to_int::typeid)  
      Console::WriteLine("int::typeid != pointer_to_int::typeid, as expected");  
  
   if (int::typeid == handle_to_int::typeid)  
      Console::WriteLine("int::typeid == handle_to_int::typeid, as expected");  
}  
```  
  
 **Output**  
  
  **True**  
 **in AtClass2 constructor**  
 **in AtClass Type ^ constructor**  
 **AtClass2**  
 **System.AttributeUsageAttribute**  
 **AtClass**  
 **int::typeid \!\= pointer\_to\_int::typeid, as expected**  
 **int::typeid \=\= handle\_to\_int::typeid, as expected**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)
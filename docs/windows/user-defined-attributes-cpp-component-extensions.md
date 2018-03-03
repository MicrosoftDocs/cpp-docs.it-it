---
title: Attributi (estensioni del componente C++) definiti dall'utente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- metadata, extending
- custom attributes, extending metadata
ms.assetid: 98b29048-a3ea-4698-8441-f149cdaec9fb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9d974e8526f983801ed011520f7f78ff8c6cb564
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="user-defined-attributes--c-component-extensions"></a>Attributi definiti dall'utente (Estensioni del componente C++)
Attributi personalizzati consentono di estendere i metadati di un'interfaccia, classe o struttura, metodo, parametro o enumerazione.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Tutti i Runtime supportano gli attributi personalizzati.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 C + + CX attributi supportano solo le proprietà, ma l'attributo non costruttori o metodi.  
  
### <a name="remarks"></a>Note  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 Attributi personalizzati consentono di estendere i metadati di un elemento gestito. Per altre informazioni, vedere [Attributi](/dotnet/standard/attributes/index).  
  
### <a name="remarks"></a>Note  
 Le informazioni e la sintassi riportata in questo argomento è progettato per sostituire le informazioni presentate [attributo](../windows/attribute.md).  
  
 È possibile definire un attributo personalizzato che definisce un tipo e apportando <xref:System.Attribute> una classe di base per il tipo e, facoltativamente, l'applicazione di <xref:System.AttributeUsageAttribute> attributo.  
  
 Ad esempio, in Microsoft Transaction Server (MTS) 1.0, il comportamento relativo a transazioni, la sincronizzazione, il bilanciamento del carico e così via è stato specificato mediante GUID personalizzati inseriti nella libreria dei tipi utilizzando l'attributo personalizzato ODL. Di conseguenza, un client di un server MTS è stato possibile determinare le caratteristiche, leggere la libreria dei tipi. In .NET Framework, l'equivalente della libreria dei tipi è metadati e l'equivalente dell'attributo personalizzato ODL è attributi personalizzati. Inoltre, durante la lettura della libreria dei tipi è analoga a tramite la reflection sui tipi.  
  
 Per ulteriori informazioni, vedere,  
  
-   [Destinazioni degli attributi](../windows/attribute-targets-cpp-component-extensions.md)  
  
-   [Tipi di parametro di attributo](../windows/attribute-parameter-types-cpp-component-extensions.md)  
  
 Per informazioni sulla firma degli assembly in Visual C++, vedere [assembly con nome sicuro (firma degli Assembly) (C + + CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 L'esempio seguente viene illustrato come definire un attributo personalizzato.  
  
```cpp  
// user_defined_attributes.cpp  
// compile with: /clr /c  
using namespace System;  
  
[AttributeUsage(AttributeTargets::All)]  
ref struct Attr : public Attribute {  
   Attr(bool i){}  
   Attr(){}  
};  
  
[Attr]  
ref class MyClass {};  
```  
  
 **Esempio**  
  
 L'esempio seguente illustra alcune importanti funzionalità di attributi personalizzati. Ad esempio, questo esempio viene illustrato un utilizzo comune di attributi personalizzati: creazione di un server che è possibile descrivere completamente se stessa ai client.  
  
```cpp  
// extending_metadata_b.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Reflection;  
  
public enum class Access { Read, Write, Execute };  
  
// Defining the Job attribute:  
[AttributeUsage(AttributeTargets::Class, AllowMultiple=true )]  
public ref class Job : Attribute {  
public:  
   property int Priority {  
      void set( int value ) { m_Priority = value; }  
      int get() { return m_Priority; }  
   }  
  
   // You can overload constructors to specify Job attribute in different ways  
   Job() { m_Access = Access::Read; }  
   Job( Access a ) { m_Access = a; }  
   Access m_Access;  
  
protected:  
   int m_Priority;  
};  
  
interface struct IService {  
   void Run();  
};  
  
   // Using the Job attribute:  
   // Here we specify that QueryService is to be read only with a priority of 2.  
   // To prevent namespace collisions, all custom attributes implicitly   
   // end with "Attribute".   
  
[Job( Access::Read, Priority=2 )]  
ref struct QueryService : public IService {  
   virtual void Run() {}  
};  
  
// Because we said AllowMultiple=true, we can add multiple attributes   
[Job(Access::Read, Priority=1)]  
[Job(Access::Write, Priority=3)]  
ref struct StatsGenerator : public IService {  
   virtual void Run( ) {}  
};  
  
int main() {  
   IService ^ pIS;  
   QueryService ^ pQS = gcnew QueryService;  
   StatsGenerator ^ pSG = gcnew StatsGenerator;  
  
   //  use QueryService  
   pIS = safe_cast<IService ^>( pQS );  
  
   // use StatsGenerator  
   pIS = safe_cast<IService ^>( pSG );  
  
   // Reflection  
   MemberInfo ^ pMI = pIS->GetType();  
   array <Object ^ > ^ pObjs = pMI->GetCustomAttributes(false);  
  
   // We can now quickly and easily view custom attributes for an   
   // Object through Reflection */  
   for( int i = 0; i < pObjs->Length; i++ ) {  
      Console::Write("Service Priority = ");  
      Console::WriteLine(static_cast<Job^>(pObjs[i])->Priority);  
      Console::Write("Service Access = ");  
      Console::WriteLine(static_cast<Job^>(pObjs[i])->m_Access);  
   }  
}  
```  
  
 **Output**  
  
```Output  
Service Priority = 0  
  
Service Access = Write  
  
Service Priority = 3  
  
Service Access = Write  
  
Service Priority = 1  
  
Service Access = Read  
```  
  
 **Esempio**  
  
 L'oggetto ^ tipo sostituisce il tipo di dati variant. L'esempio seguente definisce un attributo personalizzato che accetta una matrice di oggetti ^ come parametri.  
  
 Gli argomenti di attributo devono essere costanti in fase di compilazione. Nella maggior parte dei casi, dovrebbero essere valori letterali costanti.  
  
 Vedere [typeid](../windows/typeid-cpp-component-extensions.md) per informazioni su come restituire un valore di System:: Type di un blocco di attributi personalizzati.  
  
```cpp  
// extending_metadata_e.cpp  
// compile with: /clr /c  
using namespace System;  
[AttributeUsage(AttributeTargets::Class | AttributeTargets::Method)]  
public ref class AnotherAttr : public Attribute {  
public:  
   AnotherAttr(array<Object^>^) {}  
   array<Object^>^ var1;  
};  
  
// applying the attribute  
[ AnotherAttr( gcnew array<Object ^> { 3.14159, "pi" }, var1 = gcnew array<Object ^> { "a", "b" } ) ]  
public ref class SomeClass {};  
```  
  
 **Esempio**  
  
 Il runtime richiede che la parte pubblica della classe di attributi personalizzati deve essere serializzabile.  Durante la creazione di attributi personalizzati, denominati argomenti dell'attributo personalizzato sono limitati alle costanti in fase di compilazione.  (Considerare come una sequenza di bit aggiunta al layout della classe nei metadati.)  
  
```cpp  
// extending_metadata_f.cpp  
// compile with: /clr /c  
using namespace System;  
ref struct abc {};  
  
[AttributeUsage( AttributeTargets::All )]  
ref struct A : Attribute {  
   A( Type^ ) {}  
   A( String ^ ) {}  
   A( int ) {}  
};  
  
[A( abc::typeid )]  
ref struct B {};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)
---
title: "User-Defined Attributes  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "metadata, extending"
  - "custom attributes, extending metadata"
ms.assetid: 98b29048-a3ea-4698-8441-f149cdaec9fb
caps.latest.revision: 27
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# User-Defined Attributes  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli attributi personalizzati consentono di estendere i metadati di un'interfaccia, una classe o una struttura, un metodo, un parametro o un'enumerazione.  
  
## Tutti i runtime  
 Tutti i runtime supportano gli attributi personalizzati.  
  
## Windows Runtime  
 Gli attributi di C\+\+\/CX supportano solo le proprietà, ma non i costruttori degli attributi o i metodi.  
  
### Osservazioni  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 Gli attributi personalizzati consentono di estendere i metadati di un elemento gestito.  Per ulteriori informazioni, vedere [Attributi](../Topic/Extending%20Metadata%20Using%20Attributes.md).  
  
### Osservazioni  
 Le informazioni e la sintassi incluse in questo argomento sono progettate per sostituire le informazioni visualizzate in [attribute](../windows/attribute.md).  
  
 È possibile definire un attributo personalizzato definendo un tipo e rendere <xref:System.Attribute> una classe base del tipo ed eventualmente applicando l'attributo <xref:System.AttributeUsageAttribute>.  
  
 Ad esempio, in Microsoft Transaction Server \(MTS\) 1,0, il comportamento con rispetto a transazioni, sincronizzazione, bilanciamento del carico, ecc è stato specificato tramite custom GUID inserite nella libreria dei tipi tramite l'attributo personalizzato ODL.  Pertanto, un client di un server MTS potrebbe determinare le sue caratteristiche leggendo la libreria dei tipi.  Nel Framework .NET, il valore della libreria dei tipi è di metadati e il valore dell'attributo personalizzato ODL è attributi personalizzati.  Inoltre, leggere la libreria dei tipi è analogo ad utilizzare la reflection nei tipi.  
  
 Per ulteriori informazioni, vedere,  
  
-   [Attribute Targets](../windows/attribute-targets-cpp-component-extensions.md)  
  
-   [Attribute Parameter Types](../windows/attribute-parameter-types-cpp-component-extensions.md)  
  
 Per informazioni sulla firma degli assembly in Visual C\+\+, vedere [Assembly con nome sicuro \(firma degli assembly\)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Il seguente codice di esempio mostra come definire un attributo personalizzato.  
  
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
  
 L'esempio seguente mostra alcune importanti funzionalità degli attributi personalizzati.  Ad esempio, in questo esempio viene illustrato un utilizzo comune di attributi personalizzati: creare un'istanza di un server che può autodescriversi ai client.  
  
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
  
  **Priorità di servizio \= 0**  
 **Accesso al servizio \= Scrittura**  
 **Priorità di servizio \= 3**  
 **Accesso al servizio \= Scrittura**  
 **Priorità di servizio \= 1**  
 **Accesso al servizio \= Lettura** **Esempio**  
  
 Il tipo Object^ sostituisce il tipo di dati variant.  L'esempio seguente definisce un attributo personalizzato che prende un array di Object^ come parametri.  
  
 Gli argomenti di attributo devono essere costanti in fase di compilazione; nella maggior parte dei casi, devono essere letterali costanti.  
  
 Vedere [typeid](../windows/typeid-cpp-component-extensions.md) per informazioni su come restituire un valore di System::Type da un blocco di attributi personalizzati.  
  
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
  
 Il runtime richiede che la parte pubblica della classe di attributi personalizzati deve essere serializzabile.  Nel creare attributi personalizzati, gli argomenti denominati dell'attributo personalizzato sono limitati alle costanti in fase di compilazione.  \(La si consideri come una sequenza di bit aggiunti al layout della classe nei metadati.\)  
  
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
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)
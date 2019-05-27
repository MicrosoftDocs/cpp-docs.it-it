---
title: Attributi definiti dall'utente (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- metadata, extending
- custom attributes, extending metadata
ms.assetid: 98b29048-a3ea-4698-8441-f149cdaec9fb
ms.openlocfilehash: 6d200c36946e7bc7d441c2c4db1bdfe96d4aeef9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515996"
---
# <a name="user-defined-attributes--ccli-and-ccx"></a>Attributi definiti dall'utente (C++/CLI e C++/CX)

C++/ CLI e C++/CX consentono di creare attributi specifici della piattaforma che estendono i metadati di un'interfaccia, una classe o una struttura, un metodo, un parametro o un'enumerazione. Questi attributi sono distinti dagli [attributi standard C++](../cpp/attributes.md).

## <a name="windows-runtime"></a>Windows Runtime

È possibile applicare gli attributi C++/CX alle proprietà, ma non ai costruttori o ai metodi.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Le informazioni e la sintassi indicate in questo argomento sostituiscono le informazioni riportate in [attribute](../windows/attributes/attribute.md).

È possibile definire un attributo personalizzato definendo un tipo e impostando <xref:System.Attribute> come classe di base per il tipo e, facoltativamente, applicando l'attributo <xref:System.AttributeUsageAttribute>.

Per altre informazioni, vedere:

- [Destinazioni degli attributi](attribute-targets-cpp-component-extensions.md)

- [Tipi di parametri degli attributi](attribute-parameter-types-cpp-component-extensions.md)

Per informazioni sulla firma degli assembly in Visual C++, vedere [Assembly con nome sicuro (firma degli assembly) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio seguente mostra come definire un attributo personalizzato.

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

L'esempio seguente illustra alcune funzionalità importanti degli attributi personalizzati. Questo esempio illustra, tra le altre cose, un utilizzo comune degli attributi personalizzati, ovvero la creazione di un'istanza di un server in grado di descrivere se stesso ai client.

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

```Output
Service Priority = 0

Service Access = Write

Service Priority = 3

Service Access = Write

Service Priority = 1

Service Access = Read
```

Il tipo `Object^` sostituisce il tipo di dati Variant. L'esempio seguente definisce un attributo personalizzato che accetta una matrice di `Object^` come parametri.

Gli argomenti dell'attributo devono essere costanti in fase di compilazione. Nella maggior parte dei casi, devono essere valori letterali costanti.

Vedere [typeid](typeid-cpp-component-extensions.md) per informazioni su come restituire un valore di System::Type da un blocco di attributi personalizzati.

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

Il runtime richiede che la parte pubblica della classe dell'attributo personalizzato sia serializzabile.  Quando si creano attributi personalizzati, gli argomenti denominati dell'attributo personalizzato sono limitati alle costanti in fase di compilazione.  Pensare a questo elemento come a una sequenza di bit aggiunta al layout della classe nei metadati.

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

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)
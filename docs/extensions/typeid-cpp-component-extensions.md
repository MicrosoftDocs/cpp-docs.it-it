---
description: 'Ulteriori informazioni su: typeid (C++/CLI e C++/CX)'
title: typeid (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- typeid keyword [C++]
ms.assetid: e9706cae-e7c4-4d6d-b474-646d73df3e70
ms.openlocfilehash: 0452de57b93eb5d55bed34fc1f9745280a6b6184
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185661"
---
# <a name="typeid--ccli-and-ccx"></a>typeid (C++/CLI e C++/CX)

Ottiene un valore che indica il tipo di un oggetto.

> [!NOTE]
> In questo argomento viene fatto riferimento alla versione Estensioni componenti C++ di typeid. Per la versione C++ ISO di questa parola chiave, vedere [Operatore typeid](../cpp/typeid-operator.md).

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="syntax"></a>Sintassi

```cpp
T::typeid
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un nome di tipo.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="syntax"></a>Sintassi

```cpp
Platform::Type^ type = T::typeid;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un nome di tipo.

### <a name="remarks"></a>Commenti

In C++/CX typeid restituisce un oggetto [Platform::Type](../cppcx/platform-type-class.md) costruito dalle informazioni sul tipo di runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

```
type::typeid
```

### <a name="parameters"></a>Parametri

*type*<br/>
Nome di un tipo (dichiaratore astratto) per il quale si vuole ottenere l'oggetto `System::Type`.

### <a name="remarks"></a>Commenti

**`typeid`** viene utilizzato per ottenere <xref:System.Type> per un tipo in fase di compilazione.

**`typeid`** è simile al recupero `System::Type` di per un tipo in fase di esecuzione usando <xref:System.Type.GetType%2A> o <xref:System.Object.GetType%2A> . Tuttavia, **`typeid`** accetta solo un nome di tipo come parametro.  Se si desidera utilizzare un'istanza di un tipo per ottenere il `System::Type` nome, utilizzare `GetType` .

**`typeid`** deve essere in grado di valutare un nome di tipo (tipo) in fase di compilazione, mentre GetType valuta il tipo da restituire in fase di esecuzione.

**`typeid`** può assumere un nome di tipo nativo o Common Language Runtime alias per il nome del tipo nativo; Per ulteriori informazioni, vedere [.NET Framework equivalenti ai tipi nativi c++ (c++/CLI)](../dotnet/managed-types-cpp-cli.md#dotnet) .

**`typeid`** funziona anche con i tipi nativi, sebbene restituisca comunque `System::Type` .  Per ottenere una struttura type_info, usare [ `typeid` operator](../cpp/typeid-operator.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempio

L'esempio seguente confronta la parola chiave typeid con il membro `GetType()`.

```cpp
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

```Output
typeid and GetType returned the same System::Type
G

System.Single*
```

L'esempio seguente mostra che una variabile di tipo System::Type può essere usata per ottenere gli attributi in un tipo.  Mostra inoltre che per alcuni tipi è necessario creare un typedef da usare **`typeid`** .

```cpp
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

```Output
True

in AtClass2 constructor

in AtClass Type ^ constructor

AtClass2

System.AttributeUsageAttribute

AtClass

int::typeid != pointer_to_int::typeid, as expected

int::typeid == handle_to_int::typeid, as expected
```

## <a name="see-also"></a>Vedi anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)

---
title: typeid (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- typeid keyword [C++]
ms.assetid: e9706cae-e7c4-4d6d-b474-646d73df3e70
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b31344b1ba72b37bcfff45a3fd4feefda85f6a7a
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49327583"
---
# <a name="typeid--ccli-and-ccx"></a>typeid (C + c++ /CLI e c++ /CX)

Ottiene un valore che indica il tipo di oggetto.

> [!NOTE]
> In questo argomento viene fatto riferimento alla versione Estensioni componenti C++ di typeid. Per la versione ISO C++ di questa parola chiave, vedere [typeid Operator](../cpp/typeid-operator.md).

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

### <a name="remarks"></a>Note

In C + + c++ /CX typeid viene restituito un [platform:: Type](../cppcx/platform-type-class.md) che viene costruito da informazioni sul tipo di runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

```
type::typeid
```

### <a name="parameters"></a>Parametri

*type*<br/>
Il nome di un tipo (astratti declarator) per il quale si desidera il `System::Type` oggetto.

### <a name="remarks"></a>Note

`typeid` viene usato per ottenere il <xref:System.Type> per un tipo in fase di compilazione.

`typeid` è simile a come ottenere lo System:: Type per un tipo in fase di esecuzione usando <xref:System.Type.GetType%2A> o <xref:System.Object.GetType%2A>. Tuttavia, typeid accetta solo un nome di tipo come parametro.  Se si desidera usare un'istanza di un tipo per ottenere il relativo nome System:: Type, utilizzare GetType.

`typeid` deve essere in grado di valutare un nome di tipo (tipo) in fase di compilazione mentre GetType restituisce il tipo da restituire in fase di esecuzione.

`typeid` può richiedere un nome di tipo nativo o un alias di runtime del linguaggio comune per il nome di tipo nativo; visualizzare [equivalenti di .NET Framework a tipi nativi C++ (C + + CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md) per altre informazioni.

`typeid` funziona anche con i tipi nativi, anche se verrà comunque restituito un System:: Type.  Per ottenere una struttura type_info, usare [typeid Operator](../cpp/typeid-operator.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio seguente confronta la parola chiave typeid dal `GetType()` membro.

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

L'esempio seguente mostra che una variabile di tipo che System:: Type può essere utilizzato per ottenere gli attributi su un tipo.  Indica inoltre che per alcuni tipi, sarà necessario creare un typedef per usare `typeid`.

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

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)
---
title: auto_handle::operator=
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- auto_handle::operator=
- msclr.auto_handle.operator=
- msclr::auto_handle::operator=
- auto_handle.operator=
helpviewer_keywords:
- auto_handle::operator=
ms.assetid: 503ca172-e766-4a78-af98-36fd48c931ee
ms.openlocfilehash: 2b65ea2ba5fcdb69a87127abe159dba8fbad64a9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50543715"
---
# <a name="autohandleoperator"></a>auto_handle::operator=

Operatore di assegnazione.

## <a name="syntax"></a>Sintassi

```
auto_handle<_element_type> % operator=(
   auto_handle<_element_type> % _right
);
template<typename _other_type>
auto_handle<_element_type> % operator=(
   auto_handle<_other_type> % _right
);
```

#### <a name="parameters"></a>Parametri

*a destra*<br/>
Il `auto_handle` da assegnare all'oggetto corrente `auto_handle`.

## <a name="return-value"></a>Valore restituito

L'oggetto corrente `auto_handle`, ora proprietario `_right`.

## <a name="example"></a>Esempio

```
// msl_auto_handle_op_assign.cpp
// compile with: /clr
#include <msclr\auto_handle.h>

using namespace System;
using namespace msclr;

ref class ClassA {
protected:
   String^ m_s;
public:
   ClassA(String^ s) : m_s(s) {
      Console::WriteLine( "in ClassA constructor: " + m_s );
   }
   ~ClassA() {
      Console::WriteLine( "in ClassA destructor: " + m_s );
   }

   virtual void PrintHello() {
      Console::WriteLine( "Hello from {0} A!", m_s );
   }
};

ref class ClassB : ClassA {
public:
   ClassB( String^ s ) : ClassA( s ) {}
   virtual void PrintHello() new {
      Console::WriteLine( "Hello from {0} B!", m_s );
   }
};

int main()
{
   auto_handle<ClassA> a;
   auto_handle<ClassA> a2(gcnew ClassA( "first" ) );
   a = a2; // assign from same type
   a->PrintHello();

   auto_handle<ClassB> b(gcnew ClassB( "second" ) );
   b->PrintHello();
   a = b; // assign from derived type
   a->PrintHello();

   Console::WriteLine("done");
}
```

```Output
in ClassA constructor: first
Hello from first A!
in ClassA constructor: second
Hello from second B!
in ClassA destructor: first
Hello from second A!
done
in ClassA destructor: second
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\auto_handle.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[Membri auto_handle](../dotnet/auto-handle-members.md)
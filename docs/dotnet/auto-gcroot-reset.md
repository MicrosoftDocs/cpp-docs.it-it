---
title: auto_gcroot::Reset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- msclr::auto_gcroot::reset
- auto_gcroot::reset
- msclr.auto_gcroot.reset
- auto_gcroot.reset
dev_langs:
- C++
helpviewer_keywords:
- reset method
ms.assetid: dd58467f-3885-4a15-99fb-ed6dd5d19622
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9202c9c08b7291a2d202eacef79160c587d84563
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46446098"
---
# <a name="autogcrootreset"></a>auto_gcroot::reset

Eliminare definitivamente l'oggetto proprietario corrente e, facoltativamente, richiedere il possesso di un nuovo oggetto.

## <a name="syntax"></a>Sintassi

```
void reset(
   _element_type _new_ptr = nullptr
);
```

#### <a name="parameters"></a>Parametri

*_new_ptr*<br/>
(Facoltativo) Il nuovo oggetto.

## <a name="example"></a>Esempio

```
// msl_auto_gcroot_reset.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

ref class ClassA {
   String^ m_s;
public:
   ClassA( String^ s ) : m_s( s ) {
      Console::WriteLine( "ClassA constructor: " + m_s );
   }
   ~ClassA() {
      Console::WriteLine( "ClassA destructor: " + m_s );
   }

   void PrintHello() {
      Console::WriteLine( "Hello from {0} A!", m_s );
   }
};

int main()
{
   auto_gcroot<ClassA^> agc1 = gcnew ClassA( "first" );
   agc1->PrintHello();

   ClassA^ ha = gcnew ClassA( "second" );
   agc1.reset( ha ); // release first object, reference second
   agc1->PrintHello();

   agc1.reset(); // release second object, set to nullptr

   Console::WriteLine( "done" );
}
```

```Output
ClassA constructor: first
Hello from first A!
ClassA constructor: second
ClassA destructor: first
Hello from second A!
ClassA destructor: second
done
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\auto_gcroot.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[Membri auto_gcroot](../dotnet/auto-gcroot-members.md)<br/>
[auto_gcroot::release](../dotnet/auto-gcroot-release.md)<br/>
[auto_gcroot::attach](../dotnet/auto-gcroot-attach.md)
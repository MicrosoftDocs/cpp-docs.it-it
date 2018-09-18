---
title: Compilatore avviso (livello 1) C4929 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4929
dev_langs:
- C++
helpviewer_keywords:
- C4929
ms.assetid: 95f8ab4f-4468-4caa-acd5-8f4592f03b3c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e4f54758277edb03f76e67aaddb55c68224b4064
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46063320"
---
# <a name="compiler-warning-level-1-c4929"></a>Avviso del compilatore (livello 1) C4929

'file': libreria dei tipi contiene un elemento union: verrà ignorato il qualificatore 'embedded_idl'

L'attributo embedded_idl del [#import](../../preprocessor/hash-import-directive-cpp.md) non è stato possibile applicare alla libreria dei tipi perché un'unione è presente nella libreria dei tipi. Per risolvere questo problema, non utilizzare l'attributo embedded_idl.

## <a name="example"></a>Esempio

L'esempio seguente definisce un componente.

```
// C4929a.cpp
// compile with: /LD /link /TLBOUT:C4929a.tlb
#include <objbase.h>
[module(name="Test")];
[public, switch_type(short)] typedef union _TD_UNION_TYPE   {
   [case(24)]
      float fM;
   [case(25)]
      double dMN;
   [default]
      int x;
} TD_UNION_TYPE;

[export, public] typedef struct _TDW_TYPE {
   [switch_is(sU)] TD_UNION_TYPE w;
      short sU;
} TD_TYPE;

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface I {
   HRESULT f(TD_TYPE*);
};

[coclass, uuid("00000000-0000-0000-0000-000000000002")]
struct C : I {
   HRESULT f(TD_TYPE*) { return 0; }
};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4929.

```
// C4929b.cpp
// compile with: /c /W1
#import "C4929a.tlb" embedded_idl   // C4929
```
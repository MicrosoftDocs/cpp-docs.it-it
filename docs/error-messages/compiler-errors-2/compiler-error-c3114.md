---
title: Errore del compilatore C3114 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3114
dev_langs:
- C++
helpviewer_keywords:
- C3114
ms.assetid: b5d2df4f-87d0-4292-9981-25c6a6013c05
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c7d0e324c00c4b304deca1d2538913a88690d023
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054610"
---
# <a name="compiler-error-c3114"></a>Errore del compilatore C3114

'argument': argomento di attributo denominato non valida

Affinché un membro dati della classe attribute sia un argomento denominato valido, non deve essere contrassegnato `static`, `const`, o `literal`. Se una proprietà, la proprietà non deve essere `static` e deve avere get e set di funzioni di accesso.

Per altre informazioni, vedere [proprietà](../../windows/property-cpp-component-extensions.md) e [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3114.

```
// C3114.cpp
// compile with: /clr /c
public ref class A : System::Attribute {
public:
   static property int StaticProp {
      int get();
   }

   property int Prop2 {
      int get();
      void set(int i);
   }
};

[A(StaticProp=123)]   // C3114
public ref class R {};

[A(Prop2=123)]   // OK
public ref class S {};
```
---
title: Avviso del compilatore C4368
ms.date: 11/04/2016
f1_keywords:
- C4368
helpviewer_keywords:
- C4368
ms.assetid: cb85bcee-fd3d-4aa5-b626-2324f07a4f1b
ms.openlocfilehash: b1870d076d21c02574793a8079c4658b39ebf121
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73623638"
---
# <a name="compiler-warning-c4368"></a>Avviso del compilatore C4368

non è possibile definire ' member ' come membro di ' type ' gestito: i tipi misti non sono supportati

Non è possibile incorporare un membro dati nativo in un tipo CLR.

È tuttavia possibile dichiarare un puntatore a un tipo nativo e controllarne la durata nel costruttore, nel distruttore e nel finalizzatore della classe gestita. Per ulteriori informazioni [, vedere distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

Questo avviso viene sempre emesso come un errore. Usare il pragma [warning](../../preprocessor/warning.md) per disabilitare C4368.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4368.

```cpp
// C4368.cpp
// compile with: /clr /c
struct N {};
ref struct O {};
ref struct R {
    R() : m_p( new N ) {}
    ~R() { delete m_p; }

   property N prop;   // C4368
   int i[10];   // C4368

   property O ^ prop2;   // OK
   N * m_p;   // OK
};
```
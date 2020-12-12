---
description: 'Altre informazioni su: avviso del compilatore avviso C4867'
title: Avviso del compilatore C4867
ms.date: 11/04/2016
f1_keywords:
- C4867
helpviewer_keywords:
- C4867
ms.assetid: 8a257d70-c3a7-462d-b285-e57c952a8bf7
ms.openlocfilehash: d9d263c041e12ff985ec5e46eb56a0af99bcf69d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315023"
---
# <a name="compiler-warning-c4867"></a>Avviso del compilatore C4867

' Function ': chiamata di funzione mancante nell'elenco degli argomenti; usare "Call" per creare un puntatore al membro

Un puntatore a una funzione membro è stato inizializzato in modo errato.

Questo avviso può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: conformità avanzata a puntatore a membro.  Il codice compilato prima di Visual Studio 2005 genera ora avviso C4867.

Questo avviso viene sempre emesso come un errore. Usare il pragma [warning](../../preprocessor/warning.md) per disabilitare l'avviso. Per ulteriori informazioni su avviso C4867 e MFC/ATL, vedere [_ATL_ENABLE_PTM_WARNING](../../atl/reference/compiler-options-macros.md#_atl_enable_ptm_warning).

## <a name="example"></a>Esempio

L'esempio seguente genera l'avviso C4867.

```cpp
// C4867.cpp
// compile with: /c
class A {
public:
   void f(int) {}

   typedef void (A::*TAmtd)(int);

   struct B {
      TAmtd p;
   };

   void g() {
      B b = {f};   // C4867
      B b2 = {&A::f};   // OK
   }
};
```

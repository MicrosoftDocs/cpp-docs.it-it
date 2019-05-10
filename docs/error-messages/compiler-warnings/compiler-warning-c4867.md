---
title: Avviso del compilatore C4867
ms.date: 11/04/2016
f1_keywords:
- C4867
helpviewer_keywords:
- C4867
ms.assetid: 8a257d70-c3a7-462d-b285-e57c952a8bf7
ms.openlocfilehash: 0fd5de46f713aed08508f8755c9e54c3ff46366b
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447196"
---
# <a name="compiler-warning-c4867"></a>Avviso del compilatore C4867

'function': chiamata di funzione senza elenco di argomenti; usare 'chiamare' per creare un puntatore a membro

Un puntatore a funzione membro è stato inizializzato in modo non corretto.

Questo avviso può essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual Studio 2005: conformità avanzata di puntatore a membro.  Il codice compilato prima di Visual Studio 2005 ora genererà C4867.

Questo avviso viene sempre generato come errore. Usare il pragma [warning](../../preprocessor/warning.md) per disabilitare l'avviso. Per altre informazioni su C4867 e MFC/ATL, vedere [_ATL_ENABLE_PTM_WARNING](../../atl/reference/compiler-options-macros.md#_atl_enable_ptm_warning).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4867.

```
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
---
title: Avviso del compilatore C4867
ms.date: 11/04/2016
f1_keywords:
- C4867
helpviewer_keywords:
- C4867
ms.assetid: 8a257d70-c3a7-462d-b285-e57c952a8bf7
ms.openlocfilehash: 9fa9b382b42a2fb8ba72fd9744c612af5dd598d2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62311072"
---
# <a name="compiler-warning-c4867"></a>Avviso del compilatore C4867

'function': chiamata di funzione senza elenco di argomenti; usare 'chiamare' per creare un puntatore a membro

Un puntatore a funzione membro è stato inizializzato in modo non corretto.

Questo avviso può essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual C++ 2005: conformità avanzata di puntatore a membro.  Il codice compilato prima di Visual C++ 2005 ora genererà C4867.

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
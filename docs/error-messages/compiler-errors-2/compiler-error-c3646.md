---
title: Errore del compilatore C3646
ms.date: 06/14/2018
f1_keywords:
- C3646
helpviewer_keywords:
- C3646
ms.assetid: 4391ead2-9637-4ca3-aeda-5a991b18d66d
ms.openlocfilehash: df2e52631ed75cc4a473429ea35e136ed0a88f98
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50606726"
---
# <a name="compiler-error-c3646"></a>Errore del compilatore C3646

> 'identificatore': identificatore di override sconosciuto

## <a name="remarks"></a>Note

Il compilatore ha rilevato un token nella posizione in cui previsto un identificatore di override, ma il token non riconosciuto dal compilatore.

Ad esempio, se il non riconosciuto *specifier* viene **_NOEXCEPT**, sostituirla con la parola chiave **noexcept**.

Per altre informazioni, vedere [gli identificatori di Override](../../windows/override-specifiers-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3646 e viene illustrato un modo per risolvere il problema:

```cpp
// C3646.cpp
// compile with: /clr /c
ref class C {
   void f() unknown;   // C3646
   // try the following line instead
   // virtual void f() abstract;
};
```
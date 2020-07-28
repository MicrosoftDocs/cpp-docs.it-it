---
title: Errore del compilatore C3646
ms.date: 06/14/2018
f1_keywords:
- C3646
helpviewer_keywords:
- C3646
ms.assetid: 4391ead2-9637-4ca3-aeda-5a991b18d66d
ms.openlocfilehash: 5c11133fbf28cfb98de1367955c00c899e8b1042
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214529"
---
# <a name="compiler-error-c3646"></a>Errore del compilatore C3646

> ' specifier ': identificatore di override sconosciuto

## <a name="remarks"></a>Osservazioni

Il compilatore ha trovato un token nella posizione in cui era prevista la ricerca di un identificatore di override, ma il token non è stato riconosciuto dal compilatore.

Se, ad esempio, l' *identificatore* non riconosciuto è **_NOEXCEPT**, sostituirlo con la parola chiave **`noexcept`** .

Per altre informazioni, vedere [identificatori di override](../../extensions/override-specifiers-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera C3646 e Mostra un modo per risolverlo:

```cpp
// C3646.cpp
// compile with: /clr /c
ref class C {
   void f() unknown;   // C3646
   // try the following line instead
   // virtual void f() abstract;
};
```

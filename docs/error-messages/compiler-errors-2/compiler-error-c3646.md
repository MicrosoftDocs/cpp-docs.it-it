---
description: 'Altre informazioni su: errore del compilatore C3646'
title: Errore del compilatore C3646
ms.date: 06/14/2018
f1_keywords:
- C3646
helpviewer_keywords:
- C3646
ms.assetid: 4391ead2-9637-4ca3-aeda-5a991b18d66d
ms.openlocfilehash: 0c6f731a09612e6c128756de8d0690c922047e49
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203783"
---
# <a name="compiler-error-c3646"></a>Errore del compilatore C3646

> ' specifier ': identificatore di override sconosciuto

## <a name="remarks"></a>Commenti

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

---
title: Errore del compilatore C3084
ms.date: 11/04/2016
f1_keywords:
- C3084
helpviewer_keywords:
- C3084
ms.assetid: 0362cb70-e24e-476f-a24d-8f5bb97c3afd
ms.openlocfilehash: 337cd7f37bf94c7a3d5cffe6b167d4661e3b0a81
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751456"
---
# <a name="compiler-error-c3084"></a>Errore del compilatore C3084

'function': un finalizzatore/un distruttore non può essere 'keyword'

Un finalizzatore o distruttore è stato dichiarato in modo non corretto.

Ad esempio, un distruttore non deve essere contrassegnato come sealed.  Il distruttore sarà inaccessibile ai tipi derivati.  Per altre informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md) e [distruttori e finalizzatori in procedura: definire e utilizzare classi e struct (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3084.

```cpp
// C3084.cpp
// compile with: /clr /c
ref struct R {
protected:
   !R() sealed;   // C3084
   !R() abstract;   // C3084
   !R();
};
```

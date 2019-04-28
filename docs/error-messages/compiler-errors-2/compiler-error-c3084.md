---
title: Errore del compilatore C3084
ms.date: 11/04/2016
f1_keywords:
- C3084
helpviewer_keywords:
- C3084
ms.assetid: 0362cb70-e24e-476f-a24d-8f5bb97c3afd
ms.openlocfilehash: 01e229fe0ae5bf9e04c577bb653ff1ed7fdb33bf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62243284"
---
# <a name="compiler-error-c3084"></a>Errore del compilatore C3084

'function': un finalizzatore/un distruttore non può essere 'keyword'

Un finalizzatore o distruttore è stato dichiarato in modo non corretto.

Ad esempio, un distruttore non deve essere contrassegnato come sealed.  Il distruttore sarà inaccessibile ai tipi derivati.  Per altre informazioni, vedere [override espliciti](../../extensions/explicit-overrides-cpp-component-extensions.md) e [distruttori e finalizzatori in Procedura: Definire e usare classi e struct (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3084.

```
// C3084.cpp
// compile with: /clr /c
ref struct R {
protected:
   !R() sealed;   // C3084
   !R() abstract;   // C3084
   !R();
};
```
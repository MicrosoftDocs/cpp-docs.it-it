---
title: Errore del compilatore C3084 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3084
dev_langs:
- C++
helpviewer_keywords:
- C3084
ms.assetid: 0362cb70-e24e-476f-a24d-8f5bb97c3afd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 44bab3f43efa186c83134a6b40e7cb3fcbcbd51d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027232"
---
# <a name="compiler-error-c3084"></a>Errore del compilatore C3084

'function': un finalizzatore/un distruttore non può essere 'keyword'

Un finalizzatore o distruttore è stato dichiarato in modo non corretto.

Ad esempio, un distruttore non deve essere contrassegnato come sealed.  Il distruttore sarà inaccessibile ai tipi derivati.  Per altre informazioni, vedere [override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md) e [distruttori e finalizzatori in Procedura: definire e usare classi e struct (C + c++ /CLI CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

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
---
title: Errore del compilatore C3141
ms.date: 11/04/2016
f1_keywords:
- C3141
helpviewer_keywords:
- C3141
ms.assetid: b4fd65c3-50cc-46cd-8de0-6a6d24cb9cda
ms.openlocfilehash: e19de95b5b2c967d71a4b06aca431df8ffe9dc14
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62374937"
---
# <a name="compiler-error-c3141"></a>Errore del compilatore C3141

'interface_name': le interfacce supportano solo l'ereditarietà pubblica

Le interfacce definite con la [interfaccia (o Interface)](../../cpp/interface.md) (parola chiave) supportano solo l'ereditarietà pubblica.

L'esempio seguente genera l'errore C3141:

```
// C3141.cpp
__interface IBase {};
__interface IDerived1 : protected IBase {};  // C3141
__interface IDerived2 : private IBase {};    // C3141
```
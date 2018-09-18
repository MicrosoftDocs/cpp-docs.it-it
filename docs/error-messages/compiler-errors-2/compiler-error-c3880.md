---
title: Errore del compilatore C3880 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3880
dev_langs:
- C++
helpviewer_keywords:
- C3880
ms.assetid: b0e05d1e-32d0-4034-9246-f37d23573ea9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 03cd1c953e4f0183fe71dcbcf4cc3bfb242b4f1c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46074357"
---
# <a name="compiler-error-c3880"></a>Errore del compilatore C3880

'var': non può essere un membro dati literal

Il tipo di un [letterale](../../windows/literal-cpp-component-extensions.md) deve essere l'attributo, o convertibile in fase di compilazione a, uno dei tipi seguenti:

- tipo integrale

- stringa

- enumerazione con un tipo integrale o sottostante

L'esempio seguente genera l'errore C3880:

```
// C3880.cpp
// compile with: /clr /c
ref struct Y1 {
   literal System::Decimal staticConst1 = 10;   // C3880
   literal int staticConst2 = 10;   // OK
};
```
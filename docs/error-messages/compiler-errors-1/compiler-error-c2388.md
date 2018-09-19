---
title: Errore del compilatore C2388 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2388
dev_langs:
- C++
helpviewer_keywords:
- C2388
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2b6bcec4f5f218a52981a7770f5fa6e600494d9a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46114150"
---
# <a name="compiler-error-c2388"></a>Errore del compilatore C2388

'symbol': Impossibile dichiarare un simbolo con entrambi __declspec(appdomain) e \__declspec(process)

Non è possibile usare i modificatori `appdomain` e `process` `__declspec` sullo stesso simbolo. L'archiviazione per una variabile è disponibile per processo o per dominio applicazione.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

L'esempio seguente genera l'errore C2388:

```
// C2388.cpp
// compile with: /clr /c
__declspec(process) __declspec(appdomain) int i;   // C2388
__declspec(appdomain) int i;   // OK
```
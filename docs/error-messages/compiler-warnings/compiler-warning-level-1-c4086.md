---
title: Compilatore avviso (livello 1) C4086 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4086
dev_langs:
- C++
helpviewer_keywords:
- C4086
ms.assetid: 9248831b-22bf-47af-8684-bfadb17e94fc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8b556ecb340e1b9821244f456c108e52fb3b6208
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46041064"
---
# <a name="compiler-warning-level-1-c4086"></a>Avviso del compilatore (livello 1) C4086

parametri pragma previsti: '1', '2', '4', '8' o '16'

Il parametro pragma non contiene il valore richiesto (1, 2, 4, 8 o 16).

## <a name="example"></a>Esempio

```
// C4086.cpp
// compile with: /W1 /LD
#pragma pack( 3 ) // C4086
```
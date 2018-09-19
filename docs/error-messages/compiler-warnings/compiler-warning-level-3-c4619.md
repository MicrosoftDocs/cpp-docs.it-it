---
title: Compilatore avviso (livello 3) C4619 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4619
dev_langs:
- C++
helpviewer_keywords:
- C4619
ms.assetid: 701fea21-01aa-4bea-93d4-1cb8824170b0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d5af0541451d780408af94a8953588f4764b58ac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039051"
---
# <a name="compiler-warning-level-3-c4619"></a>Avviso del compilatore (livello 3) C4619

\#avviso pragma: nessun numero di avviso 'number'

È stato effettuato un tentativo per disabilitare un avviso che non esiste.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4619:

```
// C4619.cpp
// compile with: /W3 /c
#pragma warning(default : 4619)
#pragma warning(disable : 4354)   // C4619, C4354 does not exist
```
---
title: Compilatore avviso (livello 1) C4572 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4572
dev_langs:
- C++
helpviewer_keywords:
- C4572
ms.assetid: 482dee5a-29bd-4fc3-b769-9dfd4cd2a964
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b87b3dd4264db9fd7ea3699f342358fa6d4d5aac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46076841"
---
# <a name="compiler-warning-level-1-c4572"></a>Avviso del compilatore (livello 1) C4572

Attributo [ParamArray] deprecato in /clr, utilizzare '.' invece

È stato usato uno stile obsoleto per specificare un elenco di argomenti variabili. Quando si compila per Common Language Runtime, utilizzare la sintassi di puntini di sospensione anziché <xref:System.ParamArrayAttribute>. Per altre informazioni, vedere [elenchi di argomenti variabili (...) (C + + CLI) ](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4572.

```
// C4572.cpp
// compile with: /clr /W1
void Func([System::ParamArray] array<int> ^);   // C4572
void Func2(... array<int> ^){}   // OK

int main() {
   Func2(1, 2, 3);
}
```
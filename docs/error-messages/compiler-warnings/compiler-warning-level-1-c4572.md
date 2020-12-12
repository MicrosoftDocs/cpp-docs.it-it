---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4572'
title: Avviso del compilatore (livello 1) C4572
ms.date: 11/04/2016
f1_keywords:
- C4572
helpviewer_keywords:
- C4572
ms.assetid: 482dee5a-29bd-4fc3-b769-9dfd4cd2a964
ms.openlocfilehash: ab447bc7ef5d702599b1583ae94ac0fa94d29a14
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332225"
---
# <a name="compiler-warning-level-1-c4572"></a>Avviso del compilatore (livello 1) C4572

L'attributo [ParamArray] è deprecato in/CLR, utilizzare '.. .' invece

È stato usato uno stile obsoleto per specificare un elenco di argomenti variabili. Quando si esegue la compilazione per CLR, utilizzare la sintassi dei puntini di sospensione anziché <xref:System.ParamArrayAttribute> . Per ulteriori informazioni, vedere [elenchi di argomenti variabili (...) (C++/CLI)](../../extensions/variable-argument-lists-dot-dot-dot-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4572.

```cpp
// C4572.cpp
// compile with: /clr /W1
void Func([System::ParamArray] array<int> ^);   // C4572
void Func2(... array<int> ^){}   // OK

int main() {
   Func2(1, 2, 3);
}
```

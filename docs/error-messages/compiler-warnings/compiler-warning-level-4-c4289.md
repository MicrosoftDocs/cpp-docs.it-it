---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4289'
title: Avviso del compilatore (livello 4) C4289
ms.date: 11/04/2016
f1_keywords:
- C4289
helpviewer_keywords:
- C4289
ms.assetid: 0dbd2863-4cde-4e16-894b-104a2d5fa724
ms.openlocfilehash: c0b82702195aa7f5dcd88cd4e9bffbc1bbd1769f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294613"
---
# <a name="compiler-warning-level-4-c4289"></a>Avviso del compilatore (livello 4) C4289

utilizzata estensione non standard. 'variabile': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo for

Quando si esegue la compilazione con [/ze](../../build/reference/za-ze-disable-language-extensions.md) e **/Zc: forScope-**, una variabile dichiarata in un ciclo [for](../../cpp/for-statement-cpp.md) è stata usata dopo l' **`for`** ambito del ciclo-.

Vedere [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) per informazioni su come specificare il comportamento standard in **`for`** cicli con **/ze**.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4289:

```cpp
// C4289.cpp
// compile with: /W4 /Zc:forScope-
#pragma warning(default:4289)
int main() {
   for (int i = 0 ; ; )   // C4289
      break;
   i++;
}
```

---
title: Avviso del compilatore (livello 4) C4289
ms.date: 11/04/2016
f1_keywords:
- C4289
helpviewer_keywords:
- C4289
ms.assetid: 0dbd2863-4cde-4e16-894b-104a2d5fa724
ms.openlocfilehash: b9083670465d68493d90a8e96ff7ee5db34c1978
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991320"
---
# <a name="compiler-warning-level-4-c4289"></a>Avviso del compilatore (livello 4) C4289

utilizzata estensione non standard. 'variabile': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo for

Quando si esegue la compilazione con [/ze](../../build/reference/za-ze-disable-language-extensions.md) e **/Zc: forScope-** , una variabile dichiarata in un ciclo [for](../../cpp/for-statement-cpp.md) è stata usata dopo l'ambito del ciclo **for**.

Vedere [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) per informazioni su come specificare il comportamento standard nei cicli **for** con **/ze**.

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

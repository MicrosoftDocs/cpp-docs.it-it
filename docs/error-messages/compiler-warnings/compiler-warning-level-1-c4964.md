---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4964'
title: Avviso del compilatore (livello 1) C4964
ms.date: 11/04/2016
f1_keywords:
- C4964
helpviewer_keywords:
- C4964
ms.assetid: b89c9274-8a92-4b7c-aa30-3fbb1b68ac73
ms.openlocfilehash: 102c04332bd40f6f1ae95cbd025c7400fc77dbf4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327923"
---
# <a name="compiler-warning-level-1-c4964"></a>Avviso del compilatore (livello 1) C4964

Nessuna opzione di ottimizzazione specificata. le informazioni sul profilo non verranno raccolte

[/GL](../../build/reference/gl-whole-program-optimization.md) e [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) sono stati specificati, ma non è stata richiesta alcuna ottimizzazione, quindi non verrà generato alcun file. PGC e, pertanto, non sarà possibile ottimizzare le ottimizzazioni PGO.

Se si desidera che vengano generati file con estensione PGC quando si esegue l'applicazione, specificare una delle opzioni del compilatore [/o](../../build/reference/o-options-optimize-code.md) .

L'esempio seguente genera l'C4964:

```cpp
// C4964.cpp
// compile with: /W1 /GL /link /ltcg:pgi
// C4964 expected
// Add /O2, for example, to the command line to resolve this warning.
int main() {
   int i;
}
```

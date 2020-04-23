---
title: Errore degli strumenti del linker LNK1179
ms.date: 11/04/2016
f1_keywords:
- LNK1179
helpviewer_keywords:
- LNK1179
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
ms.openlocfilehash: d85693cec11ef53a6bbbb60d8ced716d2a0bb131
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754338"
---
# <a name="linker-tools-error-lnk1179"></a>Errore degli strumenti del linker LNK1179

file non valido o danneggiato: DUPLICa TOet COMDAT 'nomefile'

Un modulo di oggetto contiene due o più COMDAT con lo stesso nome.

Questo errore può essere causato dall'utilizzo di [/H](../../build/reference/h-restrict-length-of-external-names.md), che limita la lunghezza dei nomi esterni, e [/Gy](../../build/reference/gy-enable-function-level-linking.md), che comprime le funzioni nei COMDAT.

## <a name="example"></a>Esempio

Nel codice seguente `function1` `function2` e sono identici nei primi otto caratteri. La compilazione con **/Gy** e **/H8** genera un errore di collegamento.

```cpp
void function1(void);
void function2(void);

int main() {
    function1();
    function2();
}

void function1(void) {}
void function2(void) {}
```

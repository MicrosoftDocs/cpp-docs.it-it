---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1179'
title: Errore degli strumenti del linker LNK1179
ms.date: 11/04/2016
f1_keywords:
- LNK1179
helpviewer_keywords:
- LNK1179
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
ms.openlocfilehash: 691476eeffadece2436518c5249ca523adca51c2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253442"
---
# <a name="linker-tools-error-lnk1179"></a>Errore degli strumenti del linker LNK1179

file danneggiato o non valido: COMDAT ' filename ' duplicato

Un modulo oggetto contiene due o più COMDAT con lo stesso nome.

Questo errore può essere causato dall'utilizzo di [/h](../../build/reference/h-restrict-length-of-external-names.md), che limita la lunghezza dei nomi esterni e [/Gy](../../build/reference/gy-enable-function-level-linking.md), che consente di raggruppare le funzioni in COMDAT.

## <a name="example"></a>Esempio

Nel codice seguente, `function1` e `function2` sono identici nei primi otto caratteri. La compilazione con **/Gy** e **/h8** genera un errore di collegamento.

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

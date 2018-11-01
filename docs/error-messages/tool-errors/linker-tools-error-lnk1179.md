---
title: Errore degli strumenti del linker LNK1179
ms.date: 11/04/2016
f1_keywords:
- LNK1179
helpviewer_keywords:
- LNK1179
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
ms.openlocfilehash: 71aba1f20cfaf5b6b9ec33d43ebde594e381921f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594090"
---
# <a name="linker-tools-error-lnk1179"></a>Errore degli strumenti del linker LNK1179

file danneggiato o non valido: 'filename' COMDAT duplicati

Un modulo di oggetti contiene due o più COMDAT con lo stesso nome.

Questo errore può essere causato dall'utilizzo [/H](../../build/reference/h-restrict-length-of-external-names.md), che limita la lunghezza dei nomi esterni, e [/Gy](../../build/reference/gy-enable-function-level-linking.md), i pacchetti che funzioni nei dati COMDAT.

## <a name="example"></a>Esempio

Nel codice seguente, `function1` e `function2` identici i primi otto caratteri. La compilazione con **/Gy** e **/H8** genera un errore di collegamento.

```
void function1(void);
void function2(void);

int main() {
    function1();
    function2();
}

void function1(void) {}
void function2(void) {}
```
---
title: Errore degli strumenti del linker LNK1179
ms.date: 11/04/2016
f1_keywords:
- LNK1179
helpviewer_keywords:
- LNK1179
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
ms.openlocfilehash: a267019f1be08cc8dcffdff3b4ba0b73357cccd4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80183957"
---
# <a name="linker-tools-error-lnk1179"></a>Errore degli strumenti del linker LNK1179

file danneggiato o non valido: COMDAT ' filename ' duplicato

Un modulo oggetto contiene due o più COMDAT con lo stesso nome.

Questo errore può essere causato dall'utilizzo di [/h](../../build/reference/h-restrict-length-of-external-names.md), che limita la lunghezza dei nomi esterni e [/Gy](../../build/reference/gy-enable-function-level-linking.md), che consente di raggruppare le funzioni in COMDAT.

## <a name="example"></a>Esempio

Nel codice seguente `function1` e `function2` sono identici nei primi otto caratteri. La compilazione con **/Gy** e **/h8** genera un errore di collegamento.

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

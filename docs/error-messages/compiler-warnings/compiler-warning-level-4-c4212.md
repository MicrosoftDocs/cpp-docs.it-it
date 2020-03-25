---
title: Avviso del compilatore (livello 4) C4212
ms.date: 11/04/2016
f1_keywords:
- C4212
helpviewer_keywords:
- C4212
ms.assetid: df781ea1-182d-4f9f-9a31-55b6ce80c711
ms.openlocfilehash: d33e5c60bac657060ffef2a43686a5f737eb11cc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161308"
---
# <a name="compiler-warning-level-4-c4212"></a>Avviso del compilatore (livello 4) C4212

utilizzata estensione non standard: dichiarazione di funzione con puntini di sospensione utilizzati

Il prototipo di funzione ha un numero variabile di argomenti. La definizione della funzione non lo è.

L'esempio seguente genera l'C4212:

```c
// C4212.c
// compile with: /W4 /Ze /c
void f(int , ...);
void f(int i, int j) {}
```

---
title: Errore del compilatore C2075
ms.date: 11/04/2016
f1_keywords:
- C2075
helpviewer_keywords:
- C2075
ms.assetid: 8b1865d2-540b-4117-b982-e7a58a0b6cf7
ms.openlocfilehash: 630c5cf2e90ae3373ef28b1388f06cd3fc069425
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302003"
---
# <a name="compiler-error-c2075"></a>Errore del compilatore C2075

'identifier': l'inizializzazione di una matrice richiede l'utilizzo di parentesi graffe

Non sono presenti parentesi graffe intorno all'inizializzatore di matrice specificato.

L'esempio seguente genera l'errore C2075:

```c
// C2075.c
int main() {
   int i[] = 1, 2, 3 };   // C2075
}
```

Possibile soluzione:

```c
// C2075b.c
int main() {
   int j[] = { 1, 2, 3 };
}
```

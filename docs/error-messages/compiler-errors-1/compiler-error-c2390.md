---
title: Errore del compilatore C2390
ms.date: 11/04/2016
f1_keywords:
- C2390
helpviewer_keywords:
- C2390
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
ms.openlocfilehash: 48012c0fe31b2017cad29cc98992c9b1121efa7c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221185"
---
# <a name="compiler-error-c2390"></a>Errore del compilatore C2390

' Identifier ': classe di archiviazione ' specifier ' non corretta

La classe di archiviazione non è valida per l'identificatore dell'ambito globale. La classe di archiviazione predefinita viene usata al posto della classe non valida.

Di seguito vengono riportate alcune soluzioni possibili:

- Se l'identificatore è una funzione, dichiararla con **`extern`** archiviazione.

- Se l'identificatore è un parametro formale o una variabile locale, dichiararlo con l'archiviazione automatica.

- Se l'identificatore è una variabile globale, dichiararla senza alcuna classe di archiviazione (archiviazione automatica).

## <a name="example"></a>Esempio

- L'esempio seguente genera l'C2390:

```cpp
// C2390.cpp
register int i;   // C2390

int main() {
   register int j;   // OK
}
```

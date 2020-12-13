---
description: 'Altre informazioni su: errore del compilatore C2390'
title: Errore del compilatore C2390
ms.date: 11/04/2016
f1_keywords:
- C2390
helpviewer_keywords:
- C2390
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
ms.openlocfilehash: 91539cea6ed89c02734c08f068f3d6474283dfa9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337596"
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

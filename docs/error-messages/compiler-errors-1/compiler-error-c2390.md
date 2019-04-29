---
title: Errore del compilatore C2390
ms.date: 11/04/2016
f1_keywords:
- C2390
helpviewer_keywords:
- C2390
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
ms.openlocfilehash: 89f6ebb02326413e8dca67d333e555321da4e645
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393636"
---
# <a name="compiler-error-c2390"></a>Errore del compilatore C2390

'identifier': classe di archiviazione non corretto 'specifier'

La classe di archiviazione non è valida per l'identificatore di ambito globale. La classe di archiviazione predefinita viene usata al posto la classe non è valida.

Possibili risoluzioni:

- Se l'identificatore è una funzione, dichiararla come con `extern` archiviazione.

- Se l'identificatore è un parametro formale o una variabile locale, dichiararla come con l'archiviazione automatica.

- Se l'identificatore è una variabile globale, dichiararla come con alcuna classe di archiviazione (archiviazione automatica).

## <a name="example"></a>Esempio

- L'esempio seguente genera l'errore C2390:

```
// C2390.cpp
register int i;   // C2390

int main() {
   register int j;   // OK
}
```
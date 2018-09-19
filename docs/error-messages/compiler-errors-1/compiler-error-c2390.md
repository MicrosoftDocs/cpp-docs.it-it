---
title: Errore del compilatore C2390 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2390
dev_langs:
- C++
helpviewer_keywords:
- C2390
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5de5a9af8f8aa04219f0a7d61162336745fd4bfa
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46098214"
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
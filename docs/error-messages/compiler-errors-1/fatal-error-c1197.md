---
title: Errore irreversibile C1197
ms.date: 11/04/2016
f1_keywords:
- C1197
helpviewer_keywords:
- C1197
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
ms.openlocfilehash: e1c00a001c807b0cc6a5946b61ca4e9d5dc0167a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50604152"
---
# <a name="fatal-error-c1197"></a>Errore irreversibile C1197

non è possibile fare riferimento a 'mscorlib. dll_1' poiché il programma ha già fatto riferimento a 'mscorlib.dll_2'

Il compilatore corrisponde a una versione di common language runtime.  Tuttavia, per fare riferimento a una versione di un file di common language runtime da una versione precedente è stato effettuato il tentativo.

Per risolvere questo errore, fare riferimento solo ai file della versione di common language runtime fornito con la versione di Visual C++ si esegue la compilazione con.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C1197:

```
// C1197.cpp
// compile with: /clr /c
// processor: x86
#using "C:\Windows\Microsoft.NET\Framework\v1.1.4322\mscorlib.dll"   // C1197
// try the following line instead
// #using "mscorlib.dll"
```
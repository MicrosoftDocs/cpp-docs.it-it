---
title: Errore irreversibile C1197
ms.date: 11/04/2016
f1_keywords:
- C1197
helpviewer_keywords:
- C1197
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
ms.openlocfilehash: 7f698262c73f0b311a92a8940107b552430919bb
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747241"
---
# <a name="fatal-error-c1197"></a>Errore irreversibile C1197

non è possibile fare riferimento a' mscorlib. dll_1' perché il programma ha già fatto riferimento a' mscorlib. dll_2'

Il compilatore corrisponde a una versione della Common Language Runtime.  Tuttavia, è stato effettuato un tentativo di fare riferimento a una versione di un file di Common Language Runtime da una versione precedente.

Per correggere l'errore, fare riferimento solo ai file della versione della Common Language Runtime fornita con la versione di Visual C++ con cui si esegue la compilazione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C1197:

```cpp
// C1197.cpp
// compile with: /clr /c
// processor: x86
#using "C:\Windows\Microsoft.NET\Framework\v1.1.4322\mscorlib.dll"   // C1197
// try the following line instead
// #using "mscorlib.dll"
```

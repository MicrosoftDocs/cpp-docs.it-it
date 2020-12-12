---
description: 'Altre informazioni su: errore irreversibile C1197'
title: Errore irreversibile C1197
ms.date: 11/04/2016
f1_keywords:
- C1197
helpviewer_keywords:
- C1197
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
ms.openlocfilehash: c61cbd71fa8f17dc787fd9ee5eabd0f073aafb39
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268171"
---
# <a name="fatal-error-c1197"></a>Errore irreversibile C1197

non è possibile fare riferimento a' mscorlib.dll_1' perché il programma ha già fatto riferimento a' mscorlib.dll_2'

Il compilatore corrisponde a una versione della Common Language Runtime.  Tuttavia, è stato effettuato un tentativo di fare riferimento a una versione di un file di Common Language Runtime da una versione precedente.

Per correggere l'errore, fare riferimento solo ai file della versione della Common Language Runtime fornita con la versione di Visual C++ in cui si esegue la compilazione.

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

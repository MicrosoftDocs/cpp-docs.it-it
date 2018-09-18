---
title: Errore irreversibile C1197 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1197
dev_langs:
- C++
helpviewer_keywords:
- C1197
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 58561e7bd906fc750779ef53a4f68ec27088a3b7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46024762"
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
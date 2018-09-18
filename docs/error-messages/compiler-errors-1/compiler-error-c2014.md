---
title: Errore del compilatore C2014 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2014
dev_langs:
- C++
helpviewer_keywords:
- C2014
ms.assetid: 231d8e9c-48c0-4027-99a3-245d186275ec
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4a9167d71e717490b89c1861abe9a9da9e0ab6a8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46064854"
---
# <a name="compiler-error-c2014"></a>Errore del compilatore C2014

comando del preprocessore deve iniziare al primo carattere non vuoto

Il `#` segno di una direttiva del preprocessore deve essere il primo carattere in una riga che non è lo spazio vuoto.

L'esempio seguente genera l'errore C2014:

```
// C2014.cpp
int k; #include <stdio.h>   // C2014
```

Possibile soluzione:

```
// C2014b.cpp
// compile with: /c
int k;
#include <stdio.h>
```
---
title: Compilatore avviso (livello 1) C4518 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4518
dev_langs:
- C++
helpviewer_keywords:
- C4518
ms.assetid: 4ad21004-f076-43fd-99f4-4bf1f9be4c0b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 90936d7ad695cb826e7fc58798706822ca1b8f24
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46037788"
---
# <a name="compiler-warning-level-1-c4518"></a>Avviso del compilatore (livello 1) C4518

'identificatore': classe di archiviazione o identificatore imprevisto di tipo in questo contesto. ignorato

L'esempio seguente genera l'errore C4518:

```
// C4518.cpp
// compile with: /c /W1
_declspec(dllexport) extern "C" void MyFunction();   // C4518

extern "C" void MyFunction();   // OK
```
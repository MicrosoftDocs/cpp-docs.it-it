---
title: Compilatore avviso (livello 1) C4399 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4399
dev_langs:
- C++
helpviewer_keywords:
- C4399
ms.assetid: f58d9ba7-71a0-4c3b-b26f-f946dda8af30
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aedad6aed07a6056f74ad338037a7268c722627f
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34703720"
---
# <a name="compiler-warning-level-1-c4399"></a>Avviso del compilatore (livello 1) C4399

> '*simbolo*': simbolo per processo non dovrebbe essere contrassegnato con declspec quando compilato con /clr: pure

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

Dati da un'immagine nativa o un'immagine con costrutti nativi e CLR non possono essere importati in un'immagine pure. Per risolvere il problema, eseguire la compilazione con **/clr** (non **/clr: pure**) o eliminare `__declspec(dllimport)`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4399.

```cpp
// C4399.cpp
// compile with: /clr:pure /doc /W1 /c
__declspec(dllimport) __declspec(process) extern const int i;   // C4399
```
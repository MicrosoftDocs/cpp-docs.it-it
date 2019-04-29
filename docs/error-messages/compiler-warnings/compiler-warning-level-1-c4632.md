---
title: Avviso del compilatore (livello 1) C4632
ms.date: 11/04/2016
f1_keywords:
- C4632
helpviewer_keywords:
- C4632
ms.assetid: 9e35d205-cf21-4e34-8bd5-e1e7b0e2cdd3
ms.openlocfilehash: f1870da4f7889d79f5a4eabfcc3a95a21703e9fd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393545"
---
# <a name="compiler-warning-level-1-c4632"></a>Avviso del compilatore (livello 1) C4632

Commento al documento XML: file - accesso negato: motivo

Il percorso del file xdc (`file`) non è valido, ed è stato creato alcun file con estensione xdc.

L'esempio seguente genera l'errore C4632:

```
// C4632.cpp
// compile with: /clr /docv:\\falsedir /LD /W1
// C4632 expected

/// Text for class MyClass.
public ref class MyClass {};
```
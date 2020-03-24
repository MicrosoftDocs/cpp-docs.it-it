---
title: Avviso del compilatore (livello 1) C4399
ms.date: 11/04/2016
f1_keywords:
- C4399
helpviewer_keywords:
- C4399
ms.assetid: f58d9ba7-71a0-4c3b-b26f-f946dda8af30
ms.openlocfilehash: a556fbffad41d04b3eb0ea1acfd5e8739ddd5b68
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186803"
---
# <a name="compiler-warning-level-1-c4399"></a>Avviso del compilatore (livello 1) C4399

> '*Symbol*': il simbolo per processo non deve essere contrassegnato con __declspec (dllimport) quando compilato con/CLR: pure

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

I dati di un'immagine nativa o di un'immagine con costrutti nativi e CLR non possono essere importati in un'immagine pure. Per risolvere il problema, compilare con **/CLR** (non **/CLR: pure**) o DELETE `__declspec(dllimport)`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4399.

```cpp
// C4399.cpp
// compile with: /clr:pure /doc /W1 /c
__declspec(dllimport) __declspec(process) extern const int i;   // C4399
```

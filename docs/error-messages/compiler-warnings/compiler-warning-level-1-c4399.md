---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4399'
title: Avviso del compilatore (livello 1) C4399
ms.date: 11/04/2016
f1_keywords:
- C4399
helpviewer_keywords:
- C4399
ms.assetid: f58d9ba7-71a0-4c3b-b26f-f946dda8af30
ms.openlocfilehash: a1d0fab62d13c08fb2117279d9173786c65d846f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311136"
---
# <a name="compiler-warning-level-1-c4399"></a>Avviso del compilatore (livello 1) C4399

> '*Symbol*': il simbolo per processo non deve essere contrassegnato con __declspec (dllimport) quando compilato con/CLR: pure

## <a name="remarks"></a>Commenti

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

I dati di un'immagine nativa o di un'immagine con costrutti nativi e CLR non possono essere importati in un'immagine pure. Per risolvere il problema, compilare con **/CLR** (non **/CLR: pure**) o Delete `__declspec(dllimport)` .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4399.

```cpp
// C4399.cpp
// compile with: /clr:pure /doc /W1 /c
__declspec(dllimport) __declspec(process) extern const int i;   // C4399
```

---
title: Avviso del compilatore (livello 1) C4399
ms.date: 11/04/2016
f1_keywords:
- C4399
helpviewer_keywords:
- C4399
ms.assetid: f58d9ba7-71a0-4c3b-b26f-f946dda8af30
ms.openlocfilehash: 56fe0f314142d873fc02136bc2c3fe65e71f4dda
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408342"
---
# <a name="compiler-warning-level-1-c4399"></a>Avviso del compilatore (livello 1) C4399

> «*simbolo*': simbolo per processo non dovrebbe essere contrassegnato con declspec quando viene compilato con /clr: pure

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

I dati da un'immagine nativa o un'immagine con costrutti nativi e CLR non possono essere importati in un'immagine pure. Per risolvere questo problema, eseguire la compilazione con **/clr** (non **/clr: pure**) o eliminare `__declspec(dllimport)`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4399.

```cpp
// C4399.cpp
// compile with: /clr:pure /doc /W1 /c
__declspec(dllimport) __declspec(process) extern const int i;   // C4399
```
---
title: Avviso del compilatore (livello 1) C4612
ms.date: 08/27/2018
f1_keywords:
- C4612
helpviewer_keywords:
- C4612
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
ms.openlocfilehash: ed5458fc52c1c9c9f12187095e4658204613d1a1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406366"
---
# <a name="compiler-warning-level-1-c4612"></a>Avviso del compilatore (livello 1) C4612

> errore nel nome del file di inclusione

## <a name="remarks"></a>Note

Questo avviso si verifica con **#pragma include_alias** quando manca un nome file o non è corretto.

Gli argomenti per il **#pragma include_alias** istruzione consente di usare il modulo dell'offerta ("*filename*") o formato con parentesi angolari (\<*filename*>), ma entrambe devono usare lo stesso formato.

## <a name="example"></a>Esempio

```cpp
// C4612.cpp
// compile with: /W1 /LD
#pragma include_alias("StandardIO", <stdio.h>) // C4612
```
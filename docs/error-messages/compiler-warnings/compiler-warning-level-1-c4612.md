---
title: Avviso del compilatore (livello 1) C4612
ms.date: 08/27/2018
f1_keywords:
- C4612
helpviewer_keywords:
- C4612
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
ms.openlocfilehash: f9478caef9eaba9c72dc282179100daf2d94c6d5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185984"
---
# <a name="compiler-warning-level-1-c4612"></a>Avviso del compilatore (livello 1) C4612

> errore nel nome del file di inclusione

## <a name="remarks"></a>Osservazioni

Questo avviso si verifica con **#pragma include_alias** quando manca un nome file o non è corretto.

Gli argomenti dell'istruzione **#pragma include_alias** possono utilizzare il formato di virgolette ("*filename*") o il formato con parentesi angolari (\<*filename*>), ma entrambi devono utilizzare lo stesso formato.

## <a name="example"></a>Esempio

```cpp
// C4612.cpp
// compile with: /W1 /LD
#pragma include_alias("StandardIO", <stdio.h>) // C4612
```

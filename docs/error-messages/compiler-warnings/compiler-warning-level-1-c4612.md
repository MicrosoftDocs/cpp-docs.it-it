---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4612'
title: Avviso del compilatore (livello 1) C4612
ms.date: 08/27/2018
f1_keywords:
- C4612
helpviewer_keywords:
- C4612
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
ms.openlocfilehash: 2844b54c592f5c4c4817cfec97d57c41fa2055b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341724"
---
# <a name="compiler-warning-level-1-c4612"></a>Avviso del compilatore (livello 1) C4612

> errore nel nome del file di inclusione

## <a name="remarks"></a>Commenti

Questo avviso si verifica con **#pragma include_alias** quando manca un nome file o non è corretto.

Gli argomenti dell'istruzione **#pragma include_alias** possono utilizzare il formato virgolette ("*filename*") o il formato con parentesi angolari ( \<*filename*> ), ma entrambi devono utilizzare lo stesso formato.

## <a name="example"></a>Esempio

```cpp
// C4612.cpp
// compile with: /W1 /LD
#pragma include_alias("StandardIO", <stdio.h>) // C4612
```

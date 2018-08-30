---
title: Compilatore avviso (livello 1) C4612 | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4612
dev_langs:
- C++
helpviewer_keywords:
- C4612
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 10a0a5640386f5e5673f39d6c2c76ee18fcc7ba7
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210730"
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
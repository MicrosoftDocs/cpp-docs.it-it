---
title: Compilatore avviso (livello 1) C4182 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4182
dev_langs:
- C++
helpviewer_keywords:
- C4182
ms.assetid: 8970f3c6-e2dd-407e-b2ec-964360eb8b43
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 80c0cdac45238a4734b02d34f4c540c62a2f0c09
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056573"
---
# <a name="compiler-warning-level-1-c4182"></a>Avviso del compilatore (livello 1) C4182

\#include a livello di nidificazione: 'number' profonde; possibile ricorsione infinita

Il compilatore ha esaurito lo spazio nell'heap a causa del numero di file di inclusione annidati. Un file di inclusione è annidato quando viene incluso da un altro file di inclusione.

Questo messaggio è puramente informativo e precede l'errore [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).
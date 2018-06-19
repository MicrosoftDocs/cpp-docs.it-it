---
title: Compilatore avviso (livello 1) C4445 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4445
dev_langs:
- C++
helpviewer_keywords:
- C4445
ms.assetid: 535e92a0-ba08-4dfc-89b2-af2dcdd7caeb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: abd0d15113373f752bb861d73e48091687b2f0d2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33274589"
---
# <a name="compiler-warning-level-1-c4445"></a>Avviso del compilatore (livello 1) C4445
'function': in un tipo WinRT o gestito un metodo virtuale non può essere privato  
  
 Se una funzione virtuale è privata, non è possibile accedervi da un tipo derivato. Per correggere l'errore, impostare l'accessibilità della funzione del membro virtuale come protetta o pubblica.
---
title: Compilatore avviso (livello 1) C4612 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 0983f5d0bb89eaf1daee94468b318557bc83cd05
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4612"></a>Avviso del compilatore (livello 1) C4612
errore nel nome del file di inclusione  
  
 Questo avviso si verifica con **#pragma include_alias** quando manca un nome file o non è corretto.  
  
 Gli argomenti per il **#pragma include_alias** istruzione può utilizzare l'offerta (**"***filename***"**) o formato con parentesi angolari ( **\< ***filename***>**), ma entrambi devono utilizzare lo stesso formato.  
  
## <a name="example"></a>Esempio  
  
```  
// C4612.cpp  
// compile with: /W1 /LD  
#pragma include_alias("StandardIO", <stdio.h>) // C4612  
```
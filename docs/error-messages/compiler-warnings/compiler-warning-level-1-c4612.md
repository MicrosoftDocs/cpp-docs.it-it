---
title: Compilatore avviso (livello 1) C4612 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4612
dev_langs:
- C++
helpviewer_keywords:
- C4612
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 922da98a54a572462d2b247f6211a39bcaed9ec6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4612"></a>Avviso del compilatore (livello 1) C4612
errore nel nome del file di inclusione  
  
 Questo avviso si verifica con **#pragma include_alias** quando manca un nome file o non è corretto.  
  
 Gli argomenti dell'istruzione **#pragma include_alias** possono usare il formato con virgolette (**"***filename***"**) o il formato con parentesi angolari (**\<***filename***>**), ma è necessario che entrambi usino lo stesso formato.  
  
## <a name="example"></a>Esempio  
  
```  
// C4612.cpp  
// compile with: /W1 /LD  
#pragma include_alias("StandardIO", <stdio.h>) // C4612  
```
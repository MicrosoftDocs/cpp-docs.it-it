---
title: Errore del compilatore C2410 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2410
dev_langs:
- C++
helpviewer_keywords:
- C2410
ms.assetid: b69b2de1-56f3-4ebc-8913-04ac57ffe8a1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3cd5dfa7b33f5af5c57f6479170a7a56df39a0e9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2410"></a>Errore del compilatore C2410
'identifier': nome membro ambiguo in 'context'  
  
 L'identificatore è un membro di più di una struttura o unione in questo contesto.  
  
 Utilizzare un identificatore di struttura o unione su operando che ha causato l'errore. Un identificatore di struttura o unione è un identificatore di tipo `struct` o `union` (un `typedef` nome o una variabile dello stesso tipo della struttura o unione di riferimento). L'identificatore deve essere l'operando sinistro dell'operatore di selezione dei membri (.) prima di utilizzare l'operando.
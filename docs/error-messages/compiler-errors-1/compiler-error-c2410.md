---
title: Errore del compilatore C2410 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2410
dev_langs:
- C++
helpviewer_keywords:
- C2410
ms.assetid: b69b2de1-56f3-4ebc-8913-04ac57ffe8a1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f9c2a2df0941130c4f2416806a05ce0378373eb4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2410"></a>Errore del compilatore C2410
'identifier': nome membro ambiguo in 'context'  
  
 L'identificatore è un membro di più di una struttura o unione in questo contesto.  
  
 Utilizzare un identificatore di struttura o unione su operando che ha causato l'errore. Un identificatore di struttura o unione è un identificatore di tipo `struct` o `union` (un `typedef` nome o una variabile dello stesso tipo della struttura o unione di riferimento). L'identificatore deve essere l'operando sinistro dell'operatore di selezione dei membri (.) prima di utilizzare l'operando.
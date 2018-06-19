---
title: Compilatore (livello 1) avviso C4650 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4650
dev_langs:
- C++
helpviewer_keywords:
- C4650
ms.assetid: 3190b3e3-dcd6-4846-939b-f900ab652b2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6cb1c9979141e7958b6c2802aaf321efe41e9570
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283085"
---
# <a name="compiler-warning-level-1-c4650"></a>Avviso del compilatore (livello 1) C4650
informazioni di debug non nell'intestazione precompilata. solo i simboli globali presenti l'intestazione saranno disponibili  
  
 Il file di intestazione precompilata non è stato compilato con informazioni di debug sui simboli Microsoft.  
  
 Durante il collegamento, il file di libreria a collegamento dinamico o eseguibile risultante non includerà informazioni di debug per simboli locali contenuti nell'intestazione precompilata.  
  
 Questo avviso può essere evitato ricompilando il file di intestazione precompilata con il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione della riga di comando.
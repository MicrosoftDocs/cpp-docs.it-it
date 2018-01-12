---
title: Compilatore (livello 1) avviso C4650 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4650
dev_langs: C++
helpviewer_keywords: C4650
ms.assetid: 3190b3e3-dcd6-4846-939b-f900ab652b2a
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: af10d05562c0c60c6a010e105441533362d058df
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4650"></a>Avviso del compilatore (livello 1) C4650
informazioni di debug non nell'intestazione precompilata. solo i simboli globali presenti l'intestazione saranno disponibili  
  
 Il file di intestazione precompilata non è stato compilato con informazioni di debug sui simboli Microsoft.  
  
 Durante il collegamento, il file di libreria a collegamento dinamico o eseguibile risultante non includerà informazioni di debug per simboli locali contenuti nell'intestazione precompilata.  
  
 Questo avviso può essere evitato ricompilando il file di intestazione precompilata con il [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) opzione della riga di comando.
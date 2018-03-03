---
title: Compilatore avviso (livello 3) C4622 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4622
dev_langs:
- C++
helpviewer_keywords:
- C4622
ms.assetid: d3c879f0-4492-4f4b-b26d-230993f3a933
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 52f4491d26cfa56f48ed479b30daeafe9cc01adf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4622"></a>Avviso del compilatore (livello 3) C4622
Sovrascrittura delle informazioni di debug generate durante la creazione dell'intestazione precompilata nel file oggetto: 'file'  
  
 Le informazioni CodeView nel file specificato sono andate perse durante la compilazione con l'opzione [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (Usa intestazione precompilata).  
  
 Rinominare il file oggetto (usando [/Fo](../../build/reference/fo-object-file-name.md)) quando si crea o si usa il file di intestazione precompilata e collegare usando il nuovo file oggetto.
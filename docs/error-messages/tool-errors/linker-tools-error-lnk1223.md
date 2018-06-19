---
title: Strumenti del linker LNK1223 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1223
dev_langs:
- C++
helpviewer_keywords:
- LNK1223
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e50d29af6ac563fadd3a52e5b1d3d15201289083
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33298652"
---
# <a name="linker-tools-error-lnk1223"></a>Errore degli strumenti del linker LNK1223
file danneggiato o non valido: il file contiene contributi pdata non validi  
  
 Per le piattaforme RISC che usano pdata, questo errore si verifica se il compilatore ha generato una sezione pdata con voci non ordinate.  
  
 Per risolvere questo problema, provare a compilare senza [/GL (Ottimizzazione intero programma)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md) abilitato. Corpi di funzione vuota possono inoltre causare questo errore in alcuni casi.
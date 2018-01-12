---
title: Strumenti del linker LNK1223 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1223
dev_langs: C++
helpviewer_keywords: LNK1223
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c330077e8de73b8eeb71b0a418eb89d2ec0ebfdc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1223"></a>Errore degli strumenti del linker LNK1223
file danneggiato o non valido: il file contiene contributi pdata non validi  
  
 Per le piattaforme RISC che usano pdata, questo errore si verifica se il compilatore ha generato una sezione pdata con voci non ordinate.  
  
 Per risolvere questo problema, provare a compilare senza [/GL (Ottimizzazione intero programma)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md) abilitato. Corpi di funzione vuota possono inoltre causare questo errore in alcuni casi.
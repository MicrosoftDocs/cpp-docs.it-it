---
title: Errore della riga di comando D8037 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: D8037
dev_langs: C++
helpviewer_keywords: D8037
ms.assetid: acddaaa0-bd84-426f-a37b-8f680b379c9d
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6cc19633528cddfdd18f8cb8bb17b150432462c4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-line-error-d8037"></a>Errore della riga di comando D8037
Impossibile creare il file temporaneo. svuotare la directory temporanea dei file il precedenti  
  
 Non c'è spazio sufficiente per creare il compilatore temporaneo dei file intermedi. Per risolvere questo errore, rimuovere i file di codice MSIL obsoleti nella directory specificata per il **TMP** variabile di ambiente. Questi file sarà di CL_hhhhhhhh, dove h rappresenta una cifra esadecimale casuale e ss rappresenta il tipo di file IL. Inoltre, assicurarsi di aggiornare il computer con le ultime patch del sistema operativo.  
  
## <a name="see-also"></a>Vedere anche  
 [Errori della riga di comando D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)
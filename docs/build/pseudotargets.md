---
title: Pseudodestinazioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- makefiles, pseudotargets
- pseudotargets and NMAKE
- NMAKE program, pseudotargets
- timestamps, makefile pseudotargets
- NMAKE program, targets
ms.assetid: c8c479dc-0129-4186-8366-bc6251f2b494
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 761b71f05840c86516563df79d45cc1bb018fbba
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pseudotargets"></a>Pseudo-destinazioni
Pseudo è un'etichetta utilizzata al posto di un nome di file in una riga di dipendenza. Viene interpretato come un file che non esiste e pertanto non è aggiornata. In NMAKE che timestamp della pseudo è la più recente di tutti i relativi dipendenti. Se non sono presenti dipendenti, viene utilizzata l'ora corrente. Se una pseudo-destinazione viene usata come destinazione, i comandi vengono sempre eseguiti. Pseudo utilizzata come dipendente deve comparire anche come destinazione in un'altra dipendenza. Tuttavia, tale dipendenza non è necessario disporre di un blocco di comandi.  
  
 I nomi di pseudo seguono le regole di sintassi nome file per le destinazioni. Tuttavia, se il nome non ha un'estensione (ovvero, non contiene un punto), è possibile superare il limite di 8 caratteri per i nomi di file e può contenere fino a 256 caratteri.  
  
## <a name="see-also"></a>Vedere anche  
 [Destinazioni](../build/targets.md)
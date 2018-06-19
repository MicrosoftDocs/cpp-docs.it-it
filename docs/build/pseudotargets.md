---
title: Pseudodestinazioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- makefiles, pseudotargets
- pseudotargets and NMAKE
- NMAKE program, pseudotargets
- timestamps, makefile pseudotargets
- NMAKE program, targets
ms.assetid: c8c479dc-0129-4186-8366-bc6251f2b494
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 67dbc6ae3ad331ab3297b62d00044c3edf679994
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368408"
---
# <a name="pseudotargets"></a>Pseudo-destinazioni
Pseudo è un'etichetta utilizzata al posto di un nome di file in una riga di dipendenza. Viene interpretato come un file che non esiste e pertanto non è aggiornata. In NMAKE che timestamp della pseudo è la più recente di tutti i relativi dipendenti. Se non sono presenti dipendenti, viene utilizzata l'ora corrente. Se una pseudo-destinazione viene usata come destinazione, i comandi vengono sempre eseguiti. Pseudo utilizzata come dipendente deve comparire anche come destinazione in un'altra dipendenza. Tuttavia, tale dipendenza non è necessario disporre di un blocco di comandi.  
  
 I nomi di pseudo seguono le regole di sintassi nome file per le destinazioni. Tuttavia, se il nome non ha un'estensione (ovvero, non contiene un punto), è possibile superare il limite di 8 caratteri per i nomi di file e può contenere fino a 256 caratteri.  
  
## <a name="see-also"></a>Vedere anche  
 [Destinazioni](../build/targets.md)
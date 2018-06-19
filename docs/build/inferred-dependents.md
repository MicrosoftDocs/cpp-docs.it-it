---
title: Dipendenti dedotti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inferred dependents in NMAKE
- dependents, inferred
ms.assetid: 9303045c-69b3-4f35-bffc-19d5cd6ea3c3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a86ed1a8fe6c97ae11af50f59cb639ef6fd7c1da
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32367898"
---
# <a name="inferred-dependents"></a>Dipendenti dedotti
Un dipendente dedotto è derivato da una regola di inferenza e verrà valutato prima dei dipendenti espliciti. Se un dipendente dedotto non è aggiornato rispetto alla relativa destinazione, viene richiamato il blocco di comandi per la dipendenza. Se un dipendente dedotto non esiste o non aggiornato relativi dipendenti, NMAKE Aggiorna innanzitutto il dipendente dedotto. Per ulteriori informazioni sui dipendenti dedotti, vedere [regole di inferenza](../build/inference-rules.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Dipendenti](../build/dependents.md)
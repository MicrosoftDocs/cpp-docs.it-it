---
title: Vantaggi e gli svantaggi del metodo usato per collegare la libreria CRT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- _ATL_MIN_CRT macro
ms.assetid: 49b485f7-9487-49e4-b12a-0f710b620e2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b2835e88da11b8d8332226080eb860afd41c0702
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32355387"
---
# <a name="benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt"></a>Vantaggi e gli svantaggi del metodo usato per collegare la libreria CRT
Il progetto è possibile collegare con la libreria CRT in modo statico o dinamico. Nella tabella seguente vengono descritti i vantaggi e gli svantaggi relativi alla scelta del metodo da utilizzare.  
  
|Metodo|Vantaggio|Compromesso|  
|------------|-------------|--------------|  
|Collegamento statico alla libreria CRT<br /><br /> (**Libreria di Runtime** impostato su **a thread singolo**)|La DLL CRT non è richiesto nel sistema in cui si eseguiranno l'immagine.|Circa 25K di codice di avvio viene aggiunto all'immagine, aumentando sostanzialmente la dimensione.|  
|Il collegamento dinamico alla libreria CRT<br /><br /> (**Libreria di Runtime** impostato su **multithread**)|L'immagine non richiede il codice di avvio CRT, pertanto è molto più piccolo.|La DLL CRT deve essere nel sistema che esegue l'applicazione.|  
  
 L'argomento [il collegamento alla libreria CRT in un progetto ATL](../atl/linking-to-the-crt-in-your-atl-project.md) viene illustrato come selezionare il modo in cui il collegamento alla libreria CRT.  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con codice di runtime C e ATL](../atl/programming-with-atl-and-c-run-time-code.md)   
 [DLL e il comportamento della libreria di runtime di Visual C++](../build/run-time-library-behavior.md)   
 [Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)


---
title: Le espressioni nella pre-elaborazione di Makefile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- preprocessing makefiles
- expressions [C++], makefile preprocessing
- makefiles, preprocessing
ms.assetid: 37f0f413-97e0-452c-a83f-3c9002c44c92
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 32de1d1eb3262e1fca0a00048a61d3129347cb19
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="expressions-in-makefile-preprocessing"></a>Espressioni nella pre-elaborazione di makefile
Il **! Se** o **! ELSE IF** `constantexpression` composta costanti integer (in notazione decimale o in linguaggio C), le costanti di stringa o comandi. Utilizzare le parentesi per raggruppare le espressioni. Le espressioni utilizzano tipo C unsigned long integer aritmetici; i numeri sono nel formato a 32 bit in complemento a due nell'intervallo - 2147483648 e 2147483647.  
  
 Le espressioni possono usare operatori che agiscono sui valori delle costanti, codici di uscita dei comandi, stringhe, macro e percorsi del file system.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Operatori di pre-elaborazione di makefile](../build/makefile-preprocessing-operators.md)  
  
 [L'esecuzione di un programma nella pre-elaborazione](../build/executing-a-program-in-preprocessing.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Pre-elaborazione di makefile](../build/makefile-preprocessing.md)
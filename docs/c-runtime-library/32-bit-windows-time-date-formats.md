---
title: Formati data e ora di Windows a 32 bit | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.time
dev_langs:
- C++
helpviewer_keywords:
- 32-bit Windows
ms.assetid: ef1589db-84d7-4b24-8799-7c7a22cfe2bf
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: bd00adddbf728aae66120fede63e0b6a0c5439a7
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="32-bit-windows-timedate-formats"></a>Formati data e ora di Windows a 32 bit
L'ora del file e la data vengono archiviate separatamente usando interi senza segno come campi di bit. L'ora del file e la data sono raccolte nel modo seguente:  
  
### <a name="time"></a>utente  
  
|Posizione di bit:|0   1   2   3   4|5   6   7   8   9   A|B   C   D   E   F|  
|-------------------|-----------------------|---------------------------|-----------------------|  
|Lunghezza:|5|6|5|  
|Contenuto:|ore|minuti|incrementi di 2 secondi|  
|Intervallo di valori:|0-23|0-59|0-29 in intervalli di 2 secondi|  
  
### <a name="date"></a>Date  
  
|Posizione di bit:|0   1   2   3   4   5   6|7   8   9   A|B   C   D   E   F|  
|-------------------|-------------------------------|-------------------|-----------------------|  
|Lunghezza:|7|4|5|  
|Contenuto:|anno|mese|giorno|  
|Intervallo di valori:|0-119|1-12|1-31|  
||(rispetto al 1980)|||  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)

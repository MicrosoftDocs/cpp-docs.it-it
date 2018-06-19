---
title: Formati data e ora di Windows a 32 bit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- vc.time
dev_langs:
- C++
helpviewer_keywords:
- 32-bit Windows
ms.assetid: ef1589db-84d7-4b24-8799-7c7a22cfe2bf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 41a415b2601db1e7fc755903145d6dd2b6293ed9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32387460"
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
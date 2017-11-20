---
title: CLOCKS_PER_SEC, CLK_TCK | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CLOCKS_PER_SEC
- CLK_TCK
dev_langs: C++
helpviewer_keywords:
- CLOCKS_PER_SEC
- CLK_TCK constant
ms.assetid: bc285106-383d-44cb-91bf-276ad7de57bf
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: facd2469a4b95351d54addce663d0b036db38786
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="clockspersec-clktck"></a>CLOCKS_PER_SEC, CLK_TCK
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <time.h>  
```  
  
## <a name="remarks"></a>Note  
 Il tempo in secondi è il valore restituito dalla funzione `clock`, diviso da `CLOCKS_PER_SEC`. `CLK_TCK` è equivalente, ma considerato obsoleto.  
  
## <a name="see-also"></a>Vedere anche  
 [clock](../c-runtime-library/reference/clock.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)
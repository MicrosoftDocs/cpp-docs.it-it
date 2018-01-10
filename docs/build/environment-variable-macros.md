---
title: Macro di variabili di ambiente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NMAKE program, environment variable macros
- environment variables, macros in NMAKE
- macros, environment-variable
ms.assetid: f8e96635-0906-47b0-9f56-12a6fdf5e347
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 69fae15b7a12d990d2fb2c8e457bfdc0407f7702
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="environment-variable-macros"></a>Macro di variabili di ambiente
NMAKE eredita le definizioni di macro di variabili di ambiente esistano prima dell'avvio della sessione. Se nell'ambiente del sistema operativo è stata impostata una variabile, è disponibile come una macro di NMAKE. I nomi ereditati vengono convertiti in caratteri maiuscoli. Prima di pre-elaborazione viene eseguita l'ereditarietà. Utilizzare l'opzione /E per le macro ereditate dalle variabili di ambiente per eseguire l'override delle macro con lo stesso nome nel makefile.  
  
 Macro di variabili di ambiente possono essere ridefinite nella sessione e si cambia la variabile di ambiente corrispondente. È inoltre possibile modificare le variabili di ambiente con il comando SET. Utilizzando il comando SET per modificare una variabile di ambiente in una sessione non modifica la macro corrispondente, tuttavia.  
  
 Ad esempio:  
  
```  
PATH=$(PATH);\nonesuch  
  
all:  
    echo %PATH%  
```  
  
 In questo esempio, la modifica `PATH` Modifica variabile di ambiente corrispondente `PATH`; aggiunge `\nonesuch` al percorso.  
  
 Se una variabile di ambiente viene definita come una stringa che è sintatticamente errata di un makefile, verrà creata alcuna macro e non viene generato alcun messaggio di avviso. Se un valore della variabile contiene un segno di dollaro ($), esso viene interpretato come l'inizio di una chiamata di macro. Utilizzo della macro può causare comportamenti imprevisti.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)
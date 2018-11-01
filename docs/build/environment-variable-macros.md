---
title: Macro di variabili di ambiente
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, environment variable macros
- environment variables, macros in NMAKE
- macros, environment-variable
ms.assetid: f8e96635-0906-47b0-9f56-12a6fdf5e347
ms.openlocfilehash: 4691f89f1886b40637a0800ee8a6a94e4b4e06c5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594298"
---
# <a name="environment-variable-macros"></a>Macro di variabili di ambiente

NMAKE eredita le definizioni di macro di variabili di ambiente che esistano prima dell'inizio della sessione. Se è stata impostata una variabile nell'ambiente di sistema operativo, è disponibile come una macro di NMAKE. I nomi ereditati vengono convertiti in caratteri maiuscoli. Ereditarietà si verifica prima di pre-elaborazione. Utilizzare l'opzione /E per le macro ereditate dalle variabili di ambiente per eseguire l'override delle macro con lo stesso nome nel makefile.

Macro di variabili di ambiente possono essere ridefinite nella sessione e questa operazione modificherà la variabile di ambiente corrispondenti. È inoltre possibile modificare le variabili di ambiente con il comando SET. Utilizzando il comando SET per modificare una variabile di ambiente in una sessione non modifica le macro corrispondente, tuttavia.

Ad esempio:

```
PATH=$(PATH);\nonesuch

all:
    echo %PATH%
```

In questo esempio, modificando `PATH` modifica la variabile di ambiente corrispondenti `PATH`; aggiunge `\nonesuch` al percorso.

Se una variabile di ambiente viene definita come una stringa che è sintatticamente errata in un makefile, verrà creata alcuna macro e non viene generato alcun messaggio di avviso. Se il valore della variabile contiene un segno di dollaro ($), esso viene interpretato come l'inizio di una chiamata di macro. L'utilizzo della macro può provocare comportamenti imprevisti.

## <a name="see-also"></a>Vedere anche

[Macro speciali di NMAKE](../build/special-nmake-macros.md)
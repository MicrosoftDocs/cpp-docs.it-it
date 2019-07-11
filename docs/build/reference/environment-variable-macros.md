---
title: Macro di variabili di ambiente
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, environment variable macros
- environment variables, macros in NMAKE
- macros, environment-variable
ms.assetid: f8e96635-0906-47b0-9f56-12a6fdf5e347
ms.openlocfilehash: a96b2de8469ace971d7fbc2707d3f786e873bb26
ms.sourcegitcommit: 6cb0670ca7d40e8ec55f162b8ce2847f5ae15f5c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2019
ms.locfileid: "67787336"
---
# <a name="environment-variable-macros"></a>Macro di variabili di ambiente

NMAKE eredita le definizioni di macro di variabili di ambiente che esistano prima dell'inizio della sessione. Se è stata impostata una variabile nell'ambiente di sistema operativo, è disponibile come una macro di NMAKE. I nomi ereditati vengono convertiti in caratteri maiuscoli. Ereditarietà si verifica prima di pre-elaborazione. Utilizzare l'opzione /E per le macro ereditate dalle variabili di ambiente per eseguire l'override delle macro con lo stesso nome nel makefile.

Macro di variabili di ambiente possono essere ridefinite nella sessione e questa operazione modificherà la variabile di ambiente corrispondenti. È inoltre possibile modificare le variabili di ambiente con il comando SET. Utilizzando il comando SET per modificare una variabile di ambiente in una sessione non modifica le macro corrispondente, tuttavia.

Ad esempio:

```
PATH=$(PATH);\nonesuch

all:
    echo %%PATH%%
```

In questo esempio, modificando `PATH` modifica la variabile di ambiente corrispondenti `PATH`; aggiunge `\nonesuch` al percorso.

Se una variabile di ambiente viene definita come una stringa che è sintatticamente errata in un makefile, verrà creata alcuna macro e non viene generato alcun messaggio di avviso. Se il valore della variabile contiene un segno di dollaro ($), esso viene interpretato come l'inizio di una chiamata di macro. L'utilizzo della macro può provocare comportamenti imprevisti.

## <a name="see-also"></a>Vedere anche

[Macro speciali di NMAKE](special-nmake-macros.md)

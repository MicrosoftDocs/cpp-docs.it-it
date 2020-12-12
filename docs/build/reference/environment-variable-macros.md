---
description: 'Altre informazioni su: Environment-Variable Macros'
title: Macro di variabili di ambiente
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, environment variable macros
- environment variables, macros in NMAKE
- macros, environment-variable
ms.assetid: f8e96635-0906-47b0-9f56-12a6fdf5e347
ms.openlocfilehash: b7beaf8f3e98ea7447d798041f7531ed5da671ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192590"
---
# <a name="environment-variable-macros"></a>Macro di variabili di ambiente

NMAKE eredita le definizioni delle macro per le variabili di ambiente esistenti prima dell'avvio della sessione. Se una variabile è stata impostata nell'ambiente del sistema operativo, è disponibile come macro NMAKE. I nomi ereditati vengono convertiti in caratteri maiuscoli. L'ereditarietà viene eseguita prima della pre-elaborazione. Usare l'opzione/E per fare in modo che le macro ereditate dalle variabili di ambiente eseguano l'override di tutte le macro con lo stesso nome nel makefile.

Le macro di variabili di ambiente possono essere ridefinite nella sessione e questa modifica la variabile di ambiente corrispondente. È anche possibile modificare le variabili di ambiente con il comando SET. Tuttavia, se si utilizza il comando SET per modificare una variabile di ambiente in una sessione, la macro corrispondente non viene modificata.

Ad esempio:

```
PATH=$(PATH);\nonesuch

all:
    echo %%PATH%%
```

In questo esempio, `PATH` la modifica della variabile di ambiente corrispondente viene `PATH` aggiunta `\nonesuch` al percorso.

Se una variabile di ambiente viene definita come una stringa che non è sintatticamente corretta in un makefile, non viene creata alcuna macro e non viene generato alcun avviso. Se il valore di una variabile contiene un segno di dollaro ($), NMAKE lo interpreta come l'inizio di una chiamata di macro. L'uso della macro può causare un comportamento imprevisto.

## <a name="see-also"></a>Vedi anche

[Macro speciali di NMAKE](special-nmake-macros.md)

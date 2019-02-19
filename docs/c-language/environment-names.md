---
title: Nomi degli ambienti
ms.date: 11/04/2016
ms.assetid: 9af409a5-e724-465a-9a21-88d3586c2e92
ms.openlocfilehash: 43e1254b4c1ee61a92fbb6499d9396e8b15a3047
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147997"
---
# <a name="environment-names"></a>Nomi degli ambienti

**ANSI 4.10.4.4** Set di nomi dell'ambiente e metodo per la modifica dell'elenco degli ambienti usati dalla funzione [getenv](../c-runtime-library/reference/getenv-wgetenv.md)

Il set di nomi dell'ambiente è illimitato.

Per modificare le variabili di ambiente dall'interno di programmi C, chiamare la funzione [_putenv](../c-runtime-library/reference/putenv-wputenv.md). Per modificare le variabili di ambiente dalla riga di comando di Windows, utilizzare il comando SET (ad esempio, SET LIB = D:\ LIBS).

Le variabili di ambiente impostate dall'interno di un programma C esistono solo finché la loro copia host della shell dei comandi del sistema operativo è in esecuzione (CMD.EXE o COMMAND.COM). Ad esempio, la riga di comando

```
system( SET LIB = D:\LIBS );
```

esegue una copia della shell dei comandi (CMD.EXE), imposta la variabile di ambiente LIB e torna al programma C, uscendo dalla copia secondaria di CMD.EXE. Uscendo da tale copia di CMD.EXE, rimuove la variabile di ambiente temporanea LIB.

Analogamente, le modifiche apportate dalla funzione `_putenv` sono effettive solo fino al termine del programma.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)<br/>
[_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md)<br/>
[getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)

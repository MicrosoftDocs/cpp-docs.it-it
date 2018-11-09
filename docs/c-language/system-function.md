---
title: Funzione system
ms.date: 11/04/2016
helpviewer_keywords:
- system function
ms.assetid: 0786ccdc-20cd-4d96-b3d8-3230507c3066
ms.openlocfilehash: db38a9407aa75988779b8a930ac2ccd99c98d1b4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50520185"
---
# <a name="system-function"></a>Funzione system

**ANSI 4.10.4.5** Contenuto e modalità di esecuzione della stringa da parte della funzione **system**

La funzione **system** esegue un comando interno del sistema operativo oppure un file con estensione exe, com (cmd in Windows NT) o bat dall'interno di un programma C anziché dalla riga di comando.

La funzione system cerca l'interprete dei comandi, in genere CMD.EXE nel sistema operativo Windows NT o COMMAND.COM in Windows. La funzione system passa quindi la stringa di argomenti all'interprete dei comandi.

Per altre informazioni, vedere [system, _wsystem](../c-runtime-library/reference/system-wsystem.md).

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)
---
title: Funzione system
ms.date: 11/04/2016
helpviewer_keywords:
- system function
ms.assetid: 0786ccdc-20cd-4d96-b3d8-3230507c3066
ms.openlocfilehash: e37de4e084de6727cf2858117945fd162f6b0d63
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62345123"
---
# <a name="system-function"></a>Funzione system

**ANSI 4.10.4.5** Contenuto e modalità di esecuzione della stringa da parte della funzione **system**

La funzione **system** esegue un comando interno del sistema operativo oppure un file con estensione exe, com (cmd in Windows NT) o bat dall'interno di un programma C anziché dalla riga di comando.

La funzione system cerca l'interprete dei comandi, in genere CMD.EXE nel sistema operativo Windows NT o COMMAND.COM in Windows. La funzione system passa quindi la stringa di argomenti all'interprete dei comandi.

Per altre informazioni, vedere [system, _wsystem](../c-runtime-library/reference/system-wsystem.md).

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)

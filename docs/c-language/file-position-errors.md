---
title: Errori del percorso del file
ms.date: 11/04/2016
helpviewer_keywords:
- file pointers [C++], file position errors
ms.assetid: d5e59d8b-08c0-4927-a338-0b2d8234ce24
ms.openlocfilehash: 3d581d86d6f08eee564feb6373a623512085ccca
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147802"
---
# <a name="file-position-errors"></a>Errori del percorso del file

**ANSI 4.9.9.1, 4.9.9.4** Il valore a cui la macro `errno` viene impostata dalla funzione `fgetpos` o `ftell` in caso di errore

Quando `fgetpos` o `ftell` ha esito negativo, `errno` è impostato sulla costante del manifesto `EINVAL` se il percorso non è valido o `EBADF` se il numero di file non è corretto. Le costanti sono definite in ERRNO.H.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)

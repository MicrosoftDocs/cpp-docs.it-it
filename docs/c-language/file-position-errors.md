---
description: 'Altre informazioni su: errori di posizione del file'
title: Errori del percorso del file
ms.date: 11/04/2016
helpviewer_keywords:
- file pointers [C++], file position errors
ms.assetid: d5e59d8b-08c0-4927-a338-0b2d8234ce24
ms.openlocfilehash: d29f8d86280427db915c016fea0fd80567913baf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196152"
---
# <a name="file-position-errors"></a>Errori del percorso del file

**ANSI 4.9.9.1, 4.9.9.4** Il valore a cui la macro `errno` viene impostata dalla funzione `fgetpos` o `ftell` in caso di errore

Quando `fgetpos` o `ftell` ha esito negativo, `errno` è impostato sulla costante del manifesto `EINVAL` se il percorso non è valido o `EBADF` se il numero di file non è corretto. Le costanti sono definite in ERRNO.H.

## <a name="see-also"></a>Vedi anche

[Funzioni della libreria](../c-language/library-functions.md)

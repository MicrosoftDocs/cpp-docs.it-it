---
title: Test del carattere
ms.date: 11/04/2016
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
ms.openlocfilehash: b02d07ca2796e5088c3021f1ae8795ea92761943
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147191"
---
# <a name="character-testing"></a>Test del carattere

**ANSI 4.3.1** Set di caratteri per cui è stato eseguito il test dalle funzioni `isalnum`, `isalpha`, `iscntrl`, `islower`, `isprint` e `isupper`

Nell'elenco seguente vengono descritte queste funzioni implementate dal compilatore Microsoft C.

|Funzione|Test per|
|--------------|---------------|
|`isalnum`|Caratteri 0-9, A-Z, a-z ASCII 48-57, 65-90, 97-122|
|`isalpha`|Caratteri A-Z, a-z ASCII 65-90, 97-122|
|`iscntrl`|ASCII 0 -31, 127|
|`islower`|Caratteri a-z ASCII 97-122|
|`isprint`|Caratteri A-Z, a-z, 0-9, punteggiatura, spazio ASCII 32-126|
|`isupper`|Caratteri A-Z ASCII 65-90|

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)

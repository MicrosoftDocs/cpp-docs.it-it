---
title: Test del carattere
ms.date: 11/04/2016
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
ms.openlocfilehash: 31a90f28d710ffc1b58f9c6b3fcfd01fd8d2d00c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523201"
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
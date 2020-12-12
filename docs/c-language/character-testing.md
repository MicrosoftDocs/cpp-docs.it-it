---
description: 'Altre informazioni su: test dei caratteri'
title: Test del carattere
ms.date: 11/04/2016
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
ms.openlocfilehash: b7d73bce671787622814e11d8f3add7a1092572a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190536"
---
# <a name="character-testing"></a>Test del carattere

**ANSI 4.3.1** Set di caratteri testati per dalle `isalnum` funzioni, `isalpha` , `iscntrl` , `islower` , `isprint` e `isupper`

Nell'elenco seguente vengono descritte queste funzioni implementate dal compilatore Microsoft C.

|Funzione|Test per|
|--------------|---------------|
|`isalnum`|Caratteri 0-9, A-Z, a-z ASCII 48-57, 65-90, 97-122|
|`isalpha`|Caratteri A-Z, a-z ASCII 65-90, 97-122|
|`iscntrl`|ASCII 0 -31, 127|
|`islower`|Caratteri a-z ASCII 97-122|
|`isprint`|Caratteri A-Z, a-z, 0-9, punteggiatura, spazio ASCII 32-126|
|`isupper`|Caratteri A-Z ASCII 65-90|

## <a name="see-also"></a>Vedi anche

[Funzioni della libreria](../c-language/library-functions.md)

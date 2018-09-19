---
title: Test del carattere | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 376ba061-bae3-427e-9569-33fa5949a199
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c2c558c5d32f75561d5722a656450d5f18f5166a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084939"
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
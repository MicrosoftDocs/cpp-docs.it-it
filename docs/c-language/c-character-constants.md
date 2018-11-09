---
title: Costanti carattere C
ms.date: 11/04/2016
helpviewer_keywords:
- characters, constants
- (') single quotation mark
- constants, character
- single quotation mark
ms.assetid: 388ae7d7-2c3a-44d6-a507-63f541ecd2da
ms.openlocfilehash: 684763b5ce3983b6efc44db9499c139c84f6e3aa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50507188"
---
# <a name="c-character-constants"></a>Costanti carattere C

Una "costante carattere" viene formata racchiudendo tra virgolette singole (**' '**) un carattere singolo del set di caratteri rappresentabile. Le costanti carattere vengono usate per rappresentare i caratteri nel [set di caratteri di esecuzione](../c-language/execution-character-set.md).

## <a name="syntax"></a>Sintassi

*character-constant*: **'** *c-char-sequence* **'**

**L'** *c-char-sequence* **'**

*c-char-sequence*: *c-char*

*c-char-sequence c-char*

*c-char*: qualsiasi membro del set di caratteri di origine eccetto le virgolette singole (**'**), la barra rovesciata (**\\**) o il carattere di nuova riga

*escape-sequence*

*escape-sequence*: *simple-escape-sequence*

*octal-escape-sequence*

*hexadecimal-escape-sequence*

*simple-escape-sequence*: uno tra **\a \b \f \n \r \t \v**

**\\' \\" \\\ \\?**

*octal-escape-sequence*: **\\**  *octal-digit*

**\\**  *octal-digit octal-digit*

**\\**  *octal-digit octal-digit octal-digit*

*hexadecimal-escape-sequence*: **\x**  *hexadecimal-digit*

*hexadecimal-escape-sequence hexadecimal-digit*

## <a name="see-also"></a>Vedere anche

[Costanti C](../c-language/c-constants.md)
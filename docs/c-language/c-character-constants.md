---
title: Costanti carattere C
ms.date: 11/04/2016
helpviewer_keywords:
- characters, constants
- (') single quotation mark
- constants, character
- single quotation mark
ms.assetid: 388ae7d7-2c3a-44d6-a507-63f541ecd2da
ms.openlocfilehash: 5d87b57726f741cc96f2180de33cae01403786ec
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62326300"
---
# <a name="c-character-constants"></a>Costanti carattere C

Una "costante carattere" viene formata racchiudendo tra virgolette singole (**' '**) un carattere singolo del set di caratteri rappresentabile. Le costanti carattere vengono usate per rappresentare i caratteri nel [set di caratteri di esecuzione](../c-language/execution-character-set.md).

## <a name="syntax"></a>Sintassi

*costante carattere*: **'** *c-char-Sequence* **'**

**L'** *c-char-Sequence* **'**

*c-char-Sequence*: *c-char*

*c-char-sequence c-char*

*c-char*: qualsiasi membro del set di caratteri di origine eccetto le virgolette singole (**'**), la barra rovesciata (**\\**) o il carattere di nuova riga

*sequenza di escape*

*escape-sequence*: *simple-escape-sequence*

*octal-escape-sequence*

*sequenza di escape esadecimale*

*simple-escape-sequence*: uno tra **\a \b \f \n \r \t \v**

**\\' \\" \\\ \\?**

*ottale-sequenza di escape*: **\\** *cifra ottale*  

**\\**  *cifra ottale a cifre ottali*

**\\**  *cifre ottali a cifre ottali*

*hexadecimal-escape-sequence*: **\x**  *hexadecimal-digit*

*hexadecimal-escape-sequence hexadecimal-digit*

## <a name="see-also"></a>Vedere anche

[Costanti C](../c-language/c-constants.md)

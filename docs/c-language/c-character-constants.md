---
description: 'Altre informazioni su: costanti carattere C'
title: Costanti carattere C
ms.date: 11/04/2016
helpviewer_keywords:
- characters, constants
- (') single quotation mark
- constants, character
- single quotation mark
ms.assetid: 388ae7d7-2c3a-44d6-a507-63f541ecd2da
ms.openlocfilehash: 2503fc983d79f363f525b22172d2113393b41091
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211557"
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

## <a name="see-also"></a>Vedi anche

[Costanti C](../c-language/c-constants.md)

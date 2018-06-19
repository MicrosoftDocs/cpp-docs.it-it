---
title: Costanti carattere C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- characters, constants
- (') single quotation mark
- constants, character
- single quotation mark
ms.assetid: 388ae7d7-2c3a-44d6-a507-63f541ecd2da
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0009f795936da7eb0c2ff69aa192e8f609638d2f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32382286"
---
# <a name="c-character-constants"></a>Costanti carattere C
Una "costante carattere" viene formata racchiudendo tra virgolette singole (**' '**) un carattere singolo del set di caratteri rappresentabile. Le costanti carattere vengono usate per rappresentare i caratteri nel [set di caratteri di esecuzione](../c-language/execution-character-set.md).  
  
## <a name="syntax"></a>Sintassi  
 *character-constant*:  
 **'** *c-char-sequence* **'**  
  
 **L'** *c-char-sequence* **'**  
  
 *c-char-sequence*:  
 *c-char*  
  
 *c-char-sequence c-char*  
  
 *c-char*:  
 Qualsiasi membro del set di caratteri di origine eccetto le virgolette singole (**'**), la barra rovesciata (**\\**) o il carattere di nuova riga  
  
 *escape-sequence*  
  
 *escape-sequence*:  
 *simple-escape-sequence*  
  
 *octal-escape-sequence*  
  
 *hexadecimal-escape-sequence*  
  
 *simple-escape-sequence*: uno tra  
 **\a \b \f \n \r \t \v**  
  
 **\\' \\" \\\ \\?**  
  
 *octal-escape-sequence*:  
 **\\** *octal-digit*  
  
 **\\**  *octal-digit octal-digit*  
  
 **\\**  *octal-digit octal-digit octal-digit*  
  
 *hexadecimal-escape-sequence*:  
 **\x**  *hexadecimal-digit*  
  
 *hexadecimal-escape-sequence hexadecimal-digit*  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti C](../c-language/c-constants.md)
---
title: Valori letterali stringa C | Microsoft Docs
ms.custom: ''
ms.date: 08/31/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- string literals, syntax
- strings [C++], string literals
- literal strings, C
ms.assetid: 4b05523e-49a2-4900-b21a-754350af3328
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6101c45f30284633c5f10c148be5a15e1e81dde7
ms.sourcegitcommit: f9d9db80a8f13eae2c41337b974e1298109e33c5
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/22/2018
ms.locfileid: "49640733"
---
# <a name="c-string-literals"></a>Valori letterali stringa C

Un valore "letterale stringa" è una sequenza di caratteri dal set di caratteri di origine racchiusa tra virgolette doppie (**" "**). I valori letterali stringa sono utilizzati per rappresentare una sequenza di caratteri che insieme formano una stringa a terminazione null. È necessario aggiungere sempre prefissi ai valori letterali stringa a caratteri wide con la lettera **L**.

## <a name="syntax"></a>Sintassi

*string-literal*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**"** *s-char-sequence*<sub>opt</sub> **"**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**L"** *s-char-sequence*<sub>opt</sub> **"**

*s-char-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*s-char*

&nbsp;&nbsp;&nbsp;&nbsp;*s-char-sequence* *s-char*

*s-char*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi membro del set di caratteri di origine eccetto le virgolette doppie ("), la barra rovesciata (\\) o il carattere di nuova riga<br/>

&nbsp;&nbsp;&nbsp;&nbsp;*escape-sequence*

## <a name="remarks"></a>Note

Nell'esempio seguente viene riportato un valore letterale stringa semplice:

```C
char *amessage = "This is a string literal.";
```

Tutti i codici di escape elencati nella tabella [Sequenze di escape](../c-language/escape-sequences.md) sono validi nei valori letterali stringa. Per rappresentare le virgolette doppie in un valore letterale stringa, usare la sequenza di escape **\\"**. La virgoletta singola (**'**) può essere rappresentata senza una sequenza di escape. La barra rovesciata (**\\**) deve essere seguita da una seconda barra rovesciata (**\\\\**) quando viene visualizzata in una stringa. Quando viene visualizzato un carattere di barra rovesciata alla fine di una riga, viene sempre interpretato come un carattere di continuazione di riga.

## <a name="see-also"></a>Vedere anche

[Elementi di C](../c-language/elements-of-c.md)

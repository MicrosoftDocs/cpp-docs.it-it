---
description: 'Altre informazioni su: valori letterali stringa C'
title: Valori letterali stringa C
ms.date: 08/31/2018
helpviewer_keywords:
- string literals, syntax
- strings [C++], string literals
- literal strings, C
ms.assetid: 4b05523e-49a2-4900-b21a-754350af3328
ms.openlocfilehash: c18a13dcc44203399aa6518f53031d29b00a5a4c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207085"
---
# <a name="c-string-literals"></a>Valori letterali stringa C

Un valore "letterale stringa" è una sequenza di caratteri dal set di caratteri di origine racchiusa tra virgolette doppie (**" "**). I valori letterali stringa sono utilizzati per rappresentare una sequenza di caratteri che insieme formano una stringa a terminazione null. È necessario aggiungere sempre prefissi ai valori letterali stringa a caratteri wide con la lettera **L**.

## <a name="syntax"></a>Sintassi

*valore letterale stringa*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**"** *s-Char-Sequence*<sub>opt</sub> **"**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**L"** *s-char-sequence*<sub>opt</sub> **"**

*s-char-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*s-Char*

&nbsp;&nbsp;&nbsp;&nbsp;*s-char-sequence* *s-char*

*s-Char*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi membro del set di caratteri di origine eccetto le virgolette doppie ("), la barra rovesciata (\\) o il carattere di nuova riga

&nbsp;&nbsp;&nbsp;&nbsp;*sequenza di escape*

## <a name="remarks"></a>Commenti

Nell'esempio seguente viene riportato un valore letterale stringa semplice:

```C
char *amessage = "This is a string literal.";
```

Tutti i codici di escape elencati nella tabella [Sequenze di escape](../c-language/escape-sequences.md) sono validi nei valori letterali stringa. Per rappresentare le virgolette doppie in un valore letterale stringa, utilizzare la sequenza di escape **\\ "**. La virgoletta singola (**'**) può essere rappresentata senza una sequenza di escape. La barra rovesciata ( **\\** ) deve essere seguita da una seconda barra rovesciata ( **\\\\** ) quando viene visualizzata all'interno di una stringa. Quando viene visualizzato un carattere di barra rovesciata alla fine di una riga, viene sempre interpretato come un carattere di continuazione di riga.

## <a name="see-also"></a>Vedi anche

[Elementi di C](../c-language/elements-of-c.md)

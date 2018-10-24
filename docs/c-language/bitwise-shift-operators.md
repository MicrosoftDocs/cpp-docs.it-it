---
title: Operatori di spostamento bit per bit | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], bitwise
- shift operators, bitwise
- bitwise-shift operators
- operators [C++], shift
ms.assetid: d0485785-5c72-47e1-a7c0-0adde03ade23
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b1abcfa37373702df371b42efbf228fe748bfc45
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49808199"
---
# <a name="bitwise-shift-operators"></a>Operatori di spostamento bit per bit

Gli operatori shift spostano il primo operando a sinistra (**&lt;&lt;**) o a destra (**>>**) del numero di posizioni specificato dal secondo operando.

## <a name="syntax"></a>Sintassi

*shift-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*shift-expression* **&lt;&lt;** *additive-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*shift-expression* **>>** *additive-expression*

Entrambi gli operandi devono essere valori integrali. Questi operatori eseguono le consuete conversioni aritmetiche; il tipo del risultato è il tipo dell'operando sinistro dopo la conversione.

Per spostamenti verso sinistra, i bit a destra sgomberati vengono impostati su 0. Per spostamenti verso destra, i bit a sinistra sgomberati vengono riempiti in base al tipo del primo operando dopo la conversione. Se il tipo è `unsigned`, vengono impostati su 0. In caso contrario, vengono riempiti con copie del bit di segno. Per operatori left-shift senza overflow, l'istruzione

```C
expr1 << expr2
```

equivale alla moltiplicazione per 2<sup>expr2</sup>. Per operatori right-shift

```C
expr1 >> expr2
```

equivale alla divisione per 2<sup>expr2</sup> se `expr1` è senza segno o con un valore non negativo.

Il risultato di un'operazione di spostamento non è definito se il secondo operando è negativo o se l'operando destro è maggiore o uguale alla larghezza in bit dell'operando sinistro promosso.

Poiché le conversioni eseguite dagli operatori shift non consentono condizioni di overflow o di underflow, le informazioni potrebbero essere perse se il risultato di un'operazione di spostamento non può essere rappresentato nel tipo del primo operando dopo la conversione.

```C
unsigned int x, y, z;

x = 0x00AA;
y = 0x5500;

z = ( x << 8 ) + ( y >> 8 );
```

In questo esempio, `x` è spostata otto posizioni a sinistra e `y` è spostata otto posizioni a destra. I valori spostati vengono aggiunti, fornendo 0xAA55 e assegnati a `z`.

Lo spostamento di un valore negativo a destra produce la metà del valore originale, arrotondata per difetto. Ad esempio, -253 (in binario 11111111 00000011) con scorrimento aritmetico a destra di un bit produce -127 (in binario 11111111 10000001). Un valore positivo 253 ha uno spostamento verso destra per produrre +126.

Gli scorrimenti a destra mantengono il bit di segno. Quando un intero con segno scorre a destra, il bit più significativo rimane impostato. Quando un intero senza segno scorre a destra, il bit più significativo viene cancellato.

## <a name="see-also"></a>Vedere anche

[Operatori Left Shift e Right Shift (>> e <<)](../cpp/left-shift-and-right-shift-operators-input-and-output.md)
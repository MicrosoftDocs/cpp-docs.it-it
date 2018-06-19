---
title: Operatori bit per bit C | Microsoft Docs
ms.custom: ''
ms.date: 01/29/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- '| operator, bitwise operators'
- bitwise operators, Visual C
- bitwise operators
- operators [C], bitwise
- ^ operator, bitwise operators
- AND operator
- ampersand operator (&)
- ^ operator
- '& operator, bitwise operators'
ms.assetid: e22127b1-9a2d-4876-b01d-c8f72cec3317
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c5c360246282f8b6062d21061856a57bd2c7194
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32384333"
---
# <a name="c-bitwise-operators"></a>Operatori bit per bit C

Gli operatori bit per bit eseguono operazioni di tipo AND bit per bit (**&**), OR bit per bit esclusivo (**^**) e OR bit per bit inclusivo (**&#124;**).

## <a name="syntax"></a>Sintassi

*AND-expression*:  
&nbsp;&nbsp;*equality-expression*  
&nbsp;&nbsp;*AND-expression* **&** *equality-expression*

*exclusive-OR-expression*:  
&nbsp;&nbsp;*AND-expression*  
&nbsp;&nbsp;*exclusive-OR-expression* **^** *AND-expression*

*inclusive-OR-expression*:  
&nbsp;&nbsp;*exclusive-OR-expression*  
&nbsp;&nbsp;*inclusive-OR-expression* &#124; *exclusive-OR-expression*

Gli operandi degli operatori bit per bit devono avere tipi di dati integrali, ma i tipi possono essere diversi. Questi operatori eseguono le conversioni aritmetiche comuni; il tipo del risultato è il tipo degli operandi dopo la conversione.

Gli operatori bit per bit C sono descritti di seguito:

|Operatore|Descrizione|
|--------------|-----------------|
|**&**|L'operatore AND bit per bit confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit sono 1, il bit del risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.|
|**^**|L'operatore OR bit per bit esclusivo confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 0 e l'altro bit è 1, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.|
|**&#124;**|L'operatore OR bit per bit inclusivo confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 1 bit, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.|

## <a name="examples"></a>Esempi

Queste dichiarazioni vengono usate per gli esempi seguenti:

```C
short i = 0xAB00;
short j = 0xABCD;
short n;

n = i & j;
```

Il risultato assegnato a `n` in questo primo esempio è identico a `i` (0xAB00 esadecimale).

```C
n = i | j;

n = i ^ j;
```

L'operatore OR bit per bit inclusivo nel secondo esempio restituisce il valore 0xABCD (esadecimale), mentre l'operatore OR bit per bit esclusivo nel terzo esempio produce 0xCD (esadecimale).

**Sezione specifica Microsoft**

I risultati dell'elaborazione bit per bit su Integer con segno sono definiti dall'implementazione, in base allo standard C ANSI. Per il compilatore Microsoft C le operazioni bit per bit su Integer con segno funzionano in modo analogo alle operazioni bit per bit sui valori interi senza segno. Ad esempio, `-16 & 99` può essere espresso in formato binario come

```Expression
  11111111 11110000
& 00000000 01100011
  _________________
  00000000 01100000
```

Il risultato dell'operazione AND bit per bit è 96 decimale.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Operatore AND bit per bit (&)](../cpp/bitwise-and-operator-amp.md)  
[Operatore OR bit per bit esclusivo: ^](../cpp/bitwise-exclusive-or-operator-hat.md)  
[Operatore OR bit per bit inclusivo: &#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)  
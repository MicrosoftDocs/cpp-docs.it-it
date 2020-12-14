---
description: 'Altre informazioni su: operatori bit per bit C'
title: Operatori bit per bit C
ms.date: 01/29/2018
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
ms.openlocfilehash: 8cbdb5309d5351f77306007e8acd1675be5e2a35
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211583"
---
# <a name="c-bitwise-operators"></a>Operatori bit per bit C

Gli operatori bit per bit eseguono operazioni AND bit per bit (), OR bit per bit **&** -esclusivo ( **^** ) e bit per bit inclusivo (**&#124;**).

## <a name="syntax"></a>Sintassi

*And-Expression*: uguaglianza &nbsp; &nbsp; *-espressione* &nbsp; &nbsp; *e-* espressione **&** *uguaglianza-* espressione

*exclusive-or-* Expression: &nbsp; &nbsp; *and-Expression* &nbsp; &nbsp; *exclusive-or-* Expression **^** *and-Expression*

*inclusive-or-Expression*: &nbsp; &nbsp; *exclusive-or-Expression* &nbsp; &nbsp; *inclusive-or-Expression* &#124; *exclusive-or-* Expression

Gli operandi degli operatori bit per bit devono avere tipi di dati integrali, ma i tipi possono essere diversi. Questi operatori eseguono le conversioni aritmetiche comuni; il tipo del risultato è il tipo degli operandi dopo la conversione.

Gli operatori bit per bit C sono descritti di seguito:

|Operatore|Descrizione|
|--------------|-----------------|
|**&**|L'operatore AND bit per bit confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit hanno valore 1, il bit del risultato verrà impostato su 1, altrimenti verrà impostato su 0.|
|**^**|L'operatore OR bit per bit esclusivo confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit ha valore 0 e l'altro 1, il bit del risultato corrispondente verrà impostato su 1. altrimenti verrà impostato su 0.|
|**&#124;**|L'operatore OR bit per bit inclusivo confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se uno dei due bit ha valore 1, il bit del risultato verrà impostato su 1, altrimenti verrà impostato su 0.|

## <a name="examples"></a>Esempio

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

**Specifico di Microsoft**

I risultati dell'elaborazione bit per bit su Integer con segno sono definiti dall'implementazione, in base allo standard C ANSI. Per il compilatore Microsoft C le operazioni bit per bit su Integer con segno funzionano in modo analogo alle operazioni bit per bit sui valori interi senza segno. Ad esempio, `-16 & 99` può essere espresso in formato binario come

```Expression
  11111111 11110000
& 00000000 01100011
  _________________
  00000000 01100000
```

Il risultato dell'operazione AND bit per bit è 96 decimale.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Operatore AND bit per bit (&)](../cpp/bitwise-and-operator-amp.md)<br/>
[Operatore OR esclusivo bit per bit: ^](../cpp/bitwise-exclusive-or-operator-hat.md)<br/>
[Operatore OR bit per bit inclusivo: &#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)

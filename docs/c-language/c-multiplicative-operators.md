---
title: Operatori di moltiplicazione C
ms.date: 11/04/2016
helpviewer_keywords:
- arithmetic operators [C++], multiplicative operators
- / operator
- / operator, multiplicative operators
- remainder operator (%)
- operators [C], multiplication
- '% operator'
- slash (/) operator
- multiplication operator [C++], multiplicative operators
ms.assetid: 495471c9-319b-4eb4-bd97-039a025fd3a9
ms.openlocfilehash: 32ff74be0fd1afb1d8a21d74abb194eaa5e273df
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227985"
---
# <a name="c-multiplicative-operators"></a>Operatori di moltiplicazione C

Gli operatori di moltiplicazione eseguono operazioni di moltiplicazione ( <strong>\*</strong> ), divisione ( **/** ) e resto ( **%** ).

## <a name="syntax"></a>Sintassi

*espressione*moltiplicativa: espressione cast-espressione moltiplicativa espressione cast-espressione moltiplicatore-espressione espressione cast-espressione &nbsp; &nbsp; &nbsp; &nbsp; *cast-expression* &nbsp; &nbsp; &nbsp; &nbsp; *multiplicative-expression* <strong>\*</strong> *cast-expression* &nbsp; &nbsp; &nbsp; &nbsp; *multiplicative-expression* **/** *cast-expression* &nbsp; &nbsp; &nbsp; &nbsp; *moltiplicatore* **%** *cast-expression* -espressione

Gli operandi dell'operatore di resto ( **%** ) devono essere integrali. Gli operatori di moltiplicazione ( <strong>\*</strong> ) e di divisione ( **/** ) possono assumere operandi di tipo integrale o a virgola mobile; i tipi degli operandi possono essere diversi.

Gli operatori di moltiplicazione eseguono le tipiche conversioni aritmetiche sugli operandi. Il tipo del risultato è il tipo degli operandi in seguito alla conversione.

> [!NOTE]
> Poiché le conversioni eseguite dagli operatori di moltiplicazione non consentono condizioni di overflow o di underflow, le informazioni potrebbero essere perse se il risultato di un'operazione di moltiplicazione non può essere rappresentato nel tipo degli operandi in seguito alla conversione.

Gli operatori di moltiplicazione di C sono vengono descritti di seguito:

|Operatore|Descrizione|
|--------------|-----------------|
|<strong>\*</strong>|L'operatore di moltiplicazione consente ai suoi due operandi di essere moltiplicati.|
|**/**|L’operatore di divisione consente al primo operando di essere diviso per il secondo. Se due operandi del numero intero vengono divisi e il risultato non è un numero intero, questo viene troncato in base alle regole seguenti:<br/><br/>- Il risultato della divisione per 0 non è definito, in base allo standard ANSI C. Il compilatore C Microsoft genera un errore in fase di compilazione o di esecuzione.<br/><br/>- Se entrambi gli operandi sono positivi o senza segno, il risultato viene troncato verso 0.<br/><br/>- Se uno degli operandi è negativo, a seconda dell'implementazione il risultato dell'operazione può essere l'intero più grande minore o uguale al quoziente algebrico o l'intero più piccolo maggiore o uguale al quoziente algebrico. Vedere la sezione specifica di Microsoft riportata di seguito.|
|**%**|Il risultato dell'operatore di resto è il resto quando il primo operando viene diviso per il secondo. Quando la divisione non è esatta, il risultato è determinato dalle seguenti regole:<br/><br/>- Se l'operando destro è zero, il risultato è non definito.<br/><br/>- Se entrambi gli operandi sono positivi o senza segno, il risultato è positivo.<br/><br/>- Se uno degli operandi è negativo e il risultato non è esatto, il risultato è definito dall'implementazione. Vedere la sezione specifica di Microsoft riportata di seguito.|

### <a name="microsoft-specific"></a>Specifico di Microsoft

Nella divisione in cui uno degli operandi è negativo, la direzione del troncamento è verso 0.

Se qualsiasi operazione è negativa nella divisione con l'operatore di resto, il risultato avrà lo stesso segno del dividendo (il primo operando nell'espressione).

## <a name="examples"></a>Esempi

Le dichiarazioni illustrate vengono utilizzate per gli esempi seguenti:

```
int i = 10, j = 3, n;
double x = 2.0, y;
```

Questa istruzione utilizza l'operatore di moltiplicazione:

```
y = x * i;
```

In questo caso, `x` viene moltiplicato per `i` per dare il valore 20.0. Il risultato è di **`double`** tipo.

```
n = i / j;
```

In questo esempio 10 è diviso per 3. Il risultato viene troncato verso 0, restituendo il valore intero 3.

```
n = i % j;
```

Questa istruzione assegna `n` il resto del numero intero, 1 quando 10 viene diviso per 3.

**Specifico di Microsoft**

Il segno del resto è uguale al segno del dividendo. Ad esempio:

```
50 % -6 = 2
-50 % 6 = -2
```

In ogni caso, `50` e `2` hanno lo stesso segno.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Operatori di moltiplicazione e operatore modulo](../cpp/multiplicative-operators-and-the-modulus-operator.md)

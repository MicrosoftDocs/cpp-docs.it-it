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
ms.openlocfilehash: fdf208ffba3e3d63d8672b84af8cf6168b34dc3f
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147751"
---
# <a name="c-multiplicative-operators"></a>Operatori di moltiplicazione C

Gli operatori di moltiplicazione eseguono operazioni di moltiplicazione (<strong>\*</strong>), divisione (**/**) e resto (**%**).

## <a name="syntax"></a>Sintassi

*multiplicative-expression*: &nbsp;&nbsp;&nbsp;&nbsp;*cast-expression* &nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression* <strong>\*</strong> *cast-expression* &nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression* **/** *cast-expression* &nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression* **%** *cast-expression*

Gli operandi dell'operatore di resto (**%**) devono essere integrali. Gli operatori di moltiplicazione (<strong>\*</strong>) e divisione (**/**) possono accettare operandi di tipo integrale o mobile; i tipi degli operandi possono essere diversi.

Gli operatori di moltiplicazione eseguono le tipiche conversioni aritmetiche sugli operandi. Il tipo del risultato è il tipo degli operandi in seguito alla conversione.

> [!NOTE]
>  Poiché le conversioni eseguite dagli operatori di moltiplicazione non consentono condizioni di overflow o di underflow, le informazioni potrebbero essere perse se il risultato di un'operazione di moltiplicazione non può essere rappresentato nel tipo degli operandi in seguito alla conversione.

Gli operatori di moltiplicazione di C sono vengono descritti di seguito:

|Operatore|Descrizione|
|--------------|-----------------|
|<strong>\*</strong>|L'operatore di moltiplicazione consente ai suoi due operandi di essere moltiplicati.|
|**/**|L’operatore di divisione consente al primo operando di essere diviso per il secondo. Se due operandi del numero intero vengono divisi e il risultato non è un numero intero, questo viene troncato in base alle regole seguenti:<br/><br/>- Il risultato della divisione per 0 non è definito, in base allo standard ANSI C. Il compilatore C Microsoft genera un errore in fase di compilazione o di esecuzione.<br/><br/>- Se entrambi gli operandi sono positivi o senza segno, il risultato viene troncato verso 0.<br/><br/>- Se uno degli operandi è negativo, a seconda dell'implementazione il risultato dell'operazione può essere l'intero più grande minore o uguale al quoziente algebrico o l'intero più piccolo maggiore o uguale al quoziente algebrico. (Vedere la sezione Microsoft specifica di seguito riportata).|
|**%**|Il risultato dell'operatore di resto è il resto quando il primo operando viene diviso per il secondo. Quando la divisione non è esatta, il risultato è determinato dalle seguenti regole:<br/><br/>- Se l'operando destro è zero, il risultato è non definito.<br/><br/>- Se entrambi gli operandi sono positivi o senza segno, il risultato è positivo.<br/><br/>- Se uno degli operandi è negativo e il risultato non è esatto, il risultato è definito dall'implementazione. (Vedere la sezione Microsoft specifica di seguito riportata).|

**Sezione specifica Microsoft**

Nella divisione in cui uno degli operandi è negativo, la direzione del troncamento è verso 0.

Se qualsiasi operazione è negativa nella divisione con l'operatore di resto, il risultato avrà lo stesso segno del dividendo (il primo operando nell'espressione).

**Fine sezione specifica Microsoft**

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

In questo caso, `x` viene moltiplicato per `i` per dare il valore 20.0. Il risultato è di tipo **double**.

```
n = i / j;
```

In questo esempio 10 è diviso per 3. Il risultato viene troncato verso 0, restituendo il valore intero 3.

```
n = i % j;
```

Questa istruzione assegna `n` il resto del numero intero, 1 quando 10 viene diviso per 3.

**Sezione specifica Microsoft**

Il segno del resto è uguale al segno del dividendo. Ad esempio:

```
50 % -6 = 2
-50 % 6 = -2
```

In ogni caso, `50` e `2` hanno lo stesso segno.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Operatori di moltiplicazione e operatori modulo](../cpp/multiplicative-operators-and-the-modulus-operator.md)

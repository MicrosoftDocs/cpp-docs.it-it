---
description: 'Altre informazioni su: campi di bit C'
title: Campi di bit C
ms.date: 11/04/2016
helpviewer_keywords:
- bitfields
- bit fields
ms.assetid: 9faf74c4-7fd5-4b44-ad18-04485193d06e
ms.openlocfilehash: e89f74fc68cad11eee63b3dd1101fa71e0b72e27
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186954"
---
# <a name="c-bit-fields"></a>Campi di bit C

In aggiunta alle dichiarazioni dei membri di una struttura o di un'unione, un dichiaratore di struttura può anche essere un numero specificato di bit, definito campo di bit. Per il nome del campo, la lunghezza viene impostata all'esterno del dichiaratore tramite due punti. Un campo di bit viene interpretato come un tipo integrale.

## <a name="syntax"></a>Sintassi

*struct-dichiaratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*dichiaratore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Type-specifier* *declarator*<sub>opt</sub> **:** *Constant-Expression*

L'elemento *constant-expression* specifica la lunghezza del campo in bit. *Type-specifier* per `declarator` deve essere **`unsigned int`** , **`signed int`** o **`int`** e l' *espressione Constant* deve essere un valore integer non negativo. Se il valore è zero, la dichiarazione non ha un elemento `declarator`. Matrici di campi di bit, puntatori a campi di bit e funzioni che restituiscono campi di bit non sono consentiti. L'elemento `declarator` facoltativo assegna il nome al campo di bit. I campi di bit possono essere dichiarati come parte di una struttura. L'operatore address-of ( **&** ) non può essere applicato ai componenti dei campi di bit.

A campi di bit senza nome non si può fare riferimento e il relativo contenuto non è prevedibile in fase di esecuzione. I campi di bit possono essere utilizzati come campi fittizi per scopi di allineamento. Un campo di bit senza nome la cui larghezza è specificata come 0 garantisce che l'archiviazione per il membro che lo segue in *struct-declaration-list* inizi su un **`int`** limite.

La lunghezza dei campi di bit deve anche essere sufficiente per contenere lo schema di bit. Le due istruzioni seguenti, ad esempio, non sono corrette:

```
short a:17;        /* Illegal! */
int long y:33;     /* Illegal! */
```

Questo esempio definisce una matrice bidimensionale di strutture denominata `screen`.

```
struct
{
    unsigned short icon : 8;
    unsigned short color : 4;
    unsigned short underline : 1;
    unsigned short blink : 1;
} screen[25][80];
```

La matrice contiene 2.000 elementi. Ogni elemento è un struttura individuale contenente quattro membri di tipo campo di bit: `icon`, `color`, `underline` e `blink`. La dimensione di ogni struttura è di due byte.

I campi di bit hanno la stessa semantica dei tipi interi. Questo significa che un campo di bit è utilizzato nelle espressioni in modo analogo a come verrebbe utilizzata una variabile dello stesso tipo di base, indipendentemente al numero di bit presenti nel campo.

**Specifico di Microsoft**

I campi di bit definiti come **`int`** vengono trattati come **`signed`** . Un'estensione Microsoft allo standard ANSI C consente i **`char`** **`long`** tipi e (sia **`signed`** che **`unsigned`** ) per i campi di bit. I campi di bit senza nome con tipo di base **`long`** , **`short`** o **`char`** ( **`signed`** o **`unsigned`** ) forzano l'allineamento a un limite appropriato per il tipo di base.

I campi di bit sono allocati in un Integer dal bit meno significativo a quello più significativo. Nel codice riportato di seguito

```
struct mybitfields
{
    unsigned short a : 4;
    unsigned short b : 5;
    unsigned short c : 7;
} test;

int main( void );
{
    test.a = 2;
    test.b = 31;
    test.c = 0;
}
```

i bit sono disposti come segue:

```
00000001 11110010
cccccccb bbbbaaaa
```

Dato che la famiglia di processori 8086 memorizza il byte basso dei valori interi prima di quello alto, il valore intero `0x01F2` precedente verrebbe memorizzato nella memoria fisica come `0xF2` seguito da `0x01`.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Dichiarazioni di struttura](../c-language/structure-declarations.md)

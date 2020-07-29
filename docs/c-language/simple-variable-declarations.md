---
title: Dichiarazioni di variabili semplici
ms.date: 11/04/2016
helpviewer_keywords:
- untyped variables
- declaring variables, simple
ms.assetid: b07adf9d-9e79-4b64-8a34-e6fe1c7eccec
ms.openlocfilehash: 42547828e78566982053d22e8288fe1ccbe6e26b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229532"
---
# <a name="simple-variable-declarations"></a>Dichiarazioni di variabili semplici

La dichiarazione di una variabile semplice, il formato più semplice di un dichiaratore diretto, specifica il nome e il tipo della variabile. Specifica inoltre la classe di archiviazione e il tipo di dati della variabile.

Le classi o i tipi di archiviazione (o entrambi) sono necessari nelle dichiarazioni delle variabili. Le variabili non tipizzate (ad esempio `var;`) generano avvisi.

## <a name="syntax"></a>Sintassi

*dichiaratore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*puntatore*<sub>opz</sub> *Direct-declarator*

*Direct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*

*identificatore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*non numerico*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier* *nondigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier* *digit*

Per i tipi aritmetico, di struttura, Unione, enumerazione e void e per i tipi rappresentati dai **`typedef`** nomi, i dichiaratori semplici possono essere utilizzati in una dichiarazione poiché l'identificatore di tipo fornisce tutte le informazioni di tipizzazione. I tipi puntatore, matrice e funzione richiedono i dichiaratori più complessi.

È possibile usare un elenco di identificatori delimitati da virgole (**,**) per specificare più variabili nella stessa dichiarazione. Tutte le variabili definite nella dichiarazione hanno lo stesso tipo base. Ad esempio:

```C
int x, y;        /* Declares two simple variables of type int */
int const z = 1; /* Declares a constant value of type int */
```

Le variabili `x` e `y` possono conservare qualsiasi valore nel set definito dal **`int`** tipo per una determinata implementazione. L'oggetto semplice `z` viene inizializzato con il valore 1 e non è modificabile.

Se la dichiarazione di `z` fosse per una variabile statica non inizializzata o fosse nell'ambito file, riceverebbe un valore iniziale pari a 0 e il valore non sarebbe modificabile.

```C
unsigned long reply, flag; /* Declares two variables
                              named reply and flag     */
```

In questo esempio, entrambe le variabili, `reply` e `flag` , sono di **`unsigned long`** tipo e contengono valori integrali senza segno.

## <a name="see-also"></a>Vedere anche

[Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)

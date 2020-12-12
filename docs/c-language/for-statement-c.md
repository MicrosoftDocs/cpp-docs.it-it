---
description: 'Ulteriori informazioni su: istruzione for (C)'
title: Istruzione for (C)
ms.date: 11/04/2016
helpviewer_keywords:
- for keyword [C]
ms.assetid: 560a8de4-19db-4868-9f18-dbe51b17900d
ms.openlocfilehash: 4e20529ccec4f586f8785e122903b22be42e69a2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196022"
---
# <a name="for-statement-c"></a>Istruzione for (C)

L' **`for`** istruzione consente di ripetere un'istruzione o un'istruzione composta un numero specificato di volte. Il corpo di un' **`for`** istruzione viene eseguito zero o più volte fino a quando una condizione facoltativa non diventa false. È possibile utilizzare espressioni facoltative nell' **`for`** istruzione per inizializzare e modificare i valori durante l' **`for`** esecuzione dell'istruzione.

## <a name="syntax"></a>Sintassi

*iteration-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`for`***istruzione* **(** *init-expression*<sub>opt</sub> **;** *cond-expression*<sub>opz</sub> **;** *loop-expression*<sub>opt</sub> **)**

L'esecuzione di un' **`for`** istruzione procede nel modo seguente:

1. Se presente, viene valutato *init-expression*. Questo consente l'inizializzazione del ciclo. Non esistono restrizioni per il tipo di *init-expression*.

1. Se presente, viene valutato *cond-expression*. Questa espressione deve essere di tipo aritmetico o puntatore. Viene valutata prima di ogni iterazione. Sono possibili tre risultati:

   - Se *cond-expression* è **`true`** (diverso da zero), viene eseguita l' *istruzione* , quindi *loop-expression*, se presente, viene valutato. *loop-expression* viene valutata al termine di ogni iterazione. Non esistono restrizioni per il relativo tipo. Gli effetti collaterali vengono eseguiti in ordine. Il processo inizia nuovamente con la valutazione di *cond-expression*.

   - Se *cond-expression* è omesso, *cond-expression* è considerato true e l'esecuzione prosegue esattamente come descritto nel paragrafo precedente. Un' **`for`** istruzione senza un argomento *cond-expression* termina solo quando viene **`break`** eseguita un' **`return`** istruzione o all'interno del corpo dell'istruzione o quando **`goto`** viene eseguita un'istruzione (a un'istruzione con etichetta all'esterno del **`for`** corpo dell'istruzione).

   - Se *cond-expression* è **`false`** (0), l'esecuzione dell' **`for`** istruzione termina e il controllo passa all'istruzione successiva nel programma.

Un' **`for`** istruzione termina anche quando **`break`** **`goto`** **`return`** viene eseguita un'istruzione, o all'interno del corpo dell'istruzione. Un' **`continue`** istruzione in un **`for`** ciclo determina la valutazione del *ciclo-espressione* . Quando un' **`break`** istruzione viene eseguita all'interno di un **`for`** ciclo, l' *espressione loop* non viene valutata né eseguita. Questa istruzione

```C
for( ; ; )
```

è il modo personalizzato per produrre un ciclo infinito che può essere terminato solo con un' **`break`** **`goto`** istruzione, o **`return`** .

## <a name="example"></a>Esempio

In questo esempio viene illustrata l' **`for`** istruzione:

```C
// c_for.c
int main()
{
   char* line = "H e  \tl\tlo World\0";
   int space = 0;
   int tab = 0;
   int i;
   int max = strlen(line);
   for (i = 0; i < max; i++ )
   {
      if ( line[i] == ' ' )
      {
          space++;
      }
      if ( line[i] == '\t' )
      {
          tab++;
      }
   }

   printf("Number of spaces: %i\n", space);
   printf("Number of tabs: %i\n", tab);
   return 0;
}
```

## <a name="output"></a>Output

```Output
Number of spaces: 4
Number of tabs: 2
```

## <a name="see-also"></a>Vedi anche

[Istruzioni](../c-language/statements-c.md)

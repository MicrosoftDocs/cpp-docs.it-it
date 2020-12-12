---
description: 'Altre informazioni su: istruzione composta (C)'
title: Istruzione composta (C)
ms.date: 11/04/2016
helpviewer_keywords:
- compound statements
- statements, compound
ms.assetid: 32d1bf86-cbbc-42a9-ba3a-1be1c6c7754c
ms.openlocfilehash: b4c1ee15bc081c34cbc12bfe2c3e997ca181b7be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293443"
---
# <a name="compound-statement-c"></a>Istruzione composta (C)

Un'istruzione composta (detta anche "blocco") viene in genere visualizzata come corpo di un'altra istruzione, ad esempio l' **`if`** istruzione. In [Dichiarazioni e tipi](../c-language/declarations-and-types.md) viene descritto il modulo e il significato delle dichiarazioni che possono essere visualizzate nell'intestazione di un'istruzione composta.

## <a name="syntax"></a>Sintassi

*compound-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *declaration-list*<sub>opz</sub> *Statement-list*<sub>opt</sub> **}**

*declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-list* *declaration*

*statement-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement-list* *statement*

Se esistono dichiarazioni, devono precedere qualsiasi istruzione. L'ambito di ogni identificatore dichiarato all'inizio di un'istruzione composta si estende dal punto di dichiarazione fino alla fine del blocco. È visibile nel blocco a meno che non esista una dichiarazione dello stesso identificatore in un blocco interno.

Gli identificatori in un'istruzione composta sono presunti, a **`auto`** meno che non vengano dichiarati in modo esplicito con **`register`** , **`static`** o **`extern`** , ad eccezione delle funzioni, che possono essere solo **`extern`** . È possibile lasciare l' **`extern`** identificatore nelle dichiarazioni di funzione e la funzione sarà ancora **`extern`** .

L'archiviazione non viene allocata e l'inizializzazione non è consentita se una variabile o una funzione viene dichiarata in un'istruzione composta con classe di archiviazione **`extern`** . La dichiarazione fa riferimento a una variabile esterna o a una funzione definita altrove.

Le variabili dichiarate in un blocco con la **`auto`** **`register`** parola chiave o vengono riallocate e, se necessario, inizializzate ogni volta che viene immessa l'istruzione composta. Queste variabili non vengono definite quando si esce dall'istruzione composta. Se una variabile dichiarata in un blocco dispone dell' **`static`** attributo, la variabile viene inizializzata all'inizio dell'esecuzione del programma e mantiene il relativo valore in tutto il programma. Per informazioni su, vedere [classi di archiviazione](../c-language/c-storage-classes.md) **`static`** .

In questo esempio viene illustrata un'istruzione composta:

```C
if ( i > 0 )
{
    line[i] = x;
    x++;
    i--;
}
```

In questo esempio, se `i` è maggiore di 0, tutte le istruzioni nell'istruzione composta vengono eseguite in ordine.

## <a name="see-also"></a>Vedi anche

[Istruzioni](../c-language/statements-c.md)

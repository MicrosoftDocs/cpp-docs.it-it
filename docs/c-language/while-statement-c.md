---
title: Istruzione while (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- while
dev_langs:
- C++
helpviewer_keywords:
- while keyword [C]
- while keyword [C], syntax
ms.assetid: d0c970b8-12a9-4827-afb2-a051111834b7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1aa9c72cbb8724da00b2d370884bd7ddbf7264cc
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43763240"
---
# <a name="while-statement-c"></a>Istruzione while (C)

L'istruzione `while` consente di ripetere un'istruzione fino a quando un'espressione specificata non restituisce false.  
  
## <a name="syntax"></a>Sintassi

*iteration-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**while (**  *expression*  **)**  *statement*
  
*espressione* deve essere di tipo puntatore o aritmetico. L'esecuzione procede nel modo seguente:  
  
1. L'*espressione* viene valutata.  
  
2. Se inizialmente l'*espressione* è falsa, il corpo dell'istruzione `while` non viene mai eseguito e il controllo passa dall'istruzione `while` all'istruzione successiva del programma.

   Se l'*espressione* è vera (diversa da zero), il corpo dell'istruzione viene eseguito e il processo viene ripetuto iniziando dal passaggio 1.

L'istruzione `while` può terminare anche quando viene eseguita un'istruzione **break**, `goto` o `return` nel corpo dell'istruzione. Usare l'istruzione **continue** per terminare un'iterazione senza uscire dal ciclo `while`. L'istruzione **continue** passa il controllo all'iterazione successiva dell'istruzione `while`.

Di seguito, un esempio dell'istruzione `while`:

```C
while ( i >= 0 )
{
    string1[i] = string2[i];
    i--;
}
```

In questo esempio i caratteri vengono copiati da `string2` in `string1`. Se `i` è maggiore o uguale a 0, `string2[i]` viene assegnato a `string1[i]` e `i` viene decrementato. Quando `i` raggiunge o è al di sotto dello 0, l'esecuzione dell'istruzione `while` termina.

## <a name="see-also"></a>Vedere anche

[Istruzione while (C++)](../cpp/while-statement-cpp.md)
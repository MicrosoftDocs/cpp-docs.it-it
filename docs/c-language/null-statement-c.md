---
title: Istruzione Null (C)
ms.date: 11/04/2016
helpviewer_keywords:
- semicolon, C null statement
- expressions [C++], null
- null statement
- null values, expressions
ms.assetid: 72576ce6-26d0-4379-be65-fee522088790
ms.openlocfilehash: bee044049ed14796a97edc62bbb180ab19700564
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50503051"
---
# <a name="null-statement-c"></a>Istruzione Null (C)

Un'istruzione "null" è un'istruzione che contiene solo un punto e virgola; può essere visualizzata in qualsiasi punto in cui è prevista un'istruzione. Quando viene eseguita un'istruzione null, non succede nulla. Il modo corretto per codificare un'istruzione null è:

## <a name="syntax"></a>Sintassi

> **;**

## <a name="remarks"></a>Note

Istruzioni quali **do**, **for**, **if** e `while` richiedono che un'istruzione eseguibile venga visualizzata come corpo dell'istruzione. L'istruzione null soddisfa il requisito della sintassi nei casi in cui non è necessario un corpo effettivo dell'istruzione.

Come per qualsiasi altra istruzione di C, è possibile includere un'etichetta prima di un'istruzione null. Per etichettare un elemento che non è un'istruzione, come la parentesi graffa di chiusura di un'istruzione composta, è possibile etichettare un'istruzione null e inserirla subito prima dell'elemento per ottenere lo stesso risultato.

In questo esempio viene illustrata l'istruzione null:

```C
for ( i = 0; i < 10; line[i++] = 0 )
     ;
```

In questo esempio, l'espressione del ciclo dell'istruzione **for** `line[i++] = 0` inizializza i primi 10 elementi di `line` su 0. Il corpo dell'istruzione è un'istruzione null, poiché non sono disponibili ulteriori istruzioni.

## <a name="see-also"></a>Vedere anche

[Istruzioni](../c-language/statements-c.md)
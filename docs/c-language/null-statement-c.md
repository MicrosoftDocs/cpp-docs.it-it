---
description: 'Altre informazioni su: istruzione null (C)'
title: Istruzione Null (C)
ms.date: 11/04/2016
helpviewer_keywords:
- semicolon, C null statement
- expressions [C++], null
- null statement
- null values, expressions
ms.assetid: 72576ce6-26d0-4379-be65-fee522088790
ms.openlocfilehash: 362fc9e311d0495e0a3ab51da7a5042574859649
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243289"
---
# <a name="null-statement-c"></a>Istruzione Null (C)

Un'istruzione "null" è un'istruzione che contiene solo un punto e virgola; può essere visualizzata in qualsiasi punto in cui è prevista un'istruzione. Quando viene eseguita un'istruzione null, non succede nulla. Il modo corretto per codificare un'istruzione null è:

## <a name="syntax"></a>Sintassi

> **;**

## <a name="remarks"></a>Commenti

Le istruzioni, ad esempio **`do`** ,, **`for`** **`if`** e **`while`** richiedono che un'istruzione eseguibile venga visualizzata come corpo dell'istruzione. L'istruzione null soddisfa il requisito della sintassi nei casi in cui non è necessario un corpo effettivo dell'istruzione.

Come per qualsiasi altra istruzione di C, è possibile includere un'etichetta prima di un'istruzione null. Per etichettare un elemento che non è un'istruzione, come la parentesi graffa di chiusura di un'istruzione composta, è possibile etichettare un'istruzione null e inserirla subito prima dell'elemento per ottenere lo stesso risultato.

In questo esempio viene illustrata l'istruzione null:

```C
for ( i = 0; i < 10; line[i++] = 0 )
     ;
```

In questo esempio, l'espressione loop dell' **`for`** istruzione `line[i++] = 0` Inizializza i primi 10 elementi di `line` su 0. Il corpo dell'istruzione è un'istruzione null, poiché non sono disponibili ulteriori istruzioni.

## <a name="see-also"></a>Vedi anche

[Istruzioni](../c-language/statements-c.md)

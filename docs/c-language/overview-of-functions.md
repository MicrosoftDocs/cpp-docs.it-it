---
description: 'Altre informazioni su: Panoramica delle funzioni'
title: Cenni preliminari sulle funzioni
ms.date: 11/04/2016
helpviewer_keywords:
- functions [C++]
- control flow, function calls
ms.assetid: b6f4637f-02b9-49d8-8601-1f886bd2cfb9
ms.openlocfilehash: b68591d9300cb1a2f63c37c78f4cc03406e9d68f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243146"
---
# <a name="overview-of-functions"></a>Cenni preliminari sulle funzioni

Le funzioni devono disporre di una definizione e devono disporre di una dichiarazione, sebbene una definizione possa servire come dichiarazione se questa viene riportata prima che venga chiamata la funzione. La definizione di una funzione include il corpo della funzione (il codice eseguito quando viene chiamata la funzione).

Una dichiarazione di funzione stabilisce il nome, il tipo restituito e gli attributi di una funzione definita altrove nel programma. Una dichiarazione di funzione deve precedere la chiamata alla funzione. Per questo motivo i file di intestazione contenenti le dichiarazioni per le funzioni di runtime vengono inclusi nel codice prima di una chiamata a una funzione di runtime. Se la dichiarazione dispone di informazioni sui tipi e sul numero di parametri, la dichiarazione è un prototipo. Per altre informazioni, vedere [Prototipi di funzioni](../c-language/function-prototypes.md).

Il compilatore utilizza il prototipo per confrontare i tipi di argomenti nelle successive chiamate alla funzione con parametri della funzione e per convertire i tipi degli argomenti nei tipi dei parametri ogni qualvolta è necessario.

Una chiamata di funzione passa il controllo di esecuzione dalla funzione chiamante alla funzione chiamata. Gli argomenti, se presenti, vengono passati in base al valore della funzione chiamata. L'esecuzione di un' **`return`** istruzione nella funzione chiamata restituisce il controllo ed eventualmente un valore alla funzione chiamante.

## <a name="see-also"></a>Vedi anche

[Funzioni](../c-language/functions-c.md)

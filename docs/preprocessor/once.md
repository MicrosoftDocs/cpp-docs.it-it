---
description: 'Altre informazioni su: una volta pragma'
title: Pragma once
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.once
- once_CPP
helpviewer_keywords:
- once pragma
- pragmas, once
ms.assetid: c7517556-6403-4b16-8898-f2aa0a6f685f
ms.openlocfilehash: 3aa1e50173ef625d13ad9f36684aec3a1c512d2d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333241"
---
# <a name="once-pragma"></a>Pragma once

Specifica che il compilatore include il file di intestazione una sola volta, durante la compilazione di un file di codice sorgente.

## <a name="syntax"></a>Sintassi

> **#pragma una volta**

## <a name="remarks"></a>Commenti

L'uso di `#pragma once` può ridurre i tempi di compilazione, perché il compilatore non aprirà e leggerà di nuovo il file dopo il primo `#include` del file nell'unità di conversione. Viene chiamato ottimizzazione di *inclusione multipla*. Ha un effetto simile all'idioma *Guard di inclusione* , che usa le definizioni delle macro del preprocessore per evitare più inclusioni del contenuto del file. Consente inoltre di evitare violazioni della *regola una definizione*, il requisito per cui tutti i modelli, i tipi, le funzioni e gli oggetti non hanno più di una definizione nel codice.

Ad esempio:

```cpp
// header.h
#pragma once
// Code placed here is included only once per translation unit
```

È consigliabile usare la direttiva `#pragma once` per il nuovo codice, in quanto non inquina lo spazio dei nomi globale con un simbolo del preprocessore. Richiede una minore digitazione, è meno distracting e non può causare *collisioni di simboli*, errori causati quando file di intestazione diversi usano lo stesso simbolo del preprocessore del valore Guard. Non fa parte dello standard C++, ma è implementato portabile da diversi compilatori comuni.

Non vi è alcun vantaggio di usare sia l'idioma Guard che lo `#pragma once` stesso file. Il compilatore riconosce l'idioma Guard di inclusione e implementa l'ottimizzazione di inclusione multipla nello stesso modo della `#pragma once` direttiva se nessun codice o direttiva per il preprocessore non di commento precede o segue il formato standard dell'idioma:

```cpp
// header.h
// Demonstration of the #include guard idiom.
// Note that the defined symbol can be arbitrary.
#ifndef HEADER_H_     // equivalently, #if !defined HEADER_H_
#define HEADER_H_
// Code placed here is included only once per translation unit
#endif // HEADER_H_
```

Si consiglia di includere l'idioma Guard quando il codice deve essere portabile a compilatori che non implementano la `#pragma once` direttiva, per mantenere la coerenza con il codice esistente o quando l'ottimizzazione di inclusione multipla non è possibile. Può verificarsi in progetti complessi quando file system aliasing o i percorsi di inclusione con alias impediscono al compilatore di identificare file di inclusione identici per percorso canonico.

Prestare attenzione a non usare `#pragma once` o includere l'idioma Guard nei file di intestazione progettati per essere inclusi più volte, che usano i simboli del preprocessore per controllarne gli effetti. Per un esempio di questa progettazione, vedere il \<assert.h> file di intestazione. Prestare inoltre attenzione a gestire i percorsi di inclusione per evitare di creare più percorsi per i file inclusi, in modo da evitare l'ottimizzazione dell'inclusione multipla per entrambe le protezioni e `#pragma once` .

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

---
title: Pragma once
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.once
- once_CPP
helpviewer_keywords:
- once pragma
- pragmas, once
ms.assetid: c7517556-6403-4b16-8898-f2aa0a6f685f
ms.openlocfilehash: 643ad83b672f7b632925383972751a966256eb41
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220535"
---
# <a name="once-pragma"></a>Pragma once

Specifica che il compilatore include il file di intestazione una sola volta, durante la compilazione di un file di codice sorgente.

## <a name="syntax"></a>Sintassi

> **#pragma una volta**

## <a name="remarks"></a>Note

L'uso di `#pragma once` può ridurre i tempi di compilazione, perché il compilatore non aprirà e leggerà di nuovo `#include` il file dopo il primo del file nell'unità di conversione. Viene chiamato ottimizzazione di *inclusione multipla*. Ha un effetto simile all'idioma *Guard* di inclusione, che usa le definizioni delle macro del preprocessore per evitare più inclusioni del contenuto del file. Consente inoltre di evitare violazioni della *regola una definizione*, il requisito per cui tutti i modelli, i tipi, le funzioni e gli oggetti non hanno più di una definizione nel codice.

Ad esempio:

```cpp
// header.h
#pragma once
// Code placed here is included only once per translation unit
```

È consigliabile usare la direttiva `#pragma once` per il nuovo codice, in quanto non inquina lo spazio dei nomi globale con un simbolo del preprocessore. Richiede una minore digitazione, è meno distracting e non può causare collisioni di *simboli*, errori causati quando file di intestazione diversi usano lo stesso simbolo del preprocessore del valore Guard. Non fa parte dello C++ standard, ma è implementato da diversi compilatori comuni.

Non vi è alcun vantaggio di usare sia l'idioma Guard che `#pragma once` lo stesso file. Il compilatore riconosce l'idioma Guard di inclusione e implementa l'ottimizzazione di inclusione multipla nello `#pragma once` stesso modo della direttiva se nessun codice o direttiva per il preprocessore non di commento precede o segue il formato standard dell'idioma:

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

Prestare attenzione a non usare `#pragma once` o includere l'idioma Guard nei file di intestazione progettati per essere inclusi più volte, che usano i simboli del preprocessore per controllarne gli effetti. Per un esempio di questa progettazione, vedere il \<file di intestazione Assert. h >. Prestare inoltre attenzione a gestire i percorsi di inclusione per evitare di creare più percorsi per i file inclusi, in modo da evitare l'ottimizzazione dell'inclusione `#pragma once`multipla per entrambe le protezioni e.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

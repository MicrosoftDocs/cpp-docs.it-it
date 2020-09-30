---
title: Funzioni intrinseche
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- _String_length_
- _Param_
- _Curr_
- _Old_
- _Nullterm_length_
- _Inexpressible_
ms.assetid: adf29f8c-89fd-4a5e-9804-35ac83e1c457
ms.openlocfilehash: d1a7bae43a6fcd875f2e713695969f0d88b0dfe5
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504163"
---
# <a name="intrinsic-functions"></a>Funzioni intrinseche

Un'espressione in SAL può essere un'espressione C/C++ a condizione che sia un'espressione che non produca effetti collaterali, ad esempio ++, -- e le chiamate di funzione hanno effetti collaterali in questo contesto.  Tuttavia, SAL fornisce alcuni oggetti di tipo funzione e alcuni simboli riservati che possono essere utilizzati nelle espressioni SAL. Questi vengono definiti *funzioni intrinseche*.

## <a name="general-purpose"></a>Utilizzo generico

Le seguenti annotazioni di funzioni intrinseche forniscono l'utilità generale per SAL.

|Annotazione|Descrizione|
|----------------|-----------------|
|`_Curr_`|Sinonimo dell'oggetto attualmente annotato.  Quando viene utilizzata l'annotazione `_At_`, `_Curr_` è identica al primo parametro di `_At_`.  In caso contrario, è il parametro o l'intera funzione/valore restituito con cui l'annotazione è lessicalmente associata.|
|`_Inexpressible_(expr)`|Esprime una situazione in cui la dimensione di un buffer è troppo complessa per essere rappresentata con un'espressione di annotazione, ad esempio quando viene calcolata esaminando un set di dati di input e successivamente contando i membri selezionati.|
|`_Nullterm_length_(param)`|`param` numero di elementi nel buffer fino a che non include un carattere di terminazione null. Può essere applicato a qualsiasi buffer di tipo non di aggregazione, non void.|
|`_Old_(expr)`|Una volta valutato nella precondizione, `_Old_` restituisce il valore di input `expr`.  Una volta valutato nella post condizione, restituisce il valore `expr` come sarebbe stato valutato nella precondizione.|
|`_Param_(n)`|Il `n` parametro per una funzione, il conteggio da 1 a `n` e `n` è una costante integrale letterale. Se il parametro è denominato, questa annotazione è identica all'accesso al parametro in base al nome. **Nota:** `n` può fare riferimento ai parametri posizionali definiti da puntini di sospensione oppure possono essere utilizzati nei prototipi di funzione in cui non vengono utilizzati i nomi.  |
|`return`|La parola chiave riservata C/C++ **`return`** può essere usata in un'espressione SAL per indicare il valore restituito di una funzione.  Il valore è disponibile solo nello stato di post; è un errore di sintassi utilizzarlo in uno stato di pre.|

## <a name="string-specific"></a>Specifica della stringa

Le seguenti annotazioni di funzioni intrinseche abilitano la modifica delle stringhe. Tutte e quattro queste funzioni presentano lo stesso scopo: restituire il numero di elementi del tipo trovati prima di un terminatore null. Le differenze sono i tipi di dati negli elementi a cui fanno riferimento. Si noti che se si desidera specificare la lunghezza del buffer con terminazione null che non è composto da caratteri, utilizzare l'annotazione di `_Nullterm_length_(param)` dalla sezione precedente.

|Annotazione|Descrizione|
|----------------|-----------------|
|`_String_length_(param)`|`param` numero di elementi nella stringa che non include un carattere di terminazione null. Questa annotazione è riservata ai tipi di stringa di caratteri.|
|`strlen(param)`|`param` numero di elementi nella stringa che non include un carattere di terminazione null. Questa annotazione è riservata per l'utilizzo su matrici di caratteri ed è simile alla funzione di runtime C [strlen ()](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).|
|`wcslen(param)`|`param` numero di elementi nella stringa fino a un carattere di terminazione null, ma non incluso. Questa annotazione è riservata per l'uso su matrici di caratteri wide ed è simile alla funzione di runtime C [wcslen ()](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).|

## <a name="see-also"></a>Vedere anche

- [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Informazioni su SAL](../code-quality/understanding-sal.md)
- [Annotazione di parametri di funzione e valori restituiti](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)
- [Annotazioni di struct e classi](../code-quality/annotating-structs-and-classes.md)
- [Annotazione del comportamento di blocco](../code-quality/annotating-locking-behavior.md)
- [Specificare dove e quando applicare un'annotazione](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Suggerimenti ed esempi](../code-quality/best-practices-and-examples-sal.md)

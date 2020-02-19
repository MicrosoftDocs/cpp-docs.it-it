---
title: Specificare dove e quando applicare un'annotazione
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- _Group_
- _At_
- _When_
- _At_buffer_
ms.assetid: 8e4f4f9c-5dfa-4835-87df-ecd1698fc650
ms.openlocfilehash: af1f5a454659cad6584d63b5de23223f27170198
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418753"
---
# <a name="specifying-when-and-where-an-annotation-applies"></a>Specificare dove e quando applicare un'annotazione

Quando un'annotazione è condizionale, potrebbe essere necessario specificare altre annotazioni per l'analizzatore.  Se, ad esempio, una funzione dispone di una variabile che può essere sincrona o asincrona, la funzione funziona nel modo seguente: nel caso sincrono viene sempre completata correttamente, ma nel caso asincrono viene segnalato un errore se non riesce immediatamente. Quando la funzione viene chiamata in modo sincrono, il controllo del valore del risultato non fornisce alcun valore all'analizzatore del codice perché non sarebbe stato restituito.  Tuttavia, quando la funzione viene chiamata in modo asincrono e il risultato della funzione non è selezionato, potrebbe verificarsi un errore grave. In questo esempio viene illustrata una situazione in cui è possibile utilizzare l'annotazione `_When_`, descritta più avanti in questo articolo, per abilitare il controllo.

## <a name="structural-annotations"></a>Annotazioni strutturali

Per controllare quando e dove si applicano le annotazioni, utilizzare le seguenti annotazioni strutturali.

|Annotazione|Descrizione|
|----------------|-----------------|
|`_At_(expr, anno-list)`|`expr` è un'espressione che restituisce un lvalue. Le annotazioni in `anno-list` vengono applicate all'oggetto denominato da `expr`. Per ogni annotazione in `anno-list`, `expr` viene interpretato in una condizione preliminare se l'annotazione viene interpretata in una condizione preliminare e in una condizione successiva se l'annotazione viene interpretata in una condizione post-condizione.|
|`_At_buffer_(expr, iter, elem-count, anno-list)`|`expr` è un'espressione che restituisce un lvalue. Le annotazioni in `anno-list` vengono applicate all'oggetto denominato da `expr`. Per ogni annotazione in `anno-list`, `expr` viene interpretato nella pre-condizione se l'annotazione viene interpretata nella precondizione e in una condizione successiva se l'annotazione viene interpretata in post-condizione.<br /><br /> `iter` è il nome di una variabile che ha come ambito l'annotazione (incluso `anno-list`). `iter` dispone di un `long`di tipo implicito. Le variabili denominate in modo identico in qualsiasi ambito di inclusione sono nascoste dalla valutazione.<br /><br /> `elem-count` è un'espressione che restituisce un Integer.|
|`_Group_(anno-list)`|Le annotazioni in `anno-list` sono tutte considerate con qualsiasi qualificatore applicabile all'annotazione di gruppo applicata a ogni annotazione.|
|`_When_(expr, anno-list)`|`expr` è un'espressione che può essere convertita in `bool`. Quando è diverso da zero (`true`), le annotazioni specificate in `anno-list` sono considerate applicabili.<br /><br /> Per impostazione predefinita, per ogni annotazione in `anno-list`, `expr` viene interpretato come utilizzando i valori di input se l'annotazione è una precondizione e come se si utilizzasse i valori di output se l'annotazione è una post-condizione. Per eseguire l'override dell'impostazione predefinita, è possibile usare la funzione intrinseca `_Old_` quando si valuta una post-condizione per indicare che devono essere usati i valori di input. **Nota:**  È possibile che vengano abilitate annotazioni diverse come conseguenza dell'utilizzo di `_When_` se è necessario un valore modificabile, ad esempio `*pLength`, perché il risultato valutato di `expr` nella precondizione può essere diverso dal risultato valutato in post-condizione.|

## <a name="see-also"></a>Vedere anche

- [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Informazioni su SAL](../code-quality/understanding-sal.md)
- [Annotazione di parametri di funzione e valori restituiti](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)
- [Annotazioni di struct e classi](../code-quality/annotating-structs-and-classes.md)
- [Annotazione del comportamento di blocco](../code-quality/annotating-locking-behavior.md)
- [Funzioni intrinseche](../code-quality/intrinsic-functions.md)
- [Suggerimenti ed esempi](../code-quality/best-practices-and-examples-sal.md)

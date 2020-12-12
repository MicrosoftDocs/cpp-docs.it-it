---
description: "Altre informazioni su: specificare quando e dove si applica un'annotazione"
title: Specificare dove e quando applicare un'annotazione
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- _Group_
- _At_
- _When_
- _At_buffer_
ms.assetid: 8e4f4f9c-5dfa-4835-87df-ecd1698fc650
ms.openlocfilehash: 73b461b4e072958b25f43ac3692241549e1c7823
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288516"
---
# <a name="specifying-when-and-where-an-annotation-applies"></a>Specificare dove e quando applicare un'annotazione

Quando un'annotazione è condizionale, potrebbe essere necessario specificare altre annotazioni per l'analizzatore.  Se, ad esempio, una funzione dispone di una variabile che può essere sincrona o asincrona, la funzione funziona nel modo seguente: nel caso sincrono viene sempre completata correttamente, ma nel caso asincrono viene segnalato un errore se non riesce immediatamente. Quando la funzione viene chiamata in modo sincrono, il controllo del valore del risultato non fornisce alcun valore all'analizzatore del codice perché non sarebbe stato restituito.  Tuttavia, quando la funzione viene chiamata in modo asincrono e il risultato della funzione non è selezionato, potrebbe verificarsi un errore grave. In questo esempio viene illustrata una situazione in cui è possibile utilizzare l' `_When_` annotazione, descritta più avanti in questo articolo, per abilitare il controllo.

## <a name="structural-annotations"></a>Annotazioni strutturali

Per controllare quando e dove si applicano le annotazioni, utilizzare le seguenti annotazioni strutturali.

|Annotazione|Description|
|----------------|-----------------|
|`_At_(expr, anno-list)`|`expr` espressione che restituisce un lvalue. Le annotazioni in `anno-list` vengono applicate all'oggetto denominato da `expr` . Per ogni annotazione in `anno-list` , `expr` viene interpretato nella pre-condizione se l'annotazione viene interpretata nella pre-condizione e in post-condizione se l'annotazione viene interpretata in post-condizione.|
|`_At_buffer_(expr, iter, elem-count, anno-list)`|`expr` espressione che restituisce un lvalue. Le annotazioni in `anno-list` vengono applicate all'oggetto denominato da `expr` . Per ogni annotazione in `anno-list` , `expr` viene interpretato nella pre-condizione se l'annotazione viene interpretata nella precondizione e in post-condizione se l'annotazione viene interpretata in post-condizione.<br /><br /> `iter` nome di una variabile che ha come ambito l'annotazione (inclusa `anno-list` ). `iter` ha un tipo implicito **`long`** . Le variabili denominate in modo identico in qualsiasi ambito di inclusione sono nascoste dalla valutazione.<br /><br /> `elem-count` espressione che restituisce un valore integer.|
|`_Group_(anno-list)`|Le annotazioni in `anno-list` sono tutte considerate con qualsiasi qualificatore applicabile all'annotazione di gruppo applicata a ogni annotazione.|
|`_When_(expr, anno-list)`|`expr` espressione che può essere convertita in **`bool`** . Quando è diverso da zero ( **`true`** ), le annotazioni specificate in `anno-list` sono considerate applicabili.<br /><br /> Per impostazione predefinita, per ogni annotazione in `anno-list` , `expr` viene interpretato come utilizzando i valori di input se l'annotazione è una precondizione e come se si utilizzasse i valori di output se l'annotazione è una post-condizione. Per eseguire l'override dell'impostazione predefinita, è possibile utilizzare la funzione `_Old_` intrinseca quando si valuta una post-condizione per indicare che devono essere utilizzati i valori di input. **Nota:**  Le annotazioni diverse possono essere abilitate come conseguenza dell'utilizzo di `_When_` se viene utilizzato un valore modificabile, ad esempio, `*pLength` perché il risultato valutato di `expr` in precondizione può differire dal risultato valutato in post-condizione.|

## <a name="see-also"></a>Vedi anche

- [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Informazioni su SAL](../code-quality/understanding-sal.md)
- [Annotazione di parametri di funzione e valori restituiti](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotazione del comportamento delle funzioni](../code-quality/annotating-function-behavior.md)
- [Annotazioni di struct e classi](../code-quality/annotating-structs-and-classes.md)
- [Annotazione del comportamento di blocco](../code-quality/annotating-locking-behavior.md)
- [Funzioni intrinseche](../code-quality/intrinsic-functions.md)
- [Suggerimenti ed esempi](../code-quality/best-practices-and-examples-sal.md)

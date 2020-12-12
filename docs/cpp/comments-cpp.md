---
description: 'Altre informazioni su: Commenti (C++)'
title: Commenti (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- code comments, C++
- comments, documenting code
- comments, C++ code
- white space, C++ comments
ms.assetid: 6fcb906c-c264-4083-84bc-373800b2e514
ms.openlocfilehash: b3bbcafe1f18c791fc5935161b6cdbfae0bf03cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239792"
---
# <a name="comments-c"></a>Commenti (C++)

Un commento è un testo ignorato dal compilatore, ma che può risultare utile per i programmatori. I commenti vengono generalmente utilizzati per annotare il codice per riferimento futuro. Il compilatore tratta i commenti come uno spazio vuoto. È possibile usare i commenti nei test per rendere inattive determinate righe di codice; Tuttavia, le `#if` / `#endif` direttive per il preprocessore funzionano meglio in quanto è possibile racchiudere il codice che contiene commenti, ma non è possibile nidificare commenti.

Un commento C++ può essere scritto in uno dei modi seguenti:

- Caratteri `/*` (barra, asterisco), seguiti da qualsiasi sequenza di caratteri (ad esempio nuove righe), seguiti dai caratteri `*/`. Questa sintassi è la stessa dello standard ANSI C.

- Caratteri `//` (due barre), seguiti da qualsiasi sequenza di caratteri. Una nuova riga non immediatamente preceduta da una barra rovesciata termina questa forma di commento. Di conseguenza, viene comunemente chiamato commento a riga singola.

I caratteri di commento (`/*`, `*/` e `//`) non hanno alcun significato particolare all'interno di un carattere costante, di un valore letterale stringa o di un commento. I commenti che utilizzano la prima sintassi, pertanto, non possono essere annidati.

## <a name="see-also"></a>Vedi anche

[Convenzioni lessicali](../cpp/lexical-conventions.md)

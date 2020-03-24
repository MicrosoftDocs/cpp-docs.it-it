---
title: Commenti (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- code comments, C++
- comments, documenting code
- comments, C++ code
- white space, C++ comments
ms.assetid: 6fcb906c-c264-4083-84bc-373800b2e514
ms.openlocfilehash: 3326ad7d0b5118182a5d582061fd0c103986f232
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189754"
---
# <a name="comments-c"></a>Commenti (C++)

Un commento è un testo ignorato dal compilatore, ma che può risultare utile per i programmatori. I commenti vengono generalmente utilizzati per annotare il codice per riferimento futuro. Il compilatore tratta i commenti come uno spazio vuoto. È possibile usare i commenti nei test per rendere inattive determinate righe di codice; Tuttavia, `#if`/`#endif` le direttive per il preprocessore funzionano in modo ottimale perché è possibile racchiudere il codice che contiene commenti, ma non è possibile nidificare commenti.

Un commento C++ può essere scritto in uno dei modi seguenti:

- Caratteri `/*` (barra, asterisco), seguiti da qualsiasi sequenza di caratteri (ad esempio nuove righe), seguiti dai caratteri `*/`. Questa sintassi è la stessa dello standard ANSI C.

- Caratteri `//` (due barre), seguiti da qualsiasi sequenza di caratteri. Una nuova riga non immediatamente preceduta da una barra rovesciata termina questa forma di commento. Di conseguenza, viene comunemente chiamato commento a riga singola.

I caratteri di commento (`/*`, `*/` e `//`) non hanno alcun significato particolare all'interno di un carattere costante, di un valore letterale stringa o di un commento. I commenti che utilizzano la prima sintassi, pertanto, non possono essere annidati.

## <a name="see-also"></a>Vedere anche

[Convenzioni lessicali](../cpp/lexical-conventions.md)

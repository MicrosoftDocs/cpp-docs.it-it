---
title: Commenti (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- code comments, C++
- comments, documenting code
- comments, C++ code
- white space, C++ comments
ms.assetid: 6fcb906c-c264-4083-84bc-373800b2e514
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a412c2b4dd87bc3e8e3e1b77a524d2a5925aaf60
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405058"
---
# <a name="comments-c"></a>Commenti (C++)
Un commento è un testo ignorato dal compilatore, ma che può risultare utile per i programmatori. I commenti vengono generalmente utilizzati per annotare il codice per riferimento futuro. Il compilatore tratta i commenti come uno spazio vuoto. È possibile utilizzare i commenti nel test per rendere alcune righe di codice inattivo; Tuttavia `#if` / `#endif` le direttive del preprocessore più idoneo per questo oggetto perché è possibile racchiudere il codice che contiene i commenti, ma non è possibile annidare commenti.  
  
 Un commento C++ può essere scritto in uno dei modi seguenti:  
  
-   Caratteri `/*` (barra, asterisco), seguiti da qualsiasi sequenza di caratteri (ad esempio nuove righe), seguiti dai caratteri `*/`. Questa sintassi è la stessa dello standard ANSI C.  
  
-   Caratteri `//` (due barre), seguiti da qualsiasi sequenza di caratteri. Una nuova riga non immediatamente preceduta da una barra rovesciata termina questa forma di commento. Di conseguenza, viene comunemente chiamato commento a riga singola.  
  
 I caratteri di commento (`/*`, `*/` e `//`) non hanno alcun significato particolare all'interno di un carattere costante, di un valore letterale stringa o di un commento. I commenti che utilizzano la prima sintassi, pertanto, non possono essere annidati.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)
---
title: Commenti (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- code comments, C++
- comments, documenting code
- comments, C++ code
- white space, C++ comments
ms.assetid: 6fcb906c-c264-4083-84bc-373800b2e514
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 482b9f2f3d9917466becff3f2c9bf9fea6f599f6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comments-c"></a>Commenti (C++)
Un commento è un testo ignorato dal compilatore, ma che può risultare utile per i programmatori. I commenti vengono generalmente utilizzati per annotare il codice per riferimento futuro. Il compilatore tratta i commenti come uno spazio vuoto. È possibile utilizzare i commenti nel test per rendere alcune righe di codice inattivo; Tuttavia, `#if` / `#endif` le direttive del preprocessore funzionano meglio per l'oggetto perché è possibile racchiudere il codice che contiene i commenti ma non è possibile nidificare i commenti.  
  
 Un commento C++ può essere scritto in uno dei modi seguenti:  
  
-   Caratteri `/*` (barra, asterisco), seguiti da qualsiasi sequenza di caratteri (ad esempio nuove righe), seguiti dai caratteri `*/`. Questa sintassi è la stessa dello standard ANSI C.  
  
-   Caratteri `//` (due barre), seguiti da qualsiasi sequenza di caratteri. Una nuova riga non immediatamente preceduta da una barra rovesciata termina questa forma di commento. Di conseguenza, viene comunemente chiamato commento a riga singola.  
  
 I caratteri di commento (`/*`, `*/` e `//`) non hanno alcun significato particolare all'interno di un carattere costante, di un valore letterale stringa o di un commento. I commenti che utilizzano la prima sintassi, pertanto, non possono essere annidati.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)
---
title: Tag consigliati per i commenti relativi alla documentazione (commenti relativi alla documentazione in C
ms.date: 11/04/2016
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
ms.openlocfilehash: 1648d0eb019a3aad25641d7f6a7edd1ba26acf7e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336166"
---
# <a name="recommended-tags-for-documentation-comments"></a>Tag consigliati per i commenti relativi alla documentazione

Il compilatore MSVC elaborerà i commenti relativi alla documentazione nel codice e crea un file xdc per ogni compilazione e xdcmake.exe elaborerà i file xdc in un file XML. L'elaborazione del file con estensione xml per creare la documentazione è un dettaglio che deve essere implementato nel sito.

I tag vengono elaborati in costrutti di codice come tipi e membri di tipo.

I tag devono immediatamente precedere tipi o membri.

> [!NOTE]
> I commenti della documentazione non possono essere applicati a uno spazio dei nomi o in una definizione out-of-line di proprietà ed eventi; i commenti della documentazione devono essere nelle dichiarazioni in-class.

Il compilatore elabora tutti i tag validi per XML. I tag seguenti forniscono le funzionalità comunemente usate nella documentazione dell'utente:

||||
|-|-|-|
|[\<c>](c-visual-cpp.md)|[\<>del codice](code-visual-cpp.md)|[\<esempio>](example-visual-cpp.md)|
|eccezione>1 [ \< ](exception-visual-cpp.md)|includono>1 [ \< ](include-visual-cpp.md)|[\<elenco>](list-visual-cpp.md)|
|[\<para>](para-visual-cpp.md)|param>1 [ \< ](param-visual-cpp.md)|paramref>1 [ \< ](paramref-visual-cpp.md)|
|>autorizzazione 1 [ \< ](permission-visual-cpp.md)|[\<osservazioni>](remarks-visual-cpp.md)|[\<restituisce>](returns-visual-cpp.md)|
|vedi>1 [ \< ](see-visual-cpp.md)|vedi anche>1 [ \< ](seealso-visual-cpp.md)|[\<>riepilogativo](summary-visual-cpp.md)|
|[\<valore>](value-visual-cpp.md)|||

1. Il compilatore verifica la sintassi.

Nella versione corrente, il compilatore `<paramref>`MSVC non supporta , un tag supportato da altri compilatori di Visual Studio. Visual C++ potrebbe supportare `<paramref>` in una versione futura.

## <a name="see-also"></a>Vedere anche

[Documentazione XML](xml-documentation-visual-cpp.md)

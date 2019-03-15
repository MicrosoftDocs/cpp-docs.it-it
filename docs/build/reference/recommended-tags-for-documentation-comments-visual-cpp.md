---
title: Tag consigliati per i commenti della documentazione (commenti relativi alla documentazione di C++)
ms.date: 11/04/2016
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
ms.openlocfilehash: adb8440dc07f8f3e193b58be6782859fbb8413e4
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827039"
---
# <a name="recommended-tags-for-documentation-comments"></a>Tag consigliati per i commenti relativi alla documentazione

Il compilatore MSVC elaborerà i commenti della documentazione nel codice e crea un file con estensione xdc per ciascun modulo e xdcmake.exe elaborerà i file con estensione xdc in un file XML. L'elaborazione del file con estensione xml per creare la documentazione è un dettaglio che deve essere implementato nel sito.

I tag vengono elaborati in costrutti di codice come tipi e membri di tipo.

I tag devono immediatamente precedere tipi o membri.

> [!NOTE]
>  I commenti della documentazione non possono essere applicati a uno spazio dei nomi o in una definizione out-of-line di proprietà ed eventi; i commenti della documentazione devono essere nelle dichiarazioni in-class.

Il compilatore elabora tutti i tag validi per XML. I tag seguenti forniscono le funzionalità comunemente usate nella documentazione dell'utente:

||||
|-|-|-|
|[\<c>](c-visual-cpp.md)|[\<code>](code-visual-cpp.md)|[\<example>](example-visual-cpp.md)|
|[\<exception>](exception-visual-cpp.md)1|[\<include>](include-visual-cpp.md)1|[\<list>](list-visual-cpp.md)|
|[\<para>](para-visual-cpp.md)|[\<param>](param-visual-cpp.md)1|[\<paramref>](paramref-visual-cpp.md)1|
|[\<permission>](permission-visual-cpp.md)1|[\<remarks>](remarks-visual-cpp.md)|[\<returns>](returns-visual-cpp.md)|
|[\<see>](see-visual-cpp.md)1|[\<seealso>](seealso-visual-cpp.md)1|[\<summary>](summary-visual-cpp.md)|
|[\<value>](value-visual-cpp.md)|||

1. Il compilatore verifica la sintassi.

Nella versione corrente, il compilatore MSVC non supporta `<paramref>`, un tag che è supportato da altri compilatori di Visual Studio. Visual C++ potrebbe supportare `<paramref>` in una versione futura.

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](xml-documentation-visual-cpp.md)
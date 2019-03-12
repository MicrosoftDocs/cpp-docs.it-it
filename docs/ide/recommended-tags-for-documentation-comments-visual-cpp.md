---
title: Tag consigliati per i commenti relativi alla documentazione (Visual C++)
ms.date: 11/04/2016
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
ms.openlocfilehash: 154cb36ca121fee8731ac4e71506f562abb79988
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57744805"
---
# <a name="recommended-tags-for-documentation-comments-visual-c"></a>Tag consigliati per i commenti relativi alla documentazione (Visual C++)

Il compilatore Visual C++ elaborerà i commenti della documentazione nel codice, creerà un file con estensione xdc per ciascun compilando e xdcmake.exe elaborerà i file xdc in un file con estensione xml. L'elaborazione del file con estensione xml per creare la documentazione è un dettaglio che deve essere implementato nel sito.

I tag vengono elaborati in costrutti di codice come tipi e membri di tipo.

I tag devono immediatamente precedere tipi o membri.

> [!NOTE]
>  I commenti della documentazione non possono essere applicati a uno spazio dei nomi o in una definizione out-of-line di proprietà ed eventi; i commenti della documentazione devono essere nelle dichiarazioni in-class.

Il compilatore elabora tutti i tag validi per XML. I tag seguenti forniscono le funzionalità comunemente usate nella documentazione dell'utente:

||||
|-|-|-|
|[\<c>](../ide/c-visual-cpp.md)|[\<code>](../ide/code-visual-cpp.md)|[\<example>](../ide/example-visual-cpp.md)|
|[\<exception>](../ide/exception-visual-cpp.md)1|[\<include>](../ide/include-visual-cpp.md)1|[\<list>](../ide/list-visual-cpp.md)|
|[\<para>](../ide/para-visual-cpp.md)|[\<param>](../ide/param-visual-cpp.md)1|[\<paramref>](../ide/paramref-visual-cpp.md)1|
|[\<permission>](../ide/permission-visual-cpp.md)1|[\<remarks>](../ide/remarks-visual-cpp.md)|[\<returns>](../ide/returns-visual-cpp.md)|
|[\<see>](../ide/see-visual-cpp.md)1|[\<seealso>](../ide/seealso-visual-cpp.md)1|[\<summary>](../ide/summary-visual-cpp.md)|
|[\<value>](../ide/value-visual-cpp.md)|||

1. Il compilatore verifica la sintassi.

Nella versione corrente, il compilatore Visual C++ non supporta `<paramref>`, un tag che è supportato da altri compilatori di Visual Studio. Visual C++ potrebbe supportare `<paramref>` in una versione futura.

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)

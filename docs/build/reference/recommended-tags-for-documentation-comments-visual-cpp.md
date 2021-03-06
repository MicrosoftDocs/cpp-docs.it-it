---
description: 'Altre informazioni su: Tag consigliati per i commenti relativi alla documentazione'
title: Tag consigliati per i commenti relativi alla documentazione (commenti sulla documentazione C++)
ms.date: 11/04/2016
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
ms.openlocfilehash: 34bae4043231abed87770aec252303bd99707afe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225349"
---
# <a name="recommended-tags-for-documentation-comments"></a>Tag consigliati per i commenti relativi alla documentazione

Il compilatore MSVC elabora i commenti relativi alla documentazione nel codice e crea un file con estensione xdc per ogni modulo e xdcmake.exe elaborerà i file con estensione xdc in un file con estensione XML. L'elaborazione del file con estensione xml per creare la documentazione è un dettaglio che deve essere implementato nel sito.

I tag vengono elaborati in costrutti di codice come tipi e membri di tipo.

I tag devono immediatamente precedere tipi o membri.

> [!NOTE]
> I commenti della documentazione non possono essere applicati a uno spazio dei nomi o in una definizione out-of-line di proprietà ed eventi; i commenti della documentazione devono essere nelle dichiarazioni in-class.

Il compilatore elabora tutti i tag validi per XML. I tag seguenti forniscono le funzionalità comunemente usate nella documentazione dell'utente:

[`<c>`](c-visual-cpp.md)
[`<code>`](code-visual-cpp.md)
[`<example>`](example-visual-cpp.md)
[`<exception>`](exception-visual-cpp.md)<sup></sup> 
 1 [`<include>`](include-visual-cpp.md) <sup></sup> 
 [`<list>`](list-visual-cpp.md) 1 
 [`<para>`](para-visual-cpp.md) 
 [`<param>`](param-visual-cpp.md) <sup></sup> 
 1 [`<paramref>`](paramref-visual-cpp.md) <sup></sup> 
 1 [`<permission>`](permission-visual-cpp.md) <sup></sup> 
 [`<remarks>`](remarks-visual-cpp.md) 1 
 [`<returns>`](returns-visual-cpp.md) 
 [`<see>`](see-visual-cpp.md) <sup></sup> 
 1 [`<seealso>`](seealso-visual-cpp.md) <sup>1</sup>
[`<summary>`](summary-visual-cpp.md)
[`<value>`](value-visual-cpp.md)

1. Il compilatore verifica la sintassi.

Nella versione corrente il compilatore MSVC non supporta `<paramref>` , un tag supportato da altri compilatori di Visual Studio. Visual C++ potrebbe supportare `<paramref>` in una versione futura.

## <a name="see-also"></a>Vedi anche

[Documentazione XML](xml-documentation-visual-cpp.md)

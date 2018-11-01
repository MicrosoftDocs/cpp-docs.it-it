---
title: Identificatori
ms.date: 11/04/2016
helpviewer_keywords:
- declaration specifiers
- declarations, specifiers
- specifiers, in declarations
ms.assetid: 8b14e844-9880-4571-8779-28c8efe44633
ms.openlocfilehash: aef967b26321f289cb8c7bd0402d7fe8f12b77b6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50611406"
---
# <a name="specifiers"></a>Identificatori

Questo argomento viene descritto il *decl-specifiers* componente (identificatori di dichiarazione) di un [dichiarazione](declarations-and-definitions-cpp.md).

I seguenti segnaposto e le seguenti e parole chiave del linguaggio sono identificatori di dichiarazione:

*Storage-class-specifier*

*Identificatore di tipo*

*Identificatore di funzione*

[friend](friend-cpp.md)

[typedef](aliases-and-typedefs-cpp.md) `(` *extended-decl-modifier-seq* `)`

[declspec](declspec.md) `(` *extended-decl-modifier-seq* `)`

## <a name="remarks"></a>Note

Il *decl-specifiers* parte di una dichiarazione è la sequenza più lunga dei *decl-specifiers* che può essere usata per indicare un nome di tipo, esclusi il puntatore o riferimento modificatori. Il resto della dichiarazione è il *dichiaratore*, che include il nome introdotto.

Nella tabella seguente elenca quattro dichiarazioni e quindi ogni dichiarazione *decl-specifers* e *dichiaratore* componente separatamente.

|Dichiarazione|*decl-specifiers*|`declarator`|
|-----------------|------------------------|------------------|
|`char *lpszAppName;`|**char**|`*lpszAppName`|
|`typedef char * LPSTR;`|**char**|`*LPSTR`|
|`const int func1();`|**const int**|`func1`|
|`volatile void *pvvObj;`|**void volatile**|`*pvvObj`|

Poiché **firmati**, **unsigned**, **long**, e **breve** implicano tutti **int**, un  **typedef** assegnare un nome segue una di queste parole chiave viene considerato per essere un membro del *declarator-list* non di *decl-specifiers*.

> [!NOTE]
>  Poiché un nome può essere ridichiarato, la relativa interpretazione è soggetta alla dichiarazione più recente nell'ambito corrente. Ridichiarazione può influire sul modo in cui i nomi vengono interpretati dal compilatore, soprattutto **typedef** nomi.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)

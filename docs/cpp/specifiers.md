---
title: Identificatori | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- declaration specifiers
- declarations, specifiers
- specifiers, in declarations
ms.assetid: 8b14e844-9880-4571-8779-28c8efe44633
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f2888f8a75e9b7addd2b8f195ffbf875c2b7ae1a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32422326"
---
# <a name="specifiers"></a>Identificatori
Questo argomento viene descritto il *decl-specifiers* componente (identificatori di dichiarazione) di un [dichiarazione](declarations-and-definitions-cpp.md).  
  
 I seguenti segnaposto e le seguenti e parole chiave del linguaggio sono identificatori di dichiarazione:  
  
 *Storage-class-specifier*  
  
 *Identificatore di tipo*  
  
 *Identificatore di funzione*  
  
 [friend](../cpp/friend-cpp.md)  
  
 [typedef](http://msdn.microsoft.com/en-us/cc96cf26-ba93-4179-951e-695d1f5fdcf1)  
  
 [declspec](../cpp/declspec.md) `(` *extended-decl-modifier-seq* `)`  
  
## <a name="remarks"></a>Note  
 Il *decl-specifiers* parte di una dichiarazione è la sequenza più lunga di *decl-specifiers* che può essere usata per indicare un nome di tipo, escluso il puntatore o riferimento modificatori. Il resto della dichiarazione è il *dichiaratore*, che include il nome introdotto.  
  
 Nella tabella seguente elenca quattro dichiarazioni e quindi Elenca ogni dichiarazione *decl-specifers* e *dichiaratore* componente separatamente.  
  
|Dichiarazione|*decl-specifiers*|`declarator`|  
|-----------------|------------------------|------------------|  
|`char *lpszAppName;`|`char`|`*lpszAppName`|  
|`typedef char * LPSTR;`|`char`|`*LPSTR`|  
|`const int func1();`|`const int`|`func1`|  
|`volatile void *pvvObj;`|`volatile void`|`*pvvObj`|  
  
 Poiché `signed`, `unsigned`, `long`, e `short` implicano tutti `int`, `typedef` verrà eseguita una di queste parole chiave per essere un membro del seguente nome *declarator-list,* non di *decl-specifiers*.  
  
> [!NOTE]
>  Poiché un nome può essere ridichiarato, la relativa interpretazione è soggetta alla dichiarazione più recente nell'ambito corrente. La ridichiarazione può influire sull'interpretazione dei nomi da parte del compilatore, soprattutto sui nomi `typedef`.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)
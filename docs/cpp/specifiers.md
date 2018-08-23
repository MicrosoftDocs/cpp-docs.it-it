---
title: Identificatori | Microsoft Docs
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
ms.openlocfilehash: 8c1fb739d5e6206297e52fd9103cbba98c5eef01
ms.sourcegitcommit: 7f3df9ff0310a4716b8136ca20deba699ca86c6c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2018
ms.locfileid: "42573101"
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

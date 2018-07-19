---
title: Espansione di caratteri jolly | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _setargv
dev_langs:
- C++
helpviewer_keywords:
- asterisk wildcard
- _setargv function
- command line [C++], processing arguments
- command line [C++], wildcards
- command-line wildcards
- question mark, wildcard
ms.assetid: 1a543398-607b-4404-93d1-45d290bde638
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f4de54cbbe978534a42dcb9cbfa677eb1597aa5
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37939136"
---
# <a name="wildcard-expansion"></a>Espansione di caratteri jolly
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.  
  
 Gli argomenti della riga di comando vengono gestiti da una routine denominata `_setargv` (o `_wsetargv` nell'ambiente di caratteri "wide"), che per impostazione predefinita non espande i caratteri jolly in stringhe separate nella `argv` matrice di stringhe. Per altre informazioni sull'abilitazione dell'espansione di caratteri jolly, consultare [espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
---
title: Espansione di caratteri jolly | Documenti Microsoft
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
ms.openlocfilehash: bb58d5da479d686cac0d18c9d36e500bd6b5a632
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="wildcard-expansion"></a>Espansione di caratteri jolly
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.  
  
 Gli argomenti della riga di comando vengono gestiti da una routine denominata **Setargv** (o **Wsetargv** nell'ambiente a caratteri wide), che per impostazione predefinita non consente di espandere i caratteri jolly in stringhe separate nella `argv`matrice di stringhe. Per ulteriori informazioni sull'abilitazione di espansione di caratteri jolly, vedere [espansione degli argomenti jolly](../c-language/expanding-wildcard-arguments.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
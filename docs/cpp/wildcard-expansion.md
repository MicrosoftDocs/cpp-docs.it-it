---
title: Espansione di caratteri jolly | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 779a788cae6523a48a82694e55edf3c1da5519d7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="wildcard-expansion"></a>Espansione di caratteri jolly
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 È possibile usare caratteri jolly, ovvero il punto interrogativo (?) e l'asterisco (*), per specificare gli argomenti del percorso e del nome del file nella riga di comando.  
  
 Gli argomenti della riga di comando vengono gestiti da una routine denominata **Setargv** (o **Wsetargv** nell'ambiente a caratteri wide), che per impostazione predefinita non consente di espandere i caratteri jolly in stringhe separate nella `argv`matrice di stringhe. Per ulteriori informazioni sull'abilitazione di espansione di caratteri jolly, vedere [espansione degli argomenti jolly](../c-language/expanding-wildcard-arguments.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)

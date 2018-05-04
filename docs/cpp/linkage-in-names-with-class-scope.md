---
title: Collegamenti in nomi con ambito classe | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- scope [C++], linkage rules
- linkage [C++], scope linkage rules
- names [C++], scope linkage rules
- classes [C++], scope
- external linkage, scope linkage rules
- class names [C++], linkage
- classes [C++], names
- scope [C++], class names
- class scope [C++], linkage in names with
ms.assetid: 45275ff3-6e94-4967-82c8-ba540ef4da28
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9eb58f87e998fbe1eeeb9b26eb0da75046a9079d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="linkage-in-names-with-class-scope"></a>Collegamenti in nomi con ambito classe
Le seguenti regole di collegamento vengono applicate ai nomi con ambito classe:  
  
-   I membri di classe statici hanno un collegamento esterno.  
  
-   Le funzioni del membro classe hanno un collegamento esterno.  
  
-   Gli enumeratori e i nomi `typedef` non dispongono di collegamento.  
  
 **Sezione specifica Microsoft**  
  
-   Le funzioni dichiarate come funzioni `friend` devono disporre di collegamento esterno. La dichiarazione di una funzione statica come `friend` genera un errore.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)
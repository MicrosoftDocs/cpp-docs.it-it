---
title: Collegamenti in nomi con ambito classe | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 37a0dcca1da0ae56a8144adf862eda89bfb1c4d6
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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

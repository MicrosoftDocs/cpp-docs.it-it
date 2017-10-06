---
title: Convenzioni di chiamata obsolete | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __fortran
- __pascal
- __syscall
dev_langs:
- C++
helpviewer_keywords:
- WINAPI [C++]
- __syscall keyword [C++]
- __pascal keyword [C++]
- __fortran keyword [C++]
- calling conventions, obsolete
ms.assetid: a91fc665-034a-48ce-b6bd-d27125f308a7
caps.latest.revision: 7
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
ms.openlocfilehash: 90f328552677bc0f41accc316433365467dd7673
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="obsolete-calling-conventions"></a>Convenzioni di chiamata obsolete
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Il **Pascal**, **FORTRAN**, e **syscall** convenzioni di chiamata non sono più supportate. È possibile emulare le relative funzionalità utilizzando una delle convenzioni di chiamata supportate e le opzioni di collegamento adatte.  
  
 WINDOWS. H ora supporta il **WINAPI** (macro), che corrisponde alla convenzione di chiamata appropriata per la destinazione. Utilizzare **WINAPI** in cui è stato utilizzato in precedenza **PASCAL** o **far \__pascal**.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)

---
title: Convenzioni di chiamata obsolete | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9d2a6188cf9d8c8283a6c03a2ca6c701e28baf0d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="obsolete-calling-conventions"></a>Convenzioni di chiamata obsolete
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Il **Pascal**, **FORTRAN**, e **syscall** convenzioni di chiamata non sono più supportate. È possibile emulare le relative funzionalità utilizzando una delle convenzioni di chiamata supportate e le opzioni di collegamento adatte.  
  
 \<Windows. h > ora supporta il **WINAPI** (macro), che effettua la conversione la convenzione di chiamata appropriata per la destinazione. Utilizzare **WINAPI** in cui è stato utilizzato in precedenza **PASCAL** o **far \__pascal**.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
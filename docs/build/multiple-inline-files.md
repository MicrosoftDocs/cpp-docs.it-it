---
title: File Inline multipli | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inline files, multiple NMAKE
- multiple inline files
- NMAKE program, inline files
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ee9be15f029c0aaab3ca4bc47fb183e1499c2e2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368213"
---
# <a name="multiple-inline-files"></a>File inline multipli
Un comando è possibile creare più di un file inline.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      command << <<  
inlinetext  
<<[KEEP | NOKEEP]  
inlinetext  
<<[KEEP | NOKEEP]  
```  
  
## <a name="remarks"></a>Note  
 Per ogni file, specificare uno o più righe di testo inline seguite da una riga di chiusura contenente il delimitatore. Iniziare il testo del secondo file sulla riga successiva riga di delimitazione per il primo file.  
  
## <a name="see-also"></a>Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)
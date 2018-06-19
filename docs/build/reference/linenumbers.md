---
title: -LINENUMBERS | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /linenumbers
dev_langs:
- C++
helpviewer_keywords:
- LINENUMBERS dumpbin option
- line numbers
- -LINENUMBERS dumpbin option
- /LINENUMBERS dumpbin option
ms.assetid: 1681d582-2c2f-484e-9920-109959549055
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f9202d7f46dbd3a619e379d076db217544bd4291
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32371759"
---
# <a name="linenumbers"></a>/LINENUMBERS
```  
/LINENUMBERS  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione consente di visualizzare i numeri di riga COFF. Numeri di riga sono disponibili in un file oggetto se è stato compilato con Database di programma (/Zi), compatibile C7 (/ Z7), o solo i numeri di riga (/Zd). Un file eseguibile o DLL contiene numeri di riga COFF se è stato collegato con genera informazioni di Debug (/debug).  
  
 Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
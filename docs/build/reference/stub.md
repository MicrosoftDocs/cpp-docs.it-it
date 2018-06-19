---
title: STUB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- STUB
dev_langs:
- C++
helpviewer_keywords:
- STUB .def file statement
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 385e073f877a938a3b73fa79036d27cf50c1e4ec
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375201"
---
# <a name="stub"></a>STUB
Quando utilizzato in un file di definizione di modulo che consente di creare un driver di dispositivo virtuale (VxD), consente di specificare un nome di file che contiene una struttura IMAGE_DOS_HEADER (definita in WINNT. H) da utilizzare per il driver di dispositivo virtuale (VxD), anziché l'intestazione predefinita.  
  
```  
STUB:filename  
```  
  
## <a name="remarks"></a>Note  
 Un metodo equivalente per specificare *filename* con il [/STUB](../../build/reference/stub-ms-dos-stub-file-name.md) l'opzione del linker.  
  
 STUB è valido in un file di definizione moduli solo quando si compila un VxD.  
  
## <a name="see-also"></a>Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)
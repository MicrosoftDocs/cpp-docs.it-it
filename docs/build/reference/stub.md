---
title: STUB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: STUB
dev_langs: C++
helpviewer_keywords: STUB .def file statement
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 58430f8211f8859b65103b53d1f98a173c4635ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
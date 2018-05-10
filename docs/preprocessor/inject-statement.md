---
title: inject_statement | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- inject_statement
dev_langs:
- C++
helpviewer_keywords:
- inject_statement attribute
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 115f5b3d7012ae3e9073d81e0c1005dcb513e045
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="injectstatement"></a>inject_statement
**Sezione specifica C++**  
  
 Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inject_statement("source_text")  
```  
  
#### <a name="parameters"></a>Parametri  
 `source_text`  
 Testo di origine da inserire nel file di intestazione della libreria dei tipi.  
  
## <a name="remarks"></a>Note  
 Il testo viene inserito all'inizio della dichiarazione dello spazio dei nomi che esegue il wrapping del contenuto della libreria dei tipi nel file di intestazione.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
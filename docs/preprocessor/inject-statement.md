---
title: inject_statement | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: inject_statement
dev_langs: C++
helpviewer_keywords: inject_statement attribute
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6d1ac68cae628f09c9511c4b86eac75da8dff6ec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
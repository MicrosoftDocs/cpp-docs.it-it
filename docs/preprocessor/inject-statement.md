---
title: inject_statement | Microsoft Docs
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
ms.openlocfilehash: eb4142b742ae6c2a758c2a2fb5e09c604959433f
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541580"
---
# <a name="injectstatement"></a>inject_statement
**Sezione specifica C++**  
  
Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inject_statement("source_text")  
```  
  
### <a name="parameters"></a>Parametri  
*source_text*  
Testo di origine da inserire nel file di intestazione della libreria dei tipi.  
  
## <a name="remarks"></a>Note  
 
Il testo viene inserito all'inizio della dichiarazione dello spazio dei nomi che esegue il wrapping del contenuto della libreria dei tipi nel file di intestazione.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
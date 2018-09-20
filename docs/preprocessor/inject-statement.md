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
ms.openlocfilehash: bb3bdc2b4e00cd9e2167adeb0ad7d3023af9eb2e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384208"
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
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
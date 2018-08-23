---
title: embedded_idl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- embedded_idl
dev_langs:
- C++
helpviewer_keywords:
- embedded_idl attribute
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b41af8375249a48ac3a866af224370b19f071d28
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42544428"
---
# <a name="embeddedidl"></a>embedded_idl
**Sezione specifica C++**  
  
Specifica che la libreria dei tipi è scritta nel file con estensione tlh con il codice generato dall'attributo mantenuto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
embedded_idl[("param")]  
```  
  
### <a name="parameters"></a>Parametri  
*param*  
Può essere uno dei due valori:  
  
- emitidl: le informazioni sui tipi importate dalla libreria dei tipi saranno presenti nel file IDL generato per il progetto con attributi.  Questa è l'impostazione predefinita e avrà effetto se non si specifica un parametro su `embedded_idl`.  
  
- no_emitidl: le informazioni sui tipi importate dalla libreria dei tipi non saranno presenti nel file IDL generato per il progetto con attributi.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// import_embedded_idl.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib2")];  
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")  
```  
  
## <a name="remarks"></a>Note  
 
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
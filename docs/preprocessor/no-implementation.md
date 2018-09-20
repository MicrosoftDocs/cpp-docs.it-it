---
title: no_implementation | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- no_implementation
dev_langs:
- C++
helpviewer_keywords:
- no_implementation attribute
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c882a8d4eb2510969401b4280eb66116ad220c77
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46440836"
---
# <a name="noimplementation"></a>no_implementation
**Sezione specifica C++**  
  
Elimina la generazione dell'intestazione con estensione tli, contenente implementazioni delle funzioni membro wrapper.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_implementation  
```  
  
## <a name="remarks"></a>Note  
 
Se viene specificato questo attributo, l'intestazione con estensione tlh, con le dichiarazioni per esporre gli elementi libreria-tipo, verrà generata senza un'istruzione `#include` per includere il file di intestazione con estensione tli.  
  
Questo attributo viene usato in combinazione con [implementation_only](../preprocessor/implementation-only.md).  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
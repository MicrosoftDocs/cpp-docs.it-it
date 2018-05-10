---
title: raw_dispinterfaces | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- raw_dispinterfaces
dev_langs:
- C++
helpviewer_keywords:
- raw_dispinterfaces attribute
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1f2a0d91d0f0dd3d23886ade75072526e6c895f7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="rawdispinterfaces"></a>raw_dispinterfaces
**Sezione specifica C++**  
  
 Indica al compilatore di generare funzioni wrapper di basso livello per le proprietà che chiamano e metodi di interfaccia dispatch **IDispatch:: Invoke** e restituire il `HRESULT` codice di errore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_dispinterfaces  
```  
  
## <a name="remarks"></a>Note  
 Se questo attributo non viene specificato, solo i wrapper di alto livello vengono generati, che generano eccezioni C++ in caso di errore.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
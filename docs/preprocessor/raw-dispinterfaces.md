---
title: raw_dispinterfaces | Microsoft Docs
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
ms.openlocfilehash: 02133e6b9d884fa8e0a175dd01845035ec8b96a7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46435948"
---
# <a name="rawdispinterfaces"></a>raw_dispinterfaces
**Sezione specifica C++**  
  
Indica al compilatore di generare funzioni wrapper di basso livello per i metodi di interfaccia dispatch e proprietà che chiamano `IDispatch::Invoke` e restituire il codice di errore HRESULT.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_dispinterfaces  
```  
  
## <a name="remarks"></a>Note  
 
Se questo attributo non viene specificato, solo i wrapper di alto livello vengono generati, che generano eccezioni C++ in caso di errore.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
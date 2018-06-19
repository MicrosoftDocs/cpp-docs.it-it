---
title: no_namespace | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- no_namespace
dev_langs:
- C++
helpviewer_keywords:
- no_namespace attribute
ms.assetid: 5d81b741-a558-451b-b493-1f3b18967337
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b3d4558b0fd6a4014bc9601d5260882af444f87e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33912745"
---
# <a name="nonamespace"></a>no_namespace
**Sezione specifica C++**  
  
 Specifica che il nome dello spazio dei nomi non viene generato dal compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_namespace  
```  
  
## <a name="remarks"></a>Note  
 Il contenuto della libreria di tipi nel file di intestazione `#import` è in genere definito in uno spazio dei nomi. Il nome dello spazio dei nomi è specificato nel **libreria** istruzione del file IDL originale. Se è specificato l'attributo `no_namespace`, questo spazio dei nomi non viene generato dal compilatore.  
  
 Se si desidera utilizzare un nome di spazio dei nomi diverso, quindi utilizzare il [rename_namespace](../preprocessor/rename-namespace.md) invece dell'attributo.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
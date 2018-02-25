---
title: no_namespace | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- no_namespace
dev_langs:
- C++
helpviewer_keywords:
- no_namespace attribute
ms.assetid: 5d81b741-a558-451b-b493-1f3b18967337
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3e6528ce33689dc05fa037bdd6bc110e5e6a0de9
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)
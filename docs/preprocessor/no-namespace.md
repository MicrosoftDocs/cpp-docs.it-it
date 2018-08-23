---
title: no_namespace | Microsoft Docs
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
ms.openlocfilehash: 6eded6b4d543248cc7bf53a0e4ba622b2b74c8b3
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42540196"
---
# <a name="nonamespace"></a>no_namespace
**Sezione specifica C++**  
  
Specifica che il nome dello spazio dei nomi non viene generato dal compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_namespace  
```  
  
## <a name="remarks"></a>Note  
 
Il contenuto della libreria di tipi nel file di intestazione `#import` è in genere definito in uno spazio dei nomi. Il nome dello spazio dei nomi è specificato nel `library` istruzione del file IDL originale. Se il **no_namespace** attributo è specificato, quindi questo spazio dei nomi non viene generato dal compilatore.  
  
Se si desidera utilizzare un nome di spazio dei nomi diverso, quindi usare il [rename_namespace](../preprocessor/rename-namespace.md) invece dell'attributo.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
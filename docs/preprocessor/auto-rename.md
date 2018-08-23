---
title: auto_rename | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- auto_rename
dev_langs:
- C++
helpviewer_keywords:
- auto_rename attribute
ms.assetid: 1075f3ab-f6fc-4e04-8e22-ebe02695a567
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 70049daf514659a9ae525e1fca40152df4ab382a
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42539220"
---
# <a name="autorename"></a>auto_rename
**Sezione specifica C++**  
  
Rinomina parole riservate C++ aggiungendo due caratteri di sottolineatura (__) al nome della variabile per risolvere potenziali conflitti di nomi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
auto_rename  
```  
  
## <a name="remarks"></a>Note 

Questo attributo viene utilizzato quando si importa una libreria dei tipi che utilizza una o più parole riservate C++ (parole chiave o macro) come nomi di variabile.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche 

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
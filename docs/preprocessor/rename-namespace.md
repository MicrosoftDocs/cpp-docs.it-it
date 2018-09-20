---
title: rename_namespace | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- rename_namespace
dev_langs:
- C++
helpviewer_keywords:
- rename_namespace attribute
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7608255b5369443ce1045f896b776cb283fdb1cb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411859"
---
# <a name="renamenamespace"></a>rename_namespace
**Sezione specifica C++**  
  
Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
rename_namespace("NewName")  
```  
  
### <a name="parameters"></a>Parametri  
*NewName*  
Nuovo nome dello spazio dei nomi.  
  
## <a name="remarks"></a>Note  
 
È necessario un solo argomento, *NewName*, che consente di specificare il nuovo nome per lo spazio dei nomi.  
  
Per rimuovere lo spazio dei nomi, usare il [no_namespace](../preprocessor/no-namespace.md) invece dell'attributo.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
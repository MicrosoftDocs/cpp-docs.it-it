---
title: Errore del compilatore C3457 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3457
dev_langs:
- C++
helpviewer_keywords:
- C3457
ms.assetid: 5c1e366a-fa75-4cca-b9a3-86d4ebe4090e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 99621cfd4f1827763be8ec84d82871290a04652b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33249467"
---
# <a name="compiler-error-c3457"></a>Errore del compilatore C3457
'attribute': l'attributo non supporta argomenti non denominati  
  
 A differenza dell'attributo personalizzato CLR o gli attributi del compilatore, gli attributi di annotazione di origine supportano solo gli argomenti denominati.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3457.  
  
```  
#include "SourceAnnotations.h"  
[vc_attributes::Post( 1 )] int f();   // C3457  
[vc_attributes::Post( Valid=vc_attributes::Yes )] int f2();   // OK  
```
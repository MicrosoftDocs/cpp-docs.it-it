---
title: Errore del compilatore C3115 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3115
dev_langs:
- C++
helpviewer_keywords:
- C3115
ms.assetid: 51726145-9782-4ec9-84b9-286f366d9cbd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a8a324ede696e0af93b857e9605ad7c4b2aa8b73
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33251232"
---
# <a name="compiler-error-c3115"></a>Errore del compilatore C3115
'attribute': attributo non è consentito per 'construct'  
  
 Un attributo è stato applicato a un costrutto per cui non è stato progettato.  Vedere [attributi tramite l'utilizzo di](../../windows/attributes-by-usage.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3115.  
  
```  
// C3115.cpp  
// compile with: /c  
#include <unknwn.h>  
[module(name="xx")];  
  
[object, helpstringdll(xx.dll), uuid("00000000-0000-0000-0000-000000000001")]   // C3115  
// try the following line instead  
// [object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyI {  
   HRESULT xx();  
};  
```
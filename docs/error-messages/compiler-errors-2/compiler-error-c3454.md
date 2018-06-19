---
title: Errore del compilatore C3454 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3454
dev_langs:
- C++
helpviewer_keywords:
- C3454
ms.assetid: dc4e6d57-5b4d-4114-8d6f-22f9ae62925b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 65e1aea19dbeab5c34a6b818afcb4cd4a7deda91
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33263374"
---
# <a name="compiler-error-c3454"></a>Errore del compilatore C3454
[attribute] non consentito in una dichiarazione di classe  
  
 Per poter essere un attributo è necessario che una classe sia definita.  
  
 Per altre informazioni, vedere [attribute](../../windows/attribute.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3454.  
  
```  
// C3454.cpp  
// compile with: /clr /c  
using namespace System;  
  
[attribute]   // C3454  
ref class Attr1;  
  
[attribute]   // OK  
ref class Attr2 {};  
```
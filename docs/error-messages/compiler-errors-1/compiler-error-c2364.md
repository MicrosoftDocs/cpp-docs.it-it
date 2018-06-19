---
title: Errore del compilatore C2364 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2364
dev_langs:
- C++
helpviewer_keywords:
- C2364
ms.assetid: 4f550571-94b5-42ca-84cb-663fecbead44
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f3802deefb8a62f7952a5ce7a32c589c76c84513
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196010"
---
# <a name="compiler-error-c2364"></a>Errore del compilatore C2364
'type': tipo non valido per l'attributo personalizzato  
  
 Argomenti denominati per gli attributi personalizzati sono limitati alle costanti in fase di compilazione. Ad esempio i tipi integrali (int, char e così via), System:: Type ^ e System:: Object ^.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2364.  
  
```  
// c2364.cpp  
// compile with: /clr /c  
using namespace System;  
  
[attribute(AttributeTargets::All)]  
public ref struct ABC {  
public:  
   // Delete the following line to resolve.  
   ABC( Enum^ ) {}   // C2364  
   ABC( int ) {}   // OK  
};  
```
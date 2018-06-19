---
title: Errore del compilatore C3807 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3807
dev_langs:
- C++
helpviewer_keywords:
- C3807
ms.assetid: 7e2b0aab-8c61-4e71-b9c1-fcaeb6a1b5ea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c4171b13d7605d296ac8ac6d1f06125d0fadd226
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33272318"
---
# <a name="compiler-error-c3807"></a>Errore del compilatore C3807
'type': una classe con l'attributo ComImport non può derivare da 'type2', è consentita solo l'implementazione dell'interfaccia  
  
 Un tipo che deriva da <xref:System.Runtime.InteropServices.ComImportAttribute> può implementare solo un'interfaccia.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3807.  
  
```  
// C3807.cpp  
// compile with: /clr /c  
ref struct S {};  
interface struct I {};  
  
[System::Runtime::InteropServices::ComImportAttribute()]  
ref struct S1 : S {};   // C3807  
ref struct S2 : I {};  
```
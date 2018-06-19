---
title: Errore del compilatore C3099 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3099
dev_langs:
- C++
helpviewer_keywords:
- C3099
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 27059beb1cb587b9060da8c5cc5702ea966422f0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33249755"
---
# <a name="compiler-error-c3099"></a>Errore del compilatore C3099
'keyword': usare [System::AttributeUsageAttribute] per gli attributi gestiti; usare [Windows::Foundation::Metadata::AttributeUsageAttribute] per gli attributi WinRT  
  
 Utilizzare <xref:System.AttributeUsageAttribute> per dichiarare **/clr** attributi. Usare `Windows::Foundation::Metadata::AttributeUsageAttribute` per dichiarare gli attributi Windows Runtime.  
  
 Per ulteriori informazioni sugli attributi /CLR, vedere [attributi definiti dall'utente](../../windows/user-defined-attributes-cpp-component-extensions.md). Per gli attributi supportati in Windows Runtime, vedere [spazio dei nomi](http://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.aspx)  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3099 e mostra come risolverlo.  
  
```  
// C3099.cpp  
// compile with: /clr /c  
using namespace System;  
[usage(10)]   // C3099  
// try the following line instead  
// [AttributeUsageAttribute(AttributeTargets::All)]  
ref class A : Attribute {};  
```
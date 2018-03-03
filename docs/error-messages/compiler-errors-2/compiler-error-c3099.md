---
title: Errore del compilatore C3099 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3099
dev_langs:
- C++
helpviewer_keywords:
- C3099
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a644a27c834efcd3c3857241927a6e618f600d0c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
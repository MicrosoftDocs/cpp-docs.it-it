---
title: Errore del compilatore C2262 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2262
dev_langs:
- C++
helpviewer_keywords:
- C2262
ms.assetid: 727d1c6e-53e8-40e5-b7b8-6a7ac2011727
caps.latest.revision: 4
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 62a32d2a15e36819c8b74f35ef5eae57f1abb50f
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2262"></a>Errore del compilatore C2262
'attribute_specifiers': impossibile specificare una versione, le impostazioni cultura o l'architettura del processore per le dichiarazioni InternalsVisibleTo  
  
 Il <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute>attributo non è stato specificato correttamente.</xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute>  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2262.  
  
```  
// C2262.cpp  
// compile with: /clr /c  
using namespace System::Runtime::CompilerServices;  
[assembly: InternalsVisibleTo("assembly_name, version=1.2.3.7")];   // C2262  
[assembly: InternalsVisibleTo("assembly_name ")];   // OK  
```

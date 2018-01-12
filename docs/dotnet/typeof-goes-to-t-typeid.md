---
title: 'typeof passa a t:: typeid | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- typeid operator
- __typeof keyword
- typeid keyword [C++]
ms.assetid: 6a0d35a7-7a1a-4070-b187-cff37cfdc205
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 09ec4aef4c8bc68f8a808193b30d86b8519ba881
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="typeof-goes-to-ttypeid"></a>typeof passa a T::typeid
Il `typeof` utilizzata nelle estensioni gestite per C++ è stato sostituito dall'operatore di `typeid` parola chiave in Visual C++.  
  
 Nelle estensioni gestite, il `__typeof()` operatore restituisce l'oggetto associato `Type*` oggetto quando viene passato il nome di un tipo gestito. Ad esempio:  
  
```  
// Creates and initializes a new Array instance.  
Array* myIntArray =   
   Array::CreateInstance( __typeof(Int32), 5 );  
```  
  
 Nella nuova sintassi, `__typeof` è stato sostituito da un altro modulo di `typeid` che restituisce un `Type^` quando viene specificato un tipo gestito.  
  
```  
// Creates and initializes a new Array instance.  
Array^ myIntArray =   
   Array::CreateInstance( Int32::typeid, 5 );  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifiche generali del linguaggio (C + c++ /CLI)](../dotnet/general-language-changes-cpp-cli.md)   
 [typeid](../windows/typeid-cpp-component-extensions.md)
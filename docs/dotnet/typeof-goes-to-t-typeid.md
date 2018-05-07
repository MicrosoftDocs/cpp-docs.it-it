---
title: 'typeof passa a t:: typeid | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- typeid operator
- __typeof keyword
- typeid keyword [C++]
ms.assetid: 6a0d35a7-7a1a-4070-b187-cff37cfdc205
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0ae9f772a68735555748e6edbeb6196f1a73d2c9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
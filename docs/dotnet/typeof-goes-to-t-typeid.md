---
title: "typeof passa a T::typeid | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__typeof (parola chiave)"
  - "typeid (parola chiave) [C++]"
  - "typeid (operatore)"
ms.assetid: 6a0d35a7-7a1a-4070-b187-cff37cfdc205
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# typeof passa a T::typeid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'operatore `typeof` utilizzato nelle estensioni gestite di C\+\+ è stato sostituito dalla parola chiave `typeid` in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 Nelle estensioni gestite, l'operatore `__typeof()` restituisce l'oggetto `Type*` associato quando viene passato il nome di un tipo gestito.  Di seguito è riportato un esempio.  
  
```  
// Creates and initializes a new Array instance.  
Array* myIntArray =   
   Array::CreateInstance( __typeof(Int32), 5 );  
```  
  
 Nella nuova sintassi, `__typeof` è stato sostituito da una forma aggiuntiva di `typeid` che restituisce `Type^` quando viene specificato un tipo gestito.  
  
```  
// Creates and initializes a new Array instance.  
Array^ myIntArray =   
   Array::CreateInstance( Int32::typeid, 5 );  
```  
  
## Vedere anche  
 [Modifica generale del linguaggio](../dotnet/general-language-changes-cpp-cli.md)   
 [typeid](../windows/typeid-cpp-component-extensions.md)
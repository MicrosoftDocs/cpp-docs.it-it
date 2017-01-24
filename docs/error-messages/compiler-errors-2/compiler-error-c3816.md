---
title: "Errore del compilatore C3816 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3816"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3816"
ms.assetid: 2e52cc7f-e31c-41a3-8d6f-9f5fab3648c0
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3816
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'declaration' precedentemente dichiarata o definita con un diverso modificatore gestito o WinRT  
  
 Una dichiarazione con prototipo e una dichiarazione effettiva richiedono che non siano presenti conflitti o incoerenze nella dichiarazione degli attributi.  
  
 L'esempio seguente genera l'errore C3816 e mostra come risolverlo:  
  
```  
// C3816a.cpp  
// compile with: /clr /c  
class C1;  
// try the following line instead  
// ref class C1;  
  
ref class C1{  // C3816, forward declaration does not use ref  
};  
```
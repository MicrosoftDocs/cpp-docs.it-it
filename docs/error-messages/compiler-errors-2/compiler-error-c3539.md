---
title: "Errore del compilatore C3539 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3539"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3539"
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3539
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': un argomento di modello non può essere un tipo che contiene 'auto'  
  
 Il tipo di argomento di modello indicato non può contenere un utilizzo della parola chiave `auto`.  
  
### Per correggere l'errore  
  
1.  Non specificare l'argomento di modello con la parola chiave `auto`.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3539.  
  
```  
// C3539.cpp  
// Compile with /Zc:auto  
template<class T> class C{};  
int main()  
{  
   C<auto> c;   // C3539  
   return 0;  
}  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)
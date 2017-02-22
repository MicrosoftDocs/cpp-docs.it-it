---
title: "Errore del compilatore C3809 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3809"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3809"
ms.assetid: 37eca584-c20c-464e-8e45-a987214b7ce4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3809
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': un tipo gestito o WinRT non può avere funzioni, classi o interfacce friend  
  
 I tipi gestiti e i tipi Windows Runtime non consentano elementi friend.  Per correggere l'errore, non dichiarare elementi friend nei tipi gestiti o Windows Runtime.  
  
 L'esempio seguente genera l'errore C3809:  
  
```  
// C3809a.cpp  
// compile with: /clr  
ref class A {};  
  
ref class B  
{  
public:  
   friend ref class A;   // C3809  
};  
  
int main()  
{  
}  
```
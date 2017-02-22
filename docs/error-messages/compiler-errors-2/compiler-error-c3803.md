---
title: "Errore del compilatore C3803 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3803"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3803"
ms.assetid: bad5fb9a-ed9a-4c15-96e7-cf06e200a50d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3803
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'proprietà': la proprietà è di un tipo incompatibile con il 'metodo di accesso' di una delle sue funzioni di accesso  
  
 Il tipo di una proprietà definita con [property](../../cpp/property-cpp.md) non corrisponde al tipo restituito per una delle funzioni di accesso.  
  
 Il seguente codice di esempio genera l'errore C3803:  
  
```  
// C3803.cpp  
struct A  
{  
   __declspec(property(get=GetIt)) int i;  
   char GetIt()  
   {  
      return 0;  
   }  
  
   /*  
   // try the following definition instead  
   int GetIt()  
   {  
      return 0;  
   }  
   */  
}; // C3803  
  
int main()  
{  
}  
```
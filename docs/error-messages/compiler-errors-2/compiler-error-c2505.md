---
title: "Errore del compilatore C2505 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2505"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2505"
ms.assetid: b19f5c53-399d-425e-90db-fe3ca9b40858
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2505
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': è possibile applicare '\_\_declspec\(modificatore\)' solo a dichiarazioni o a definizioni di oggetti globali o membri dati statici  
  
 In una funzione è stato utilizzato un modificatore `__declspec` destinato a essere utilizzato solo in ambito globale.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).  
  
 Il seguente codice di esempio genera l'errore C2505:  
  
```  
// C2505.cpp  
// compile with: /clr  
  
// OK  
__declspec(process) int ii;  
__declspec(appdomain) int jj;  
  
int main() {  
   __declspec(process) int i;   // C2505  
   __declspec(appdomain) int j;   // C2505  
}  
```
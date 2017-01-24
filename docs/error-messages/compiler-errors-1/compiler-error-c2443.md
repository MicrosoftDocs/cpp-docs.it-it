---
title: "Errore del compilatore C2443 | Microsoft Docs"
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
  - "C2443"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2443"
ms.assetid: 315330d5-24bc-4193-a531-0642095be58f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2443
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

conflitto di dimensione dell'operando  
  
 L'istruzione richiede che gli operandi abbiano la stessa dimensione.  
  
 Il seguente codice di esempio genera l'errore C2443:  
  
```  
// C2443.cpp  
// processor: x86  
short var;  
int main() {  
   __asm xchg ax,bl   // C2443  
   __asm mov al,red   // C2443  
   __asm mov al,BYTE PTR var   // OK  
}  
```
---
title: "Errore del compilatore C2430 | Microsoft Docs"
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
  - "C2430"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2430"
ms.assetid: 07c20f76-63e1-4d22-b2a9-98b0d45c5cac
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2430
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

più di un registro di indice in 'identificatore'  
  
 Sono stati scalati più registri.  La creazione di indici scalati è supportata, ma è possibile scalare un solo registro.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2430:  
  
```  
// C2430.cpp  
// processor: x86  
int main() {  
   _asm mov eax, [ebx*2+ecx*4] // C2430  
}  
```
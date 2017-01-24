---
title: "Errore del compilatore C2357 | Microsoft Docs"
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
  - "C2357"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2357"
ms.assetid: d1083945-0ea2-4385-9e66-8c665978806c
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2357
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': deve essere una funzione di tipo 'tipo'  
  
 La versione della funzione `atexit` dichiarata nel codice non corrisponde a quella dichiarata internamente dal compilatore.  Dichiarare `atexit` nel modo seguente:  
  
```  
int __cdecl atexit(void (__cdecl *)());  
```  
  
 Per ulteriori informazioni, vedere [init\_seg](../../preprocessor/init-seg.md).  
  
 Il seguente codice di esempio genera l'errore C2357:  
  
```  
// C2357.cpp  
// compile with: /c  
// C2357 expected  
#pragma warning(disable : 4075)  
// Uncomment the following line to resolve.  
// int __cdecl myexit(void (__cdecl *)());  
#pragma init_seg(".mine$m",myexit)  
```
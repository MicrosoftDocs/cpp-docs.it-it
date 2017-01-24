---
title: "allocate | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "allocate"
  - "allocate_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], allocate"
  - "allocate __declspec (parola chiave)"
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# allocate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'identificatore di dichiarazione **allocate** denomina un segmento dati in cui l'elemento dati verrà allocato.  
  
## Sintassi  
  
```  
  
__declspec(allocate("  
segname  
")) declarator  
```  
  
## Note  
 Il nome di *segname* deve essere dichiarato utilizzando uno dei seguenti pragma:  
  
-   [code\_seg](../preprocessor/code-seg.md)  
  
-   [const\_seg](../preprocessor/const-seg.md)  
  
-   [data\_seg](../preprocessor/data-seg.md)  
  
-   [init\_seg](../preprocessor/init-seg.md)  
  
-   [section](../preprocessor/section.md)  
  
## Esempio  
  
```  
// allocate.cpp  
#pragma section("mycode", read)  
__declspec(allocate("mycode"))  int i = 0;  
  
int main() {  
}  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)
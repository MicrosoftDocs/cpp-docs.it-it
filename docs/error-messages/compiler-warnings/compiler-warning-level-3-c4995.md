---
title: "Avviso del compilatore (livello 3) C4995 | Microsoft Docs"
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
  - "C4995"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4995"
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4995
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': nome contrassegnato come \#pragma deprecated  
  
 È stata rilevata una funzione contrassegnata con pragma [deprecated](../../preprocessor/deprecated-c-cpp.md).  È possibile che tale funzione non sia più supportata in una versione futura.  Disattivare l'avviso con il pragma [warning](../../preprocessor/warning.md), come illustrato nell'esempio seguente.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4995:  
  
```  
// C4995.cpp  
// compile with: /W3  
#include <stdio.h>  
  
// #pragma warning(disable : 4995)  
void func1(void)  
{  
    printf("\nIn func1");  
}  
  
int main()   
{  
    func1();  
    #pragma deprecated(func1)  
    func1();   // C4995  
}  
```
---
title: "Avviso del compilatore (livello 4) C4668 | Microsoft Docs"
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
  - "C4668"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4668"
ms.assetid: c6585460-bc4a-4a15-9242-4cbfce53c961
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4668
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo' non è definita come macro del preprocessore. Sostituzione con '0' per 'direttive'  
  
 È stato utilizzato un simbolo non definito con una direttiva del preprocessore.  Il simbolo restituirà false.  Per definire un simbolo, utilizzare la [direttiva \#define](../../preprocessor/hash-define-directive-c-cpp.md) o l'opzione del compilatore [\/D](../../build/reference/d-preprocessor-definitions.md).  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4668:  
  
```  
// C4668.cpp  
// compile with: /W4  
#include <stdio.h>  
  
#pragma warning (default : 4668)   // turn warning on  
  
int main()   
{  
    #if q   // C4668, q is not defined  
        printf_s("defined");  
    #else  
        printf_s("undefined");  
    #endif  
}  
```
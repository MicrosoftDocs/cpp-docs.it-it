---
title: "_SCL_SECURE_NO_WARNINGS | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_SCL_SECURE_NO_DEPRECATE"
  - "_SCL_SECURE_NO_WARNINGS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_SCL_SECURE_NO_DEPRECATE"
  - "_SCL_SECURE_NO_WARNINGS"
ms.assetid: ef0ddea9-7c62-4b53-8b64-5f4fd369776f
caps.latest.revision: 5
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _SCL_SECURE_NO_WARNINGS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiamare uno dei metodi potenzialmente non sicuri nella libreria C\+\+ standard comporterà [Avviso del compilatore \(livello 3\) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).  Per disabilitare l'avviso, definire macro **\_SCL\_SECURE\_NO\_WARNINGS** nel codice:  
  
```  
#define _SCL_SECURE_NO_WARNINGS  
```  
  
## Note  
 Altri metodi per disabilitare l'avviso C4996 includono:  
  
-   Utilizzando l'opzione del compilatore di [\/D \(definizioni preprocessore\)](../build/reference/d-preprocessor-definitions.md) :  
  
    ```  
    cl /D_SCL_SECURE_NO_WARNINGS [other compiler options] myfile.cpp  
    ```  
  
-   Utilizzando l'opzione del compilatore di [\/w](../build/reference/compiler-option-warning-level.md) :  
  
    ```  
    cl /wd4996 [other compiler options] myfile.cpp  
    ```  
  
-   Utilizzo della direttiva di [avviso \#pragma](../preprocessor/warning.md) :  
  
    ```  
    #pragma warning(disable:4996)  
    ```  
  
 Inoltre, è possibile modificare manualmente il livello di avviso C4996 con l'opzione del compilatore di **\/w\<l\>\<n\>**.  Ad esempio, impostare C4996 avviso di Livello 4:  
  
```  
cl /w44996 [other compiler options] myfile.cpp  
```  
  
 Per ulteriori informazioni, vedere [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../build/reference/compiler-option-warning-level.md).  
  
## Vedere anche  
 [Librerie protette: libreria standard C\+\+](../standard-library/safe-libraries-cpp-standard-library.md)
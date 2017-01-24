---
title: "Errore del compilatore C3115 | Microsoft Docs"
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
  - "C3115"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3115"
ms.assetid: 51726145-9782-4ec9-84b9-286f366d9cbd
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3115
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'attributo': attributo non consentito per 'costrutto'  
  
 Un attributo è stato applicato a un costrutto per il quale non è stato progettato.  Per ulteriori informazioni, vedere [Attributes by Usage](../../windows/attributes-by-usage.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3115:  
  
```  
// C3115.cpp  
// compile with: /c  
#include <unknwn.h>  
[module(name="xx")];  
  
[object, helpstringdll(xx.dll), uuid("00000000-0000-0000-0000-000000000001")]   // C3115  
// try the following line instead  
// [object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyI {  
   HRESULT xx();  
};  
```
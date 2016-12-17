---
title: "Errore del compilatore CS2034 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS2034"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2034"
ms.assetid: 72f2b785-ee23-4a1b-b12d-42d19c324d5e
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS2034
Un'opzione \/reference che dichiara un alias extern può avere un solo nome file. Per specificare più alias o nomi di file, usare più opzioni \/reference.  
  
 Per specificare due alias e\/o nomi di file, usare due opzioni **\/reference**, come nell'esempio seguente:  
  
## Esempio  
 Il codice seguente genera l'errore CS2034.  
  
```  
// CS2034.cs // compile with: /r:A1=cs2034a1.dll;A2=cs2034a2.dll // to fix, compile with: /r:A1=cs2034a1.dll /r:A2=cs2034a2.dll // CS2034 extern alias A1; extern alias A2; using System;  
```
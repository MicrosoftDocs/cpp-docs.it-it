---
title: "Avviso del compilatore (livello 4) C4431 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4431"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4431"
ms.assetid: 58434ab6-dd8d-427b-953a-602fb7453ae6
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 4) C4431
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

identificatore di tipo mancante, verrà utilizzato int.Nota: default\-int non è più supportato in C\+\+  
  
 Questo errore può essere generato come risultato delle operazioni di conformità eseguite per Visual C\+\+ 2005: gli identificatori non tipizzati non vengono più creati come int per impostazione predefinita.  È necessario specificare il tipo di un identificatore in modo esplicito.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4431:  
  
```  
// C4431.c  
// compile with: /c /W4  
#pragma warning(default:4431)  
i;   // C4431  
int i;   // OK  
```
---
title: "Troppe applicazioni client DLL | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrID47"
ms.assetid: 4b87780b-67ad-4c96-9253-db954a751dad
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Troppe applicazioni client DLL
La libreria di collegamento dinamico \(DLL\) per [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] supporta solo l'accesso a un numero limitato di applicazioni host. L'applicazione e altre applicazioni che sono host di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] \(alcune delle quali sono accessibili dall'applicazione\) stanno tentando di accedere contemporaneamente alla DLL [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  
  
### Per correggere l'errore  
  
-   Ridurre il numero di applicazioni aperte che accedono a [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  
  
## Vedere anche  
 [Error Types](../Topic/Error%20Types%20\(Visual%20Basic\).md)
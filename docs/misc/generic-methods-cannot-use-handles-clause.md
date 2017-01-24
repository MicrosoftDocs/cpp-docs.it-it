---
title: "I metodi generici non possono utilizzare la clausola &#39;Handles&#39; | Microsoft Docs"
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
  - "vbc32080"
  - "BC32080"
helpviewer_keywords: 
  - "BC32080"
ms.assetid: 88c62a1c-aee3-46b2-ad78-76790022c04c
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi generici non possono utilizzare la clausola &#39;Handles&#39;
Una routine `Sub` generica comprende una clausola [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md) nella sua dichiarazione.  
  
 La clausola `Handles` specifica un elenco di eventi gestiti dalla routine `Sub`. Per poter fungere da gestore eventi, la routine `Sub` deve avere la stessa firma di ciascun evento che deve gestire. È possibile creare più routine generiche con firme che [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non riesce a prevedere in fase di compilazione.[!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] di conseguenza non può garantire che venga fornita una firma corrispondente a quelle degli eventi nella clausola `Handles`.  
  
 **ID errore:** BC32080  
  
### Per correggere l'errore  
  
-   Se la routine `Sub` deve essere generica, rimuovere la clausola `Handles` dalla sua dichiarazione. Usare l'[AddHandler Statement](../Topic/AddHandler%20Statement.md) per associare questo gestore eventi a un evento.  
  
-   Se la routine `Sub` deve usare la clausola `Handles` per associare gli eventi, rimuovere la clausola [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md) dalla sua dichiarazione. Con `Handles` è necessario usare una routine non generica.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Eventi e gestori eventi](http://msdn.microsoft.com/it-it/95074a0d-1cbc-4221-a95a-964185c7f962)
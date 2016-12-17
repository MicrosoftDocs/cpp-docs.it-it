---
title: "Impossibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a un metodo generico o annidato in un tipo generico. | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31526"
  - "bc31526"
helpviewer_keywords: 
  - "BC31526"
ms.assetid: 6f153808-1945-4c99-85ae-8bd3b35ee5a2
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a un metodo generico o annidato in un tipo generico.
Viene dichiarata una routine con <xref:System.Runtime.InteropServices.DllImportAttribute>, ma è generica o contenuta all'interno di un tipo generico.  
  
 Common Language Runtime \(CLR\) rileva che questo attributo e la relativa proprietà <xref:System.Runtime.InteropServices._Assembly.EntryPoint%2A> designano una routine di sostituzione definita in una libreria di collegamento dinamico \(DLL\) non gestita all'esterno di .NET Framework. Quando il codice chiama la routine a cui è applicato <xref:System.Runtime.InteropServices.DllImportAttribute>, Common Language Runtime chiama invece la routine non gestita designata.  
  
 Dal momento che le piattaforme non gestite esterne a .NET Framework non riconoscono i tipi generici, non è possibile interagire con esse usando dei tipi generici.  
  
 **ID errore:** BC31526  
  
### Per correggere l'errore  
  
-   Se non è necessario che la routine né il suo contenitore siano generici, rimuovere le clausole `Of` in modo che non lo siano più.  
  
-   Se invece è necessario che la routine o il suo contenitore siano generici, rimuovere l'attributo <xref:System.Runtime.InteropServices.DllImportAttribute> dalla dichiarazione della routine.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DllImportAttribute>   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)
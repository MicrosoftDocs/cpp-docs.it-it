---
title: "&#39;&lt;nometipo&gt;&#39; ha lo stesso nome di un altro tipo esposto in un gruppo &#39;My&#39; | Microsoft Docs"
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
  - "vbc36015"
  - "bc36015"
helpviewer_keywords: 
  - "BC36015"
ms.assetid: cd2286da-49be-461f-bec9-58e9c53e250b
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; ha lo stesso nome di un altro tipo esposto in un gruppo &#39;My&#39;
'\<nometipo\>' ha lo stesso nome di un altro tipo esposto in un gruppo 'My'. Rinominare il form o lo spazio dei nomi che lo contiene.  
  
 Una classe o struttura viene dichiarata con lo stesso nome di una classe o struttura in uno degli oggetti `My`.  
  
 È impossibile evitare un conflitto di nomi tra due classi accessibili mediante l'oggetto `My`, ad esempio `My.Forms`.  
  
 Se tra classi nell'oggetto `My` esiste un potenziale conflitto di nomi, il compilatore imposta il nome della proprietà per il tipo da *ClassName* a *RootNamespace*\_*Namespace*\_*ClassName*. Ad esempio, considerare due form denominati `Form1`. Se uno dei form è nello spazio dei nomi radice `WindowsApplication1` e nello spazio dei nomi `Namespace1`, è possibile accedere al form mediante `My.Forms.WindowsApplication1_Namespace1_Form1`.  
  
 Questo errore può verificarsi se due classi hanno lo stesso nome e sono all'interno di spazi di nomi annidati e con caratteri di sottolineatura nel nome. Quando il compilatore crea il nuovo nome di proprietà per le classi, esiste ancora un conflitto di nomi.  
  
 **ID errore:** BC36015  
  
### Per correggere l'errore  
  
1.  Rinominare il nuovo form.  
  
2.  Rinominare gli spazi dei nomi.  
  
     Evitare di assegnare a classi o strutture lo stesso nome di una classe o struttura esistente.  
  
## Vedere anche  
 <xref:System.Windows.Forms.Form>   
 <xref:Microsoft.VisualBasic.MyGroupCollectionAttribute>   
 [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [My.Forms Object](../Topic/My.Forms%20Object.md)
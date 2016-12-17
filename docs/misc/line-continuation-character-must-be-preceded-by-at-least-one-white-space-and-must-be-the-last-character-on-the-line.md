---
title: "Il carattere di continuazione di riga &#39;_&#39; deve essere preceduto da almeno uno spazio vuoto e deve essere l&#39;ultimo carattere della riga | Microsoft Docs"
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
  - "vbc30999"
  - "bc30999"
helpviewer_keywords: 
  - "BC30999"
ms.assetid: 32caf62f-52e4-4acd-b40f-5af65e42e643
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il carattere di continuazione di riga &#39;_&#39; deve essere preceduto da almeno uno spazio vuoto e deve essere l&#39;ultimo carattere della riga
Per suddividere una lunga riga di codice in più righe all'interno del file è possibile usare il carattere di continuazione di riga, ovvero il carattere di sottolineatura \(\_\). Il carattere di continuazione di riga deve essere preceduto da uno spazio e seguito da un terminatore di riga \(ritorno a capo\). Ad esempio:  
  
```  
Dim books As XDocument = _ XDocument.Load(My.Application.Info.DirectoryPath & _ "\..\..\Data\books.xml")  
```  
  
 **ID errore:** BC30999  
  
### Per correggere l'errore  
  
1.  Verificare che il carattere di continuazione di riga \(\_\) sia l'ultimo carattere in una riga di codice.  
  
2.  Verificare che il carattere di continuazione di riga sia preceduto da uno spazio, che lo separa dal resto del codice presente nella riga.  
  
## Vedere anche  
 [Procedura: Interrompere e combinare istruzioni nel codice](../Topic/How%20to:%20Break%20and%20Combine%20Statements%20in%20Code%20\(Visual%20Basic\).md)
---
title: "&#39;&lt;nomelemento&gt;&#39;per l&#39;alias di Imports per &#39;&lt;nomelementoqualificato&gt;&#39; non si riferisce n&#233; a uno spazio dei nomi, n&#233; a una classe, n&#233; a una struttura, n&#233; a un&#39;interfaccia, n&#233; a un&#39;enumerazione, n&#233; a un modulo | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30798"
  - "vbc30798"
helpviewer_keywords: 
  - "BC30798"
ms.assetid: bfa66627-516a-4955-977d-92372bcea090
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomelemento&gt;&#39;per l&#39;alias di Imports per &#39;&lt;nomelementoqualificato&gt;&#39; non si riferisce n&#233; a uno spazio dei nomi, n&#233; a una classe, n&#233; a una struttura, n&#233; a un&#39;interfaccia, n&#233; a un&#39;enumerazione, n&#233; a un modulo
Un'[Imports Statement \(.NET Namespace and Type\)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md) specifica un elemento di programmazione che non può essere importato.  
  
 L'istruzione `Imports` si usa per ridurre o rimuovere la necessità di una stringa di qualifica davanti al nome di un elemento. Qualificare l'elemento nell'istruzione `Imports` stessa per offrire un percorso non ambiguo di una dichiarazione univoca dell'elemento. In seguito non sarà necessario qualificare i riferimenti all'elemento.  
  
 `Imports` viene più comunemente usato per gli spazi dei nomi, ma è anche possibile importare una classe, modulo, struttura, interfaccia o enumerazione per fare riferimento ai suoi elementi senza usare una lunga stringa di qualifica.  
  
 Per altre informazioni, vedere "Importazione di elementi contenitore" in [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9).  
  
 **ID errore:** BC30798  
  
### Per correggere l'errore  
  
1.  Controllare l'ortografia degli elementi nella stringa di qualificazione dell'istruzione `Imports`, in particolare l'ultimo elemento nella stringa, che è l'elemento che si sta qualificando.  
  
2.  Verificare che l'elemento che si sta qualificando di tipo idoneo \(spazio dei nomi, classe, modulo, struttura, interfaccia o enumerazione\). In caso contrario, rimuovere l'istruzione `Imports`.  
  
## Vedere anche  
 [References and the Imports Statement](../Topic/References%20and%20the%20Imports%20Statement%20\(Visual%20Basic\).md)
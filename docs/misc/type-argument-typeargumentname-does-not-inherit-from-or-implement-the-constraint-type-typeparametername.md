---
title: "L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; non eredita dal tipo di vincolo &#39;&lt;nomeparametrotipo&gt;&#39; n&#233; lo implementa | Microsoft Docs"
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
  - "bc32044"
  - "vbc32044"
helpviewer_keywords: 
  - "BC32044"
ms.assetid: be91f648-c07d-4991-8ed1-28b1327619c4
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; non eredita dal tipo di vincolo &#39;&lt;nomeparametrotipo&gt;&#39; n&#233; lo implementa
Un argomento di tipo fornito a un tipo generico non soddisfa il vincolo di ereditarietà o implementazione sul suo parametro di tipo corrispondente.  
  
 Un elenco di vincoli impone requisiti per l'argomento di tipo passato al parametro di tipo. Ecco alcuni possibili requisiti:  
  
-   L'argomento di tipo deve implementare una o più interfacce  
  
-   L'argomento di tipo deve ereditare al massimo da una classe  
  
 È possibile combinare i requisiti precedenti per un parametro di tipo singolo.[!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]non può creare il tipo a meno che il codice non fornisca gli argomenti di tipo che soddisfano ogni vincolo su ogni parametro di tipo definito nel tipo generico.  
  
 **ID errore:** BC32044  
  
### Per correggere l'errore  
  
-   Selezionare un argomento di tipo di un tipo che implementa ogni interfaccia specificata per il parametro di tipo e che eredita dalla classe specificata, se esiste.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Procedura: utilizzare una classe generica](../Topic/How%20to:%20Use%20a%20Generic%20Class%20\(Visual%20Basic\).md)
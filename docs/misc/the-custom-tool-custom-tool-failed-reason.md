---
title: "The custom tool &#39;custom tool&#39; failed. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.generator_fail_errorinfo"
ms.assetid: e846b946-a123-49fe-b4bc-a7bbda501417
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The custom tool &#39;custom tool&#39; failed. &lt;reason&gt;
Lo strumento personalizzato non è stato eseguito correttamente.  
  
 Se si riscontra un errore MSDataSetGenerator quando si aggiornano progetti che contengono dataset a più livelli, è necessario rieseguire lo strumento personalizzato dopo l'aggiornamento di tutti i progetti.  
  
 Errore dello strumento personalizzato "MSDataSetGenerator".  Il progetto specificato nell'attributo DataSetProject in \<nome dataset\> deve essere destinato a una versione di .NET Framework uguale o successiva al progetto corrente.  
  
### Per correggere gli errori di MSDataSetGenerator nei dataset a più livelli  
  
-   Fare clic con il pulsante destro del mouse sul file con estensione xsd in Esplora soluzioni, quindi scegliere **Esegui strumento personalizzato**.
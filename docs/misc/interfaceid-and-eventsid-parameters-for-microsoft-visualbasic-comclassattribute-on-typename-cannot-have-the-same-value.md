---
title: "I parametri &#39;InterfaceId&#39; e &#39;EventsId&#39; per &#39;Microsoft.VisualBasic.ComClassAttribute&#39; in &#39;&lt;nometipo&gt;&#39; non possono avere lo stesso valore | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32507"
  - "vbc32507"
helpviewer_keywords: 
  - "BC32507"
ms.assetid: 762e2990-e578-492d-b8ee-11658b6069fc
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I parametri &#39;InterfaceId&#39; e &#39;EventsId&#39; per &#39;Microsoft.VisualBasic.ComClassAttribute&#39; in &#39;&lt;nometipo&gt;&#39; non possono avere lo stesso valore
Un blocco di attributi `COMClassAttribute` specifica lo stesso identificatore univoco globale \(GUID\) per l'interfaccia e per l'evento di creazione. Se vengono specificati entrambi gli identificatori, è necessario usare identificatori diversi. Gli identificatori devono anche essere diversi dall'identificatore di classe.  
  
 Un GUID è composto da 16 byte \(otto byte numerici seguiti da otto byte binari\). È generato da utilità Microsoft quali uuidgen.exe ed è univoco.  
  
 **ID errore:** BC32507  
  
### Per correggere l'errore  
  
1.  Determinare i GUID corretti necessari per identificare l'interfaccia e l'evento di creazione per l'oggetto COM.  
  
2.  Verificare che le stringhe GUID presentate al blocco di attributi `COMClassAttribute` siano copiate correttamente.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)
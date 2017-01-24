---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ArgumentOutOfRangeException | Microsoft Docs"
ms.custom: ""
ms.date: "11/23/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "ArgumentOutOfRangeException (classe)"
ms.assetid: f53c58d9-7c4e-407f-93d3-1e59d90d98f5
caps.latest.revision: 24
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ArgumentOutOfRangeException
Un'eccezione <xref:System.ArgumentOutOfRangeException> viene generata quando viene richiamato un metodo e almeno uno degli argomenti passati al metodo non è un riferimento con valore null \(`Nothing` in Visual Basic\) e non contiene un valore valido.  
  
## Suggerimenti associati  
 **Assicurarsi che tutti gli argomenti di questo metodo abbiano valori validi in base a quanto definito dal metodo richiamato.**  
 Gli argomenti che non sono riferimenti con valore null devono contenere un valore valido.  
  
 **Se si utilizza una raccolta, assicurarsi che l'indice sia inferiore alle dimensioni della raccolta.**  
 L'indice deve essere compreso nell'intervallo di dimensioni della raccolta e non può essere superiore all'intervallo di dimensioni né essere minore di zero. Per altre informazioni, vedere [Raccolte](../Topic/Collections%20\(C%23%20and%20Visual%20Basic\).md).  
  
 **Quando si utilizzano i metodi di overload a due argomenti FindString e FindExactString con ComboBox o ListBox, controllare il parametro startIndex**.  
 Questa eccezione può essere generata se `startIndex` corrisponde al valore di indice dell'ultimo elemento dell'elenco associato. Per ovviare a questo problema, passare 0 come parametro `startIndex` oppure utilizzare il metodo `FindString` o `FindStringExact` con un solo argomento. Per altre informazioni, vedere [CComboBox::FindString](../Topic/CComboBox::FindString.md) o [CListBox::FindString](../Topic/CListBox::FindString.md).  
  
## Vedere anche  
 <xref:System.ArgumentOutOfRangeException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)
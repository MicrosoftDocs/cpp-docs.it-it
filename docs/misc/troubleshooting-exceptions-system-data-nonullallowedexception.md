---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.NoNullAllowedException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
  - "NoNullAllowedException (classe)"
ms.assetid: 1ab87572-007f-4b84-bb13-c3626e7f89cd
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.NoNullAllowedException
Un'eccezione <xref:System.Data.NoNullAllowedException> viene generata quando viene eseguito un tentativo di inserire un valore null in una colonna nella quale la proprietà <xref:System.Data.DataColumn.AllowDBNull%2A> è impostata su `false`.  
  
## Suggerimenti associati  
 **Controllare che il valore sia DBNull prima di aggiungerlo alla colonna.**  
 Se la proprietà <xref:System.Data.DataColumn.AllowDBNull%2A> è impostata su `false`, non sarà possibile inserire un valore null. Per altre informazioni, vedere <xref:System.DBNull>.  
  
 **Impostare AllowDBNull su True.**  
 Se questa proprietà è impostata su `true`, sarà possibile inserire valori null. Per altre informazioni, vedere <xref:System.Data.DataColumn.AllowDBNull%2A>.  
  
## Note  
 Se si utilizzano i pulsanti di navigazione per spostarsi tra i record di una tabella di database in un form dati, è possibile che questa eccezione venga restituita insieme al messaggio informativo "La colonna 'Colonna' non accetta valori null". Questa situazione si verifica perché la chiave primaria o la colonna che non accetta valori NULL della tabella di database non è stata selezionata durante l'esecuzione della Creazione guidata form dati. In questo caso, l'opzione **Aggiungi \- Crea un nuovo record** non è disabilitata. Per ovviare a questo problema, quando si aggiunge un form dati mediante la Creazione guidata form dati selezionare la colonna primaria e una colonna che non accetta valori NULL della tabella selezionata.  
  
## Vedere anche  
 <xref:System.Data.NoNullAllowedException>   
 <xref:System.Data.DataRowCollection.Add%2A>   
 <xref:System.Data.DataRow.EndEdit%2A>   
 <xref:System.Data.DataRow.ItemArray%2A>   
 <xref:System.Data.DataTable.LoadDataRow%2A>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)
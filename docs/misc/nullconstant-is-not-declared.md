---
title: "&#39;&lt;costantenull&gt;&#39; non &#232; dichiarato | Microsoft Docs"
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
  - "bc30822"
  - "vbc30822"
helpviewer_keywords: 
  - "BC30822"
ms.assetid: dda0e2c1-46a3-4cc4-b36c-0858a5259bac
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;costantenull&gt;&#39; non &#232; dichiarato
'\<costantenull\>' non è dichiarato. La costante Null non è più supportata. Usare System.DBNull.  
  
 Un'istruzione usa la parola chiave `Null`, che non è più supportata in Visual Basic.  
  
 **ID errore:** BC30822  
  
### Per correggere l'errore  
  
1.  Usare <xref:System.DBNull> anziché `Null`. Nell'esempio che segue viene illustrato quanto descritto.  
  
    ```  
    Sub TestDBNull() Dim t As DataTable ' Assume the DataGrid is bound to a DataTable. t = CType(DataGrid1.DataSource, DataTable) Dim r As DataRow r = t.Rows(datagrid1.CurrentCell.RowNumber) r.BeginEdit r(1) = System.DBNull.Value ' Assign DBNull to the record. r.EndEdit r.AcceptChanges If r.IsNull(1) Then MsgBox("") End If End Sub  
    ```  
  
2.  Usare la parola chiave [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md) per le assegnazioni e i confronti quando si usano le variabili oggetto. Nell'esempio che segue viene illustrato quanto descritto.  
  
    ```  
    Sub TestNothing() Dim cls As Object ' cls is Nothing if it has not been assigned using the New keyword. If (cls Is Nothing) Then MsgBox("cls is Nothing") End If cls = Nothing ' Assign Nothing to the class variable cls. End Sub  
    ```  
  
## Vedere anche  
 <xref:System.DBNull>   
 [Nothing](../Topic/Nothing%20\(Visual%20Basic\).md)   
 [Programming Element Support Changes Summary](http://msdn.microsoft.com/it-it/0483590a-6309-449c-a2fa-effa26a03b95)
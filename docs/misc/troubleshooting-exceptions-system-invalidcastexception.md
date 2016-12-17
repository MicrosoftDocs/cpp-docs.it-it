---
title: "Risoluzione dei problemi relativi alle eccezioni: System.InvalidCastException | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "InvalidCastException (classe)"
ms.assetid: a855dfe1-5c06-45a6-9c2f-c9e799ccf8f0
caps.latest.revision: 23
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.InvalidCastException
Un'eccezione <xref:System.InvalidCastException> viene generata quando si verifica un errore durante una conversione esplicita di un riferimento da un tipo all'altro. Queste conversioni possono modificare il tipo del riferimento, ma non cambiano mai il tipo o il valore della destinazione della conversione. Una causa frequente di questa eccezione è il cast di oggetti da un tipo all'altro.  
  
## Suggerimenti associati  
 **Confrontare i tipi di origine con i tipi di destinazione per assicurarsi che la conversione sia valida.**  
 Per informazioni sulle conversioni supportate dal sistema, vedere <xref:System.Convert>.  
  
## Note  
 Affinché una conversione esplicita di un riferimento abbia esito positivo, è necessario che il valore di origine sia Null \(`Nothing` in Visual Basic\) oppure che il tipo di oggetto al quale viene fatto riferimento nell'argomento di origine sia convertibile nel tipo di destinazione tramite una conversione implicita del riferimento.  
  
 Quando un'applicazione Visual Basic 6.0 con una chiamata a un evento personalizzato in un controllo utente viene aggiornata a una versione più recente di Visual Basic ed eseguita, è possibile che questa eccezione venga restituita insieme al messaggio informativo "Cast specificato non valido". Per risolvere questo errore, individuare la seguente riga di codice in  `Form1`:  
  
 `Call UserControl11_MyCustomEvent(UserControl11, New UserControl1.MyCustomEventEventArgs(5))`  
  
 Sostituire tale riga con:  
  
 `Call UserControl11_MyCustomEvent(UserControl11(0), New UserControl1.MyCustomEventEventArgs(5))`  
  
## Vedere anche  
 <xref:System.InvalidCastException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Convert an Object to Another Type in Visual Basic](../Topic/How%20to:%20Convert%20an%20Object%20to%20Another%20Type%20in%20Visual%20Basic.md)   
 [Conversione delle stringhe in tipi di dati di .NET Framework](../Topic/Converting%20Strings%20to%20.NET%20Framework%20Data%20Types.md)   
 [Procedura: implementare conversioni tra struct definite dall'utente](../Topic/How%20to:%20Implement%20User-Defined%20Conversions%20Between%20Structs%20\(C%23%20Programming%20Guide\).md)
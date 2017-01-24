---
title: "Risoluzione dei problemi relativi alle eccezioni: System.OutOfMemoryException | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
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
  - "OutOfMemoryException (classe)"
ms.assetid: eb16f008-964e-40a1-91f6-6ad25fa82d5a
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.OutOfMemoryException
Un'eccezione <xref:System.OutOfMemoryException> viene generata quando un tentativo di allocazione della memoria ha esito negativo.  
  
## Suggerimenti associati  
 **Se si sta creando una matrice, assicurarsi che le dimensioni siano corrette.**  
 Per altre informazioni, gli utenti di Visual Basic possono vedere [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md).  
  
 Per altre informazioni, gli utenti di C\# possono vedere [Matrici](../Topic/Arrays%20\(C%23%20Programming%20Guide\).md).  
  
 **Accertarsi di disporre della memoria sufficiente da allocare a fini interni e ai nuovi oggetti gestiti.**  
 Se per la programmazione si utilizza [!INCLUDE[Compact](../misc/includes/compact_md.md)], questa eccezione viene generata in Common Language Runtime quando la memoria disponibile non è sufficiente per i fini interni o per i nuovi oggetti gestiti. Per evitare che venga generata questa eccezione, non programmare metodi di grandi dimensioni che occupano una quantità di memoria pari o superiore a 64 KB.  
  
## Note  
 Un utilizzo eccessivo della memoria gestita in genere è causato dalle seguenti condizioni:  
  
-   Lettura nella memoria di dataset di grandi dimensioni.  
  
-   Creazione di un numero eccessivo di voci della cache.  
  
-   Upload o download di file di grandi dimensioni.  
  
-   Utilizzo eccessivo di espressioni o stringhe regolari durante l'analisi di file.  
  
-   Stato di visualizzazione eccessivo.  
  
-   Quantità eccessiva di dati nello stato sessione o numero eccessivo di sessioni.  
  
 Quando si richiama un metodo su un oggetto COM che restituisce un tipo definito dall'utente contenente una matrice protetta, ovvero una matrice con una dimensione non fissa, è possibile che questa eccezione venga restituita insieme al messaggio informativo "Memoria disponibile insufficiente per completare l'operazione". Questo perché .NET Framework non è in grado di eseguire il marshalling di un campo struttura con un tipo di matrice protetta.  
  
## Vedere anche  
 <xref:System.OutOfMemoryException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)
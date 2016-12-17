---
title: "Determinazione dello spazio dei nomi predefinito di un progetto | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "strumenti personalizzati, calcolo dello spazio dei nomi predefinito"
ms.assetid: 6d890676-7016-458c-8a6a-95cc0a068612
caps.latest.revision: 13
caps.handback.revision: 13
manager: "douge"
---
# Determinazione dello spazio dei nomi predefinito di un progetto
Per [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)], se la proprietà di `CustomToolNamespace` è impostata riguardanti l'archivio di input, il valore di `CustomToolNamespace` diventa il valore del parametro predefinito dello spazio dei nomi passato al metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsSingleFileGenerator.Generate%2A> .  In caso contrario, il parametro di `wszDefaultNamespace` passato a `Generate` è sempre uguale allo spazio dei nomi radice.  Per ulteriori informazioni sugli spazi dei nomi, vedere [Parole chiave per spazi dei nomi](../Topic/Namespace%20Keywords%20\(C%23%20Reference\).md).  
  
 a spazi dei nomi basati su cartella dell'[!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] .  Ovvero lo spazio dei nomi è costituito dallo spazio dei nomi radice, più i nomi di tutte le cartelle che contengono lo strumento personalizzato.  Ogni nome della cartella viene convertito in un identificatore valido e i periodi separano i nomi.  Ad esempio, se il file di input è FolderA \\FolderB\\FolderC\\MyInput.txt, and the root namespace is CL 9, lo spazio dei nomi predefinito calcolato essere **CL9.FolderA.FolderB.FolderC**.  
  
 Un'eccezione a questa regola si verifica quando la catena di struttura contiene una cartella di riferimento Web.  Ad esempio, se:  
  
-   FolderC è una cartella di riferimento Web, lo spazio dei nomi sarebbe **CL9.FolderC**.  
  
-   FolderB è una cartella di riferimento Web, lo spazio dei nomi sarebbe **CL9.FolderB.FolderC**.  
  
 Ovvero lo spazio dei nomi utilizza il formato seguente:  
  
```  
rootNamespace.webReferenceFolder.containedFolder.containedFolder ...  
```  
  
## Vedere anche  
 [Implementazione di generatori di File singolo](../Topic/Implementing%20Single-File%20Generators.md)   
 [Registrazione di generatori di File singolo](../Topic/Registering%20Single%20File%20Generators.md)   
 [Esposizione di tipi di finestre di progettazione visiva](../Topic/Exposing%20Types%20to%20Visual%20Designers.md)
---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Security.SecurityException | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHSecurity"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "System.Security.SecurityException (classe)"
  - "SecurityException (classe)"
ms.assetid: 7679ef74-dd15-439f-bfeb-0fb45f8b2373
caps.latest.revision: 26
caps.handback.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Security.SecurityException
Un'eccezione <xref:System.Security.SecurityException> viene generata quando viene rilevato un errore di sicurezza.  
  
## Suggerimenti associati  
 Regolare il livello di autorizzazione dell'assembly nella pagina delle proprietà.  
 Per altre informazioni, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.SqlPermissionLevel%2A>.  
  
 Archiviare i dati applicazione nell'archiviazione isolata.  
 L'archiviazione isolata è un archivio dati che offre caratteristiche di isolamento e protezione attraverso la definizione di modalità standardizzate per l'associazione del codice ai dati salvati. Per altre informazioni, [Spazio di memorizzazione isolato](../Topic/Isolated%20Storage.md).  
  
 Se si usa <xref:System.Windows.Forms.OpenFileDialog>, usare il metodo <xref:System.Windows.Forms.OpenFileDialog.OpenFile%2A> per aprire o salvare un file.  
 In questo modo l'applicazione potrà essere eseguita in un contesto di attendibilità parziale.  
  
 Assicurarsi che l'applicazione stia leggendo e scrivendo nei log eventi esistenti nel computer locale.  
 È possibile che l'applicazione non disponga di autorizzazioni sufficienti per creare log o scrivere in computer non locali.  
  
 Se si eseguono chiamate a librerie non gestite, utilizzare librerie gestite equivalenti.  
 È possibile che in Framework esista un'API equivalente. Per altre informazioni, vedere [Troubleshooting Interoperability](../Topic/Troubleshooting%20Interoperability%20\(Visual%20Basic\).md).  
  
 Utilizzare finestre protette.  
 L'enumerazione <xref:System.Security.Permissions.UIPermissionWindow> specifica il tipo di finestre che può essere utilizzato dal codice.  
  
 Consentire agli utenti di stampare con il componente <xref:System.Windows.Forms.PrintDialog>.  
 In questo modo l'applicazione potrà essere eseguita in un contesto di attendibilità parziale. Per altre informazioni, vedere <xref:System.Windows.Forms.PrintDialog>.  
  
 Stampare sulla stampante predefinita.  
 In questo modo l'applicazione potrà essere eseguita in un contesto di attendibilità parziale. È possibile che si stia tentando di accedere a una stampante per cui non si dispone dei diritti appropriati.  
  
 Recuperare i dati dallo stesso server Web che li ha distribuiti.  
 In questo modo l'applicazione potrà essere eseguita in un contesto di attendibilità parziale.  
  
 Quando si distribuisce una soluzione per Office, assicurarsi che tutti i requisiti di sicurezza siano soddisfatti.  
 Per altre informazioni, vedere [Considerazioni specifiche sulla sicurezza per le soluzioni Office](../Topic/Specific%20Security%20Considerations%20for%20Office%20Solutions.md).  
  
 Se un assembly che implementa l'oggetto di sicurezza personalizzato fa riferimento ad altri assembly, aggiungere tali assembly all'elenco degli assembly completamente attendibili.  
 Per altre informazioni, vedere [Caspol.exe \(Code Access Security Policy Tool\)](../Topic/Caspol.exe%20\(Code%20Access%20Security%20Policy%20Tool\).md).  
  
## Vedere anche  
 <xref:System.Security.SecurityException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)
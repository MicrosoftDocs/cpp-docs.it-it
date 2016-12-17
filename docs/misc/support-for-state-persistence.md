---
title: "Supporto per la persistenza dello stato | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "persistenza dello stato, supporto per il framework di pacchetto gestito"
  - "framework di pacchetto gestito, supporto per la persistenza dello stato"
  - "stato, persistenza"
ms.assetid: d25866f2-8d1f-477f-8aa5-3af3fbbf6e97
caps.latest.revision: 15
caps.handback.revision: 15
manager: "douge"
---
# Supporto per la persistenza dello stato
[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] possibile gestire lo stato degli oggetti comuni.  Ad esempio, la soluzione e le proprietà del progetto verranno salvate a e vengono ripristinate da soluzione e i file di progetto.  Le impostazioni utente vengano esportate a e sono importate dai file di impostazioni.  
  
 Vspackage in genere si basa in memoria locale, nel Registro di sistema o nella cartella di dati dell'applicazione per l'utente corrente o computer.  I valori che richiedono una piccola quantità di spazio di archiviazione, quali interi e stringhe, in genere vengono archiviati nel Registro di sistema.  I valori che richiedono una grande quantità di spazio di archiviazione, quali bitmap, vengono salvati in un file.  Il percorso del file può essere salvato nel Registro di sistema.  Il meccanismo di persistenza necessario disporre delle autorizzazioni per accedere alla memoria locale.  
  
## Supporto per individuare memoria locale  
 La classe di <xref:Microsoft.VisualStudio.Shell.Package> fornisce supporto per individuare le informazioni sullo stato nella cartella di dati dell'applicazione o del Registro di sistema per l'utente o il computer corrente.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.ApplicationRegistryRoot%2A>  
 Restituisce il percorso della chiave radice del Registro di sistema per [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio, HKEY\_LOCAL\_MACHINE \\Software\\Microsoft\\VisualStudio\\8.0Exp del computer locale.  
  
 La chiave radice del Registro di sistema locale viene ottenuta dal servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsShell> .  Se questo non è disponibile, viene ottenuto dall'attributo di <xref:Microsoft.VisualStudio.Shell.DefaultRegistryRootAttribute> del package VS.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.UserRegistryRoot%2A>  
 Restituisce il percorso della chiave radice del Registro di sistema corrente per [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio, HKEY\_CURRENT\_USER \\Software\\Microsoft\\VisualStudio\\8.0Exp utente \(per computer\).  
  
 La chiave radice del Registro di sistema locale viene ottenuta dal servizio di <xref:Microsoft.VisualStudio.Shell.Interop.SVsShell> .  Se questo non è disponibile, viene ottenuto dall'attributo di DefaultLocalRegistryRoot del package VS.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.UserDataPath%2A>  
 Restituisce il percorso della directory che funge da repository comune per i dati dell'utente mobile corrente, ad esempio, c\# [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] : \\Documents and Settings \\*TheAccountName*\\Application Data\\Microsoft\\VisualStudio\\8.0Exp.  
  
 <xref:Microsoft.VisualStudio.Shell.Package.UserLocalDataPath%2A>  
 Restituisce il percorso della directory che funge da repository comune per i dati per l'utente corrente di non metodo, ad esempio, c\# [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] : \\Documents and Settings \\*TheAccountName*\\Local Settings\\Application Data\\Microsoft\\VisualStudio\\8.0Exp.  
  
## Vedere anche  
 [Stato di un pacchetto VSPackage](../misc/vspackage-state.md)
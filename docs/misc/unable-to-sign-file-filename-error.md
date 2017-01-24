---
title: "Impossibile firmare il file &#39;&lt;nomefile&gt;&#39;: &lt;errore&gt; | Microsoft Docs"
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
  - "bc31028"
  - "vbc31028"
helpviewer_keywords: 
  - "BC31028"
ms.assetid: 2cb22e75-5ee2-4e07-afc0-680a0bd543d4
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile firmare il file &#39;&lt;nomefile&gt;&#39;: &lt;errore&gt;
Si è verificato un errore durante il tentativo di firmare il file specificato. L'errore può essere determinato da vari motivi:  
  
-   Autorizzazioni insufficienti.  
  
-   File di sistema mancanti necessari per la firma Authenticode.  
  
-   Un riferimento a un certificato o a un file di chiave privata inesistente.  
  
-   Errori di digitazione in un nome file o un URL.  
  
 **ID errore:** BC31028  
  
### Per correggere l'errore  
  
1.  Immettere correttamente i nomi di certificati e file di chiave privata.  
  
2.  Se si usa la firma Authenticode, verificare che siano presenti i file Signcode.exe e Javasign.dll e che non sia impostato l'attributo di sola lettura.  
  
3.  Assicurarsi di disporre dell'autorizzazione `Write` per il file.  
  
## Vedere anche  
 [File Signing Tool \(Signcode.exe\)](http://msdn.microsoft.com/it-it/2d299154-34ea-41ba-ad12-17075bb7e1db)   
 [Deployment and Authenticode Signing](http://msdn.microsoft.com/it-it/ecc3f059-da2e-445b-9b87-5b2978e2f8b2)
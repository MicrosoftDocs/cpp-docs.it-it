---
title: "Ridistribuzione di componenti tramite modelli unione | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli unione, utilizzo"
  - "ridistribuzione di applicazioni, utilizzo di moduli di unione"
ms.assetid: 93b84211-bf9b-4a78-9f22-474ac2ef7840
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Ridistribuzione di componenti tramite modelli unione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sono inclusi i [modelli unione](http://msdn.microsoft.com/library/aa367434) per ogni componente di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] concesso in licenza per essere ridistribuito con un'applicazione.  Quando un modello unione viene compilato in un file di installazione di Windows Installer, consente una distribuzione di DLL specifiche in computer con una determinata piattaforma.  Nel file di installazione specificare che i modelli unione sono prerequisiti dell'applicazione.  Quando si installa [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], i modelli unione vengono installati nella directory \\Programmi\\Common Files\\Merge Modules\\. \(È possibile ridistribuire solo le versioni non di debug delle DLL di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)]\). Per ulteriori informazioni e un collegamento a un elenco di modelli unione concessi in licenza per la ridistribuzione, vedere [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md).  
  
 È possibile utilizzare i modelli unione per consentire l'installazione delle DLL ridistribuibili di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] nella cartella %SYSTEMROOT%\\system32\\. \(In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] stesso viene utilizzata questa tecnica\). L'installazione in questa cartella può essere completata solo se l'utente che la esegue dispone dei diritti di amministratore.  
  
 Non è consigliabile utilizzare i modelli unione, tranne quando non è necessario eseguire la manutenzione dell'applicazione e non esistono dipendenze da più di una versione delle DLL.  Non è possibile includere in un programma di installazione modelli unione per versioni diverse della stessa DLL. Inoltre, i modelli unione rendono difficile la manutenzione delle DLL in modo indipendente dall'applicazione.  È invece consigliabile installare [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] Redistributable Package.  
  
## Vedere anche  
 [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md)
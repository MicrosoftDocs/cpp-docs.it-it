---
title: "Assembly con nome sicuro (firma degli assembly) (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "..NET Framework [C++], firma degli assembly"
  - "assembly [C++]"
  - "assembly [C++], firma"
  - "linker [C++], firma degli assembly"
  - "firma di assembly"
  - "assembly con nome sicuro [C++]"
ms.assetid: c337cd3f-e5dd-4c6f-a1ad-437e85dba1cc
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Assembly con nome sicuro (firma degli assembly) (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene descritto come firmare gli assembly, operazione spesso definita come assegnazione di un nome sicuro agli assembly.  
  
## Osservazioni  
 Quando si utilizza Visual C\+\+, ricorrere alle opzioni del linker per la firma dell'assembly in modo da evitare i problemi correlati agli attributi CLR:  
  
-   <xref:System.Reflection.AssemblyDelaySignAttribute>  
  
-   <xref:System.Reflection.AssemblyKeyFileAttribute>  
  
-   <xref:System.Reflection.AssemblyKeyNameAttribute>  
  
 I motivi per cui non è consigliabile utilizzare gli attributi includono la visibilità del nome di chiave nei metadati dell'assembly, fattore che rappresenta un potenziale rischio per la sicurezza, soprattutto se tale nome contiene informazioni riservate.  Inoltre, se per assegnare all'assembly un nome sicuro si ricorre agli attributi di CLR, il processo di compilazione utilizzato dall'ambiente di sviluppo Visual C\+\+ invaliderà la chiave con cui è stato firmato l'assembly ed eseguirà uno strumento di post\-elaborazione quale mt.exe.  
  
 Se la compilazione viene eseguita dalla riga di comando, utilizzare le opzioni del linker per firmare l'assembly, quindi eseguire uno strumento di post\-elaborazione \(ad esempio mt.exe\) e infine sarà necessario firmare nuovamente l'assembly con sn.exe.  In alternativa, è possibile compilare l'assembly e ritardarne la firma, quindi, dopo l'esecuzione degli strumenti di post\-elaborazione, completare la firma.  
  
 Se si utilizzano gli attributi della firma quando la compilazione viene eseguita nell'ambiente di sviluppo, è possibile firmare correttamente l'assembly chiamando sn.exe \([Sn.exe \(Strong Name Tool\)](../Topic/Sn.exe%20\(Strong%20Name%20Tool\).md)\) in un evento di post\-compilazione.  Per ulteriori informazioni, vedere [Specifica di eventi di compilazione](../ide/specifying-build-events.md).  L'utilizzo di attributi e di un evento di post\-compilazione, anziché delle opzioni di un linker, può ridurre i tempi di compilazione.  
  
 La firma dell'assembly è supportata dalle seguenti opzioni del linker:  
  
-   [\/DELAYSIGN \(Firma parzialmente un assembly\)](../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [\/KEYFILE \(Specifica una chiave o una coppia di chiavi per firmare un assembly\)](../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [\/KEYCONTAINER \(Specifica un contenitore di chiavi per firmare un assembly\)](../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
 Per ulteriori informazioni sugli assembly con nome sicuro, vedere [Creazione e utilizzo degli assembly con nome sicuro](../Topic/Creating%20and%20Using%20Strong-Named%20Assemblies.md).  
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
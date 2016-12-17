---
title: "Distribuzione ClickOnce per applicazioni Visual C++ | Microsoft Docs"
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
  - "distribuzione di applicazioni [C++], ClickOnce"
  - "distribuzione di applicazioni [C++], ClickOnce"
  - "distribuzione ClickOnce [C++], applicazioni C++"
ms.assetid: 9988c546-0936-452c-932f-9c76daa42157
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Distribuzione ClickOnce per applicazioni Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] fornisce due diverse tecnologie per la distribuzione di applicazioni Windows: la distribuzione ClickOnce o la distribuzione [Windows Installer](http://msdn.microsoft.com/library/cc185688).  
  
## Distribuzione ClickOnce in C\+\+  
 L'ambiente di sviluppo di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] non supporta direttamente la distribuzione dei progetti [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] con [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)], ma sono disponibili strumenti che consentono di ottenere questo risultato.  
  
> [!NOTE]
>  [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] supporta [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] negli ambienti di sviluppo [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)].  Se il progetto [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] è una dipendenza di un progetto [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], l'applicazione e le relative dipendenze potranno essere pubblicate utilizzando la distribuzione [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] dall'ambiente di sviluppo di [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)].  
  
 Per distribuire un'applicazione [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] tramite [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)], è innanzitutto necessario compilare un [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md) e un [ClickOnce Deployment Manifest](../Topic/ClickOnce%20Deployment%20Manifest.md) utilizzando [Mage.exe \(Strumento per la generazione e la modifica di manifesti\)](../Topic/Mage.exe%20\(Manifest%20Generation%20and%20Editing%20Tool\).md) o la relativa interfaccia grafica \(per informazioni, vedere [MageUI.exe \(Manifest Generation and Editing Tool, Graphical Client\)](../Topic/MageUI.exe%20\(Manifest%20Generation%20and%20Editing%20Tool,%20Graphical%20Client\).md)\).  
  
 Utilizzare innanzitutto Mage.exe per compilare il manifesto dell'applicazione. Il file risultante avrà l'estensione manifest.  Ricorrere quindi a Mage.exe per compilare il manifesto di distribuzione. Il file risultante avrà l'estensione application.  A questo punto, firmare i manifesti.  
  
 Il manifesto dell'applicazione deve specificare il processore di destinazione \(**x86**, **x64** o **ARM**\).  Per informazioni su queste opzioni, vedere [Prerequisiti per la distribuzione di applicazioni a 64 bit](../Topic/Deploying%20Prerequisites%20for%2064-bit%20Applications.md).  
  
 Il nome dei manifesti di applicazione e distribuzione deve inoltre differire dal nome dell'applicazione C\+\+,  in modo da evitare eventuali conflitti tra il manifesto dell'applicazione creato da Mage.exe e il manifesto esterno che fa parte dell'applicazione C\+\+.  
  
 Durante la distribuzione è necessario installare tutte le librerie [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] da cui l'applicazione dipende.  Per stabilire le dipendenze di una determinata applicazione, è possibile utilizzare depends.exe o l'utilità DUMPBIN con l'opzione \/DEPENDENTS.  Per ulteriori informazioni sulle dipendenze, vedere [Informazioni sulle dipendenze di un'applicazione Visual C\+\+](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md).  Potrebbe essere necessario eseguire VCRedist.exe, l'utilità che consente di installare le librerie [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] nel computer di destinazione.  
  
 Potrebbe inoltre essere necessario compilare un programma di avvio automatico \(programma di installazione dei prerequisiti\) per consentire all'applicazione di distribuire i componenti richiesti. Per informazioni sul programma di avvio automatico, vedere [Creazione di programmi di avvio automatico](../Topic/Creating%20Bootstrapper%20Packages.md).  
  
 Per una descrizione dettagliata della tecnologia, vedere [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md).  Per un esempio dettagliato della distribuzione [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)], vedere [Walkthrough: Manually Deploying a ClickOnce Application](../Topic/Walkthrough:%20Manually%20Deploying%20a%20ClickOnce%20Application.md).  
  
## Vedere anche  
 [Mage.exe \(Strumento per la generazione e la modifica di manifesti\)](../Topic/Mage.exe%20\(Manifest%20Generation%20and%20Editing%20Tool\).md)   
 [MageUI.exe \(Manifest Generation and Editing Tool, Graphical Client\)](../Topic/MageUI.exe%20\(Manifest%20Generation%20and%20Editing%20Tool,%20Graphical%20Client\).md)   
 [Makecert.exe \(Certificate Creation Tool\)](../Topic/Makecert.exe%20\(Certificate%20Creation%20Tool\).md)   
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Distribuzione di applicazioni, servizi e componenti](../Topic/Deploying%20Applications,%20Services,%20and%20Components.md)   
 [Windows Installer Deployment](http://msdn.microsoft.com/it-it/121be21b-b916-43e2-8f10-8b080516d2a0)   
 [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md)   
 [Creazione di programmi di avvio automatico](../Topic/Creating%20Bootstrapper%20Packages.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
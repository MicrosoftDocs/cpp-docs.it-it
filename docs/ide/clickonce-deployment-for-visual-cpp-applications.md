---
title: Distribuzione ClickOnce per applicazioni Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- deploying applications [C++], ClickOnce
- application deployment [C++], ClickOnce
- ClickOnce deployment [C++], C++ applications
ms.assetid: 9988c546-0936-452c-932f-9c76daa42157
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e1a036a1520a747448c5541f367f0b43711e30b1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clickonce-deployment-for-visual-c-applications"></a>Distribuzione ClickOnce per applicazioni Visual C++
Visual Studio fornisce due diverse tecnologie per la distribuzione di applicazioni di Windows: la distribuzione ClickOnce o [Windows Installer](http://msdn.microsoft.com/library/cc185688) distribuzione.  
  
## <a name="clickonce-deployment-in-c"></a>Distribuzione ClickOnce in C++  
 Ambiente di sviluppo di Visual C++ non supporta direttamente la distribuzione dei progetti di Visual C++ con ClickOnce, ma sono disponibili strumenti per utilizzarlo.  
  
> [!NOTE]
>  Negli ambienti di sviluppo Visual c# e Visual Basic, Visual Studio supporta ClickOnce. Se il progetto di Visual C++ è una dipendenza di un progetto Visual c#, è possibile pubblicare l'applicazione (e le relative dipendenze) utilizzando la distribuzione di ClickOnce dall'ambiente di sviluppo di Visual c#.  
  
 Per distribuire un'applicazione Visual C++ tramite ClickOnce, è innanzitutto necessario compilare un [manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest) e [manifesto della distribuzione ClickOnce](/visualstudio/deployment/clickonce-deployment-manifest) utilizzando il [Mage.exe (manifesto La generazione e lo strumento di modifica)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool) o la versione dell'interfaccia utente grafica (per informazioni, vedere [MageUI.exe (strumento di modifica, Client grafico e la generazione del manifesto)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)).  

  
 Utilizzare innanzitutto Mage.exe per compilare il manifesto dell'applicazione. Il file risultante avrà l'estensione manifest. Ricorrere quindi a Mage.exe per compilare il manifesto di distribuzione. Il file risultante avrà l'estensione application. A questo punto, firmare i manifesti.  
  
 Il manifesto dell'applicazione deve specificare il processore di destinazione (**x86**, **x64**, o **ARM**). Vedere [prerequisiti di distribuzione per applicazioni a 64 bit](/visualstudio/deployment/deploying-prerequisites-for-64-bit-applications) per informazioni su queste opzioni.  
  
 Il nome dei manifesti di applicazione e distribuzione deve inoltre differire dal nome dell'applicazione C++, in modo da evitare eventuali conflitti tra il manifesto dell'applicazione creato da Mage.exe e il manifesto esterno che fa parte dell'applicazione C++.  
  
 La distribuzione sarà necessario installare tutte le librerie di Visual C++ da cui dipende l'applicazione. Per stabilire le dipendenze di una determinata applicazione, è possibile utilizzare depends.exe o l'utilità DUMPBIN con l'opzione /DEPENDENTS. Per ulteriori informazioni sulle dipendenze, vedere [le dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). Potrebbe essere necessario eseguire VCRedist.exe; Questa utilità vengono installate librerie di Visual C++ nel computer di destinazione.  
  
 È inoltre necessario compilare un programma di avvio automatico (programma di installazione prerequisiti) per l'applicazione distribuire i componenti dei prerequisiti. Per informazioni sul programma di avvio automatico, vedere [la creazione di pacchetti del programma di avvio](/visualstudio/deployment/creating-bootstrapper-packages).  
  
 Per una descrizione più dettagliata della tecnologia, vedere [protezione di applicazioni ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment). Per un esempio dettagliato di distribuzione ClickOnce, vedere [procedura dettagliata: distribuzione manuale di un'applicazione ClickOnce](/visualstudio/deployment/walkthrough-manually-deploying-a-clickonce-application).  
  
## <a name="see-also"></a>Vedere anche  
 [Mage.exe (Strumento per la generazione e la modifica di manifesti)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool)   
 [MageUI.exe (Manifest Generation and Editing Tool, client grafico)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)   
 [Makecert.exe (Certificate Creation Tool)](https://msdn.microsoft.com/library/windows/desktop/aa386968)  (Makecert.exe, strumento di creazione certificati)  
 [Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Distribuzione di applicazioni, servizi e componenti](/visualstudio/deployment/deploying-applications-services-and-components)   
 [Distribuzione di Windows Installer](http://msdn.microsoft.com/en-us/121be21b-b916-43e2-8f10-8b080516d2a0)   
 [Sicurezza e distribuzione di ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment)   
 [Creazione di pacchetti del programma di avvio](/visualstudio/deployment/creating-bootstrapper-packages)   
 [Programmazione .NET con C + + CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
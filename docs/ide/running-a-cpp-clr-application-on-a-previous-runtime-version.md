---
title: Esegue un'applicazione di clr - C++ in una versione Runtime precedente | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- applications [C++], runtime version specified
- versions [C++]
- app.config files, runtime version specified
- compatibility [C++], runtime version specified
- backward compatibility [C++], runtime version specified
- application deployment [C++], runtime version specified
- common language runtime [C++], version specified
- deploying applications [C++], runtime version specified
ms.assetid: 940171b7-6937-4b14-8e87-c199e23f4f2e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4f8e76930eb9191d27085d92a9d3a678812715fc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="running-a-c-clr-application-on-a-previous-runtime-version"></a>Esecuzione di un'applicazione /clr C++ su una versione runtime precedente
Se non diversamente specificato, un'applicazione C++ .NET Framework deve essere eseguita sulla versione di common language runtime (CLR) utilizzata dal compilatore per compilare l'applicazione. Tuttavia, è possibile eseguire un'applicazione .exe che è stata compilata per una versione di runtime per l'esecuzione su qualsiasi altra versione che offre le funzionalità necessarie.  
  
 A tale scopo, specificare un file app. config che contiene informazioni sulla versione di runtime nelle `supportedRuntime` tag.  
  
 In fase di esecuzione, il file app. config deve avere un nome nel formato *ext*. config, dove *ext* è il nome del file eseguibile che ha avviato l'applicazione e deve essere nella stessa directory il file eseguibile. Ad esempio, se l'applicazione è denominata TestApp.exe, il file app. config verrebbe denominato TestApp.exe.config.  
  
 Se si specifica più di una versione di runtime e l'applicazione viene eseguita in un computer che dispone di più di una versione di runtime installato, l'applicazione utilizza la prima versione è installata e viene specificata nel file di configurazione.  
  
 Per ulteriori informazioni, vedere [procedura: configurare un'App come destinazione una versione di .NET Framework](http://msdn.microsoft.com/en-us/5247b307-89ca-417b-8dd0-e8f9bd2f4717).  
  
 Per l'esecuzione nella versione 1.0 o 1.1 di CLR, un'applicazione che viene compilato da Visual C++ compilatore deve essere compilato utilizzando [/CLR: initialAppDomain](../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)
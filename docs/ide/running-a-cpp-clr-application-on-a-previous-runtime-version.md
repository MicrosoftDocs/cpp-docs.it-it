---
title: "Esecuzione di un&#39;applicazione /clr C++ su una versione runtime precedente | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "app.config (file), versione del runtime specificata"
  - "distribuzione di applicazioni [C++], versione del runtime specificata"
  - "applicazioni [C++], versione del runtime specificata"
  - "compatibilità con versioni precedenti [C++], versione del runtime specificata"
  - "Common Language Runtime [C++], versione specificata"
  - "compatibilità [C++], versione del runtime specificata"
  - "distribuzione di applicazioni [C++], versione del runtime specificata"
  - "versioni [C++]"
ms.assetid: 940171b7-6937-4b14-8e87-c199e23f4f2e
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esecuzione di un&#39;applicazione /clr C++ su una versione runtime precedente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se non specificato diversamente, un'applicazione Visual C\+\+ .NET Framework deve essere eseguita sulla versione di \(CLR\) di Common Language Runtime utilizzata dal compilatore per compilare l'applicazione.  Tuttavia, è possibile che un'applicazione EXE compilata per una versione del runtime per l'esecuzione su una qualsiasi altra versione che fornisce la funzionalità richiesta.  
  
 A tale scopo, fornire un file app.config contenente informazioni sulla versione di runtime nel tag di `supportedRuntime`.  
  
 In fase di esecuzione, il file app.config deve avere un nome del form *filename.ext*.config, dove *filename.ext* è il nome dell'eseguibile che ha avviato l'applicazione e deve trovarsi nella stessa directory.  Ad esempio, se l'applicazione è denominata TestApp.exe, il file app.config dovrà essere denominato TestApp.exe.config.  
  
 Se si specifica più di uno versione del runtime e l'applicazione viene eseguita in un computer con più di uno versione del runtime, verrà utilizzata la prima versione specificata nel file config e installato.  
  
 Per ulteriori informazioni, vedere [How to: Configure an App to Target a .NET Framework Version](http://msdn.microsoft.com/it-it/5247b307-89ca-417b-8dd0-e8f9bd2f4717).  
  
 Per essere eseguiti nella versione 1.0 o 1.1 di CLR, un'applicazione compilata dal compilatore Visual C\+\+ deve essere compilata utilizzando [\/clr:initialAppDomain](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)
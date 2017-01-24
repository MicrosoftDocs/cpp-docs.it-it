---
title: "Assembly misti (nativi e gestiti) | Microsoft Docs"
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
  - "/clr (opzione del compilatore) [C++], assembly misti"
  - "assembly [C++], misto"
  - "interoperabilità [C++], assembly misti"
  - "interoperabilità [C++], assembly misti"
  - "codice gestito [C++], interoperabilità"
  - "assembly misti [C++]"
  - "assembly misti [C++], informazioni"
  - "caricamento di DLL miste [C++]"
  - "codice nativo [C++], .interoperabilità NET"
ms.assetid: 4299dfce-392f-4933-8bf0-5da2f0d1c282
caps.latest.revision: 35
caps.handback.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Assembly misti (nativi e gestiti)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli assembly misti possono contenere sia istruzioni macchina non gestite che istruzioni MSIL.  Ciò ne consente la chiamata da e verso componenti .NET, garantendo al tempo stesso la compatibilità con componenti interamente non gestiti.  Grazie agli assembly misti, gli sviluppatori possono creare applicazioni utilizzando una combinazione di funzionalità gestite e non gestite.  Gli assembly misti rappresentano pertanto la soluzione ideale per la migrazione delle applicazioni Visual C\+\+ esistenti alla piattaforma .NET.  
  
 È ad esempio possibile eseguire la migrazione alla piattaforma .NET di un'applicazione esistente interamente costituita da funzioni non gestite, ricompilando semplicemente un modulo con l'opzione **\/clr** del compilatore.  Questo modulo sarà quindi in grado di utilizzare funzionalità .NET, mantenendo tuttavia la compatibilità con il resto dell'applicazione.  Un'applicazione può così essere convertita alla piattaforma .NET in modo graduale.  È inoltre possibile scegliere tra la compilazione gestita e non gestita in base a ogni singola funzione all'interno dello stesso file \(vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md)\).  
  
 Visual C\+\+ supporta la generazione di tre tipi distinti di assembly gestiti: misti, puri e verificabili.  Il secondo e il terzo tipo sono illustrati in [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## Argomenti della sezione  
 [Procedura: eseguire la migrazione a \/clr](../dotnet/how-to-migrate-to-clr.md)  
 Descrive i passaggi consigliati per l'introduzione o l'aggiornamento di funzionalità .NET nell'applicazione.  
  
 [Procedura: compilare codice MFC e ATL tramite \/clr](../dotnet/how-to-compile-mfc-and-atl-code-by-using-clr.md)  
 Viene illustrato come compilare programmi MFC e ATL esistenti per Common Language Runtime.  
  
 [Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)  
 Descrive il problema del "blocco del caricatore" e le relative soluzioni.  
  
 [Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)  
 Illustra come utilizzare librerie native nelle compilazioni **\/clr**.  
  
 [Considerazioni sulle prestazioni](../dotnet/performance-considerations-for-interop-cpp.md)  
 Descrive le implicazioni sulle prestazioni degli assembly misti e del marshalling dei dati.  
  
 [Domini applicazione e Visual C\+\+](../dotnet/application-domains-and-visual-cpp.md)  
 Illustra il supporto Visual C\+\+ per i domini applicazione.  
  
 [Doppio thunk](../dotnet/double-thunking-cpp.md)  
 Illustra le implicazioni sulle prestazioni di un punto di ingresso nativo per una funzione gestita.  
  
 [Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con \/clr](../dotnet/avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr.md)  
 Illustra come garantire l'arresto corretto di un'applicazione gestita che utilizza un oggetto COM compilato con **\/clr**.  
  
 [Procedura: creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT](../dotnet/create-a-partially-trusted-application.md)  
 Viene illustrato come creare un'applicazione Common Language Runtime parzialmente attendibile tramite [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] rimuovendo la dipendenza da msvcm90.dll.  
  
 Per ulteriori informazioni sulle linee guida sul codice per gli assembly misti, vedere l'articolo su MSDN "Una panoramica sull'interoperabilità sul codice Gestito\/Non Gestito" su [http:\/\/msdn.microsoft.com\/netframework\/default.aspx?pull\=\/library\/dndotnet\/html\/manunmancode.asp](http://msdn.microsoft.com/netframework/default.aspx?pull=/library/dndotnet/html/manunmancode.asp).  
  
## Vedere anche  
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
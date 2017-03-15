---
title: "Manifest Resources | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "manifest resources"
  - "resources [Visual Studio], manifest"
ms.assetid: 8615334c-22a0-44c0-93e0-5924528c9917
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Manifest Resources
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le risorse di manifesto sono file XML che descrivono le dipendenze usate da un'applicazione. Ad esempio, in Visual Studio il file manifesto generato dalla procedura guidata MFC definisce quali DLL di controlli comuni di Windows devono essere usate dall'applicazione, versione 5.0 o 6.0:  
  
```  
<description>Your app description here</description> <dependency> <dependentAssembly> <assemblyIdentity type="win32" name="Microsoft.Windows.Common-Controls" version="6.0.0.0" processorArchitecture="X86" publicKeyToken="6595b64144ccf1df" language="*" /> </dependentAssembly> </dependency>   
```  
  
 Per un'applicazione di Windows XP o Windows Vista, la risorsa del manifesto non soltanto specifica che l'applicazione usa la versione più recente dei controlli comuni di Windows \(versione 6.0, come nell'esempio precedente\), ma supporta anche il nuovo [controllo Syslink](http://msdn.microsoft.com/library/windows/desktop/bb760706).  
  
 Per visualizzare le informazioni sulla versione e sul tipo contenute in una risorsa di manifesto, è possibile aprire il file in un visualizzatore XML o nell'[Editor di testo](http://msdn.microsoft.com/it-it/508e1f18-99d5-48ad-b5ad-d011b21c6ab1) di Visual Studio. Per altre informazioni, vedere [Apertura di una risorsa di manifesto nell'Editor di testo di Visual Studio](../windows/how-to-open-a-manifest-resource.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Limitazioni  
 È possibile avere solo una risorsa di manifesto per modulo.  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Controlli](../mfc/controls-mfc.md)   
 [Working with Resource Files](../mfc/working-with-resource-files.md)
---
title: "The following components could not be browsed: | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VS_E_CANNOTBROWSECOM"
  - "VS.Message.0x00006A6D"
  - "VS_E_LOADTYPELIBFAILED"
  - "VS_E_INVALIDCOMCOMPONENT"
  - "VS_E_UNRECOGNIZEDCOMPONENT"
  - "VS.Message.0x00006A6E"
  - "VS.Message.ObjectBrowserErrors"
  - "vs.Message.0x00005AC3"
  - "VS.Message.0x00005AC4"
  - "VS.Message.0x00005AC5"
  - "VS_E_REGFAILEDCOMCOMPONENT"
ms.assetid: 83b03767-eecb-47a4-8029-166308c7dded
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The following components could not be browsed:
Questa finestra di messaggio può contenere più errori relativi al Visualizzatore oggetti e alla finestra di selezione dei componenti.  Di seguito sono riportati gli errori più comuni.  
  
## Impossibile visualizzare il tipo di file o di componente nel Visualizzatore oggetti.  
 Generalmente questo errore si verifica quando si specifica un nome di file inesistente o non valido o un file che non può essere visualizzato mediante il Visualizzatore oggetti.  
  
#### Per correggere l'errore  
  
-   Assicurarsi che il nome di file specificato sia effettivamente esistente e che corrisponda a un componente visualizzabile, quale un assembly .NET, una libreria dei tipi COM o un file di origine del browser.  
  
## Il file non è un componente COM o .NET Framework valido.  
 Generalmente questo errore si verifica quando il componente specificato non è un assembly .NET Framework o una libreria dei tipi COM.  
  
#### Per correggere l'errore  
  
-   Scegliere un componente diverso da visualizzare.  
  
## Impossibile registrare il file come componente COM.  
 Generalmente questo errore si verifica quando non è possibile registrare la libreria dei tipi per un componente COM.  La libreria dei tipi potrebbe non esistere o potrebbe essere danneggiata.  
  
#### Per correggere l'errore  
  
-   Reinstallare il componente e riprovare.  
  
## Non è registrata alcuna libreria dei tipi corrispondente o le informazioni registrate non sono valide.  
 È possibile che la libreria dei tipi specificata non esista più o che non contenga informazioni valide.  
  
#### Per correggere l'errore  
  
-   Assicurarsi che la libreria dei tipi esista effettivamente e che sia registrata correttamente.  
  
## I componenti necessari per visualizzare le librerie dei tipi COM sono mancanti o non registrati correttamente.  
 Il file vstlbinf.dll è mancante o non registrato correttamente.  
  
#### Per risolvere il problema  
  
1.  Individuare il file vstlbinf.dll e registrarlo utilizzando regsvr32.exe.  
  
     \-oppure\-  
  
2.  Se è impossibile individuare il file vstlbinf.dll nel computer in uso, reinstallare il prodotto.  
  
## Vedere anche  
 [Object Browser](http://msdn.microsoft.com/it-it/f89acfc5-1152-413d-9f56-3dc16e3f0470)   
 [Edit Custom Component Set Dialog Box](http://msdn.microsoft.com/it-it/dc995bd7-afbf-4389-ba1c-f377b677ded7)
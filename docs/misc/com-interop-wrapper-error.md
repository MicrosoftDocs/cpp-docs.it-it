---
title: "COM Interop Wrapper Error | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannotcopyassembly"
  - "Vs.refruntlbimp"
helpviewer_keywords: 
  - "COM Interop Wrapper dialog box"
ms.assetid: 9a9d6374-ee26-4dbc-9e34-e1d90f6254b4
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# COM Interop Wrapper Error
Questa finestra di dialogo viene visualizzata quando il sistema del progetto non è riuscito a creare un wrapper di interoperabilità COM per uno specifico componente.  I wrapper di interoperabilità COM sono necessari a Common Language Runtime \(CLR\) per comunicare con i componenti COM e gestirli.  Per altre informazioni, vedere [Interoperabilità COM in Visual Basic e Visual C\#](../Topic/COM%20Interoperability%20in%20.NET%20Framework%20Applications%20\(Visual%20Basic\).md).  
  
 Alcune cause possibili di questo errore sono:  
  
-   La libreria dei tipi per il componente non è registrata correttamente.  
  
-   Non è stato possibile trovare un componente da cui dipende il componente sottoposto a wrapping.  
  
 In entrambi i casi, prima di eseguire nuovamente l'operazione è necessario assicurarsi che il componente COM sia installato e registrato correttamente sul computer.  
  
> [!TIP]
>  È anche possibile cercare un wrapper di interoperabilità COM pubblicato per uno specifico componente COM nel [sito Web MSDN](http://go.microsoft.com/fwlink/?LinkId=3355).  
  
> [!NOTE]
>  I wrapper di interoperabilità COM sono anche denominati "assembly di interoperabilità primari". Le due espressioni sono equivalenti.  
  
## Vedere anche  
 [Spazi dei nomi del modello di componente in Visual Studio](http://msdn.microsoft.com/it-it/705d0add-0707-44ba-a6de-637381d9c937)   
 [Component Authoring](../Topic/Component%20Authoring.md)   
 [COM Interop](../Topic/COM%20Interop%20\(Visual%20Basic\).md)   
 [Common Language Runtime](../Topic/Common%20Language%20Runtime%20\(CLR\).md)   
 [COM Interoperability in .NET Framework Applications](../Topic/COM%20Interoperability%20in%20.NET%20Framework%20Applications%20\(Visual%20Basic\).md)
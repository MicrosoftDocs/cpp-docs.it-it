---
title: "Cannot find custom tool &#39;custom tool&#39; on this system | Microsoft Docs"
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
  - "vs.tasklisterror.cannot_instantiate_generator1"
ms.assetid: 51fe9bec-b8bc-4a4c-94aa-15a1f7cc8b6b
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Cannot find custom tool &#39;custom tool&#39; on this system
Lo strumento personalizzato non può essere creato dal sistema del progetto.  Lo strumento personalizzato richiesto non verrà eseguito in quanto il sistema del progetto non è in grado di crearne un'istanza.  Assicurarsi che lo strumento personalizzato sia installato e registrato correttamente.  
  
 È possibile che questo errore sia stato generato dalla specifica di un nome di strumento personalizzato non valido per la proprietà `CustomTool` di uno specifico file.  È inoltre possibile che il file di progetto \(VBPROJ\/CSPROJ\) sia stato modificato, rendendo non valido il valore della proprietà `CustomTool` oppure che si stia utilizzando un progetto sviluppato in un altro computer, in cui era presente lo strumento personalizzato, non installato invece nel computer in uso.  Per ulteriori informazioni sulla proprietà `CustomTool`, vedere [File Properties](http://msdn.microsoft.com/it-it/013c4aed-08d6-4dce-a124-ca807ca08959).  
  
 Questo errore potrebbe verificarsi anche in caso di esito negativo di [CComPtrBase::CoCreateInstance](../Topic/CComPtrBase::CoCreateInstance.md) per lo strumento personalizzato.  È ad esempio possibile che questo non sia registrato o che una DLL obbligatoria risulti mancante.  
  
## Vedere anche  
 [CComPtrBase::CoCreateInstance](../Topic/CComPtrBase::CoCreateInstance.md)
---
title: "Toolbar Button Properties | Microsoft Docs"
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
  - "size, toolbar buttons"
  - "toolbar buttons (in Toolbar editor), setting properties"
  - "Toolbar editor, toolbar button properties"
  - "status bars, active toolbar button text"
  - "command IDs, toolbar buttons"
  - "width, toolbar buttons"
ms.assetid: b2705814-7c5d-4f24-8f77-07559b0cdda2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Toolbar Button Properties
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito vengono illustrate le proprietà dei pulsanti delle barre degli strumenti.  
  
|Proprietà|Descrizione|  
|---------------|-----------------|  
|**ID**|Definisce l'ID del pulsante.  La casella di riepilogo a discesa fornisce i nomi di **ID** comuni.|  
|**Larghezza**|Imposta la larghezza del pulsante.  L'impostazione consigliata è 16 pixel.|  
|**Altezza**|Imposta l'altezza del pulsante.  L'altezza di un pulsante modifica l'altezza di tutti i pulsanti della barra degli strumenti.  L'impostazione consigliata è 15 pixel.|  
|**Prompt**|Definisce il messaggio visualizzato nella barra di stato.  Aggiungendo \\n e un nome è possibile aggiungere una descrizione comandi al pulsante della barra degli strumenti.  Per ulteriori informazioni, vedere [Creazione di una descrizione comandi](../mfc/creating-a-tool-tip-for-a-toolbar-button.md).|  
  
 Le proprietà **Width** e **Height** si applicano a tutti i pulsanti.  Un'immagine bitmap utilizzata per la creazione di una barra degli strumenti ha una larghezza massima di 2048.  Se quindi la larghezza del pulsante viene impostata su 512, sarà possibile disporre di quattro pulsanti, se invece viene impostata su 513, sarà possibile disporre soltanto di tre pulsanti.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 MFC o ATL  
  
## Vedere anche  
 [Changing the Properties of a Toolbar Button](../mfc/changing-the-properties-of-a-toolbar-button.md)   
 [Toolbar Editor](../mfc/toolbar-editor.md)
---
title: "Configurazioni predefinite di progetti ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), configurazioni predefinite"
ms.assetid: 7e272722-41af-4330-b965-a6d74ec16880
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Configurazioni predefinite di progetti ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono confrontate le configurazioni predefinite di progetti ATL in Visual C\+\+ .NET e in Visual C\+\+ 6.0.  
  
## Configurazioni predefinite in Visual C\+\+ .NET  
 In Visual C\+\+ .NET, per impostazione predefinita vengono create due configurazioni di progetto mediante la Creazione guidata progetto ATL.  
  
### Configurazioni in Visual C\+\+ .NET  
  
|Configurazione|Set di caratteri|Utilizzo di ATL|  
|--------------------|----------------------|---------------------|  
|Release|MBCS|DLL|  
|Debug|MBCS|DLL|  
  
 È possibile modificare le opzioni **Set di caratteri** e **Uso di ATL** nella scheda **Generale** della finestra di dialogo **Impostazioni progetto**.  È inoltre possibile aggiungere configurazioni personalizzate mediante Gestione configurazione.  Per informazioni dettagliate, vedere [Configurazioni della build](../Topic/Understanding%20Build%20Configurations.md).  
  
## Configurazioni predefinite in Visual C\+\+ versione 6.0  
 In Visual C\+\+ versione 6.0, per impostazione predefinita mediante la Creazione guidata applicazione COM ATL \(ora denominata Creazione guidata progetto ATL\) venivano create sei configurazioni di progetto,  che consistevano in variazioni delle impostazioni di rilascio, debug, Unicode e utilizzo di CRT e ATL.  È possibile duplicare tutte queste configurazioni in Visual C\+\+ .NET mediante Gestione configurazione.  
  
### Configurazioni in Visual C\+\+ versione 6.0  
  
|Configurazione|Set di caratteri|Utilizzo di ATL|  
|--------------------|----------------------|---------------------|  
|Debug|MBCS|Static|  
|Debug Unicode|UNICODE|Static|  
|Dipendenza min. di rilascio|MBCS|Static|  
|Dipendenza min. di rilascio Unicode|UNICODE|Static|  
|Dimensioni min. di rilascio|MBCS|DLL|  
|Dimensioni min. di rilascio Unicode|UNICODE|DLL|  
  
## Vedere anche  
 [Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md)   
 [Configuration Manager Dialog Box](http://msdn.microsoft.com/it-it/fa182dca-282e-4ae5-bf37-e155344ca18b)   
 [Compilazione di applicazioni in Visual Studio](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)
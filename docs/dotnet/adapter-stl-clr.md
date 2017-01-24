---
title: "adapter (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "<cliext/adapter>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<adapter> (intestazione) [STL/CLR]"
  - "<cliext/adapter> (intestazione) [STL/CLR]"
  - "adapter [STL/CLR]"
ms.assetid: 71ce7e51-42b6-4f70-9595-303791a97677
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# adapter (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'intestazione `<cliext/adapter>` di STL\/CLR specifica due classi modello \(`collection_adapter` e `range_adapter`\) e la funzione `make_collection`del modello.  
  
## Sintassi  
  
```  
#include <cliext/adapter>  
```  
  
## Note  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[collection\_adapter](../dotnet/collection-adapter-stl-clr.md)|Esegue il wrapping della raccolta di \(BCL\) la libreria di classi di base come intervallo.|  
|[range\_adapter](../dotnet/range-adapter-stl-clr.md)|Esegue il wrapping dell'intervallo come una raccolta di BCL.|  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[make\_collection](../dotnet/make-collection-stl-clr.md)|Crea un adattatore dell'intervallo utilizzando una coppia di iteratore.|  
  
## Requisiti  
 **Intestazione:**\<cliext\/adapter\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)
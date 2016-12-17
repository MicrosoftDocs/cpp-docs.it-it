---
title: "Boxing (C++/CLI) | Microsoft Docs"
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
ms.assetid: f4ee27a8-6a34-432d-b9ec-39285d513b23
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Boxing (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La conversione boxing è il processo di conversione di un tipo di valore in un tipo `object` o in qualsiasi tipo di interfaccia implementato dal tipo di valore.  Quando Common Language Runtime \(CLR\) boxing di un tipo di valore, esegue il wrapping del valore in `System.Object` e lo memorizza nell'heap gestito.  Mediante la conversione unboxing, invece, il tipo valore viene estratto dall'oggetto.  La conversione boxing è implicita; quella unboxing è esplicita.  
  
## Articoli correlati  
  
|Titolo|Descrizione|  
|------------|-----------------|  
|[Procedura: richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)|Viene descritto come impostare in modo esplicito richiedere la conversione boxing di una variabile.|  
|[Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)|Viene illustrato come utilizzare `gcnew` per creare un tipo di valore boxed che può essere posizionato nell'heap gestito e sottoposto a garbage collection.|  
|[Procedura: Unbox](../dotnet/how-to-unbox.md)|Viene illustrato come l'unboxing e modificare un valore.|  
|[Conversioni standard e conversione boxing implicita](../dotnet/standard-conversions-and-implicit-boxing.md)|Indica che una conversione standard è scelta dal compilatore in una conversione che richiede tale operazione.|  
|[Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|L'articolo di livello superiore per la programmazione di .NET nella documentazione di Visual C\+\+.|
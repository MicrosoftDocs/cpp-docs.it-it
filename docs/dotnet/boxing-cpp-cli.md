---
title: La conversione boxing (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: f4ee27a8-6a34-432d-b9ec-39285d513b23
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 3b9898b4a640d2f3aa4e38ceb621521ffb301fed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33105891"
---
# <a name="boxing-ccli"></a>Boxing (C++/CLI)
La conversione boxing è il processo di conversione di un tipo di valore al tipo `object` o in qualsiasi tipo di interfaccia implementato dal tipo di valore. Common language runtime (CLR) boxing di un tipo di valore, include il valore in un `System.Object` e lo archivia nell'heap gestito. Mediante la conversione unboxing, invece, il tipo valore viene estratto dall'oggetto. La conversione boxing è implicita; quella unboxing è esplicita.  
  
## <a name="related-articles"></a>Articoli correlati  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[Procedura: Richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)|Viene descritto come richiedere in modo esplicito la conversione boxing in una variabile.|  
|[Procedura: Usare gcnew per creare tipi di valore e usare la conversione boxing implicita](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)|Viene illustrato come utilizzare `gcnew` per creare un tipo di valore boxed che può essere inserito nell'heap gestito e sottoposto a garbage collection.|  
|[Procedura: Unbox](../dotnet/how-to-unbox.md)|Viene illustrato come eseguire la conversione unboxing e modificare un valore.|  
|[Conversioni standard e conversione boxing implicita](../dotnet/standard-conversions-and-implicit-boxing.md)|Viene illustrato che sia stato scelto una conversione standard dal compilatore rispetto a una conversione che richiede una conversione boxing.|  
|[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Articolo di livello superiore per la programmazione .NET nella documentazione di Visual C++.|
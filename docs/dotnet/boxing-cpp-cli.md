---
title: Boxing (C++/CLI)
ms.date: 11/04/2016
ms.assetid: f4ee27a8-6a34-432d-b9ec-39285d513b23
ms.openlocfilehash: 3f756eaef59c24ca5b82c485bd8352dffe9fb1db
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345764"
---
# <a name="boxing-ccli"></a>Boxing (C++/CLI)

La conversione boxing è il processo di conversione di un tipo di valore nel tipo `object` o per qualsiasi tipo di interfaccia implementato dal tipo di valore. Quando common language runtime (CLR) caselle un tipo di valore incapsula il valore in un `System.Object` e lo archivia nell'heap gestito. Mediante la conversione unboxing, invece, il tipo valore viene estratto dall'oggetto. La conversione boxing è implicita; quella unboxing è esplicita.

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura: Richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)|Viene descritto come richiedere in modo esplicito la conversione boxing in una variabile.|
|[Procedura: Usare gcnew per creare tipi valore e usare la conversione boxing implicita](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)|Viene illustrato come utilizzare `gcnew` per creare un tipo di valore boxed che può essere inserito nell'heap gestito e sottoposto a garbage collection.|
|[Procedura: Eseguire la conversione unboxing](../dotnet/how-to-unbox.md)|Viene illustrato come eseguire la conversione unboxing e modificare un valore.|
|[Conversioni standard e conversione boxing implicita](../dotnet/standard-conversions-and-implicit-boxing.md)|Mostra che sia stato scelto una conversione standard dal compilatore rispetto a una conversione che richiede il boxing.|
|[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Articolo di livello superiore per la programmazione .NET nella documentazione di Visual C++.|
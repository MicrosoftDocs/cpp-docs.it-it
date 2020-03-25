---
title: Boxing (C++/CLI)
ms.date: 11/04/2016
ms.assetid: f4ee27a8-6a34-432d-b9ec-39285d513b23
ms.openlocfilehash: df0e220c4f744e78aa5bedce4f956b726f524ff4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208833"
---
# <a name="boxing-ccli"></a>Boxing (C++/CLI)

Il Boxing è il processo di conversione di un tipo di valore nel tipo `object` o in qualsiasi tipo di interfaccia implementato dal tipo di valore. Quando il Common Language Runtime (CLR) esegue il wrapping di un tipo di valore, esegue il wrapping del valore in un `System.Object` e lo archivia nell'heap gestito. Mediante la conversione unboxing, invece, il tipo valore viene estratto dall'oggetto. La conversione boxing è implicita; quella unboxing è esplicita.

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura: Richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)|Viene descritto come richiedere in modo esplicito la conversione boxing in una variabile.|
|[Procedura: Usare gcnew per creare tipi di valore e usare la conversione boxing implicita](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)|Viene illustrato come utilizzare `gcnew` per creare un tipo di valore boxed che può essere inserito nell'heap gestito, sottoposta a Garbage Collection.|
|[Procedura: Unbox](../dotnet/how-to-unbox.md)|Viene illustrato come eseguire l'unboxing e modificare un valore.|
|[Conversioni standard e conversione boxing implicita](../dotnet/standard-conversions-and-implicit-boxing.md)|Indica che una conversione standard viene scelta dal compilatore per una conversione che richiede la conversione boxing.|
|[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Articolo di livello superiore per la programmazione .NET nella documentazione di Visual C++.|

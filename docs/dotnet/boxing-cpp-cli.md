---
description: 'Altre informazioni su: conversione boxing (C++/CLI)'
title: Boxing (C++/CLI)
ms.date: 11/04/2016
ms.assetid: f4ee27a8-6a34-432d-b9ec-39285d513b23
ms.openlocfilehash: 4914271dc5b1ae0bcee2a82b3cddb4433a2dc84f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282588"
---
# <a name="boxing-ccli"></a>Boxing (C++/CLI)

Il Boxing è il processo di conversione di un tipo di valore nel tipo `object` o in qualsiasi tipo di interfaccia implementato dal tipo di valore. Quando il Common Language Runtime (CLR) esegue il wrapping di un tipo di valore, esegue il wrapping del valore in un oggetto `System.Object` e lo archivia nell'heap gestito. Mediante la conversione unboxing, invece, il tipo valore viene estratto dall'oggetto. La conversione boxing è implicita; quella unboxing è esplicita.

## <a name="related-articles"></a>Articoli correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura: richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)|Viene descritto come richiedere in modo esplicito la conversione boxing in una variabile.|
|[Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)|Viene illustrato come utilizzare **`gcnew`** per creare un tipo di valore boxed che può essere inserito nell'heap gestito, sottoposta a Garbage Collection.|
|[Procedura: Eseguire la conversione unboxing](../dotnet/how-to-unbox.md)|Viene illustrato come eseguire l'unboxing e modificare un valore.|
|[Conversioni standard e conversione boxing implicita](../dotnet/standard-conversions-and-implicit-boxing.md)|Indica che una conversione standard viene scelta dal compilatore per una conversione che richiede la conversione boxing.|
|[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)|Articolo di livello superiore per la programmazione .NET nella documentazione di Visual C++.|

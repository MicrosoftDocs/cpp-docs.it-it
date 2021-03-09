---
title: File di intestazione obbligatori e facoltativi
description: Quando usare i file di intestazione obbligatori o facoltativi dalla libreria di runtime di Microsoft C.
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- c.headers
helpviewer_keywords:
- include files, required in run time
- header files, required in run time
ms.assetid: f64d0bf5-e2c3-4b42-97d0-443b3d901d9f
ms.openlocfilehash: e7947c1f601a8051de5c28fba682e90c0bdce7b6
ms.sourcegitcommit: 90c300b74f6556cb5d989802d2e80d79542f55e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/09/2021
ms.locfileid: "102514629"
---
# <a name="required-and-optional-header-files"></a>File di intestazione obbligatori e facoltativi

La descrizione di ogni routine di runtime include un elenco di file di inclusione o di intestazione (.H) obbligatori o facoltativi per tale routine. I file di intestazione obbligatori devono essere inclusi per ottenere la dichiarazione di funzione per la routine o una definizione utilizzata da un'altra routine chiamata internamente. I file di intestazione facoltativi in genere vengono importati per sfruttare le costanti predefinite, le definizioni dei tipi o le macro inline. Nella tabella seguente sono elencati alcuni esempi del contenuto dei file di intestazione facoltativi:

|Definizione|Esempio|
|----------------|-------------|
|Definizione macro|Se una routine della libreria viene implementata come macro, la definizione della macro può trovarsi in un file di intestazione diverso dal file di intestazione per la routine originale. Ad esempio, la macro `_toupper` viene definita nel file di intestazione CTYPE.H, mentre la funzione `toupper` viene dichiarata in STDLIB.H.|
|Costante predefinita|Molte routine di libreria fanno riferimento alle costanti definite nei file di intestazione. Ad esempio, le routine `_open` utilizzano costanti come ad esempio `_O_CREAT`, definita nel file di intestazione FCNTL.H.|
|Definizione dei tipi|Alcune routine di libreria restituiscono una struttura o accettano una struttura come argomento. Ad esempio, le routine del flusso di input/output utilizzano una struttura di tipo `FILE`, definita in STDIO.H.|

I file di intestazione della libreria di runtime forniscono dichiarazioni di funzione nello stile standard raccomandato dall'ANSI/ISO C. Il compilatore esegue il controllo dei tipi in qualsiasi riferimento di routine che viene creato dopo la dichiarazione di funzione associata. Le dichiarazioni di funzione sono particolarmente importanti per le routine che restituiscono un valore di un tipo diverso da **`int`** , che corrisponde all'impostazione predefinita. Le routine che non specificano il valore restituito appropriato nella dichiarazione verranno prese in considerazione dal compilatore per restituire un oggetto **`int`** , il che può causare risultati imprevisti. Per altre informazioni, vedere [Controllo dei tipi](../c-runtime-library/type-checking-crt.md).

## <a name="see-also"></a>Vedi anche

[Runtime C (CRT) e file della libreria standard C++ (STL) `.lib`](../c-runtime-library/crt-library-features.md)

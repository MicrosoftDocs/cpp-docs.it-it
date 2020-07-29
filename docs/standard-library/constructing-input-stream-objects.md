---
title: Costruzione di oggetti di flusso di input
ms.date: 11/04/2016
helpviewer_keywords:
- input stream objects
ms.assetid: ab94866e-6ffe-4f15-b4db-0bd23e636075
ms.openlocfilehash: f281741979680fc03d3f96d2dbfbac6e1feefdea
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228310"
---
# <a name="constructing-input-stream-objects"></a>Costruzione di oggetti di flusso di input

Se si usa solo l'oggetto `cin`, non è necessario costruire un flusso di input. È necessario invece costruire un flusso di input se si usano:

- [Costruttori di flusso di file di input](#vclrfinputfilestreamconstructorsanchor8)

- [Costruttori di flusso di stringhe di input](#vclrfinputstringstreamconstructorsanchor9)

## <a name="input-file-stream-constructors"></a><a name="vclrfinputfilestreamconstructorsanchor8"></a> Costruttori di flusso di file di input

Sono due i metodi disponibili per creare un flusso di file di input:

- Usare il **`void`** costruttore di argomenti, quindi chiamare la `open` funzione membro:

   ```cpp
   ifstream myFile; // On the stack
   myFile.open("filename");

   ifstream* pmyFile = new ifstream; // On the heap
   pmyFile->open("filename");
   ```

- Specificare un nome file e i flag di modalità nella chiamata del costruttore, aprendo il file durante il processo di creazione:

   ```cpp
   ifstream myFile("filename");
   ```

## <a name="input-string-stream-constructors"></a><a name="vclrfinputstringstreamconstructorsanchor9"></a> Costruttori di flusso di stringhe di input

I costruttori di flusso di stringhe di input richiedono l'indirizzo di archiviazione preallocato e preinizializzato:

```cpp
string s("123.45");

double amt;
istringstream myString(s);

//istringstream myString("123.45") also works
myString>> amt; // amt contains 123.45
```

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)

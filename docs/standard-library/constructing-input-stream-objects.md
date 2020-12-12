---
description: 'Altre informazioni su: costruzione di oggetti di flusso di input'
title: Costruzione di oggetti di flusso di input
ms.date: 11/04/2016
helpviewer_keywords:
- input stream objects
ms.assetid: ab94866e-6ffe-4f15-b4db-0bd23e636075
ms.openlocfilehash: 2ee1e0bb310c608b53a79afd101aaeafb3cb6645
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324919"
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

## <a name="see-also"></a>Vedi anche

[Flussi di input](../standard-library/input-streams.md)

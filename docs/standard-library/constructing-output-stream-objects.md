---
title: Costruzione di oggetti di flusso di output
ms.date: 11/04/2016
helpviewer_keywords:
- output stream objects
ms.assetid: 93c8eab6-610c-4f48-b76d-1d960cac7641
ms.openlocfilehash: d7bec211f30986deccc869a879dd5155ea70996b
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68457276"
---
# <a name="constructing-output-stream-objects"></a>Costruzione di oggetti di flusso di output

Se si usano solo gli oggetti predefiniti `cout`, `cerr` o `clog`, non è necessario costruire un flusso di output. È necessario usare i costruttori per:

- [Costruttori di flusso di file di output](#vclrfoutputfilestreamconstructorsanchor1)

- [Costruttori di flusso di stringhe di output](#vclrfoutputstringstreamconstructorsanchor2)

## <a name="vclrfoutputfilestreamconstructorsanchor1"></a> Costruttori di flusso di file di output

È possibile costruire un flusso di file di output in uno dei due modi seguenti:

- Usare il costruttore predefinito e chiamare la funzione membro `open`.

   ```cpp
   ofstream myFile; // Static or on the stack
   myFile.open("filename");

   ofstream* pmyFile = new ofstream; // On the heap
   pmyFile->open("filename");
   ```

- Specificare un nome di file e i flag di modalità nella chiamata al costruttore.

   ```cpp
   ofstream myFile("filename", ios_base::out);
   ```

## <a name="vclrfoutputstringstreamconstructorsanchor2"></a> Costruttori di flusso di stringhe di output

Per costruire un flusso di stringhe di output, è possibile usare `ostringstream` nel modo seguente:

```cpp
using namespace std;
// ...
ostringstream myString;
myString << "this is a test" << ends;

string sp = myString.str(); // Obtain string
cout << sp << endl;
```

L'oggetto "modificatore" `ends` aggiunge il carattere di terminazione null necessario per la stringa.

## <a name="see-also"></a>Vedere anche

[Flussi di output](../standard-library/output-streams.md)

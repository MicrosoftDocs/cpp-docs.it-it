---
title: Costruzione di oggetti di flusso di output| Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- output stream objects
ms.assetid: 93c8eab6-610c-4f48-b76d-1d960cac7641
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff3c924327c11d00dd9137a91ebd19ef7bdc9eaa
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33850072"
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

[Flussi di output](../standard-library/output-streams.md)<br/>

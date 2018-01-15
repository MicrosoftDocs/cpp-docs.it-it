---
title: Costruzione di oggetti di flusso di output| Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: output stream objects
ms.assetid: 93c8eab6-610c-4f48-b76d-1d960cac7641
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 04cbb5ae7433dc31e99136c11c4022e60ad4808e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="constructing-output-stream-objects"></a>Costruzione di oggetti di flusso di output
Se si usano solo gli oggetti predefiniti `cout`, `cerr` o `clog`, non è necessario costruire un flusso di output. È necessario usare i costruttori per:  
  
- [Costruttori di flusso di file di output](#vclrfoutputfilestreamconstructorsanchor1)  
  
- [Costruttori di flusso di stringhe di output](#vclrfoutputstringstreamconstructorsanchor2)  
  
##  <a name="vclrfoutputfilestreamconstructorsanchor1"></a> Costruttori di flusso di file di output  
 È possibile costruire un flusso di file di output in uno dei due modi seguenti:  
  
-   Usare il costruttore predefinito e chiamare la funzione membro `open`.  
  
 ```  
    ofstream myFile; // Static or on the stack  
    myFile.open("filename");

 
    ofstream* pmyFile = new ofstream; // On the heap  
    pmyFile->open("filename");
```  
  
-   Specificare un nome di file e i flag di modalità nella chiamata al costruttore.  
  
 ```  
    ofstream myFile("filename", ios_base::out);
```  
  
##  <a name="vclrfoutputstringstreamconstructorsanchor2"></a> Costruttori di flusso di stringhe di output  
 Per costruire un flusso di stringhe di output, è possibile usare `ostringstream` nel modo seguente:  
  
```  
    using namespace std;  
string sp;  
ostringstream myString;  
myString <<"this is a test" <<ends;  
sp = myString.str();
// Obtain string  
cout <<sp <endl;   
```  
  
 L'oggetto "modificatore" `ends` aggiunge il carattere di terminazione null necessario per la stringa.  
  
## <a name="see-also"></a>Vedere anche  
 [Output Streams](../standard-library/output-streams.md) (Flussi di output)


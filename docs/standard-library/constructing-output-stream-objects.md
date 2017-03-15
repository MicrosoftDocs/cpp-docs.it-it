---
title: Costruzione di oggetti di flusso di output| Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- output stream objects
ms.assetid: 93c8eab6-610c-4f48-b76d-1d960cac7641
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: ca8d4e9a44f4550d02e6d224ce0130d15e81da14
ms.lasthandoff: 02/24/2017

---
# <a name="constructing-output-stream-objects"></a>Costruzione di oggetti di flusso di output
Se si usano solo gli oggetti predefiniti `cout`, `cerr` o `clog`, non è necessario costruire un flusso di output. È necessario usare i costruttori per:  
  
- [Costruttori di flusso di file di output](#vclrfoutputfilestreamconstructorsanchor1)  
  
- [Costruttori di flusso di stringhe di output](#vclrfoutputstringstreamconstructorsanchor2)  
  
##  <a name="a-namevclrfoutputfilestreamconstructorsanchor1a-output-file-stream-constructors"></a><a name="vclrfoutputfilestreamconstructorsanchor1"></a> Costruttori di flusso di file di output  
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
  
##  <a name="a-namevclrfoutputstringstreamconstructorsanchor2a-output-string-stream-constructors"></a><a name="vclrfoutputstringstreamconstructorsanchor2"></a> Costruttori di flusso di stringhe di output  
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



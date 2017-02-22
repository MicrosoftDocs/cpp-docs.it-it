---
title: "Costruzione di oggetti di flusso di output | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flusso di output (oggetti)"
ms.assetid: 93c8eab6-610c-4f48-b76d-1d960cac7641
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Costruzione di oggetti di flusso di output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si utilizza solo `cout`predefinito, `cerr`, o gli oggetti di `clog`, non è necessario creare un flusso di output.  È necessario utilizzare i costruttori per:  
  
-   [Costruttori del flusso del file di output](#vclrfoutputfilestreamconstructorsanchor1)  
  
-   [Costruttori di output del flusso della stringa](#vclrfoutputstringstreamconstructorsanchor2)  
  
##  <a name="vclrfoutputfilestreamconstructorsanchor1"></a> Costruttori del flusso del file di output  
 È possibile creare un flusso del file di output in due modi:  
  
-   Utilizzare il costruttore predefinito e quindi chiamare la funzione membro di `open`.  
  
    ```  
    ofstream myFile; // Static or on the stack  
    myFile.open( "filename" );  
  
    ofstream* pmyFile = new ofstream; // On the heap  
    pmyFile->open( "filename" );  
    ```  
  
-   Specificare i flag della modalità e di un nome file nella chiamata del costruttore.  
  
    ```  
    ofstream myFile( "filename", ios_base::out);  
    ```  
  
##  <a name="vclrfoutputstringstreamconstructorsanchor2"></a> Costruttori di output del flusso della stringa  
 Per creare un flusso di output della stringa, è possibile utilizzare nel modo seguente `ostringstream` :  
  
```  
   using namespace std;  
string sp;  
ostringstream myString;  
myString << "this is a test" << ends;  
sp = myString.str();  // Obtain string  
cout << sp < endl;   
```  
  
 `ends` "manipolatore" aggiunge il carattere di terminazione null se la stringa.  
  
## Vedere anche  
 [Flussi di output](../standard-library/output-streams.md)
---
title: "Costruzione di oggetti di flusso di input | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flusso di input (oggetti)"
ms.assetid: ab94866e-6ffe-4f15-b4db-0bd23e636075
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costruzione di oggetti di flusso di input
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si utilizza solo l'oggetto di `cin`, non è necessario creare un flusso di input.  È necessario creare un flusso di input se si utilizza:  
  
-   [Costruttori del flusso del file di input](#vclrfinputfilestreamconstructorsanchor8)  
  
-   [Costruttori del flusso della stringa di input](#vclrfinputstringstreamconstructorsanchor9)  
  
##  <a name="vclrfinputfilestreamconstructorsanchor8"></a> Costruttori del flusso del file di input  
 Esistono due modi per creare un flusso del file di input:  
  
-   Utilizzare il costruttore dell'argomento di `void`, quindi chiamare la funzione membro di `open` :  
  
    ```  
    ifstream myFile; // On the stack  
    myFile.open( "filename" );  
  
    ifstream* pmyFile = new ifstream; // On the heap  
    pmyFile->open( "filename" );  
    ```  
  
-   Specificare i flag della modalità e di un nome file nella chiamata al costruttore, quindi aprire il file durante il processo di compilazione:  
  
    ```  
    ifstream myFile( "filename" );  
    ```  
  
##  <a name="vclrfinputstringstreamconstructorsanchor9"></a> Costruttori del flusso della stringa di input  
 I costruttori del flusso della stringa di input richiedono l'indirizzo di memoria preallocata e preinitialized:  
  
```  
string s("123.45");  
double amt;  
istringstream myString( s );   
//istringstream myString( "123.45" ) also works  
myString >> amt; // amt contains 123.45  
```  
  
## Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)
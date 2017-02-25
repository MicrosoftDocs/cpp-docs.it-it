---
title: "File di output binari | Microsoft Docs"
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
  - "dati binari, file di output binari"
  - "file [C++], file di output binari"
  - "I/O [C++], file di output binari"
ms.assetid: 180954af-8cd6-444b-9a76-2f630a3389d8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# File di output binari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I flussi sono stati originariamente progettate per il testo, pertanto la modalità di output predefinito è testo.  In modalità testo, il carattere di nuova riga esadecimale \(10\) si espande a un ritorno a capo\-avanzamento shopping \(solo per 16 bit\).  L'espansione può causare problemi, come illustrato di seguito:  
  
```  
// binary_output_files.cpp  
// compile with: /EHsc  
#include <fstream>  
using namespace std;  
int iarray[2] = { 99, 10 };  
int main( )  
{  
    ofstream os( "test.dat" );  
    os.write( (char *) iarray, sizeof( iarray ) );  
}  
```  
  
 È possibile che questo programma per restituire la sequenza di byte {99, 0, 10, 0}; al contrario, restituisce {99, 0, 13, 10, 0}, che causa problemi per un programma che accetta l'input binario.  Se è necessario un binario di restituire true, in cui i caratteri vengono scritti non convertiti, è possibile specificare il binario restituito tramite l'argomento del costruttore modalità di [ofstream](../Topic/ofstream.md) :  
  
```  
// binary_output_files2.cpp  
// compile with: /EHsc  
#include <fstream>  
using namespace std;  
int iarray[2] = { 99, 10 };  
  
int main()  
{  
   ofstream ofs ( "test.dat", ios_base::binary );  
  
   // Exactly 8 bytes written  
   ofs.write( (char*)&iarray[0], sizeof(int)*2 );   
}  
```  
  
## Vedere anche  
 [Flussi di output](../standard-library/output-streams.md)
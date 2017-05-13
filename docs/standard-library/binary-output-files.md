---
title: File di output binari | Microsoft Docs
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
- I/O [C++], binary output files
- files [C++], binary output files
- binary data, binary output files
ms.assetid: 180954af-8cd6-444b-9a76-2f630a3389d8
caps.latest.revision: 8
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 8968a47f9d957aa0873b5db78909a6b4ad66ea75
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="binary-output-files"></a>File di output binari
I flussi erano originariamente progettati per il testo, quindi la modalità di output predefinita è testo. In modalità testo, carattere di nuova riga (esadecimale 10) si espande in un ritorno a capo-avanzamento di riga (solo 16-bit). L'espansione può causare problemi, come illustrato di seguito:  
  
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
  
 L'output previsto del programma potrebbe essere la sequenza di byte {99, 0, 10, 0}, invece il programma restituisce {99, 0, 13, 10, 0}, causando problemi se un programma è in attesa di un input binario. Se è necessario un output binario true, in cui i caratteri vengono scritti senza essere convertiti, è possibile specificare l'output binario usando l'argomento openmode del costruttore [ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream):  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Output Streams](../standard-library/output-streams.md) (Flussi di output)



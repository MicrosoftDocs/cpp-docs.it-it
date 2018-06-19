---
title: File di output binari | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- I/O [C++], binary output files
- files [C++], binary output files
- binary data, binary output files
ms.assetid: 180954af-8cd6-444b-9a76-2f630a3389d8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cdb101620b1a61f3a29057ee408cf9e89d38f9e8
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33842352"
---
# <a name="binary-output-files"></a>File di output binari

I flussi erano originariamente progettati per il testo, quindi la modalità di output predefinita è testo. In modalità testo, carattere di nuova riga (esadecimale 10) si espande in un ritorno a capo-avanzamento di riga (solo 16-bit). L'espansione può causare problemi, come illustrato di seguito:

```cpp
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

```cpp
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

[Flussi di output](../standard-library/output-streams.md)<br/>

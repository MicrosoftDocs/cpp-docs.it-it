---
title: File di output binari | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
ms.workload:
- cplusplus
ms.openlocfilehash: 3456d410d0322f4843bc99b024ea0440ac1b93e8
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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

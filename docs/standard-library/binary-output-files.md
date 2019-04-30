---
title: File di output binari
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [C++], binary output files
- files [C++], binary output files
- binary data, binary output files
ms.assetid: 180954af-8cd6-444b-9a76-2f630a3389d8
ms.openlocfilehash: 99445275a8f92622f451e8a88082dc2b28fb60b6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62414061"
---
# <a name="binary-output-files"></a>File di output binari

I flussi erano originariamente progettati per il testo, quindi la modalità di output predefinita è testo. In modalità testo, carattere di nuova riga (10 esadecimale) si espande in un ritorno a capo-avanzamento di riga (solo 16-bit). L'espansione può causare problemi, come illustrato di seguito:

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

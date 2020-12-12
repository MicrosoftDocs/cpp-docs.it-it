---
description: 'Altre informazioni su: file di output binario'
title: File di output binari
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [C++], binary output files
- files [C++], binary output files
- binary data, binary output files
ms.assetid: 180954af-8cd6-444b-9a76-2f630a3389d8
ms.openlocfilehash: acbefe8eb7f091bf3d323f25ff00464068d9b1f3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325518"
---
# <a name="binary-output-files"></a>File di output binari

I flussi erano originariamente progettati per il testo, quindi la modalità di output predefinita è testo. In modalità testo, il carattere di avanzamento riga (nuova riga) si espande in una coppia ritorno a capo/avanzamento riga. L'espansione può causare problemi, come illustrato di seguito:

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

L'output previsto del programma potrebbe essere la sequenza di byte {99, 0, 10, 0}, invece il programma restituisce {99, 0, 13, 10, 0}, causando problemi se un programma è in attesa di un input binario. Se è necessario un output di tipo binario reale, in cui i caratteri vengono scritti non tradotti, è possibile specificare l'output binario usando l'argomento del costruttore [ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream) `openmode` :

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

## <a name="see-also"></a>Vedi anche

[Flussi di output](../standard-library/output-streams.md)

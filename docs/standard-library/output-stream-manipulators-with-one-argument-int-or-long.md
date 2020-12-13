---
description: 'Altre informazioni su: manipolatori del flusso di output con un solo argomento (int o Long)'
title: Manipolatori del flusso di output con un solo argomento (int o long)
ms.date: 11/04/2016
helpviewer_keywords:
- output streams, int or long argument manipulators
ms.assetid: 338f3164-b5e2-4c5a-a605-7d9dc3629ca1
ms.openlocfilehash: e04486f7d207731d9fbf7ba8083ffcb02a82ba8a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340892"
---
# <a name="output-stream-manipulators-with-one-argument-int-or-long"></a>Manipolatori del flusso di output con un solo argomento (int o long)

La libreria di classi iostream fornisce un set di macro per la creazione di manipolatori con parametri. I manipolatori con un **`int`** solo **`long`** argomento o sono un caso speciale. Per creare un manipolatore del flusso di output che accetta un singolo **`int`** **`long`** argomento o (ad esempio `setw` ), è necessario usare la macro _Smanip, definita in \<iomanip> . Questo esempio definisce un manipolatore `fillblank` che inserisce un numero specificato di spazi vuoti nel flusso:

## <a name="example"></a>Esempio

```cpp
// output_stream_manip.cpp
// compile with: /GR /EHsc
#include <iostream>
#include <iomanip>
using namespace std;

void fb( ios_base& os, int l )
{
   ostream *pos = dynamic_cast<ostream*>(&os);
   if (pos)
   {
      for( int i=0; i < l; i++ )
      (*pos) << ' ';
   };
}

_Smanip<int>
   __cdecl fillblank(int no)
   {
   return (_Smanip<int>(&fb, no));
   }

int main( )
{
   cout << "10 blanks follow" << fillblank( 10 ) << ".\n";
}
```

## <a name="see-also"></a>Vedere anche

[Manipolatori personalizzati con argomenti](../standard-library/custom-manipulators-with-arguments.md)

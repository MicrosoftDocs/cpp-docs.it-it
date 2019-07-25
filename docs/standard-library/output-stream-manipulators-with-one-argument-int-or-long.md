---
title: Manipolatori del flusso di output con un solo argomento (int o long)
ms.date: 11/04/2016
helpviewer_keywords:
- output streams, int or long argument manipulators
ms.assetid: 338f3164-b5e2-4c5a-a605-7d9dc3629ca1
ms.openlocfilehash: 93e4de25323514eb4105814b565dc3ddc3fbb737
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68453001"
---
# <a name="output-stream-manipulators-with-one-argument-int-or-long"></a>Manipolatori del flusso di output con un solo argomento (int o long)

La libreria di classi iostream fornisce un set di macro per la creazione di manipolatori con parametri. I manipolatori con un singolo argomento **int** o **Long** costituiscono un caso speciale. Per creare un manipolatore del flusso di output che accetta un singolo argomento **int** o `setw` **Long** , ad esempio, è necessario usare la macro _Smanip, definita \<in iomanip >. Questo esempio definisce un manipolatore `fillblank` che inserisce un numero specificato di spazi vuoti nel flusso:

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

---
title: Manipolatori del flusso di output con un solo argomento (int o long) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- output streams, int or long argument manipulators
ms.assetid: 338f3164-b5e2-4c5a-a605-7d9dc3629ca1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f3238ffcbd03f40c6eac0423d0212a65719fb33d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33853073"
---
# <a name="output-stream-manipulators-with-one-argument-int-or-long"></a>Manipolatori del flusso di output con un solo argomento (int o long)

La libreria di classi iostream fornisce un set di macro per la creazione di manipolatori con parametri. I manipolatori con un singolo argomento `int` o `long` rappresentano un caso speciale. Per creare un manipolatore di flusso di output che accetta un singolo argomento `int` o `long` (ad esempio `setw`), è necessario usare la macro _Smanip, definita in \<iomanip>. Questo esempio definisce un manipolatore `fillblank` che inserisce un numero specificato di spazi vuoti nel flusso:

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

[Manipolatori personalizzati con argomenti](../standard-library/custom-manipulators-with-arguments.md)<br/>

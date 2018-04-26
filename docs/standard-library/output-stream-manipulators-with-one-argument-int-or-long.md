---
title: Manipolatori del flusso di output con un solo argomento (int o long) | Microsoft Docs
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
- output streams, int or long argument manipulators
ms.assetid: 338f3164-b5e2-4c5a-a605-7d9dc3629ca1
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 68b26634bea9409be7166b6f937f71043f11473a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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

---
title: Classe valarray&lt;bool&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- valarray<bool>
- valarray/std::valarray<bool>
dev_langs:
- C++
helpviewer_keywords:
- valarray<bool> class
ms.assetid: fc0e7121-4758-4ea5-86c3-f04448f04acf
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 107493526b82a94f8379d86fea099ccbfd3d5302
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="valarrayltboolgt-class"></a>Classe valarray&lt;bool&gt;

Versione specializzata della classe modello **valarray\<Type>** per elementi di tipo `bool`.

## <a name="syntax"></a>Sintassi

```cpp
class valarray<bool>
```

## <a name="example"></a>Esempio

```cpp
// valarray_bool.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaBool ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
   for ( i = 0 ; i < 10 ; i++ )
      cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
   for ( i = 0 ; i < 10 ; i++ )
      cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaBool = ( vaL < vaR );
   cout << "The result of the less-than comparison "
   << "test is the\n valarray<bool>: ( ";
   for ( i = 0 ; i < 10 ; i++ )
      cout << vaBool [ i ] << " ";
   cout << ")." << endl;
}
\* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The result of the less-than comparison test is the
 valarray<bool>: ( 0 0 1 0 1 0 1 0 1 0 ).
*\
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<valarray>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe valarray](../standard-library/valarray-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>

---
title: Classe overflow_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- stdexcept/std::overflow_error
dev_langs:
- C++
helpviewer_keywords:
- overflow_error class
ms.assetid: bae7128d-e36b-4a45-84f1-2f89da441d20
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f76aab04fcd7a6458625925ca7c7edbf78fc45b4
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="overflowerror-class"></a>Classe overflow_error

La classe funge da classe di base per tutte le eccezioni generate per segnalare un overflow aritmetico.

## <a name="syntax"></a>Sintassi

```cpp
class overflow_error : public runtime_error {
public:
    explicit overflow_error(const string& message);

    explicit overflow_error(const char *message);

};
```

## <a name="remarks"></a>Note

Il valore restituito da [what](../standard-library/exception-class.md) è una copia di **message**`.`[data](../standard-library/basic-string-class.md#data).

## <a name="example"></a>Esempio

```cpp
// overflow_error.cpp
// compile with: /EHsc /GR
#include <bitset>
#include <iostream>

using namespace std;

int main( )
{
   try
   {
      bitset< 33 > bitset;
      bitset[32] = 1;
      bitset[0] = 1;
      unsigned long x = bitset.to_ulong( );
   }
   catch ( exception &e )
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type " << typeid( e ).name( ) << endl;
   };
}
\* Output:
Caught bitset<N> overflow
Type class std::overflow_error
*\
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<stdexcept>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe runtime_error](../standard-library/runtime-error-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>

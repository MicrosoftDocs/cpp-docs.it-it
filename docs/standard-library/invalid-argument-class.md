---
description: 'Altre informazioni su: invalid_argument Class'
title: Classe invalid_argument
ms.date: 11/04/2016
f1_keywords:
- stdexcept/std::invalid_argument
helpviewer_keywords:
- invalid_argument class
ms.assetid: af6c227d-ad7c-4e63-9dee-67af81d83506
ms.openlocfilehash: 58eee3a5e56932bcd045a7e66e59e105b8921813
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323943"
---
# <a name="invalid_argument-class"></a>Classe invalid_argument

La classe funge da classe di base per tutte le eccezioni generate per segnalare un argomento non valido.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_argument : public logic_error {
public:
    explicit invalid_argument(const string& message);

    explicit invalid_argument(const char *message);

};
```

## <a name="remarks"></a>Osservazioni

Il valore restituito da `what()` è una copia di `message.data()` . Per altre informazioni, vedere [`what`](../standard-library/exception-class.md) e [`data`](../standard-library/basic-string-class.md#data).

## <a name="example"></a>Esempio

```cpp
// invalid_arg.cpp
// compile with: /EHsc /GR
#include <bitset>
#include <iostream>

using namespace std;

int main( )
{
   try
   {
      bitset< 32 > bitset( string( "11001010101100001b100101010110000") );
   }
   catch ( exception &e )
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type " << typeid( e ).name( ) << endl;
   };
}
/* Output:
Caught invalid bitset<N> char
Type class std::invalid_argument
*/
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<stdexcept>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Classe logic_error](../standard-library/logic-error-class.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

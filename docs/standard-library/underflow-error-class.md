---
title: Classe underflow_error
ms.date: 11/04/2016
f1_keywords:
- stdexcept/std::underflow_error
helpviewer_keywords:
- underflow_error class
ms.assetid: d632f1f9-9c6c-4954-b96b-03041bfab22d
ms.openlocfilehash: 3f521e8ec083cd158212b3ae9cb9fcf26edc7e76
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520512"
---
# <a name="underflow_error-class"></a>Classe underflow_error

La classe funge da classe di base per tutte le eccezioni generate per segnalare un underflow aritmetico.

## <a name="syntax"></a>Sintassi

```cpp
class underflow_error : public runtime_error {
public:
    explicit underflow_error(const string& message);

    explicit underflow_error(const char *message);

};
```

## <a name="remarks"></a>Osservazioni

Il valore restituito da `what()` è una copia di `message.data()` . Per ulteriori informazioni, vedere [`what`](../standard-library/exception-class.md) e [`data`](../standard-library/basic-string-class.md#data) .

## <a name="example"></a>Esempio

```cpp
// underflow_error.cpp
// compile with: /EHsc /GR
#include <iostream>

using namespace std;

int main( )
{
   try
   {
      throw underflow_error( "The number's a bit small, captain!" );
   }
   catch ( exception &e ) {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid( e ).name( ) << endl;
   };
}
/* Output:
Caught: The number's a bit small, captain!
Type: class std::underflow_error
*/
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<stdexcept>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe runtime_error](../standard-library/runtime-error-class.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

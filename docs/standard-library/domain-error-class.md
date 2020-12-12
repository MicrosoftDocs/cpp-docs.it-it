---
description: 'Altre informazioni su: domain_error Class'
title: Classe domain_error
ms.date: 11/04/2016
f1_keywords:
- stdexcept/std::domain_error
helpviewer_keywords:
- domain_error class
ms.assetid: a1d8245d-61c2-4d1e-973f-073bd5dd5fa3
ms.openlocfilehash: 337df7c7c8e2327a4e5b88a45a736c697e6cb1bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324488"
---
# <a name="domain_error-class"></a>Classe domain_error

La classe funge da classe di base per tutte le eccezioni generate per segnalare un errore del dominio.

## <a name="syntax"></a>Sintassi

```cpp
class domain_error : public logic_error {
public:
    explicit domain_error(const string& message);

    explicit domain_error(const char *message);

};
```

## <a name="remarks"></a>Osservazioni

Il valore restituito da `what()` è una copia di `message.data()` . Per altre informazioni, vedere [`what`](../standard-library/exception-class.md) e [`data`](../standard-library/basic-string-class.md#data).

## <a name="example"></a>Esempio

```cpp
// domain_error.cpp
// compile with: /EHsc /GR
#include <iostream>

using namespace std;

int main( )
{
   try
   {
      throw domain_error( "Your domain is in error!" );
   }
   catch (exception &e)
   {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid(e).name( ) << endl;
   };
}
/* Output:
Caught: Your domain is in error!
Type: class std::domain_error
*/
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<stdexcept>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Classe logic_error](../standard-library/logic-error-class.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

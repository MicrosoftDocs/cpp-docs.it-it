---
description: 'Altre informazioni su: out_of_range Class'
title: Classe out_of_range
ms.date: 11/04/2016
f1_keywords:
- stdexcept/std::out_of_range
helpviewer_keywords:
- out_of_range class
ms.assetid: d0e14dc0-065e-4666-9ac9-51e52223c503
ms.openlocfilehash: 28d0982f711dba8d7a7bb069c4ae79e267b902df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283277"
---
# <a name="out_of_range-class"></a>Classe out_of_range

La classe funge da classe di base per tutte le eccezioni generate per segnalare un argomento che è esterno all'intervallo valido.

## <a name="syntax"></a>Sintassi

```cpp
class out_of_range : public logic_error {
public:
    explicit out_of_range(const string& message);

    explicit out_of_range(const char *message);

};
```

## <a name="remarks"></a>Osservazioni

Il valore restituito da `what()` è una copia di `message.data()` . Per altre informazioni, vedere [`what`](../standard-library/exception-class.md) e [`data`](../standard-library/basic-string-class.md#data).

## <a name="example"></a>Esempio

```cpp
// out_of_range.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

using namespace std;

int main() {
// out_of_range
   try {
      string str( "Micro" );
      string rstr( "soft" );
      str.append( rstr, 5, 3 );
      cout << str << endl;
   }
   catch ( exception &e ) {
      cerr << "Caught: " << e.what( ) << endl;
   };
}
```

## <a name="output"></a>Output

```cpp
Caught: invalid string position
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<stdexcept>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Classe logic_error](../standard-library/logic-error-class.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

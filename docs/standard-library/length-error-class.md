---
title: Classe length_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- stdexcept/std::length_error
dev_langs:
- C++
helpviewer_keywords:
- length_error class
ms.assetid: d53c46c5-4626-400d-bd76-bf3e1e0f64ae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 11529c0fd8f5f64562e7b0c02c44698641cef2c8
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44317550"
---
# <a name="lengtherror-class"></a>Classe length_error

La classe funge da classe di base per tutte le eccezioni generate per segnalare un tentativo di generare un oggetto troppo lungo da specificare.

## <a name="syntax"></a>Sintassi

```cpp
class length_error : public logic_error {
public:
    explicit length_error(const string& message);

    explicit length_error(const char *message);

};
```

## <a name="remarks"></a>Note

Il valore restituito da [what](../standard-library/exception-class.md) è una copia di **message**`.`[data](../standard-library/basic-string-class.md#data).

## <a name="example"></a>Esempio

```cpp
// length_error.cpp
// compile with: /EHsc /GR /MDd
#include <vector>
#include <iostream>

using namespace std;

template<class  T>
class stingyallocator : public allocator< T>
{
public:
   template <class U>
      struct rebind { typedef stingyallocator<U> other; };
   _SIZT max_size( ) const
   {
         return 10;
   };

};

int main( )
{
   try
   {
      vector<int, stingyallocator< int > > myv;
      for ( int i = 0; i < 11; i++ ) myv.push_back( i );
   }
   catch ( exception &e )
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type " << typeid( e ).name( ) << endl;
   };
}
/* Output:
Caught vector<T> too long
Type class std::length_error
*/
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<stdexcept>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe logic_error](../standard-library/logic-error-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>

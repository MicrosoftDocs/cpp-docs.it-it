---
title: Classe range_error | Microsoft Docs
ms.custom: ''
ms.date: 08/14/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- stdexcept/std::range_error
dev_langs:
- C++
helpviewer_keywords:
- range_error class
ms.assetid: 8afb3e88-fc49-4213-b096-ed63d7aea37c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cf6c2f46d3dedc80cb89e6776a82eee6ebe57026
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539247"
---
# <a name="rangeerror-class"></a>Classe range_error

La classe funge da classe di base per tutte le eccezioni generate per segnalare un errore di intervallo.

## <a name="syntax"></a>Sintassi

```cpp
class range_error : public runtime_error {
public:
    explicit range_error(const string& message);
    explicit range_error(const char *message);
};
```

## <a name="remarks"></a>Note

Il valore restituito da [cosa](../standard-library/exception-class.md) è una copia di `message.data`. Per altre informazioni, vedere [basic_string:: data](../standard-library/basic-string-class.md#data).

## <a name="example"></a>Esempio

```cpp
// range_error.cpp
// compile with: /EHsc /GR
#include <iostream>
using namespace std;
int main()
{
   try
   {
      throw range_error( "The range is in error!" );
   }
   catch (range_error &e)
   {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type: " << typeid( e ).name( ) << endl;
   };
}
\* Output:
Caught: The range is in error!
Type: class std::range_error
*\
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<stdexcept>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe runtime_error](../standard-library/runtime-error-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>

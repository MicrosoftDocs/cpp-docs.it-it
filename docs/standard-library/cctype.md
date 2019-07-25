---
title: '&lt;cctype&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cctype>
helpviewer_keywords:
- cctype header
ms.assetid: 3fd18bfd-c414-4def-bac1-c362e1fe8b71
ms.openlocfilehash: d1d69b5fe125372c489965949b2b59c4012fdec9
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449851"
---
# <a name="ltcctypegt"></a>&lt;cctype&gt;

Include l'intestazione della libreria C standard \<ctype.h> e aggiunge i nomi associati allo spazio dei nomi `std`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> cctype

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.

## <a name="functions"></a>Funzioni

```cpp
int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\ (Panoramica sulla libreria standard C++)
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

---
title: '&lt;cwctype&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cwctype>
helpviewer_keywords:
- cwctype header
ms.assetid: 46476f95-b8c3-4ab2-a172-9a1be91124b7
ms.openlocfilehash: 26fbefa7dbaf68ac559e79c702a5a7a2c31266a2
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68450598"
---
# <a name="ltcwctypegt"></a>&lt;cwctype&gt;

Include l'intestazione della libreria C standard \<wctype.h> e aggiunge i nomi associati allo spazio dei nomi `std`.

## <a name="syntax"></a>Sintassi

```cpp
#include <cwctype>
```

## <a name="remarks"></a>Note

L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.

## <a name="constants"></a>Costanti

```cpp
namespace std {
    using wint_t = see below ;
    using wctrans_t = see below ;
    using wctype_t = see below ;
}

#define WEOF see below
```

## <a name="functions"></a>Funzioni

```cpp
int iswalnum(wint_t wc);
int iswalpha(wint_t wc);
int iswblank(wint_t wc);
int iswcntrl(wint_t wc);
int iswdigit(wint_t wc);
int iswgraph(wint_t wc);
int iswlower(wint_t wc);
int iswprint(wint_t wc);
int iswpunct(wint_t wc);
int iswspace(wint_t wc);
int iswupper(wint_t wc);
int iswxdigit(wint_t wc);
int iswctype(wint_t wc, wctype_t desc);
wctype_t wctype(const char* property);
wint_t towlower(wint_t wc);
wint_t towupper(wint_t wc);
wint_t towctrans(wint_t wc, wctrans_t desc);
wctrans_t wctrans(const char* property);
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\ (Panoramica sulla libreria standard C++)
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

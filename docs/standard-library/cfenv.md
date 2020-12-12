---
description: 'Altre informazioni su: &lt; cfenv&gt;'
title: '&lt;cfenv&gt;'
ms.date: 11/04/2016
ms.assetid: 6a17ad51-2182-4e91-8108-65997382acd3
ms.openlocfilehash: e01a74b9df3431ed257cb015260d0775320a88ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325289"
---
# <a name="ltcfenvgt"></a>&lt;cfenv&gt;

Include l'intestazione della libreria C standard \<fenv.h> e aggiunge i nomi associati allo `std` spazio dei nomi.

## <a name="syntax"></a>Sintassi

```cpp
#include <cfenv>
```

## <a name="remarks"></a>Osservazioni

L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.

## <a name="constants-and-types"></a>Costanti e tipi

```cpp
#define FE_ALL_EXCEPT see below
#define FE_DIVBYZERO see below
#define FE_INEXACT see below
#define FE_INVALID see below
#define FE_OVERFLOW see below
#define FE_UNDERFLOW see below
#define FE_DOWNWARD see below
#define FE_TONEAREST see below
#define FE_TOWARDZERO see below
#define FE_UPWARD see below
#define FE_DFL_ENV see below

namespace std {
    using fenv_t = object type ;
    using fexcept_t = integer type ;
}
```

## <a name="functions"></a>Funzioni

```cpp
int feclearexcept(int except);
int fegetexceptflag(fexcept_t* pflag, int except);
int feraiseexcept(int except);
int fesetexceptflag(const fexcept_t* pflag, int except);
int fetestexcept(int except);
int fegetround();
int fesetround(int mode);
int fegetenv(fenv_t* penv);
int feholdexcept(fenv_t* penv);
int fesetenv(const fenv_t* penv);
int feupdateenv(const fenv_t* penv);
```

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

---
description: 'Altre informazioni su: &lt; clocale&gt;'
title: '&lt;clocale&gt;'
ms.date: 11/04/2016
f1_keywords:
- <clocale>
helpviewer_keywords:
- clocale header
ms.assetid: 5bde3e01-cf67-4f1f-a383-447ec814d00e
ms.openlocfilehash: 3a1efb972d33ccb5b28fac6d77803aa6de2e08c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325114"
---
# <a name="ltclocalegt"></a>&lt;clocale&gt;

Include l'intestazione della libreria C standard \<locale.h> e aggiunge i nomi associati allo `std` spazio dei nomi.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<clocale>

**Spazio dei nomi:** std

## <a name="remarks"></a>Commenti

L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.

## <a name="constants"></a>Costanti

```cpp
#define NULL see below
#define LC_ALL see below
#define LC_COLLATE see below
#define LC_CTYPE see below
#define LC_MONETARY see below
#define LC_NUMERIC see below
#define LC_TIME see below
```

## <a name="structures"></a>Strutture

```cpp
struct lconv;
```

## <a name="functions"></a>Funzioni

```cpp
char* setlocale(int category, const char* locale);
lconv* localeconv();
```

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

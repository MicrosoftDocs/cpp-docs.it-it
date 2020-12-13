---
description: 'Altre informazioni su: ConvertBSTRToString'
title: ConvertBSTRToString
ms.date: 11/04/2016
f1_keywords:
- ConvertBSTRToString
helpviewer_keywords:
- ConvertBSTRToString function
ms.assetid: ab6ce555-3d75-4e9c-9cb8-ada6d8ce43b1
ms.openlocfilehash: 72d6033003f186f358d9b4143498df65858ee354
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344614"
---
# <a name="convertbstrtostring"></a>ConvertBSTRToString

**Specifico di Microsoft**

Converte un valore `BSTR` in valore `char *`.

## <a name="syntax"></a>Sintassi

```
char* __stdcall ConvertBSTRToString(BSTR pSrc);
```

#### <a name="parameters"></a>Parametri

*pSrc*<br/>
Variabile BSTR.

## <a name="remarks"></a>Commenti

**ConvertBSTRToString** alloca una stringa che è necessario eliminare.

## <a name="example"></a>Esempio

```cpp
// ConvertBSTRToString.cpp
#include <comutil.h>
#include <stdio.h>

#pragma comment(lib, "comsuppw.lib")

int main() {
   BSTR bstrText = ::SysAllocString(L"Test");
   wprintf_s(L"BSTR text: %s\n", bstrText);

   char* lpszText2 = _com_util::ConvertBSTRToString(bstrText);
   printf_s("char * text: %s\n", lpszText2);

   SysFreeString(bstrText);
   delete[] lpszText2;
}
```

```Output
BSTR text: Test
char * text: Test
```

**TERMINA specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:**\<comutil.h>

**Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedi anche

[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)

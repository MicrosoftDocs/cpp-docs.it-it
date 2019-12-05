---
title: _set_com_error_handler
ms.date: 11/04/2016
helpviewer_keywords:
- _set_com_error_handler function
ms.assetid: 49fe4fca-5e37-4d83-abaf-15be5ce37f94
ms.openlocfilehash: 226dce24de68edd66ca68c43e41ce0cb5b8a1b48
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857294"
---
# <a name="_set_com_error_handler"></a>_set_com_error_handler

Sostituisce la funzione predefinita utilizzata per la gestione degli errori COM. **_set_com_error_handler** è specifico di Microsoft.

## <a name="syntax"></a>Sintassi

```
void __stdcall _set_com_error_handler(
   void (__stdcall *pHandler)(
      HRESULT hr,
      IErrorInfo* perrinfo
   )
);
```

#### <a name="parameters"></a>Parametri

*pHandler*<br/>
Puntatore alla funzione di sostituzione.

*hr*<br/>
Informazioni HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

## <a name="remarks"></a>Note

Per impostazione predefinita, [_com_raise_error](../cpp/com-raise-error.md) gestisce tutti gli errori com. È possibile modificare questo comportamento utilizzando **_set_com_error_handler** per chiamare una funzione di gestione degli errori personalizzata.

La funzione di sostituzione deve avere una firma uguale a quella di `_com_raise_error`.

## <a name="example"></a>Esempio

```cpp
// _set_com_error_handler.cpp
// compile with /EHsc
#include <stdio.h>
#include <comdef.h>
#include <comutil.h>

// Importing ado dll to attempt to establish an ado connection.
// Not related to _set_com_error_handler
#import "C:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF", "adoEOF")

void __stdcall _My_com_raise_error(HRESULT hr, IErrorInfo* perrinfo)
{
   throw "Unable to establish the connection!";
}

int main()
{
   _set_com_error_handler(_My_com_raise_error);
   _bstr_t bstrEmpty(L"");
   _ConnectionPtr Connection = NULL;
   try
   {
      Connection.CreateInstance(__uuidof(Connection));
      Connection->Open(bstrEmpty, bstrEmpty, bstrEmpty, 0);
   }
   catch(char* errorMessage)
   {
      printf("Exception raised: %s\n", errorMessage);
   }

   return 0;
}
```

```Output
Exception raised: Unable to establish the connection!
```

## <a name="requirements"></a>Requisiti di

**Intestazione:** \<Comdef. h >

**Lib:** Se si specifica l'opzione del compilatore **/Zc: wchar_t** (impostazione predefinita), utilizzare comsuppw. lib o comsuppwd. lib. Se si specifica l'opzione **/Zc: wchar_t-** Compiler, utilizzare comsupp. lib. Per ulteriori informazioni, ad esempio su come impostare questa opzione nell'IDE, vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

## <a name="see-also"></a>Vedere anche

[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)

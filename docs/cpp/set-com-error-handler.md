---
title: _set_com_error_handler
ms.date: 11/04/2016
helpviewer_keywords:
- _set_com_error_handler function
ms.assetid: 49fe4fca-5e37-4d83-abaf-15be5ce37f94
ms.openlocfilehash: debad733f351c710ada342e29fa95a4d1ff03b7d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749803"
---
# <a name="_set_com_error_handler"></a>_set_com_error_handler

Sostituisce la funzione predefinita utilizzata per la gestione degli errori COM. **_set_com_error_handler** è specifico di Microsoft.

## <a name="syntax"></a>Sintassi

```cpp
void __stdcall _set_com_error_handler(
   void (__stdcall *pHandler)(
      HRESULT hr,
      IErrorInfo* perrinfo
   )
);
```

#### <a name="parameters"></a>Parametri

*pHandler (gestore)*<br/>
Puntatore alla funzione di sostituzione.

*hr*<br/>
informazioni HRESULT.

*perrinfo*<br/>
Oggetto `IErrorInfo`.

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, [_com_raise_error](../cpp/com-raise-error.md) gestisce tutti gli errori COM. È possibile modificare questo comportamento utilizzando **_set_com_error_handler** per chiamare la propria funzione di gestione degli errori.

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

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> comdef.h

**Lib:** Se viene specificata l'opzione del compilatore **//c:wchar_t** (impostazione predefinita), utilizzare comsuppw.lib o comsuppwd.lib. Se viene specificata l'opzione del compilatore **/-c:wchar_t-,** utilizzare comsupp.lib. Per ulteriori informazioni, inclusa la modalità di impostazione di questa opzione nell'IDE, vedere [//c:wchar_t (wchar_t È di tipo nativo).](../build/reference/zc-wchar-t-wchar-t-is-native-type.md)

## <a name="see-also"></a>Vedere anche

[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)

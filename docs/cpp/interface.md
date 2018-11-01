---
title: __interface
ms.date: 11/04/2016
f1_keywords:
- __interface_cpp
helpviewer_keywords:
- __interface keyword [C++]
ms.assetid: ca5d400b-d6d8-4ba2-89af-73f67e5ec056
ms.openlocfilehash: 33a3d45f65ab5adf798a2b0f6b11191e6f6a0213
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50573542"
---
# <a name="interface"></a>__interface

**Sezione specifica Microsoft**

Un'interfaccia di Visual C++ può essere definita come segue:

- Può ereditare da nessuna o più interfacce base.

- Non può ereditare da una classe base.

- Può contenere solo metodi pubblici, virtuali puri.

- Non può contenere costruttori, distruttori o operatori.

- Non può contenere metodi statici.

- Non può contenere membri dati; le proprietà sono consentite.

## <a name="syntax"></a>Sintassi

```
modifier __interface interface-name {interface-definition};
```

## <a name="remarks"></a>Note

C++ [classe](../cpp/class-cpp.md) oppure [struct](../cpp/struct-cpp.md) può essere implementato con queste regole, ma **Interface** li applica.

Ad esempio, di seguito è riportata una definizione di interfaccia di esempio:

```cpp
__interface IMyInterface {
   HRESULT CommitX();
   HRESULT get_X(BSTR* pbstrName);
};
```

Per informazioni sulle interfacce gestite, vedere [classe di interfaccia](../windows/interface-class-cpp-component-extensions.md).

Si noti che non è necessario dichiarare in modo esplicito che le funzioni `CommitX` e `get_X` sono virtuali pure. Una dichiarazione equivalente per la prima funzione sarà:

```cpp
virtual HRESULT CommitX() = 0;
```

**Interface** implica la [novtable](../cpp/novtable.md) **declspec** modificatore.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare le proprietà dichiarate in un'interfaccia.

```cpp
// deriv_interface.cpp
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
#include <string.h>
#include <comdef.h>
#include <stdio.h>

[module(name="test")];

[ object, uuid("00000000-0000-0000-0000-000000000001"), library_block ]
__interface IFace {
   [ id(0) ] int int_data;
   [ id(5) ] BSTR bstr_data;
};

[ coclass, uuid("00000000-0000-0000-0000-000000000002") ]
class MyClass : public IFace {
private:
    int m_i;
    BSTR m_bstr;

public:
    MyClass()
    {
        m_i = 0;
        m_bstr = 0;
    }

    ~MyClass()
    {
        if (m_bstr)
            ::SysFreeString(m_bstr);
    }

    int get_int_data()
    {
        return m_i;
    }

    void put_int_data(int _i)
    {
        m_i = _i;
    }

    BSTR get_bstr_data()
    {
        BSTR bstr = ::SysAllocString(m_bstr);
        return bstr;
    }

    void put_bstr_data(BSTR bstr)
    {
        if (m_bstr)
            ::SysFreeString(m_bstr);
        m_bstr = ::SysAllocString(bstr);
    }
};

int main()
{
    _bstr_t bstr("Testing");
    CoInitialize(NULL);
    CComObject<MyClass>* p;
    CComObject<MyClass>::CreateInstance(&p);
    p->int_data = 100;
    printf_s("p->int_data = %d\n", p->int_data);
    p->bstr_data = bstr;
    printf_s("bstr_data = %S\n", p->bstr_data);
}
```

```Output
p->int_data = 100
bstr_data = Testing
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Attributi di interfaccia](../windows/attributes/interface-attributes.md)
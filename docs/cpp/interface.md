---
title: "__interface | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__interface"
  - "__interface_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__interface (parola chiave) [C++]"
ms.assetid: ca5d400b-d6d8-4ba2-89af-73f67e5ec056
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __interface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Un'interfaccia di Visual C\+\+ può essere definita come segue:  
  
-   Può ereditare da nessuna o più interfacce base.  
  
-   Non può ereditare da una classe base.  
  
-   Può contenere solo metodi pubblici, virtuali puri.  
  
-   Non può contenere costruttori, distruttori o operatori.  
  
-   Non può contenere metodi statici.  
  
-   Non può contenere membri dati; le proprietà sono consentite.  
  
## Sintassi  
  
```  
  
modifier  
 __interface interface-name {interface-definition};  
```  
  
## Note  
 Una [classe](../cpp/class-cpp.md) o un [struct](../cpp/struct-cpp.md) C\+\+ può essere implementato con queste regole, ma `__interface` le applica.  
  
 Ad esempio, di seguito è riportata una definizione di interfaccia di esempio:  
  
```  
__interface IMyInterface {  
   HRESULT CommitX();  
   HRESULT get_X(BSTR* pbstrName);  
};  
```  
  
 Per informazioni sulle interfacce gestite, vedere [classe di interfaccia](../windows/interface-class-cpp-component-extensions.md).  
  
 Si noti che non è necessario dichiarare in modo esplicito che le funzioni `CommitX` e `get_X` sono virtuali pure.  Una dichiarazione equivalente per la prima funzione sarà:  
  
```  
virtual HRESULT CommitX() = 0;  
```  
  
 `__interface` implica il modificatore [novtable](../cpp/novtable.md) `__declspec`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare le proprietà dichiarate in un'interfaccia.  
  
```  
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
  
  **p\-\>int\_data \= 100**  
**bstr\_data \= Testing**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Interface Attributes](../windows/interface-attributes.md)
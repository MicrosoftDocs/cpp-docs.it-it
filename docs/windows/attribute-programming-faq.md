---
title: Domande frequenti sulla programmazione dell'attributo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- attributed programming
- attributes [C++], frequently asked questions
- FAQs (frequently asked questions), attributed programming [C++]
ms.assetid: a1b8349f-7f51-43c4-95ea-4edb6e5f243f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 76b7ad2c7acb9d232602c620a70cefabbecee531
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="attribute-programming-faq"></a>Domande frequenti sulla programmazione con attributi
Questo argomento sono incluse le seguenti domande frequenti:  
  
-   [Che cos'è un valore HRESULT?](#vcconattributeprogrammmingfaqanchor1)  
  
-   [Quando è necessario specificare il nome del parametro per un attributo?](#vcconattributeprogrammmingfaqanchor2)  
  
-   [È possibile utilizzare i commenti in un blocco di attributi?](#vcconattributeprogrammmingfaqanchor3)  
  
-   [Interagiscono di attributi con ereditarietà](#vcconattributeprogrammmingfaqanchor4)  
  
-   [Come è possibile utilizzare gli attributi in un progetto ATL senza attributo?](#vcconattributeprogrammmingfaqanchor5)  
  
-   [Come è possibile utilizzare un file idl in un progetto con attributi?](#vcconattributeprogrammmingfaqanchor6)  
  
-   [È possibile modificare il codice che viene inserito da un attributo?](#vcconattributeprogrammmingfaqanchor7)  
  
-   [Come è possibile dichiarare in avanti un'interfaccia con attributi?](#vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface)  
  
-   [È possibile utilizzare gli attributi in una classe derivata da una classe che utilizza attributi?](#vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor)  
  
##  <a name="vcconattributeprogrammmingfaqanchor1"></a>Che cos'è un valore HRESULT?  
 Un `HRESULT` è un tipo di dati semplici che viene spesso utilizzato come valore restituito da attributi e ATL in generale. Nella tabella seguente vengono descritti i diversi valori. Altri valori sono contenuti nel file Winerror. h file di intestazione.  
  
|nome|Descrizione|Valore|  
|----------|-----------------|-----------|  
|S_OK|Operazione riuscita|0x00000000|  
|E_UNEXPECTED|Errore imprevisto|0x8000ffff|  
|E_NOTIMPL|Non implementato|0x80004001|  
|E_OUTOFMEMORY|Non è stato possibile allocare la memoria necessaria|0x8007000E|  
|E_INVALIDARG|Uno o più argomenti non sono validi|0x80070057|  
|E_NOINTERFACE|Interfaccia non supportata|0x80004002|  
|E_POINTER|Puntatore non valido|0x80004003|  
|E_HANDLE|Handle non valido|0x80070006|  
|E_ABORT|Operazione interrotta|0x80004004|  
|E_FAIL|Errore non specificato|0x80004005|  
|E_ACCESSDENIED|Accesso generale negato|0x80070005|  
  
##  <a name="vcconattributeprogrammmingfaqanchor2"></a>Quando è necessario specificare il nome del parametro per un attributo?  
 Nella maggior parte dei casi, se l'attributo ha un solo parametro, tale parametro è denominato. Questo nome non è obbligatorio quando si inserisce l'attributo nel codice. Ad esempio, la seguente sintassi del [aggregabile](../windows/aggregatable.md) attributo:  
  
```  
[coclass, aggregatable(value=allowed)]  
class CMyClass  
{  
// The class declaration  
};  
```  
  
 è esattamente identico:  
  
```  
[coclass, aggregatable(allowed)]  
class CMyClass  
{  
// The class declaration  
};  
```  
  
 Tuttavia, gli attributi seguenti presentano parametri singoli senza:  
  
||||  
|-|-|-|  
|[call_as](../windows/call-as.md)|[case](../windows/case-cpp.md)|[cpp_quote](../windows/cpp-quote.md)|  
|[default](../windows/default-cpp.md)|[defaultvalue](../windows/defaultvalue.md)|[defaultvtable](../windows/defaultvtable.md)|  
|[emitidl](../windows/emitidl.md)|[entry](../windows/entry.md)|[first_is](../windows/first-is.md)|  
|[helpcontext](../windows/helpcontext.md)|[helpfile](../windows/helpfile.md)|[helpstring](../windows/helpstring.md)|  
|[helpstringcontext](../windows/helpstringcontext.md)|[helpstringdll](../windows/helpstringdll.md)|[ID](../windows/id.md)|  
|[iid_is](../windows/iid-is.md)|[import](../windows/import.md)|[importlib](../windows/importlib.md)|  
|[include](../windows/include-cpp.md)|[includelib](../windows/includelib-cpp.md)|[last_is](../windows/last-is.md)|  
|[length_is](../windows/length-is.md)|[max_is](../windows/max-is.md)|[no_injected_text](../windows/no-injected-text.md)|  
|[pointer_default](../windows/pointer-default.md)|[pragma](../windows/pragma.md)|[restricted](../windows/restricted.md)|  
|[size_is](../windows/size-is.md)|[origine](../windows/source-cpp.md)|[switch_is](../windows/switch-is.md)|  
|[switch_type](../windows/switch-type.md)|[transmit_as](../windows/transmit-as.md)|[wire_marshal](../windows/wire-marshal.md)|  
  
##  <a name="vcconattributeprogrammmingfaqanchor3"></a>È possibile utilizzare i commenti in un blocco di attributi?  
 È possibile utilizzare i commenti a riga singola sia su più righe all'interno di un blocco di attributi. Tuttavia, è possibile utilizzare due tipi di commento all'interno delle parentesi che contiene i parametri a un attributo.  
  
 È consentito:  
  
```  
[ coclass,  
   progid("MyClass.CMyClass.1"), /* Multiple-line  
                                       comment */  
   threading("both") // Single-line comment  
]  
```  
  
 Di seguito non è consentito:  
  
```  
[ coclass,  
   progid("MyClass.CMyClass.1" /* Multiple-line comment */ ),  
   threading("both" // Single-line comment)  
]  
```  
  
##  <a name="vcconattributeprogrammmingfaqanchor4"></a>Interagiscono di attributi con ereditarietà  
 Da altre classi, che possono stessi essere attribuiti o non è possibile ereditare le classi con e senza Attribute. Il risultato di derivazione da una classe con attributa è quella della derivazione da tale classe dopo la trasformazione del codice con il provider di attributi. Gli attributi non vengono trasmessi alle classi derivate mediante l'ereditarietà di C++. Un provider di attributi Trasforma solo codice in prossimità dei relativi attributi.  
  
##  <a name="vcconattributeprogrammmingfaqanchor5"></a>Come è possibile utilizzare gli attributi in un progetto ATL senza attributo?  
 È possibile un progetto ATL senza attributo, che dispone di un file IDL, e si consiglia di iniziare ad aggiungere oggetti con attributi. In questo caso, è possibile utilizzare l'aggiunta guidata classe per fornire il codice.  
  
##  <a name="vcconattributeprogrammmingfaqanchor6"></a>Come è possibile utilizzare un file idl in un progetto con attributi?  
 Potrebbe essere un file IDL che si desidera utilizzare nel progetto ATL con attributi. In questo caso, si utilizzerebbe il [importidl](../windows/importidl.md) , compilare il file idl in un file con estensione h (vedere il [pagine delle proprietà MIDL](../ide/midl-property-pages.md) nella finestra di dialogo Pagine delle proprietà del progetto) e quindi includere file h nel progetto .  
  
##  <a name="vcconattributeprogrammmingfaqanchor7"></a>È possibile modificare il codice che viene inserito da un attributo?  
 Alcuni attributi di inseriscono il codice nel progetto. È possibile visualizzare il codice inserito utilizzando il [/Fx](../build/reference/fx-merge-injected-code.md) l'opzione del compilatore. È inoltre possibile copiare il file inserito codice e incollarlo nel codice sorgente. Ciò consente di modificare il comportamento dell'attributo. Tuttavia, è possibile modificare altre parti del codice anche.  
  
 L'esempio seguente è il risultato di copiare il codice inserito in un file di codice sorgente:  
  
```  
// attr_injected.cpp  
// compile with: comsupp.lib  
#define _ATL_ATTRIBUTES 1  
#include <atlbase.h>  
#include <atlcom.h>  
  
[ module(name="MyLibrary") ];  
  
// ITestTest  
[   
   object,  
   uuid("DADECE00-0FD2-46F1-BFD3-6A0579CA1BC4"),  
   dual,  
   helpstring("ITestTest Interface"),  
   pointer_default(unique)  
]  
  
__interface ITestTest : IDispatch {  
   [id(1), helpstring("method DoTest")]   
   HRESULT DoTest([in] BSTR str);  
};  
  
// _ITestTestEvents  
[  
   uuid("12753B9F-DEF4-49b0-9D52-A79C371F2909"),  
   dispinterface,  
   helpstring("_ITestTestEvents Interface")  
]  
  
__interface _ITestTestEvents {  
   [id(1), helpstring("method BeforeChange")] HRESULT BeforeChange([in] BSTR str, [in,out] VARIANT_BOOL* bCancel);  
};  
  
// CTestTest  
[  
   coclass,  
   threading(apartment),  
   vi_progid("TestATL1.TestTest"),  
   progid("TestATL1.TestTest.1"),  
   version(1.0),  
   uuid("D9632007-14FA-4679-9E1C-28C9A949E784"),  
   // this line would be commented out from original file  
   // event_source("com"),  
   // this line would be added to support injected code  
   source(_ITestTestEvents),  
   helpstring("TestTest Class")  
]  
  
class ATL_NO_VTABLE CTestTest : public ITestTest,  
// the following base classes support added injected code  
public IConnectionPointContainerImpl<CTestTest>,  
public IConnectionPointImpl<CTestTest, &__uuidof(::_ITestTestEvents), CComDynamicUnkArray>  
{  
public:  
   CTestTest() {  
   }  
   // this line would be commented out from original file  
   // __event __interface _ITestTestEvents;  
   DECLARE_PROTECT_FINAL_CONSTRUCT()  
   HRESULT FinalConstruct() {  
      return S_OK;  
   }  
  
void FinalRelease() {}  
  
public:  
   CComBSTR m_value;  
   STDMETHOD(DoTest)(BSTR str) {  
      VARIANT_BOOL bCancel = FALSE;  
      BeforeChange(str,&bCancel);  
      if (bCancel) {  
          return Error("Error : Someone don't want us to change the value");  
      }  
  
     m_value =str;  
     return S_OK;  
    }  
// the following was copied in from the injected code.  
HRESULT BeforeChange(::BSTR i1,::VARIANT_BOOL* i2) {  
   HRESULT hr = S_OK;  
   IConnectionPointImpl<CTestTest, &__uuidof(_ITestTestEvents), CComDynamicUnkArray>* p = this;  
   VARIANT rgvars[2];  
   Lock();  
   IUnknown** pp = p->m_vec.begin();  
   Unlock();  
   while (pp < p->m_vec.end()) {  
      if (*pp != NULL) {  
         IDispatch* pDispatch = (IDispatch*) *pp;  
         ::VariantInit(&rgvars[1]);  
         rgvars[1].vt = VT_BSTR;  
         V_BSTR(&rgvars[1])= (BSTR) i1;  
         ::VariantInit(&rgvars[0]);  
         rgvars[0].vt = (VT_BOOL | VT_BYREF);  
         V_BOOLREF(&rgvars[0])= (VARIANT_BOOL*) i2;  
         DISPPARAMS disp = { rgvars, NULL, 2, 0 };  
         VARIANT ret_val;  
         hr = __ComInvokeEventHandler(pDispatch, 1, 1, &disp, &ret_val);  
         if (FAILED(hr))  
            break;  
      }  
      pp++;  
   }  
   return hr;  
}  
  
BEGIN_CONNECTION_POINT_MAP(CTestTest)  
CONNECTION_POINT_ENTRY(__uuidof(::_ITestTestEvents))  
END_CONNECTION_POINT_MAP()  
// end added code section  
  
// _ITestCtrlEvents Methods  
public:  
};  
  
int main() {}  
```  
  
##  <a name="vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface"></a>Come è possibile dichiarare in avanti un'interfaccia con attributi?  
 Se si desidera effettuare una dichiarazione con prototipo di un'interfaccia con attributa, è necessario applicare gli stessi attributi per la dichiarazione con prototipo applicabili alla dichiarazione di interfaccia effettivo. È inoltre necessario applicare il [esportare](../windows/export.md) attributo per la dichiarazione con prototipo.  
  
##  <a name="vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor"></a>È possibile utilizzare gli attributi in una classe derivata da una classe che utilizza attributi?  
 No, l'utilizzo degli attributi in una classe derivata da una classe che utilizza gli attributi non è supportata.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../windows/attributed-programming-concepts.md)
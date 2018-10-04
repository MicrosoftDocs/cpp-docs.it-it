---
title: Domande frequenti sulla programmazione dell'attributo | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- attributed programming
- attributes [C++/CLI], frequently asked questions
- FAQs (frequently asked questions), attributed programming [C++]
ms.assetid: a1b8349f-7f51-43c4-95ea-4edb6e5f243f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a93dc67bd06f0dc88603643646fed3ad65052874
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791437"
---
# <a name="attribute-programming-faq"></a>Domande frequenti sulla programmazione con attributi

Questo argomento sono incluse le seguenti domande frequenti:

- [Che cos'è un valore HRESULT?](#vcconattributeprogrammmingfaqanchor1)

- [Quando è necessario specificare il nome del parametro per un attributo?](#vcconattributeprogrammmingfaqanchor2)

- [È possibile usare i commenti in un blocco di attributi?](#vcconattributeprogrammmingfaqanchor3)

- [Interagiscono di attributi con ereditarietà](#vcconattributeprogrammmingfaqanchor4)

- [Come è possibile usare gli attributi in un progetto ATL senza attributo?](#vcconattributeprogrammmingfaqanchor5)

- [Come è possibile usare un file con estensione idl in un progetto con attributo?](#vcconattributeprogrammmingfaqanchor6)

- [È possibile modificare il codice che viene inserito da un attributo?](#vcconattributeprogrammmingfaqanchor7)

- [Come è possibile dichiarare inoltrare un'interfaccia con attributi?](#vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface)

- [È possibile usare gli attributi in una classe derivata da una classe che usa anche attributi?](#vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor)

##  <a name="vcconattributeprogrammmingfaqanchor1"></a> Che cos'è un valore HRESULT?

Un valore HRESULT è un tipo di dati semplice che viene spesso utilizzato come valore restituito da attributi e ATL in generale. La tabella seguente descrive i diversi valori. Altri valori sono contenuti nel file Winerror. h file di intestazione.

|nome|Descrizione|Valore|
|----------|-----------------|-----------|
|S_OK|Operazione riuscita|0x00000000|
|E_UNEXPECTED|Errore imprevisto|0x8000ffff|
|E_NOTIMPL|Non implementato|0x80004001|
|E_OUTOFMEMORY|Non è riuscito ad allocare sufficiente memoria|0x8007000E|
|E_INVALIDARG|Uno o più argomenti non sono validi|0x80070057|
|E_NOINTERFACE|Interfaccia non supportata|0x80004002|
|E_POINTER|Puntatore non valido|0x80004003|
|E_HANDLE|Handle non valido|0x80070006|
|E_ABORT|Operazione interrotta|0x80004004|
|E_FAIL|Errore non specificato|0x80004005|
|E_ACCESSDENIED|Accesso generale negato|0x80070005|

##  <a name="vcconattributeprogrammmingfaqanchor2"></a> Quando è necessario specificare il nome del parametro per un attributo?

Nella maggior parte dei casi, se l'attributo ha un solo parametro, tale parametro è denominato. Questo nome non è obbligatorio quando si inserisce l'attributo nel codice. Ad esempio, il seguente utilizzo del [aggregabile](aggregatable.md) attributo:

```cpp
[coclass, aggregatable(value=allowed)]
class CMyClass
{
// The class declaration
};
```

è esattamente identico:

```cpp
[coclass, aggregatable(allowed)]
class CMyClass
{
// The class declaration
};
```

Tuttavia, gli attributi seguenti presentano parametri senza nome, singoli:

||||
|-|-|-|
|[call_as](call-as.md)|[case](case-cpp.md)|[cpp_quote](cpp-quote.md)|
|[default](default-cpp.md)|[defaultvalue](defaultvalue.md)|[defaultvtable](defaultvtable.md)|
|[emitidl](emitidl.md)|[entry](entry.md)|[first_is](first-is.md)|
|[helpcontext](helpcontext.md)|[helpfile](helpfile.md)|[helpstring](helpstring.md)|
|[helpstringcontext](helpstringcontext.md)|[helpstringdll](helpstringdll.md)|[ID](id.md)|
|[iid_is](iid-is.md)|[import](import.md)|[importlib](importlib.md)|
|[include](include-cpp.md)|[includelib](includelib-cpp.md)|[last_is](last-is.md)|
|[length_is](length-is.md)|[max_is](max-is.md)|[no_injected_text](no-injected-text.md)|
|[pointer_default](pointer-default.md)|[pragma](pragma.md)|[restricted](restricted.md)|
|[size_is](size-is.md)|[source](source-cpp.md)|[switch_is](switch-is.md)|
|[switch_type](switch-type.md)|[transmit_as](transmit-as.md)|[wire_marshal](wire-marshal.md)|

##  <a name="vcconattributeprogrammmingfaqanchor3"></a> È possibile usare i commenti in un blocco di attributi?

È possibile usare i commenti a riga singola sia più righe all'interno di un blocco di attributi. Tuttavia, è possibile usare entrambi gli stili di commento tra parentesi che contiene i parametri a un attributo.

È consentita la seguente:

```cpp
[ coclass, progid("MyClass.CMyClass.1"), /* Multiple-line
                                       comment */
   threading("both") // Single-line comment
]
```

Di seguito non è consentito:

```cpp
[ coclass, progid("MyClass.CMyClass.1" /* Multiple-line comment */ ), threading("both" // Single-line comment)  
]
```

##  <a name="vcconattributeprogrammmingfaqanchor4"></a> Interagiscono di attributi con ereditarietà

È possibile ereditare classi sia con gli attributi e privi di attributi da altre classi, che potrebbero stessi essere attribuiti o non. Il risultato della derivazione da una classe con attributa è quello utilizzato per la derivazione dalla classe dopo che il provider di attributi ha trasformato il relativo codice. Gli attributi non vengono trasmessi alle classi derivate mediante ereditarietà C++. Un provider di attributi Trasforma solo codice in prossimità dei relativi attributi.

##  <a name="vcconattributeprogrammmingfaqanchor5"></a> Come è possibile usare gli attributi in un progetto ATL senza attributo?

Potrebbe essere un progetto ATL senza attributo, che dispone di un file con estensione idl, e si consiglia di iniziare ad aggiungere oggetti con attributi. In questo caso, usare il **Creazione guidata aggiunta classe** per fornire il codice.

##  <a name="vcconattributeprogrammmingfaqanchor6"></a> Come è possibile usare un file con estensione idl in un progetto con attributo?

Potrebbe essere un file con estensione idl che si desidera utilizzare nel progetto ATL con attributi. In questo caso, si utilizzerebbe il [importidl](importidl.md) dell'attributo, compilare il file con estensione idl in un file con estensione h (vedere la [MIDL Property Pages](../../ide/midl-property-pages.md) del progetto **pagine delle proprietà** nella finestra di dialogo), e quindi includere il file con estensione h nel progetto.

##  <a name="vcconattributeprogrammmingfaqanchor7"></a> È possibile modificare il codice che viene inserito da un attributo?

Alcuni attributi di inseriscono codice nel progetto. È possibile visualizzare il codice inserito utilizzando il [/Fx](../../build/reference/fx-merge-injected-code.md) opzione del compilatore. È anche possibile copiare codice inserito nel file e incollarlo nel codice sorgente. In questo modo è possibile modificare il comportamento dell'attributo. Tuttavia, è possibile modificare altre parti del codice nonché.

L'esempio seguente è il risultato della copia il codice inserito in un file di codice sorgente:

```cpp
// attr_injected.cpp
// compile with: comsupp.lib
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>

[ module(name="MyLibrary") ];

// ITestTest
[
   object, uuid("DADECE00-0FD2-46F1-BFD3-6A0579CA1BC4"), dual, helpstring("ITestTest Interface"), pointer_default(unique)  
]

__interface ITestTest : IDispatch {
   [id(1), helpstring("method DoTest")]
   HRESULT DoTest([in] BSTR str);
};

// _ITestTestEvents
[
   uuid("12753B9F-DEF4-49b0-9D52-A79C371F2909"), dispinterface, helpstring("_ITestTestEvents Interface")  
]

__interface _ITestTestEvents {
   [id(1), helpstring("method BeforeChange")] HRESULT BeforeChange([in] BSTR str, [in,out] VARIANT_BOOL* bCancel);
};

// CTestTest
[
   coclass, threading(apartment), vi_progid("TestATL1.TestTest"), progid("TestATL1.TestTest.1"), version(1.0), uuid("D9632007-14FA-4679-9E1C-28C9A949E784"), // this line would be commented out from original file
   // event_source("com"), // this line would be added to support injected code
   source(_ITestTestEvents), helpstring("TestTest Class")  
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

##  <a name="vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface"></a> Come è possibile dichiarare inoltrare un'interfaccia con attributi?

Se si desidera rendere una dichiarazione con prototipo di un'interfaccia con attributa, è necessario applicare gli stessi attributi per la dichiarazione con prototipo che applica alla dichiarazione di interfaccia effettivo. È necessario applicare anche il [esportare](export.md) dell'attributo di dichiarazione con prototipo.

##  <a name="vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor"></a> È possibile usare gli attributi in una classe derivata da una classe che usa anche attributi?

No, l'uso degli attributi in una classe derivata da una classe che usa anche gli attributi non è supportato.

## <a name="see-also"></a>Vedere anche

[Attributi di C++ per COM e .NET](cpp-attributes-com-net.md)
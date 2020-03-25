---
title: Domande frequenti sulla programmazione con attributi
ms.date: 10/02/2018
ms.topic: conceptual
helpviewer_keywords:
- attributed programming
- attributes [C++/CLI], frequently asked questions
- FAQs (frequently asked questions), attributed programming [C++]
ms.assetid: a1b8349f-7f51-43c4-95ea-4edb6e5f243f
ms.openlocfilehash: 4191704da2fdac849ac1ce97692c2421ba7cda41
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168383"
---
# <a name="attribute-programming-faq"></a>Domande frequenti sulla programmazione con attributi

Questo argomento risponde alle seguenti domande frequenti:

- [Che cos'è un HRESULT?](#vcconattributeprogrammmingfaqanchor1)

- [Quando è necessario specificare il nome del parametro per un attributo?](#vcconattributeprogrammmingfaqanchor2)

- [È possibile usare I commenti in un blocco di attributi?](#vcconattributeprogrammmingfaqanchor3)

- [In che modo gli attributi interagiscono con l'ereditarietà?](#vcconattributeprogrammmingfaqanchor4)

- [Come è possibile utilizzare gli attributi in un progetto ATL senza attributi?](#vcconattributeprogrammmingfaqanchor5)

- [Come è possibile utilizzare un file con estensione IDL in un progetto con attributi?](#vcconattributeprogrammmingfaqanchor6)

- [È possibile modificare il codice inserito da un attributo?](#vcconattributeprogrammmingfaqanchor7)

- [In che modo è possibile dichiarare un'interfaccia con attributi?](#vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface)

- [È possibile usare gli attributi in una classe derivata da una classe che usa anche gli attributi?](#vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor)

##  <a name="what-is-an-hresult"></a><a name="vcconattributeprogrammmingfaqanchor1"></a>Che cos'è un HRESULT?

HRESULT è un tipo di dati semplice utilizzato spesso come valore restituito da attributi e ATL in generale. Nella tabella seguente vengono descritti i diversi valori. Nel file di intestazione Winerror. h sono contenuti più valori.

|Nome|Descrizione|valore|
|----------|-----------------|-----------|
|S_OK|Operazione riuscita|0x00000000|
|E_UNEXPECTED|Errore imprevisto|0x8000FFFF|
|E_NOTIMPL|Non implementato|0x80004001|
|E_OUTOFMEMORY|Non è stato possibile allocare la memoria necessaria|0x8007000E|
|E_INVALIDARG|Uno o più argomenti non sono validi|0x80070057|
|E_NOINTERFACE|Questa interfaccia non è supportata|0x80004002|
|E_POINTER|Puntatore non valido|0x80004003|
|E_HANDLE|Handle non valido|0x80070006|
|E_ABORT|Operazione interrotta|0x80004004|
|E_FAIL|Errore non specificato|0x80004005|
|E_ACCESSDENIED|Errore generale di accesso negato|0x80070005|

##  <a name="when-do-i-have-to-specify-the-parameter-name-for-an-attribute"></a><a name="vcconattributeprogrammmingfaqanchor2"></a>Quando è necessario specificare il nome del parametro per un attributo?

Nella maggior parte dei casi, se l'attributo ha un solo parametro, il nome del parametro è. Questo nome non è obbligatorio quando si inserisce l'attributo nel codice. Ad esempio, il seguente utilizzo dell'attributo [aggregable](aggregatable.md) :

```cpp
[coclass, aggregatable(value=allowed)]
class CMyClass
{
// The class declaration
};
```

è esattamente uguale a:

```cpp
[coclass, aggregatable(allowed)]
class CMyClass
{
// The class declaration
};
```

Tuttavia, per gli attributi seguenti sono disponibili singoli parametri senza nome:

||||
|-|-|-|
|[call_as](call-as.md)|[case](case-cpp.md)|[cpp_quote](cpp-quote.md)|
|[default](default-cpp.md)|[defaultvalue](defaultvalue.md)|[defaultvtable](defaultvtable.md)|
|[emitidl](emitidl.md)|[entry](entry.md)|[first_is](first-is.md)|
|[helpcontext](helpcontext.md)|[helpfile](helpfile.md)|[helpstring](helpstring.md)|
|[helpstringcontext](helpstringcontext.md)|[helpstringdll](helpstringdll.md)|[id](id.md)|
|[iid_is](iid-is.md)|[import](import.md)|[importlib](importlib.md)|
|[include](include-cpp.md)|[includelib](includelib-cpp.md)|[last_is](last-is.md)|
|[length_is](length-is.md)|[max_is](max-is.md)|[no_injected_text](no-injected-text.md)|
|[pointer_default](pointer-default.md)|[pragma](pragma.md)|[restricted](restricted.md)|
|[size_is](size-is.md)|[source](source-cpp.md)|[switch_is](switch-is.md)|
|[switch_type](switch-type.md)|[transmit_as](transmit-as.md)|[wire_marshal](wire-marshal.md)|

##  <a name="can-i-use-comments-in-an-attribute-block"></a><a name="vcconattributeprogrammmingfaqanchor3"></a>È possibile usare I commenti in un blocco di attributi?

All'interno di un blocco di attributi è possibile utilizzare sia commenti a riga singola che a più righe. Tuttavia, non è possibile utilizzare uno stile di commento all'interno delle parentesi che contiene i parametri di un attributo.

Sono consentiti gli elementi seguenti:

```cpp
[ coclass, progid("MyClass.CMyClass.1"), /* Multiple-line
                                       comment */
   threading("both") // Single-line comment
]
```

Non sono consentiti gli elementi seguenti:

```cpp
[ coclass, progid("MyClass.CMyClass.1" /* Multiple-line comment */ ), threading("both" // Single-line comment)
]
```

##  <a name="how-do-attributes-interact-with-inheritance"></a><a name="vcconattributeprogrammmingfaqanchor4"></a>In che modo gli attributi interagiscono con l'ereditarietà?

È possibile ereditare le classi con attributi e senza attributi da altre classi, che possono essere attribuite o meno. Il risultato della derivazione da una classe con attributi equivale alla derivazione da tale classe dopo che il provider di attributi ha trasformato il codice. Gli attributi non vengono trasmessi alle classi derivate tramite C++ l'ereditarietà. Un provider di attributi trasforma solo il codice nella vicinanza dei relativi attributi.

##  <a name="how-can-i-use-attributes-in-a-nonattributed-atl-project"></a><a name="vcconattributeprogrammmingfaqanchor5"></a>Come è possibile utilizzare gli attributi in un progetto ATL senza attributi?

È possibile che sia presente un progetto ATL senza attributi, che include un file con estensione IDL, ed è possibile che si desideri iniziare ad aggiungere oggetti con attributi. In questo caso, utilizzare la **procedura guidata Aggiungi classe** per fornire il codice.

##  <a name="how-can-i-use-an-idl-file-in-an-attributed-project"></a><a name="vcconattributeprogrammmingfaqanchor6"></a>Come è possibile utilizzare un file con estensione IDL in un progetto con attributi?

È possibile che si disponga di un file con estensione IDL che si desidera utilizzare nel progetto con attributi ATL. In questo caso, usare l'attributo [importidl](importidl.md) , compilare il file IDL in un file con estensione h (vedere le pagine delle [proprietà MIDL](../../build/reference/midl-property-pages.md) nella finestra di dialogo **pagine delle proprietà** del progetto), quindi includere il file con estensione h nel progetto.

##  <a name="can-i-modify-code-that-is-injected-by-an-attribute"></a><a name="vcconattributeprogrammmingfaqanchor7"></a>È possibile modificare il codice inserito da un attributo?

Alcuni attributi inseriscono codice nel progetto. È possibile visualizzare il codice inserito usando l'opzione del compilatore [/FX](../../build/reference/fx-merge-injected-code.md) . È anche possibile copiare il codice dal file inserito e incollarlo nel codice sorgente. In questo modo è possibile modificare il comportamento dell'attributo. Potrebbe tuttavia essere necessario modificare anche altre parti del codice.

L'esempio seguente è il risultato della copia del codice inserito in un file di codice sorgente:

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

##  <a name="how-can-i-forward-declare-an-attributed-interface"></a><a name="vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface"></a>In che modo è possibile dichiarare un'interfaccia con attributi?

Se si intende creare una dichiarazione con l'interfaccia con attributi, è necessario applicare gli stessi attributi alla dichiarazione con estensione che si applica alla dichiarazione di interfaccia effettiva. È inoltre necessario applicare l'attributo [Export](export.md) alla dichiarazione con estensione.

##  <a name="can-i-use-attributes-on-a-class-derived-from-a-class-that-also-uses-attributes"></a><a name="vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor"></a>È possibile usare gli attributi in una classe derivata da una classe che usa anche gli attributi?

No, l'uso di attributi in una classe derivata da una classe che usa anche attributi non è supportato.

## <a name="see-also"></a>Vedere anche

[Attributi di C++ per COM e .NET](cpp-attributes-com-net.md)

---
title: Domande frequenti sulla programmazione con attributi
ms.date: 10/02/2018
ms.topic: conceptual
helpviewer_keywords:
- attributed programming
- attributes [C++/CLI], frequently asked questions
- FAQs (frequently asked questions), attributed programming [C++]
ms.assetid: a1b8349f-7f51-43c4-95ea-4edb6e5f243f
ms.openlocfilehash: 6c1762994d2cb109e86397bb0a5db1258cf33be2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376058"
---
# <a name="attribute-programming-faq"></a>Domande frequenti sulla programmazione con attributi

In questo argomento vengono fornite le risposte alle domande frequenti seguenti:This topic answers the following frequently asked questions:

- [Che cos'è un HRESULT?](#vcconattributeprogrammmingfaqanchor1)

- [Quando è necessario specificare il nome del parametro per un attributo?](#vcconattributeprogrammmingfaqanchor2)

- [È possibile utilizzare i commenti in un blocco di attributi?](#vcconattributeprogrammmingfaqanchor3)

- [In che modo gli attributi interagiscono con l'ereditarietà?](#vcconattributeprogrammmingfaqanchor4)

- [Come è possibile utilizzare gli attributi in un progetto ATL senza attributi?](#vcconattributeprogrammmingfaqanchor5)

- [Come posso usare un file .idl in un progetto con attributi?](#vcconattributeprogrammmingfaqanchor6)

- [È possibile modificare il codice inserito da un attributo?](#vcconattributeprogrammmingfaqanchor7)

- [Come posso inoltrare dichiarare un'interfaccia con attributi?](#vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface)

- [È possibile utilizzare gli attributi in una classe derivata da una classe che utilizza anche gli attributi?](#vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor)

## <a name="what-is-an-hresult"></a><a name="vcconattributeprogrammmingfaqanchor1"></a>Che cos'è un HRESULT?

Un HRESULT è un tipo di dati semplice che viene spesso utilizzato come valore restituito dagli attributi e ATL in generale. Nella tabella seguente vengono descritti i vari valori. Altri valori sono contenuti nel file di intestazione winerror.h.

|Nome|Descrizione|Valore|
|----------|-----------------|-----------|
|S_OK|Operazione riuscita|0x00000000|
|E_UNEXPECTED|Errore imprevisto|0x8000FFFF|
|E_NOTIMPL|Non implementato|0x80004001|
|E_OUTOFMEMORY|Impossibile allocare la memoria necessaria|0x8007000E|
|E_INVALIDARG|Uno o più argomenti non sono validi|0x80070057|
|E_NOINTERFACE|Nessuna interfaccia supportata|0x80004002|
|E_POINTER|Puntatore non valido|0x80004003|
|E_HANDLE|Handle non valido|0x80070006|
|E_ABORT|Operazione interrotta|0x80004004|
|E_FAIL|Errore non specificato|0x80004005|
|E_ACCESSDENIED|Errore generale di accesso negato|0x80070005|

## <a name="when-do-i-have-to-specify-the-parameter-name-for-an-attribute"></a><a name="vcconattributeprogrammmingfaqanchor2"></a>Quando è necessario specificare il nome del parametro per un attributo?

Nella maggior parte dei casi, se l'attributo dispone di un singolo parametro, tale parametro viene denominato. Questo nome non è necessario quando si inserisce l'attributo nel codice. Ad esempio, il seguente utilizzo dell'attributo [aggregabile:](aggregatable.md)

```cpp
[coclass, aggregatable(value=allowed)]
class CMyClass
{
// The class declaration
};
```

è esattamente lo stesso di:

```cpp
[coclass, aggregatable(allowed)]
class CMyClass
{
// The class declaration
};
```

Tuttavia, i seguenti attributi hanno singoli parametri senza nome:

||||
|-|-|-|
|[call_as](call-as.md)|[Caso](case-cpp.md)|[cpp_quote](cpp-quote.md)|
|[Predefinito](default-cpp.md)|[Defaultvalue](defaultvalue.md)|[defaultvtable](defaultvtable.md)|
|[emitidl](emitidl.md)|[Voce](entry.md)|[first_is](first-is.md)|
|[helpcontext](helpcontext.md)|[Helpfile](helpfile.md)|[helpstring](helpstring.md)|
|[helpstringcontext](helpstringcontext.md)|[helpstringdll](helpstringdll.md)|[id](id.md)|
|[iid_is](iid-is.md)|[Importazione](import.md)|[importlib](importlib.md)|
|[Includono](include-cpp.md)|[includelib](includelib-cpp.md)|[last_is](last-is.md)|
|[length_is](length-is.md)|[max_is](max-is.md)|[no_injected_text](no-injected-text.md)|
|[pointer_default](pointer-default.md)|[pragma](pragma.md)|[Limitato](restricted.md)|
|[size_is](size-is.md)|[fonte](source-cpp.md)|[switch_is](switch-is.md)|
|[switch_type](switch-type.md)|[transmit_as](transmit-as.md)|[wire_marshal](wire-marshal.md)|

## <a name="can-i-use-comments-in-an-attribute-block"></a><a name="vcconattributeprogrammmingfaqanchor3"></a>È possibile utilizzare i commenti in un blocco di attributi?

È possibile utilizzare sia commenti a riga singola che a più righe all'interno di un blocco di attributi. Tuttavia, non è possibile utilizzare uno stile di commento all'interno delle parentesi che contengono i parametri di un attributo.

È consentito quanto segue:

```cpp
[ coclass, progid("MyClass.CMyClass.1"), /* Multiple-line
                                       comment */
   threading("both") // Single-line comment
]
```

Non è consentito quanto segue:

```cpp
[ coclass, progid("MyClass.CMyClass.1" /* Multiple-line comment */ ), threading("both" // Single-line comment)
]
```

## <a name="how-do-attributes-interact-with-inheritance"></a><a name="vcconattributeprogrammmingfaqanchor4"></a>In che modo gli attributi interagiscono con l'ereditarietà?

È possibile ereditare sia le classi con attributi che le classi senza attributi da altre classi, che a loro volta possono essere attribuite o meno. Il risultato della derivazione da una classe con attributi è lo stesso della derivazione da tale classe dopo che il provider di attributi ha trasformato il codice. Gli attributi non vengono trasmessi alle classi derivate tramite l'ereditarietà di C. Un provider di attributi trasforma il codice solo nelle vicinanze dei relativi attributi.

## <a name="how-can-i-use-attributes-in-a-nonattributed-atl-project"></a><a name="vcconattributeprogrammmingfaqanchor5"></a>Come è possibile utilizzare gli attributi in un progetto ATL senza attributi?

È possibile che si disponga di un progetto ATL senza attributi, che dispone di un file IDL, e si consiglia di iniziare ad aggiungere oggetti con attributi. In questo caso, utilizzare **l'Aggiunta guidata classe** per fornire il codice.

## <a name="how-can-i-use-an-idl-file-in-an-attributed-project"></a><a name="vcconattributeprogrammmingfaqanchor6"></a>Come posso usare un file .idl in un progetto con attributi?

È possibile che si disponga di un file IDL che si desidera utilizzare nel progetto con attributi ATL. In questo caso, è necessario utilizzare l'attributo [importidl,](importidl.md) compilare il file IDL in un file con estensione h (vedere le [pagine delle proprietà MIDL](../../build/reference/midl-property-pages.md) nella finestra di dialogo **Pagine delle proprietà** del progetto) e quindi includere il file con estensione h nel progetto.

## <a name="can-i-modify-code-that-is-injected-by-an-attribute"></a><a name="vcconattributeprogrammmingfaqanchor7"></a>È possibile modificare il codice inserito da un attributo?

Alcuni attributi inseriscono codice nel progetto. È possibile visualizzare il codice inserito utilizzando l'opzione del compilatore [/Fx.](../../build/reference/fx-merge-injected-code.md) È anche possibile copiare il codice dal file inserito e incollarlo nel codice sorgente. In questo modo è possibile modificare il comportamento dell'attributo. Tuttavia, potrebbe essere necessario modificare anche altre parti del codice.

L'esempio seguente è il risultato della copia del codice inserito in un file di codice sorgente:The following sample is the result of copying injected code into a source code file:

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

## <a name="how-can-i-forward-declare-an-attributed-interface"></a><a name="vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface"></a>Come posso inoltrare dichiarare un'interfaccia con attributi?

Se si intende creare una dichiarazione con prototipo di un'interfaccia con attributi, è necessario applicare gli stessi attributi alla dichiarazione con prototipo applicata alla dichiarazione di interfaccia effettiva. È inoltre necessario applicare l'attributo [export](export.md) alla dichiarazione con prototipo.

## <a name="can-i-use-attributes-on-a-class-derived-from-a-class-that-also-uses-attributes"></a><a name="vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor"></a>È possibile utilizzare gli attributi in una classe derivata da una classe che utilizza anche gli attributi?

No, l'utilizzo di attributi in una classe derivata da una classe che utilizza anche attributi non è supportato.

## <a name="see-also"></a>Vedere anche

[Attributi di C++ per COM e .NET](cpp-attributes-com-net.md)

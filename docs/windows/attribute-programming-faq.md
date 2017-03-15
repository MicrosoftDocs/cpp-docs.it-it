---
title: "Attribute Programming FAQ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributed programming"
  - "attributes [C++], frequently asked questions"
  - "FAQs (frequently asked questions), attributed programming [C++]"
ms.assetid: a1b8349f-7f51-43c4-95ea-4edb6e5f243f
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Attribute Programming FAQ
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono fornite risposte alle domande frequenti:  
  
-   [Qual è un HRESULT?](#vcconattributeprogrammmingfaqanchor1)  
  
-   [Quando è specificare il nome del parametro per un attributo?](#vcconattributeprogrammmingfaqanchor2)  
  
-   [È possibile utilizzare i commenti in un blocco di attributi?](#vcconattributeprogrammmingfaqanchor3)  
  
-   [come gli attributi interagiscono con ereditarietà?](#vcconattributeprogrammmingfaqanchor4)  
  
-   [Come è possibile utilizzare gli attributi in un progetto senza attributi ATL?](#vcconattributeprogrammmingfaqanchor5)  
  
-   [Come è possibile utilizzare un file idl in un progetto con attributi?](#vcconattributeprogrammmingfaqanchor6)  
  
-   [È possibile modificare il codice che verrà inserito da un attributo?](#vcconattributeprogrammmingfaqanchor7)  
  
-   [Come è possibile inoltrare dichiaro un'interfaccia con attributi?](#vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface)  
  
-   [È possibile utilizzare gli attributi in una classe derivata da una classe che utilizza gli attributi?](#vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor)  
  
##  <a name="vcconattributeprogrammmingfaqanchor1"></a> Qual è un HRESULT?  
 `HRESULT` è un tipo di dati semplice che viene spesso utilizzato come valore restituito dagli attributi e da ATL in generale.  Nella tabella seguente vengono descritti i vari valori.  Più valori sono contenuti nel file di intestazione winerror.h.  
  
|Nome|Descrizione|Valore|  
|----------|-----------------|------------|  
|S\_OK|operazione riuscita|0x00000000|  
|E\_UNEXPECTED|errore imprevisto|0x8000FFFF|  
|E\_NOTIMPL|non implementato|0x80004001|  
|E\_OUTOFMEMORY|Ha esito negativo per allocare memoria necessaria|0x8007000E|  
|E\_INVALIDARG|Uno o più argomenti non sono validi|0x80070057|  
|E\_NOINTERFACE|nessun tali interfaccia supportata|0x80004002|  
|E\_POINTER|puntatore non valido|0x80004003|  
|E\_HANDLE|handle non valide|0x80070006|  
|E\_ABORT|operazione interrotta|0x80004004|  
|E\_FAIL|errore non specificato|0x80004005|  
|E\_ACCESSDENIED|Errore di accesso negato di generale|0x80070005|  
  
##  <a name="vcconattributeprogrammmingfaqanchor2"></a> Quando è specificare il nome del parametro per un attributo?  
 Nella maggior parte dei casi, se l'attributo dispone di un solo parametro, il parametro è denominato.  Il nome non è obbligatorio quando si inserisce l'attributo nel codice.  Ad esempio, il seguente utilizzo di [cui aggregatable](../windows/aggregatable.md) attributo:  
  
```  
[coclass, aggregatable(value=allowed)]  
class CMyClass  
{  
// The class declaration  
};  
```  
  
 è esattamente lo stesso di:  
  
```  
[coclass, aggregatable(allowed)]  
class CMyClass  
{  
// The class declaration  
};  
```  
  
 tuttavia, i seguenti attributi hanno singoli, parametri senza nome:  
  
||||  
|-|-|-|  
|[call\_as](../windows/call-as.md)|[case](../windows/case-cpp.md)|[cpp\_quote](../windows/cpp-quote.md)|  
|[default](../windows/default-cpp.md)|[valore predefinito](../windows/defaultvalue.md)|[defaultvtable](../windows/defaultvtable.md)|  
|[emitidl](../windows/emitidl.md)|[voce](../windows/entry.md)|[first\_is](../windows/first-is.md)|  
|[helpcontext](../windows/helpcontext.md)|[file di](../windows/helpfile.md)|[helpstring](../windows/helpstring.md)|  
|[helpstringcontext](../windows/helpstringcontext.md)|[helpstringdll](../windows/helpstringdll.md)|[id](../windows/id.md)|  
|[iid\_is](../windows/iid-is.md)|[import](../windows/import.md)|[importlib](../windows/importlib.md)|  
|[importare](../windows/include-cpp.md)|[includelib](../windows/includelib-cpp.md)|[last\_is](../windows/last-is.md)|  
|[length\_is](../windows/length-is.md)|[max\_is](../windows/max-is.md)|[no\_injected\_text](../windows/no-injected-text.md)|  
|[pointer\_default](../windows/pointer-default.md)|[pragma](../windows/pragma.md)|[restricted](../windows/restricted.md)|  
|[size\_is](../windows/size-is.md)|[source](../windows/source-cpp.md)|[switch\_is](../windows/switch-is.md)|  
|[switch\_type](../windows/switch-type.md)|[transmit\_as](../windows/transmit-as.md)|[wire\_marshal](../windows/wire-marshal.md)|  
  
##  <a name="vcconattributeprogrammmingfaqanchor3"></a> È possibile utilizzare i commenti in un blocco di attributi?  
 È possibile utilizzare sia commenti a riga singola che su più righe all'interno di un blocco di attributi.  Tuttavia, non è possibile utilizzare qualsiasi stile del commento all'interno delle parentesi di utilizzare i parametri per un attributo.  
  
 L'esempio seguente è consentito:  
  
```  
[ coclass,  
   progid("MyClass.CMyClass.1"), /* Multiple-line  
                                       comment */  
   threading("both") // Single-line comment  
]  
```  
  
 L'esempio seguente è disattivata:  
  
```  
[ coclass,  
   progid("MyClass.CMyClass.1" /* Multiple-line comment */ ),  
   threading("both" // Single-line comment)  
]  
```  
  
##  <a name="vcconattributeprogrammmingfaqanchor4"></a> come gli attributi interagiscono con ereditarietà?  
 È possibile ereditare da classi gli attributi che senza attributi da altre classi, che possono essere stesse gli attributi o meno.  Il risultato di derivare da una classe con attributi dalla derivazione dalla classe dopo che il provider di attributo ha passato nel codice.  Gli attributi non vengono trasmessi alle classi derivate con ereditarietà di C\+\+.  Un codice di trasformazioni del provider di attributo solo in vicinanze dei relativi attributi.  
  
##  <a name="vcconattributeprogrammmingfaqanchor5"></a> Come è possibile utilizzare gli attributi in un progetto senza attributi ATL?  
 È possibile disporre di un progetto senza attributi ATL, che dispone di un file IDL e può essere opportuno avviare gli oggetti con attributi aggiunta.  In questo caso, utilizzare la procedura guidata della classe aggiunta per fornire il codice.  
  
##  <a name="vcconattributeprogrammmingfaqanchor6"></a> Come è possibile utilizzare un file idl in un progetto con attributi?  
 È possibile disporre di un file idl da utilizzare nel progetto con attributi ATL.  In questo caso, si utilizzava [importidl](../windows/importidl.md) l'attributo, compilare il file IDL a un file con estensione h \(vedere  [Pagine delle proprietà MIDL](../ide/midl-property-pages.md) nella finestra di dialogo pagine delle proprietà del progetto\) e quindi includere il file h nel progetto.  
  
##  <a name="vcconattributeprogrammmingfaqanchor7"></a> È possibile modificare il codice che verrà inserito da un attributo?  
 Alcuni attributi è invece possibile inserire il codice nel progetto.  È possibile visualizzare il codice inserito tramite [\/Fx](../build/reference/fx-merge-injected-code.md) opzione del compilatore.  È anche possibile copiare il codice dal file inserito e incollarlo nel codice sorgente.  Ciò consente di modificare il comportamento dell'attributo.  Tuttavia, potrebbe essere necessario modificare altre parti del codice anche.  
  
 Nell'esempio è il risultato di copiare il codice inserito in un file di codice sorgente:  
  
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
  
##  <a name="vcconattributeprogrammmingfaqhowcaniforwarddeclareanattributedinterface"></a> Come è possibile inoltrare dichiaro un'interfaccia con attributi?  
 Se si desidera apportare una dichiarazione con prototipo di un'interfaccia con attributi, è necessario applicare gli stessi attributi alla dichiarazione con prototipo che si applicano alla dichiarazione dell'interfaccia.  È inoltre necessario applicare [export](../windows/export.md) attributo alla dichiarazione con prototipo.  
  
##  <a name="vcconcaniuseattributesonclassderivedfromclassthatalsousesattributesanchor"></a> È possibile utilizzare gli attributi in una classe derivata da una classe che utilizza gli attributi?  
 No, utilizzando gli attributi in una classe derivata da una classe che utilizza gli attributi non è supportato.  
  
## Vedere anche  
 [Concepts](../windows/attributed-programming-concepts.md)
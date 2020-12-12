---
description: 'Altre informazioni su: com::p classe TR'
title: com::ptr Class
ms.date: 01/16/2019
ms.topic: reference
f1_keywords:
- msclr::com::ptr::ptr
- msclr::com::ptr::Attach
- msclr::com::ptr::CreateInstance
- msclr::com::ptr::Detach
- msclr::com::ptr::GetInterface
- msclr::com::ptr::QueryInterface
- msclr::com::ptr::Release
- msclr::com::ptr::operator=
- msclr::com::ptr::operator->
- msclr::com::ptr::operator!
helpviewer_keywords:
- msclr::ptr class
ms.assetid: 0144d0e4-919c-45f9-a3f8-fbc9edba32bf
ms.openlocfilehash: 73016d425d06ecbda12702afc1793a4bab81ccc7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124397"
---
# <a name="comptr-class"></a>com::ptr Class

Un wrapper per un oggetto COM che può essere utilizzato come membro di una classe CLR.  Il wrapper consente anche di automatizzare la gestione della durata dell'oggetto COM, rilasciando tutti i riferimenti di proprietà nell'oggetto quando viene chiamato il distruttore. Analogo alla [classe CComPtr](../atl/reference/ccomptr-class.md).

## <a name="syntax"></a>Sintassi

```
template<class _interface_type>
ref class ptr;
```

### <a name="parameters"></a>Parametri

*_interface_type*<br/>
Interfaccia COM.

## <a name="remarks"></a>Commenti

È possibile utilizzare `com::ptr` come variabile di funzione locale per semplificare le varie attività COM e automatizzare la gestione della durata.

Un `com::ptr` oggetto non può essere utilizzato direttamente come parametro di funzione. utilizzare invece un [operatore di riferimento di rilevamento](../extensions/tracking-reference-operator-cpp-component-extensions.md) o un [handle per l'operatore di oggetto (^)](../extensions/handle-to-object-operator-hat-cpp-component-extensions.md) .

Un oggetto `com::ptr` non può essere restituito direttamente da una funzione. utilizzare invece un handle.

## <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  La chiamata dei metodi pubblici della classe determina le chiamate all'oggetto `IXMLDOMDocument` contenuto.  Nell'esempio viene creata un'istanza di un documento XML, il documento viene completato con del codice XML semplice e vengono brevemente scorsi i nodi dell'albero del documento analizzato per stampare il contenuto XML nella console.

```cpp
// comptr.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   void LoadXml(String^ xml) {
      pin_ptr<const wchar_t> pinnedXml = PtrToStringChars(xml);
      BSTR bstr = NULL;

      try {
         // load some XML into the document
         bstr = ::SysAllocString(pinnedXml);
         if (NULL == bstr) {
            throw gcnew OutOfMemoryException;
         }
         VARIANT_BOOL bIsSuccessful = false;
         // use operator -> to call IXMODOMDocument member function
         Marshal::ThrowExceptionForHR(m_ptrDoc->loadXML(bstr, &bIsSuccessful));
      }
      finally {
         ::SysFreeString(bstr);
      }
   }

   // simplified function to write just the first xml node to the console
   void WriteXml() {
      IXMLDOMNode* pNode = NULL;

      try {
         // the first child of the document is the first real xml node
         Marshal::ThrowExceptionForHR(m_ptrDoc->get_firstChild(&pNode));
         if (NULL != pNode) {
            WriteNode(pNode);
         }
      }
      finally {
         if (NULL != pNode) {
            pNode->Release();
         }
      }
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   // simplified function that only writes the node
   void WriteNode(IXMLDOMNode* pNode) {
      BSTR bstr = NULL;

      try {
         // write out the name and text properties
         Marshal::ThrowExceptionForHR(pNode->get_nodeName(&bstr));
         String^ strName = gcnew String(bstr);
         Console::Write("<{0}>", strName);
         ::SysFreeString(bstr);
         bstr = NULL;

         Marshal::ThrowExceptionForHR(pNode->get_text(&bstr));
         Console::Write(gcnew String(bstr));
         ::SysFreeString(bstr);
         bstr = NULL;

         Console::WriteLine("</{0}>", strName);
      }
      finally {
         ::SysFreeString(bstr);
      }
   }

   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      // stream some xml into the document
      doc.LoadXml("<word>persnickety</word>");

      // write the document to the console
      doc.WriteXml();
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
}
```

```Output
<word>persnickety</word>
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|---------|-----------|
|[ptr::p TR](#ptr)|Costruisce un `com::ptr` oggetto per eseguire il wrapping di un oggetto com.|
|[ptr::~ptr](#tilde-ptr)|Distrugge un oggetto `com::ptr` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|---------|-----------|
|[ptr::Attach](#attach)|Connette un oggetto COM a un `com::ptr` .|
|[ptr::CreateInstance](#createInstance)|Crea un'istanza di un oggetto COM all'interno di un oggetto `com::ptr` .|
|[ptr::Detach](#detach)|Consente di ottenere la proprietà dell'oggetto COM, restituendo un puntatore all'oggetto.|
|[ptr::GetInterface](#getInterface)|Crea un'istanza di un oggetto COM all'interno di un oggetto `com::ptr` .|
|[ptr::QueryInterface](#queryInterface)|Esegue una query sull'oggetto COM di proprietà per un'interfaccia e connette il risultato a un altro `com::ptr` .|
|[ptr::Release](#release)|Rilascia tutti i riferimenti di proprietà nell'oggetto COM.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|---------|-----------|
|[operatore PTR:: operator-&gt;](#operator-arrow)|Operatore di accesso ai membri, usato per chiamare i metodi sull'oggetto COM di proprietà.|
|[ptr:: operator =](#operator-assign)|Connette un oggetto COM a un `com::ptr` .|
|[ptr:: operator &nbsp; bool](#operator-bool)|Operatore per `com::ptr` l'utilizzo di in un'espressione condizionale.|
|[ptr::operator!](#operator-logical-not)|Per determinare se l'oggetto COM di proprietà non è valido.|

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\com\ptr.h>

**Spazio dei nomi** msclr:: com

## <a name="ptrptr"></a><a name="ptr"></a> ptr::p TR

Restituisce un puntatore all'oggetto COM di proprietà.

```cpp
ptr();
ptr(
   _interface_type * p
);
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore a interfaccia COM.

### <a name="remarks"></a>Commenti

Il costruttore di nessun argomento viene assegnato **`nullptr`** all'handle di oggetto sottostante. Le chiamate future al `com::ptr` convalideranno l'oggetto interno e non riusciranno automaticamente fino a quando non viene creato o collegato un oggetto.

Il costruttore a un solo argomento aggiunge un riferimento all'oggetto COM, ma non rilascia il riferimento del chiamante, quindi il chiamante deve chiamare `Release` sull'oggetto com per dare effettivamente il controllo. Quando `com::ptr` viene chiamato il distruttore, i relativi riferimenti verranno rilasciati automaticamente nell'oggetto com.

`NULL`Il passaggio a questo costruttore equivale alla chiamata della versione senza argomenti.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. Viene illustrato l'utilizzo di entrambe le versioni del costruttore.

```cpp
// comptr_ptr.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // construct the internal com::ptr with a COM object
   XmlDocument(IXMLDOMDocument* pDoc) : m_ptrDoc(pDoc) {}

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;

   try {
      // create an XML DOM document object
      Marshal::ThrowExceptionForHR(CoCreateInstance(CLSID_DOMDocument30, NULL,
         CLSCTX_ALL, IID_IXMLDOMDocument, (void**)&pDoc));
      // construct the ref class with the COM object
      XmlDocument doc1(pDoc);

      // or create the class from a progid string
      XmlDocument doc2("Msxml2.DOMDocument.3.0");
   }
   // doc1 and doc2 destructors are called when they go out of scope
   // and the internal com::ptr releases its reference to the COM object
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }
   }
}
```

## <a name="ptrptr"></a><a name="tilde-ptr"></a> ptr:: ~ ptr

Distrugge un oggetto `com::ptr` .

```cpp
~ptr();
```

### <a name="remarks"></a>Commenti

In base alla distruzione, `com::ptr` rilascia tutti i riferimenti di cui è proprietario al relativo oggetto com. Supponendo che non siano presenti altri riferimenti all'oggetto COM, l'oggetto COM verrà eliminato e la relativa memoria verrà liberata.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  Nella `main` funzione, i `XmlDocument` distruttori di due oggetti verranno chiamati quando escono dall'ambito del **`try`** blocco, determinando la `com::ptr` chiamata del distruttore sottostante, rilasciando tutti i riferimenti di proprietà all'oggetto com.

```cpp
// comptr_dtor.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // construct the internal com::ptr with a COM object
   XmlDocument(IXMLDOMDocument* pDoc) : m_ptrDoc(pDoc) {}

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;

   try {
      // create an XML DOM document object
      Marshal::ThrowExceptionForHR(CoCreateInstance(CLSID_DOMDocument30, NULL,
         CLSCTX_ALL, IID_IXMLDOMDocument, (void**)&pDoc));
      // construct the ref class with the COM object
      XmlDocument doc1(pDoc);

      // or create the class from a progid string
      XmlDocument doc2("Msxml2.DOMDocument.3.0");
   }
   // doc1 and doc2 destructors are called when they go out of scope
   // and the internal com::ptr releases its reference to the COM object
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }
   }
}
```

## <a name="ptrattach"></a><a name="attach"></a> ptr:: Connetti

Connette un oggetto COM a un `com::ptr` .

```cpp
void Attach(
   _interface_type * _right
);
```

### <a name="parameters"></a>Parametri

*_right*<br/>
Puntatore all'interfaccia COM da collegare.

### <a name="exceptions"></a>Eccezioni

Se è `com::ptr` già proprietario di un riferimento a un oggetto com, `Attach` genera un'eccezione <xref:System.InvalidOperationException> .

### <a name="remarks"></a>Commenti

Una chiamata a `Attach` fa riferimento all'oggetto com, ma non rilascia il riferimento del chiamante.

Se `NULL` si passa a `Attach` , non viene eseguita alcuna azione.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. La `ReplaceDocument` funzione membro chiama prima `Release` su un oggetto di proprietà precedente e quindi chiama `Attach` per alleghiare un nuovo oggetto documento.

```cpp
// comptr_attach.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // replace currently held COM object with another one
   void ReplaceDocument(IXMLDOMDocument* pDoc) {
      // release current document object
      m_ptrDoc.Release();
      // attach the new document object
      m_ptrDoc.Attach(pDoc);
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// unmanaged function that creates a raw XML DOM Document object
IXMLDOMDocument* CreateDocument() {
   IXMLDOMDocument* pDoc = NULL;
   Marshal::ThrowExceptionForHR(CoCreateInstance(CLSID_DOMDocument30, NULL,
      CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&pDoc));
   return pDoc;
}

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;

   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      // get another document object from unmanaged function and
      // store it in place of the one held by our ref class
      pDoc = CreateDocument();
      doc.ReplaceDocument(pDoc);
      // no further need for raw object reference
      pDoc->Release();
      pDoc = NULL;
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }
   }
}
```

## <a name="ptrcreateinstance"></a><a name="createInstance"></a> ptr:: CreateInstance

Crea un'istanza di un oggetto COM all'interno di un oggetto `com::ptr` .

```cpp
void CreateInstance(
   System::String ^ progid,
   LPUNKNOWN pouter,
   DWORD cls_context
);
void CreateInstance(
   System::String ^ progid,
   LPUNKNOWN pouter
);
void CreateInstance(
   System::String ^ progid
);
void CreateInstance(
   const wchar_t * progid,
   LPUNKNOWN pouter,
   DWORD cls_context
);
void CreateInstance(
   const wchar_t * progid,
   LPUNKNOWN pouter
);
void CreateInstance(
   const wchar_t * progid
);
void CreateInstance(
   REFCLSID rclsid,
   LPUNKNOWN pouter,
   DWORD cls_context
);
void CreateInstance(
   REFCLSID rclsid,
   LPUNKNOWN pouter
);
void CreateInstance(
   REFCLSID rclsid
);
```

### <a name="parameters"></a>Parametri

*ProgID*<br/>
Stringa `ProgID`.

*pOuter*<br/>
Puntatore all'interfaccia IUnknown dell'oggetto aggregato (IUnknown di controllo). Se `pouter` non è specificato, `NULL` viene utilizzato.

*cls_context*<br/>
Contesto in cui viene eseguito il codice che gestisce l'oggetto appena creato. I valori vengono ricavati dall' `CLSCTX` enumerazione. Se `cls_context` non è specificato, viene usato il valore CLSCTX_ALL.

*rclsid*<br/>
`CLSID` associato ai dati e al codice che verranno utilizzati per creare l'oggetto.

### <a name="exceptions"></a>Eccezioni

Se è `com::ptr` già proprietario di un riferimento a un oggetto com, `CreateInstance` genera un'eccezione <xref:System.InvalidOperationException> .

Questa funzione chiama `CoCreateInstance` e USA <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> per convertire qualsiasi errore `HRESULT` in un'eccezione appropriata.

### <a name="remarks"></a>Commenti

`CreateInstance` USA `CoCreateInstance` per creare una nuova istanza dell'oggetto specificato, identificato da un ProgID o da un CLSID. Il `com::ptr` fa riferimento all'oggetto appena creato e rilascerà automaticamente tutti i riferimenti di proprietà al momento dell'eliminazione.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. I costruttori della classe usano due forme diverse di `CreateInstance` per creare l'oggetto documento da un ProgID o da un CLSID più un CLSCTX.

```cpp
// comptr_createinstance.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }
   XmlDocument(REFCLSID clsid, DWORD clsctx) {
      m_ptrDoc.CreateInstance(clsid, NULL, clsctx);
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   try {
      // create the class from a progid string
      XmlDocument doc1("Msxml2.DOMDocument.3.0");

      // or from a clsid with specific CLSCTX
      XmlDocument doc2(CLSID_DOMDocument30, CLSCTX_INPROC_SERVER);
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
}
```

## <a name="ptrdetach"></a><a name="detach"></a> ptr::D etach

Consente di ottenere la proprietà dell'oggetto COM, restituendo un puntatore all'oggetto.

```cpp
_interface_type * Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto COM.

Se non è di proprietà di alcun oggetto, viene restituito NULL.

### <a name="exceptions"></a>Eccezioni

Internamente, `QueryInterface` viene chiamato sull'oggetto com di proprietà e qualsiasi errore `HRESULT` viene convertito in un'eccezione da <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> .

### <a name="remarks"></a>Commenti

`Detach` prima aggiunge un riferimento all'oggetto COM per conto del chiamante, quindi rilascia tutti i riferimenti di proprietà di `com::ptr` .  Il chiamante deve infine rilasciare l'oggetto restituito per eliminarlo.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  La `DetachDocument` funzione membro chiama `Detach` per assegnare la proprietà dell'oggetto com e restituire un puntatore al chiamante.

```cpp
// comptr_detach.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // detach the COM object and return it
   // this releases the internal reference to the object
   IXMLDOMDocument* DetachDocument() {
      return m_ptrDoc.Detach();
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// unmanaged function that loads XML into a raw XML DOM Document object
HRESULT LoadXml(IXMLDOMDocument* pDoc, BSTR bstrXml) {
   HRESULT hr = S_OK;
   VARIANT_BOOL bSuccess;
   hr = pDoc->loadXML(bstrXml, &bSuccess);
   if (S_OK == hr && !bSuccess) {
      hr = E_FAIL;
   }
   return hr;
}

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;
   BSTR bstrXml = NULL;

   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      bstrXml = ::SysAllocString(L"<word>persnickety</word>");
      if (NULL == bstrXml) {
         throw gcnew OutOfMemoryException("bstrXml");
      }
      // detach the document object from the ref class
      pDoc = doc.DetachDocument();
      // use unmanaged function and raw object to load xml
      Marshal::ThrowExceptionForHR(LoadXml(pDoc, bstrXml));
      // release document object as the ref class no longer owns it
      pDoc->Release();
      pDoc = NULL;
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }

   }
}
```

## <a name="ptrgetinterface"></a><a name="getInterface"></a> ptr:: GetInterface

Restituisce un puntatore all'oggetto COM di proprietà.

```cpp
_interface_type * GetInterface();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto COM di proprietà.

### <a name="exceptions"></a>Eccezioni

Internamente, `QueryInterface` viene chiamato sull'oggetto com di proprietà e qualsiasi errore `HRESULT` viene convertito in un'eccezione da <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> .

### <a name="remarks"></a>Commenti

`com::ptr`Aggiunge un riferimento all'oggetto com per conto del chiamante e mantiene anche il proprio riferimento nell'oggetto com. Il chiamante deve infine rilasciare il riferimento all'oggetto restituito o non verrà mai eliminato definitivamente.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. La `GetDocument` funzione membro utilizza `GetInterface` per restituire un puntatore all'oggetto com.

```cpp
// comptr_getinterface.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // add a reference to and return the COM object
   // but keep an internal reference to the object
   IXMLDOMDocument* GetDocument() {
      return m_ptrDoc.GetInterface();
   }

   // simplified function that only writes the first node
   void WriteDocument() {
      IXMLDOMNode* pNode = NULL;
      BSTR bstr = NULL;

      try {
         // use operator -> to call XML Doc member
         Marshal::ThrowExceptionForHR(m_ptrDoc->get_firstChild(&pNode));
         if (NULL != pNode) {
            // write out the xml
            Marshal::ThrowExceptionForHR(pNode->get_nodeName(&bstr));
            String^ strName = gcnew String(bstr);
            Console::Write("<{0}>", strName);
            ::SysFreeString(bstr);
            bstr = NULL;

            Marshal::ThrowExceptionForHR(pNode->get_text(&bstr));
            Console::Write(gcnew String(bstr));
            ::SysFreeString(bstr);
            bstr = NULL;

            Console::WriteLine("</{0}>", strName);
         }
      }
      finally {
         if (NULL != pNode) {
            pNode->Release();
         }
         ::SysFreeString(bstr);
      }
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// unmanaged function that loads XML into a raw XML DOM Document object
HRESULT LoadXml(IXMLDOMDocument* pDoc, BSTR bstrXml) {
   HRESULT hr = S_OK;
   VARIANT_BOOL bSuccess;
   hr = pDoc->loadXML(bstrXml, &bSuccess);
   if (S_OK == hr && !bSuccess) {
      hr = E_FAIL;
   }
   return hr;
}

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;
   BSTR bstrXml = NULL;

   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      bstrXml = ::SysAllocString(L"<word>persnickety</word>");
      if (NULL == bstrXml) {
         throw gcnew OutOfMemoryException("bstrXml");
      }
      // detach the document object from the ref class
      pDoc = doc.GetDocument();
      // use unmanaged function and raw object to load xml
      Marshal::ThrowExceptionForHR(LoadXml(pDoc, bstrXml));
      // release reference to document object (but ref class still references it)
      pDoc->Release();
      pDoc = NULL;

      // call another function on the ref class
      doc.WriteDocument();
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }

   }
}
```

```Output
<word>persnickety</word>
```

## <a name="ptrqueryinterface"></a><a name="queryInterface"></a> ptr:: QueryInterface

Esegue una query sull'oggetto COM di proprietà per un'interfaccia e connette il risultato a un altro `com::ptr` .

```cpp
template<class _other_type>
void QueryInterface(
   ptr<_other_type> % other
);
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Oggetto `com::ptr` che otterrà l'interfaccia.

### <a name="exceptions"></a>Eccezioni

Internamente, `QueryInterface` viene chiamato sull'oggetto com di proprietà e qualsiasi errore `HRESULT` viene convertito in un'eccezione da <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> .

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per creare un wrapper COM per un'interfaccia diversa dell'oggetto COM di proprietà del wrapper corrente. Questo metodo chiama `QueryInterface` tramite l'oggetto com di proprietà per richiedere un puntatore a un'interfaccia specifica dell'oggetto com e connette il puntatore di interfaccia restituito al passato `com::ptr` .

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. La `WriteTopLevelNode` funzione membro USA `QueryInterface` per riempire un oggetto locale `com::ptr` con un oggetto `IXMLDOMNode` e quindi passa il `com::ptr` (mediante riferimento di rilevamento) a una funzione membro privata che scrive le proprietà del nome e del testo del nodo nella console.

```cpp
// comptr_queryinterface.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   void LoadXml(String^ xml) {
      pin_ptr<const wchar_t> pinnedXml = PtrToStringChars(xml);
      BSTR bstr = NULL;

      try {
         // load some XML into our document
         bstr = ::SysAllocString(pinnedXml);
         if (NULL == bstr) {
            throw gcnew OutOfMemoryException;
         }
         VARIANT_BOOL bIsSuccessful = false;
         // use operator -> to call IXMODOMDocument member function
         Marshal::ThrowExceptionForHR(m_ptrDoc->loadXML(bstr, &bIsSuccessful));
      }
      finally {
         ::SysFreeString(bstr);
      }
   }

   // write the top level node to the console
   void WriteTopLevelNode() {
      com::ptr<IXMLDOMNode> ptrNode;

      // query for the top level node interface
      m_ptrDoc.QueryInterface(ptrNode);
      WriteNode(ptrNode);
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   // simplified function that only writes the node
   void WriteNode(com::ptr<IXMLDOMNode> % node) {
      BSTR bstr = NULL;

      try {
         // write out the name and text properties
         Marshal::ThrowExceptionForHR(node->get_nodeName(&bstr));
         String^ strName = gcnew String(bstr);
         Console::Write("<{0}>", strName);
         ::SysFreeString(bstr);
         bstr = NULL;

         Marshal::ThrowExceptionForHR(node->get_text(&bstr));
         Console::Write(gcnew String(bstr));
         ::SysFreeString(bstr);
         bstr = NULL;

         Console::WriteLine("</{0}>", strName);
      }
      finally {
         ::SysFreeString(bstr);
      }
   }

   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      // stream some xml into the document
      doc.LoadXml("<word>persnickety</word>");

      // write the document to the console
      doc.WriteTopLevelNode();
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
}
```

```Output
<#document>persnickety</#document>
```

## <a name="ptrrelease"></a><a name="release"></a> ptr:: Release

Rilascia tutti i riferimenti di proprietà nell'oggetto COM.

```cpp
void Release();
```

### <a name="remarks"></a>Commenti

La chiamata di questa funzione rilascia tutti i riferimenti di proprietà nell'oggetto COM e imposta l'handle interno sull'oggetto COM su **`nullptr`** .  Se non esistono altri riferimenti sull'oggetto COM, verranno eliminati definitivamente.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  La `ReplaceDocument` funzione membro USA `Release` per rilasciare eventuali oggetti documento precedenti prima di alleghiare il nuovo documento.

```cpp
// comptr_release.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // replace currently held COM object with another one
   void ReplaceDocument(IXMLDOMDocument* pDoc) {
      // release current document object
      m_ptrDoc.Release();
      // attach the new document object
      m_ptrDoc.Attach(pDoc);
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// unmanaged function that creates a raw XML DOM Document object
IXMLDOMDocument* CreateDocument() {
   IXMLDOMDocument* pDoc = NULL;
   Marshal::ThrowExceptionForHR(CoCreateInstance(CLSID_DOMDocument30, NULL,
      CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&pDoc));
   return pDoc;
}

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;

   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      // get another document object from unmanaged function and
      // store it in place of the one held by our ref class
      pDoc = CreateDocument();
      doc.ReplaceDocument(pDoc);
      // no further need for raw object reference
      pDoc->Release();
      pDoc = NULL;
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }
   }
}
```

## <a name="ptroperator-gt"></a><a name="operator-arrow"></a> operatore PTR:: operator-&gt;

Operatore di accesso ai membri, usato per chiamare i metodi sull'oggetto COM di proprietà.

```cpp
_detail::smart_com_ptr<_interface_type> operator->();
```

### <a name="return-value"></a>Valore restituito

`smart_com_ptr`Oggetto all'oggetto com.

### <a name="exceptions"></a>Eccezioni

Internamente, `QueryInterface` viene chiamato sull'oggetto com di proprietà e qualsiasi errore `HRESULT` viene convertito in un'eccezione da <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> .

### <a name="remarks"></a>Commenti

Questo operatore consente di chiamare i metodi dell'oggetto COM di proprietà. Restituisce un oggetto temporaneo `smart_com_ptr` che gestisce automaticamente i propri `AddRef` e `Release` .

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. La `WriteDocument` funzione usa `operator->` per chiamare il `get_firstChild` membro dell'oggetto documento.

```cpp
// comptr_op_member.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // add a reference to and return the COM object
   // but keep an internal reference to the object
   IXMLDOMDocument* GetDocument() {
      return m_ptrDoc.GetInterface();
   }

   // simplified function that only writes the first node
   void WriteDocument() {
      IXMLDOMNode* pNode = NULL;
      BSTR bstr = NULL;

      try {
         // use operator -> to call XML Doc member
         Marshal::ThrowExceptionForHR(m_ptrDoc->get_firstChild(&pNode));
         if (NULL != pNode) {
            // write out the xml
            Marshal::ThrowExceptionForHR(pNode->get_nodeName(&bstr));
            String^ strName = gcnew String(bstr);
            Console::Write("<{0}>", strName);
            ::SysFreeString(bstr);
            bstr = NULL;

            Marshal::ThrowExceptionForHR(pNode->get_text(&bstr));
            Console::Write(gcnew String(bstr));
            ::SysFreeString(bstr);
            bstr = NULL;

            Console::WriteLine("</{0}>", strName);
         }
      }
      finally {
         if (NULL != pNode) {
            pNode->Release();
         }
         ::SysFreeString(bstr);
      }
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// unmanaged function that loads XML into a raw XML DOM Document object
HRESULT LoadXml(IXMLDOMDocument* pDoc, BSTR bstrXml) {
   HRESULT hr = S_OK;
   VARIANT_BOOL bSuccess;
   hr = pDoc->loadXML(bstrXml, &bSuccess);
   if (S_OK == hr && !bSuccess) {
      hr = E_FAIL;
   }
   return hr;
}

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;
   BSTR bstrXml = NULL;

   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      bstrXml = ::SysAllocString(L"<word>persnickety</word>");
      if (NULL == bstrXml) {
         throw gcnew OutOfMemoryException("bstrXml");
      }
      // detach the document object from the ref class
      pDoc = doc.GetDocument();
      // use unmanaged function and raw object to load xml
      Marshal::ThrowExceptionForHR(LoadXml(pDoc, bstrXml));
      // release reference to document object (but ref class still references it)
      pDoc->Release();
      pDoc = NULL;

      // call another function on the ref class
      doc.WriteDocument();
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }

   }
}
```

```Output
<word>persnickety</word>
```

## <a name="ptroperator"></a><a name="operator-assign"></a> ptr:: operator =

Connette un oggetto COM a un `com::ptr` .

```cpp
ptr<_interface_type> % operator=(
   _interface_type * _right
);
```

### <a name="parameters"></a>Parametri

*_right*<br/>
Puntatore all'interfaccia COM da collegare.

### <a name="return-value"></a>Valore restituito

Riferimento di traccia in `com::ptr` .

### <a name="exceptions"></a>Eccezioni

Se è `com::ptr` già proprietario di un riferimento a un oggetto com, `operator=` genera un'eccezione <xref:System.InvalidOperationException> .

### <a name="remarks"></a>Commenti

L'assegnazione di un oggetto COM a un oggetto `com::ptr` fa riferimento all'oggetto com, ma non rilascia il riferimento al chiamante.

Questo operatore ha lo stesso effetto di `Attach` .

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  La `ReplaceDocument` funzione membro chiama prima `Release` su un oggetto di proprietà precedente, quindi usa `operator=` per alleghiare un nuovo oggetto documento.

```cpp
// comptr_op_assign.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   // construct the internal com::ptr with a null interface
   // and use CreateInstance to fill it
   XmlDocument(String^ progid) {
      m_ptrDoc.CreateInstance(progid);
   }

   // replace currently held COM object with another one
   void ReplaceDocument(IXMLDOMDocument* pDoc) {
      // release current document object
      m_ptrDoc.Release();
      // attach the new document object
      m_ptrDoc = pDoc;
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// unmanaged function that creates a raw XML DOM Document object
IXMLDOMDocument* CreateDocument() {
   IXMLDOMDocument* pDoc = NULL;
   Marshal::ThrowExceptionForHR(CoCreateInstance(CLSID_DOMDocument30, NULL,
      CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&pDoc));
   return pDoc;
}

// use the ref class to handle an XML DOM Document object
int main() {
   IXMLDOMDocument* pDoc = NULL;

   try {
      // create the class from a progid string
      XmlDocument doc("Msxml2.DOMDocument.3.0");

      // get another document object from unmanaged function and
      // store it in place of the one held by the ref class
      pDoc = CreateDocument();
      doc.ReplaceDocument(pDoc);
      // no further need for raw object reference
      pDoc->Release();
      pDoc = NULL;
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
   finally {
      if (NULL != pDoc) {
         pDoc->Release();
      }
   }
}
```

## <a name="ptroperator-bool"></a><a name="operator-bool"></a> ptr:: operator bool

Operatore per `com::ptr` l'utilizzo di in un'espressione condizionale.

```cpp
operator bool();
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto COM di proprietà è valido; **`false`** in caso contrario,.

### <a name="remarks"></a>Commenti

In caso contrario, l'oggetto COM di proprietà è valido **`nullptr`** .

Questo operatore converte in `_detail_class::_safe_bool` che è più sicuro di **`bool`** perché non può essere convertito in un tipo integrale.

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. La `CreateInstance` funzione membro USA `operator bool` dopo aver creato il nuovo oggetto documento per determinare se è valido e scrive nella console, se è.

```cpp
// comptr_op_bool.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   void CreateInstance(String^ progid) {
      if (!m_ptrDoc) {
         m_ptrDoc.CreateInstance(progid);
         if (m_ptrDoc) { // uses operator bool
            Console::WriteLine("DOM Document created.");
         }
      }
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   try {
      XmlDocument doc;
      // create the instance from a progid string
      doc.CreateInstance("Msxml2.DOMDocument.3.0");
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
}
```

```Output
DOM Document created.
```

## <a name="ptroperator"></a><a name="operator-logical-not"></a> operatore PTR::

Per determinare se l'oggetto COM di proprietà non è valido.

```cpp
bool operator!();
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto COM di proprietà non è valido; **`false`** in caso contrario,.

### <a name="remarks"></a>Commenti

In caso contrario, l'oggetto COM di proprietà è valido **`nullptr`** .

### <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  La `CreateInstance` funzione membro utilizza `operator!` per determinare se un oggetto documento è già di proprietà e crea una nuova istanza solo se l'oggetto non è valido.

```cpp
// comptr_op_not.cpp
// compile with: /clr /link msxml2.lib
#include <msxml2.h>
#include <msclr\com\ptr.h>

#import <msxml3.dll> raw_interfaces_only

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace msclr;

// a ref class that uses a com::ptr to contain an
// IXMLDOMDocument object
ref class XmlDocument {
public:
   void CreateInstance(String^ progid) {
      if (!m_ptrDoc) {
         m_ptrDoc.CreateInstance(progid);
         if (m_ptrDoc) {
            Console::WriteLine("DOM Document created.");
         }
      }
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   try {
      XmlDocument doc;
      // create the instance from a progid string
      doc.CreateInstance("Msxml2.DOMDocument.3.0");
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
}
```

```Output
DOM Document created.
```

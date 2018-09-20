---
title: PTR::QueryInterface | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- ptr.QueryInterface
- ptr::QueryInterface
- msclr::com::ptr::QueryInterface
- msclr.com.ptr.QueryInterface
dev_langs:
- C++
helpviewer_keywords:
- QueryInterface method
ms.assetid: c2619517-3fde-493b-b12d-da8f62d5d803
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 789aac3872e0735fa34bf9c7d5a0cc13ccf41f05
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408375"
---
# <a name="ptrqueryinterface"></a>ptr::QueryInterface

Una query all'oggetto COM di proprietà per un'interfaccia e i risultati vengono allegati a un altro `com::ptr`.

## <a name="syntax"></a>Sintassi

```
template<class _other_type>
void QueryInterface(
   ptr<_other_type> % other
);
```

#### <a name="parameters"></a>Parametri

*other*<br/>
Il `com::ptr` che verrà visualizzato l'interfaccia.

## <a name="exceptions"></a>Eccezioni

Internamente `QueryInterface` viene chiamato su proprietà oggetto COM e qualsiasi errore `HRESULT` viene convertito in un'eccezione da <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A>.

## <a name="remarks"></a>Note

Usare questo metodo per creare un wrapper COM per un'altra interfaccia dell'oggetto COM wrapper corrente di proprietà. Questo metodo chiama `QueryInterface` tramite l'oggetto COM di proprietà per richiedere un puntatore a un'interfaccia specifica del modello COM dell'oggetto e la collega il puntatore a interfaccia restituito passato `com::ptr`.

## <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. Il `WriteTopLevelNode` funzione membro Usa `QueryInterface` per compilare una variabile locale `com::ptr` con un `IXMLDOMNode` e quindi passa il `com::ptr` (per riferimento di rilevamento) a una funzione membro privato che scrive le proprietà di nome e il testo del nodo nella console.

```
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

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\com\ptr.h >

**Namespace** msclr:: com

## <a name="see-also"></a>Vedere anche

[Membri ptr](../dotnet/ptr-members.md)<br/>
[ptr::GetInterface](../dotnet/ptr-getinterface.md)
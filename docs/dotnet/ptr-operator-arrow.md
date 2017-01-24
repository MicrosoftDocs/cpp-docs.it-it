---
title: "ptr::operator-&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr.com.ptr.operator->"
  - "ptr.operator->"
  - "ptr::operator->"
  - "msclr::com::ptr::operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr::operator->"
ms.assetid: e752b549-74ed-430d-9a60-6c8e0e441998
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ptr::operator-&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore di accesso ai membri, utilizzato per chiamare i metodi dell'oggetto COM di proprietà.  
  
## Sintassi  
  
```  
_detail::smart_com_ptr<_interface_type> operator->();  
```  
  
## Valore restituito  
 `smart_com_ptr` l'oggetto COM.  
  
## Eccezioni  
 Internamente, `QueryInterface` viene chiamato sull'oggetto COM di proprietà e qualsiasi errore `HRESULT` viene convertito in eccezione da <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A>.  
  
## Note  
 Questo operatore consente ai metodi dell'oggetto COM di proprietà.  Restituisce `smart_com_ptr` temporaneo che gestisce automaticamente propri `AddRef` e `Release`.  
  
## Esempio  
 In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto di `IXMLDOMDocument` il membro privato.  `WriteDocument` funziona utilizzare `operator->` chiamare il membro di `get_firstChild` dell'oggetto document.  
  
```  
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
  
  **\<wordpersnickety\>\<\/parola\>**   
## Requisiti  
 **Header file**\<msclr\\com\\ptr.h\>  
  
 msclr::com di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri ptr](../dotnet/ptr-members.md)
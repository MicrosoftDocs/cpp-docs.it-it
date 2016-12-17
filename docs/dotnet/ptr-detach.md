---
title: "ptr::Detach | Microsoft Docs"
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
  - "ptr.Detach"
  - "msclr.com.ptr.Detach"
  - "ptr::Detach"
  - "msclr::com::ptr::Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr::Detach"
ms.assetid: 23370c8a-8f79-4880-9fa1-46e110c1a92c
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ptr::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rinuncia alla proprietà dell'oggetto COM, restituendo un puntatore all'oggetto.  
  
## Sintassi  
  
```  
_interface_type * Detach();  
```  
  
## Valore restituito  
 Il puntatore all'oggetto COM.  
  
 Se nessun oggetto è posseduto, viene restituito NULL.  
  
## Eccezioni  
 Internamente, `QueryInterface` viene chiamato sull'oggetto COM posseduto e qualsiasi errore `HRESULT` viene convertito in eccezione da <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A>.  
  
## Note  
 `Detach` innanzitutto aggiunge un riferimento all'oggetto COM per conto del chiamante, quindi rilascia tutti i riferimenti di proprietà da `com::ptr`.  Il chiamante deve infine rilasciare l'oggetto restituito per eliminarlo.  
  
## Esempio  
 In questo esempio viene implementata una classe CLR che utilizza un `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  La funzione membro `DetachDocument` chiama `Detach` per rinunciare al possesso dell'oggetto COM e restituire un puntatore al chiamante.  
  
```  
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
  
## Requisiti  
 **File di intestazione** \<msclr\\com\\ptr.h\>  
  
 **Spazio dei nomi** msclr::com  
  
## Vedere anche  
 [Membri ptr](../dotnet/ptr-members.md)   
 [ptr::Release](../dotnet/ptr-release.md)   
 [ptr::Attach](../dotnet/ptr-attach.md)
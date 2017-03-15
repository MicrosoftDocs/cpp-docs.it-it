---
title: "com::ptr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "com::ptr"
  - "msclr::com::ptr"
  - "msclr.com.ptr"
  - "com.ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr (classe)"
ms.assetid: 0144d0e4-919c-45f9-a3f8-fbc9edba32bf
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# com::ptr Class
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un wrapper per un oggetto COM che può essere utilizzato come membro di una classe CLR.  Il wrapper consente anche di automatizzare la gestione della durata dell'oggetto COM, rilasciando tutti i riferimenti di proprietà nell'oggetto quando viene chiamato il distruttore.  Analogo a [CComPtr Class](../atl/reference/ccomptr-class.md).  
  
## Sintassi  
  
```  
template<class _interface_type>  
ref class ptr;  
```  
  
#### Parametri  
 `_interface_type`  
 Interfaccia COM.  
  
## Note  
 Un `com::ptr` può essere utilizzato come una variabile di funzione locale per semplificare le varie attività COM e automatizzare la gestione della durata.  
  
 Un `com::ptr` non può essere utilizzato direttamente come parametro di funzione; utilizzare un [Tracking Reference Operator](../windows/tracking-reference-operator-cpp-component-extensions.md) o un [Operatore handle a oggetto \(^\)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md) invece.  
  
 Un `com::ptr` non può essere restituito direttamente da una funzione; utilizzare invece un handle.  
  
## Esempio  
 In questo esempio viene implementata una classe CLR che utilizza un `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  Chiamando i metodi pubblici dei risultati della classe nelle chiamate all'oggetto `IXMLDOMDocument` contenuto.  L'esempio crea un'istanza di un documento XML, lo riempie con un certo XML semplice ed effettua una visita semplificata dei nodi nella struttura ad albero analizzata del documento per stampare XML nella console.  
  
```  
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
  
  **\<word\>persnickety\<\/word\>**   
## Requisiti  
 **File di intestazione** \<msclr\\com\\ptr.h\>  
  
 **Spazio dei nomi** msclr::com  
  
## Vedere anche  
 [Libreria di supporto per C\+\+](../dotnet/cpp-support-library.md)   
 [Membri ptr](../dotnet/ptr-members.md)
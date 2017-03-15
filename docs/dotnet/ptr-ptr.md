---
title: "ptr::ptr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ptr::ptr"
  - "ptr.ptr"
  - "msclr.com.ptr.ptr"
  - "msclr::com::ptr::ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr::ptr"
ms.assetid: 4f5883b4-7c0a-46c6-aa9f-4e49eed463eb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# ptr::ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce `com::ptr` per eseguire il wrapping di un oggetto COM.  
  
## Sintassi  
  
```  
ptr();  
ptr(  
   _interface_type * p  
);  
```  
  
#### Parametri  
 `P`  
 Puntatore a interfaccia COM.  
  
## Note  
 Il costruttore no\-pia argomento `nullptr` assegna a un oggetto sottostante.  Le chiamate successive a `com::ptr` verranno convalidati l'oggetto invisibile all'interno e avranno esito negativo fino a creare o collegare un oggetto effettivamente.  
  
 Il costruttore di un solo argomento viene aggiunto un riferimento all'oggetto COM ma non rilascia il riferimento del chiamante, il chiamante deve chiamare `Release`oggetto COM true per interrompere il controllo.  Se il distruttore di `com::ptr` viene chiamato automaticamente da eliminare i riferimenti all'oggetto COM.  
  
 Passando `NULL` a questo costruttore è lo stesso di chiamare la versione no\-pia argomento.  
  
## Esempio  
 In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto di `IXMLDOMDocument` il membro privato.  Viene illustrato l'utilizzo di entrambe le versioni del costruttore.  
  
```  
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
  
## Requisiti  
 **Header file**\<msclr\\com\\ptr.h\>  
  
 msclr::com di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri ptr](../dotnet/ptr-members.md)   
 [ptr::CreateInstance](../dotnet/ptr-createinstance.md)   
 [ptr::~ptr](../dotnet/ptr-tilde-ptr.md)
---
title: "ptr::operator! | Microsoft Docs"
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
  - "ptr::operator!"
  - "msclr::com::ptr::operator!"
  - "ptr.operator!"
  - "msclr.com.ptr.operator!"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr::operator!"
ms.assetid: 7f4101dc-2045-42e7-abb1-6a30e17147f2
caps.latest.revision: 9
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ptr::operator!
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore per determinare se l'oggetto COM di proprietà non valido.  
  
## Sintassi  
  
```  
bool operator!();  
```  
  
## Valore restituito  
 `true` se l'oggetto COM di proprietà non valido; `false` in caso contrario.  
  
## Note  
 L'oggetto COM di proprietà è valido se non è `nullptr`.  
  
## Esempio  
 In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto di `IXMLDOMDocument` il membro privato.  La funzione membro di `CreateInstance` utilizza `operator!` per determinare se un oggetto document già appartiene e solo crea una nuova istanza se l'oggetto non è valido.  
  
```  
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
  
  **Documento DOM creato.**   
## Requisiti  
 **Header file**\<msclr\\com\\ptr.h\>  
  
 msclr::com di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri ptr](../dotnet/ptr-members.md)   
 [ptr::operator bool](../dotnet/ptr-operator-bool.md)
---
title: "ptr::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ptr::operator bool"
  - "ptr.operator bool"
  - "operator bool"
  - "msclr::com::ptr::operator bool"
  - "msclr.com.ptr.operator bool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr::operator bool"
ms.assetid: 31123377-6ecd-4cef-9b75-3db3996fbcd1
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# ptr::operator bool
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore per utilizzare `com::ptr` in un'espressione condizionale.  
  
## Sintassi  
  
```  
operator bool();  
```  
  
## Valore restituito  
 `true` se l'oggetto COM di proprietà è valido; in caso contrario, `false`.  
  
## Note  
 L'oggetto COM di proprietà è valido se non è `nullptr`.  
  
 Questo operatore effettivamente converte in `_detail_class::_safe_bool` che è più sicuro di `bool` perché non può essere convertito in un tipo integrale.  
  
## Esempio  
 In questo esempio viene implementata una classe CLR che utilizza un `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  La funzione membro `CreateInstance` utilizza `operator bool` dopo aver creato il nuovo oggetto documento per determinare se è valido e lo scrive nella console se lo è.  
  
```  
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
  
  **DOM Document created.**   
## Requisiti  
 **File di intestazione** \<msclr\\com\\ptr.h\>  
  
 **Spazio dei nomi** msclr::com  
  
## Vedere anche  
 [Membri ptr](../dotnet/ptr-members.md)   
 [ptr::operator\!](../dotnet/ptr-operator-logical-not.md)
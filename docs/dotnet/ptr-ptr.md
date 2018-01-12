---
title: PTR::PTR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ptr::ptr
- ptr.ptr
- msclr.com.ptr.ptr
- msclr::com::ptr::ptr
dev_langs: C++
helpviewer_keywords: ptr::ptr
ms.assetid: 4f5883b4-7c0a-46c6-aa9f-4e49eed463eb
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 49013e718ad540e88a1cbd00eceb6bb3dc0071b8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ptrptr"></a>ptr::ptr
Costruisce un `com::ptr` per eseguire il wrapping di un oggetto COM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ptr();  
ptr(  
   _interface_type * p  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `P`  
 Puntatore a interfaccia COM.  
  
## <a name="remarks"></a>Note  
 Il costruttore senza argomenti assegna `nullptr` all'handle dell'oggetto sottostante. Le chiamate successive al `com::ptr` verrà convalidare l'oggetto interno e l'esito negativo fino a quando un oggetto viene effettivamente creato o collegato.  
  
 Il costruttore di un solo argomento aggiunge un riferimento all'oggetto COM ma non rilascia il riferimento del chiamante, pertanto il chiamante deve chiamare `Release` realmente concedere il controllo all'oggetto COM. Quando il `com::ptr`del distruttore viene chiamato rilascerà automaticamente i riferimenti all'oggetto COM.  
  
 Il passaggio di `NULL` a questo costruttore è equivalente alla chiamata la versione senza argomenti.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. Viene illustrato l'utilizzo di entrambe le versioni del costruttore.  
  
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
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\com\ptr.h >  
  
 **Namespace** msclr:: com  
  
## <a name="see-also"></a>Vedere anche  
 [Membri PTR](../dotnet/ptr-members.md)   
 [PTR::CreateInstance](../dotnet/ptr-createinstance.md)   
 [ptr::~ptr](../dotnet/ptr-tilde-ptr.md)
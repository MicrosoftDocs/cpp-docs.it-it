---
title: PTR::operator = | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- ptr.operator=
- msclr.com.ptr.operator=
- msclr::com::ptr::operator=
- ptr::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator=
ms.assetid: 58619910-46c0-4db8-b183-c811b23b2df1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c4f9e54ce2bcd6ff402e6ad239b269a3e314286d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33161031"
---
# <a name="ptroperator"></a>ptr::operator=
Associa un oggetto COM per un `com::ptr`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ptr<_interface_type> % operator=(  
   _interface_type * _right  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_right`  
 Puntatore a interfaccia COM da collegare.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento di rilevamento nel `com::ptr`.  
  
## <a name="exceptions"></a>Eccezioni  
 Se il `com::ptr` possiede già un riferimento a un oggetto COM, `operator=` genera <xref:System.InvalidOperationException>.  
  
## <a name="remarks"></a>Note  
 L'assegnazione di un oggetto COM per un `com::ptr` fa riferimento all'oggetto COM ma non comporta il rilascio di riferimento del chiamante.  
  
 Questo operatore ha lo stesso effetto `Attach`.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  Il `ReplaceDocument` chiamate prima di funzione membro `Release` su qualsiasi proprietà in precedenza oggetto e quindi utilizza `operator=` per collegare un nuovo oggetto documento.  
  
```  
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
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\com\ptr.h >  
  
 **Namespace** msclr:: com  
  
## <a name="see-also"></a>Vedere anche  
 [Membri PTR](../dotnet/ptr-members.md)   
 [PTR::Attach](../dotnet/ptr-attach.md)   
 [PTR::Detach](../dotnet/ptr-detach.md)   
 [ptr::Release](../dotnet/ptr-release.md)
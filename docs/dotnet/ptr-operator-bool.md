---
title: bool PTR::operator | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ptr::operator bool
- ptr.operator bool
- operator bool
- msclr::com::ptr::operator bool
- msclr.com.ptr.operator bool
dev_langs: C++
helpviewer_keywords: ptr::operator bool
ms.assetid: 31123377-6ecd-4cef-9b75-3db3996fbcd1
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0f197eb8c1370598695dde72d802e02153258ed8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ptroperator-bool"></a>ptr::operator bool
Operatore per l'utilizzo di `com::ptr` in un'espressione condizionale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
operator bool();  
```  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se l'oggetto COM di proprietà è valido. `false` in caso contrario.  
  
## <a name="remarks"></a>Note  
 L'oggetto COM di proprietà è valida se non è `nullptr`.  
  
 Questo operatore converte effettivamente `_detail_class::_safe_bool` che è più sicuro `bool` perché non può essere convertito in un tipo integrale.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. Il `CreateInstance` funzione membro utilizza `operator bool` dopo aver creato il nuovo oggetto documento per determinare se è valido e se è scrive nella console.  
  
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
  
```Output  
DOM Document created.  
```  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\com\ptr.h >  
  
 **Namespace** msclr:: com  
  
## <a name="see-also"></a>Vedere anche  
 [Membri PTR](../dotnet/ptr-members.md)   
 [ptr::operator!](../dotnet/ptr-operator-logical-not.md)
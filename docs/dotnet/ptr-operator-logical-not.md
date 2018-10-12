---
title: ptr::operator! | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- ptr::operator!
- msclr::com::ptr::operator!
- ptr.operator!
- msclr.com.ptr.operator!
dev_langs:
- C++
helpviewer_keywords:
- ptr::operator!
ms.assetid: 7f4101dc-2045-42e7-abb1-6a30e17147f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9a5fef363b289ba2062db6f8d903ea832bffd6e5
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161671"
---
# <a name="ptroperator"></a>ptr::operator!

Operatore per determinare se l'oggetto COM di proprietà non è valido.

## <a name="syntax"></a>Sintassi

```
bool operator!();
```

## <a name="return-value"></a>Valore restituito

**true** se l'oggetto COM di proprietà è valido. **false** in caso contrario.

## <a name="remarks"></a>Note

L'oggetto COM di proprietà è valida in caso contrario **nullptr**.

## <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`.  Il `CreateInstance` funzione membro Usa `operator!` per determinare se appartiene già a un oggetto documento e solo se l'oggetto non è valido, viene creata una nuova istanza.

```cpp
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

```Output
DOM Document created.
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\com\ptr.h >

**Namespace** msclr:: com

## <a name="see-also"></a>Vedere anche

[Membri ptr](../dotnet/ptr-members.md)<br/>
[ptr::operator bool](../dotnet/ptr-operator-bool.md)
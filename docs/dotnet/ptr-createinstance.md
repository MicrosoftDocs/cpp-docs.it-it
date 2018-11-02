---
title: ptr::CreateInstance
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- ptr.CreateInstance
- msclr::com::ptr::CreateInstance
- msclr.com.ptr.CreateInstance
- ptr::CreateInstance
helpviewer_keywords:
- ptr::CreateInstance
ms.assetid: 9e8e4c4c-1651-4839-8829-5857d74470fe
ms.openlocfilehash: 5b1a59eef44c7ad1c1903cb2cb1b75a4cbd8fabb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536175"
---
# <a name="ptrcreateinstance"></a>ptr::CreateInstance

Crea un'istanza di un oggetto COM all'interno di un `com::ptr`.

## <a name="syntax"></a>Sintassi

```
void CreateInstance(
   System::String ^ progid,
   LPUNKNOWN pouter,
   DWORD cls_context
);
void CreateInstance(
   System::String ^ progid,
   LPUNKNOWN pouter
);
void CreateInstance(
   System::String ^ progid
);
void CreateInstance(
   const wchar_t * progid,
   LPUNKNOWN pouter,
   DWORD cls_context
);
void CreateInstance(
   const wchar_t * progid,
   LPUNKNOWN pouter
);
void CreateInstance(
   const wchar_t * progid
);
void CreateInstance(
   REFCLSID rclsid,
   LPUNKNOWN pouter,
   DWORD cls_context
);
void CreateInstance(
   REFCLSID rclsid,
   LPUNKNOWN pouter
);
void CreateInstance(
   REFCLSID rclsid
);
```

#### <a name="parameters"></a>Parametri

*progid*<br/>
Stringa `ProgID`.

*pouter*<br/>
Puntatore a interfaccia IUnknown dell'oggetto di aggregazione (interfaccia IUnknown di controllo). Se `pouter` non viene specificato, `NULL` viene usato.

*cls_context*<br/>
Contesto in cui verrà eseguito il codice che gestisce l'oggetto appena creato. I valori sono ricavati dalla `CLSCTX` enumerazione. Se `cls_context` non viene specificato, il valore viene usato CLSCTX_ALL.

*rclsid*<br/>
`CLSID` associato a dati e al codice che verrà utilizzato per creare l'oggetto.

## <a name="exceptions"></a>Eccezioni

Se il `com::ptr` possiede già un riferimento a un oggetto COM `CreateInstance` genera un'eccezione <xref:System.InvalidOperationException>.

Questa funzione chiama `CoCreateInstance` e Usa <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> per convertire qualsiasi errore `HRESULT` a un'eccezione appropriata.

## <a name="remarks"></a>Note

`CreateInstance` Usa `CoCreateInstance` per creare una nuova istanza dell'oggetto specificato, identificato da un ProgID o CLSID. Il `com::ptr` fa riferimento all'oggetto appena creato e venga rilasciata automaticamente i riferimenti di tutte le proprietà di distruzione.

## <a name="example"></a>Esempio

In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto membro privato `IXMLDOMDocument`. I costruttori della classe usano due diverse forme di `CreateInstance` per creare l'oggetto del documento da un ProgID o da un CLSID e un CLSCTX.

```
// comptr_createinstance.cpp
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
   XmlDocument(REFCLSID clsid, DWORD clsctx) {
      m_ptrDoc.CreateInstance(clsid, NULL, clsctx);
   }

   // note that the destructor will call the com::ptr destructor
   // and automatically release the reference to the COM object

private:
   com::ptr<IXMLDOMDocument> m_ptrDoc;
};

// use the ref class to handle an XML DOM Document object
int main() {
   try {
      // create the class from a progid string
      XmlDocument doc1("Msxml2.DOMDocument.3.0");

      // or from a clsid with specific CLSCTX
      XmlDocument doc2(CLSID_DOMDocument30, CLSCTX_INPROC_SERVER);
   }
   catch (Exception^ e) {
      Console::WriteLine(e);
   }
}
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\com\ptr.h >

**Namespace** msclr:: com

## <a name="see-also"></a>Vedere anche

[Membri ptr](../dotnet/ptr-members.md)
---
title: "ptr::CreateInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ptr.CreateInstance"
  - "msclr::com::ptr::CreateInstance"
  - "msclr.com.ptr.CreateInstance"
  - "ptr::CreateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr::CreateInstance"
ms.assetid: 9e8e4c4c-1651-4839-8829-5857d74470fe
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# ptr::CreateInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un'istanza di un oggetto COM all'interno di `com::ptr`.  
  
## Sintassi  
  
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
  
#### Parametri  
 `progid`  
 Stringa `ProgID`.  
  
 `pouter`  
 Puntatore all'interfaccia di aggregazione dell'oggetto \(IUnknown di controllo.  Se `pouter` non viene specificato, `NULL` viene utilizzato.  
  
 `cls_context`  
 Contesto in cui il codice che gestisce l'oggetto appena creato verrà eseguita.  I valori sono derivati dall'enumerazione di `CLSCTX`.  Se `cls_context` non viene specificato, il valore CLSCTX\_ALL viene utilizzato.  
  
 `rclsid`  
 `CLSID` associato ai dati e il codice che saranno utilizzati per creare l'oggetto.  
  
## Eccezioni  
 Se `com::ptr` già possiede un riferimento a un oggetto COM, `CreateInstance` genera <xref:System.InvalidOperationException>.  
  
 Questa funzione chiama `CoCreateInstance` e utilizzare <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> convertire qualsiasi errore `HRESULT` in eccezione appropriata.  
  
## Note  
 utilizzare `CoCreateInstance` di`CreateInstance` creare una nuova istanza dell'oggetto specificato, identificata da un ProgID o da un CLSID.  `com::ptr` fa riferimento all'oggetto appena creato e rilasciato automaticamente tutti i riferimenti di proprietà alla distruzione.  
  
## Esempio  
 In questo esempio viene implementata una classe CLR che utilizza `com::ptr` per eseguire il wrapping del relativo oggetto di `IXMLDOMDocument` il membro privato.  I diversi formati di utilizzo due costruttori di classe di `CreateInstance` per creare l'oggetto documento da un ProgID o da un CLSID più un CLSCTX.  
  
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
  
## Requisiti  
 **Header file**\<msclr\\com\\ptr.h\>  
  
 msclr::com di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri ptr](../dotnet/ptr-members.md)
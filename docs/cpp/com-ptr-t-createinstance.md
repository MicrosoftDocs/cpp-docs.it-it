---
title: "_com_ptr_t::CreateInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t::CreateInstance"
  - "_com_ptr_t.CreateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateInstance (metodo)"
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# _com_ptr_t::CreateInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Crea una nuova istanza di un oggetto con un **CLSID** o **ProgID** specificato.  
  
## Sintassi  
  
```  
  
      HRESULT CreateInstance(  
   const CLSID& rclsid,  
   IUnknown* pOuter=NULL,  
   DWORD dwClsContext = CLSCTX_ALL   
) throw( );  
HRESULT CreateInstance(  
   LPCWSTR clsidString,  
   IUnknown* pOuter=NULL,  
   DWORD dwClsContext = CLSCTX_ALL   
) throw( );  
HRESULT CreateInstance(  
   LPCSTR clsidStringA,  
   IUnknown* pOuter=NULL,  
   DWORD dwClsContext = CLSCTX_ALL   
) throw( );  
```  
  
#### Parametri  
 `rclsid`  
 **CLSID** di un oggetto.  
  
 `clsidString`  
 Stringa Unicode che contiene un elemento **CLSID** \(a partire da "**{**"\) o **ProgID**.  
  
 `clsidStringA`  
 Stringa multibyte che utilizza la tabella codici ANSI e che contiene un elemento **CLSID** \(a partire da "**{**"\) o **ProgID**.  
  
 `dwClsContext`  
 Contesto del codice eseguibile in esecuzione.  
  
 `pOuter`  
 Unknown esterno di [aggregazione](../atl/aggregation.md).  
  
## Note  
 Queste funzioni membro chiamano `CoCreateInstance` per creare un nuovo oggetto COM e delle query per questo tipo di interfaccia del puntatore intelligente.  Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`.  **Release** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  Questa routine restituisce `HRESULT` per indicare l'esito positivo o negativo.  
  
-   **CreateInstance\(**  `rclsid` **,**  `dwClsContext`  **\)** Crea una nuova istanza in esecuzione di un oggetto con un **CLSID**.  
  
-   **CreateInstance\(**  `clsidString` **,**  `dwClsContext`  **\)** Crea una nuova istanza in esecuzione di un oggetto con una stringa Unicode che contiene un **CLSID** \(a partire da "**{**"\) o un **ProgID**.  
  
-   **CreateInstance\(**  `clsidStringA` **,**  `dwClsContext`  **\)** Crea una nuova istanza in esecuzione di un oggetto con una stringa di caratteri multibyte che contiene un **CLSID** \(a partire da "**{**"\) o un **ProgID**.  Chiama [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072), con l'ipotesi che la stringa si trovi nella tabella codici ANSI anziché in una tabella codici OEM.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)
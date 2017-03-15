---
title: "_com_ptr_t::GetActiveObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t.GetActiveObject"
  - "_com_ptr_t::GetActiveObject"
  - "GetActiveObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetActiveObject (metodo)"
ms.assetid: 2fa94853-0410-4620-91f2-136dae923f9f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# _com_ptr_t::GetActiveObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Esegue l'associazione a un'istanza esistente di un oggetto dato un elemento **CLSID** o **ProgID**.  
  
## Sintassi  
  
```  
  
      HRESULT GetActiveObject(  
   const CLSID& rclsid   
) throw( );  
HRESULT GetActiveObject(  
   LPCWSTR clsidString   
) throw( );  
HRESULT GetActiveObject(  
   LPCSTR clsidStringA   
) throw( );  
```  
  
#### Parametri  
 `rclsid`  
 **CLSID** di un oggetto.  
  
 `clsidString`  
 Stringa Unicode che contiene un elemento **CLSID** \(a partire da "**{**"\) o **ProgID**.  
  
 `clsidStringA`  
 Stringa multibyte che utilizza la tabella codici ANSI e che contiene un elemento **CLSID** \(a partire da "**{**"\) o **ProgID**.  
  
## Note  
 Tali funzioni membro chiamano `GetActiveObject` per recuperare un puntatore a un oggetto in esecuzione registrato con OLE e quindi per eseguire una query per il tipo di interfaccia del puntatore intelligente.  Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`.  **Release** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  Questa routine restituisce `HRESULT` per indicare l'esito positivo o negativo.  
  
-   **GetActiveObject\(**  `rclsid`  **\)** Esegue l'associazione a un'istanza esistente di un oggetto dato un elemento **CLSID**.  
  
-   **GetActiveObject\(**  `clsidString`  **\)** Esegue l'associazione a un'istanza esistente di un oggetto data una stringa Unicode che contiene un elemento **CLSID** \(a partire da "**{**"\) o **ProgID**.  
  
-   **GetActiveObject\(**  `clsidStringA`  **\)** Esegue l'associazione a un'istanza esistente di un oggetto data una stringa di caratteri multibyte che contiene un elemento **CLSID** \(a partire da "**{**"\) o **ProgID**.  Chiama [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072), con l'ipotesi che la stringa si trovi nella tabella codici ANSI anziché in una tabella codici OEM.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)
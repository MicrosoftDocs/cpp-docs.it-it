---
title: _com_ptr_t::GetActiveObject | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::GetActiveObject
dev_langs:
- C++
helpviewer_keywords:
- GetActiveObject method [C++]
ms.assetid: 2fa94853-0410-4620-91f2-136dae923f9f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4ca25ca31475d2870e62d00676e7bf3717c10fa3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32414744"
---
# <a name="comptrtgetactiveobject"></a>_com_ptr_t::GetActiveObject
**Sezione specifica Microsoft**  
  
 Associa a un'istanza esistente di un oggetto dato un **CLSID** o **ProgID**.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `rclsid`  
 Il **CLSID** di un oggetto.  
  
 `clsidString`  
 Una stringa Unicode che contiene un **CLSID** (a partire da "**{**") o un **ProgID**.  
  
 `clsidStringA`  
 Stringa multibyte, utilizzando la tabella codici ANSI, che contiene un **CLSID** (a partire da "**{**") o un **ProgID**.  
  
## <a name="remarks"></a>Note  
 Tali funzioni membro chiamano `GetActiveObject` per recuperare un puntatore a un oggetto in esecuzione registrato con OLE e quindi per eseguire una query per il tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. **Versione** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza. Questa routine restituisce `HRESULT` per indicare l'esito positivo o negativo.  
  
-   **GetActiveObject (**`rclsid`**)** associa a un'istanza esistente di un oggetto dato un **CLSID**.      
  
-   **GetActiveObject (**`clsidString`**)** associa a un'istanza esistente di un oggetto mediante una stringa Unicode che contiene un **CLSID** (inizia con "**{**") o un **ProgID**.      
  
-   **GetActiveObject (**`clsidStringA`**)** associa a un'istanza esistente di un oggetto in base a una stringa di caratteri multibyte che contiene un **CLSID** (inizia con "**{** ") o un **ProgID**.     Chiamate [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072), che si presuppone che la stringa sia la tabella codici ANSI anziché una tabella codici OEM.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
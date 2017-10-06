---
title: _com_ptr_t::CreateInstance | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::CreateInstance
dev_langs:
- C++
helpviewer_keywords:
- CreateInstance method [C++]
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 1c07f7366c76c96580fc989475bd7f5ea23a38fe
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comptrtcreateinstance"></a>_com_ptr_t::CreateInstance
**Sezione specifica Microsoft**  
  
 Crea una nuova istanza di un oggetto dato un **CLSID** o **ProgID**.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `rclsid`  
 Il **CLSID** di un oggetto.  
  
 `clsidString`  
 Una stringa Unicode che contiene un **CLSID** (a partire da "**{**") o un **ProgID**.  
  
 `clsidStringA`  
 Stringa multibyte, utilizzando la tabella codici ANSI, che contiene un **CLSID** (a partire da "**{**") o un **ProgID**.  
  
 `dwClsContext`  
 Contesto del codice eseguibile in esecuzione.  
  
 `pOuter`  
 Unknown esterno di [aggregazione](../atl/aggregation.md).  
  
## <a name="remarks"></a>Note  
 Queste funzioni membro chiamano `CoCreateInstance` per creare un nuovo oggetto COM e delle query per questo tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. **Versione** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza. Questa routine restituisce `HRESULT` per indicare l'esito positivo o negativo.  
  
-   **CreateInstance (** `rclsid` **,**`dwClsContext`**)** crea una nuova istanza in esecuzione di un oggetto dato un **CLSID**.        
  
-   **CreateInstance (** `clsidString` **,**`dwClsContext`**)** crea una nuova istanza in esecuzione di un oggetto di una stringa Unicode che contiene un **CLSID** (a partire da "**{**") o un **ProgID**.        
  
-   **CreateInstance (** `clsidStringA` **,**`dwClsContext`**)** crea una nuova istanza in esecuzione di un oggetto in base a una stringa di caratteri multibyte che contiene un ** CLSID** (a partire da "**{**") o un **ProgID**.       Chiamate [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072), che si presuppone che la stringa sia la tabella codici ANSI anziché una tabella codici OEM.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

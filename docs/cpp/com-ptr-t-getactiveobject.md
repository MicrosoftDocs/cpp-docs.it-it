---
title: _com_ptr_t::GetActiveObject | Microsoft Docs
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
ms.openlocfilehash: 392460cde35096bc1c61db4d7e6bd2143932838d
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39403995"
---
# <a name="comptrtgetactiveobject"></a>_com_ptr_t::GetActiveObject
**Sezione specifica Microsoft**  
  
 Collega a un'istanza esistente di un oggetto dato un `CLSID` o `ProgID`.  
  
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
 *rclsid*  
 Il `CLSID` di un oggetto.  
  
 *clsidString*  
 Una stringa Unicode che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.  
  
 *clsidStringA*  
 Una stringa multibyte che utilizza la tabella codici ANSI, che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.  
  
## <a name="remarks"></a>Note  
 Queste funzioni membro chiamano **GetActiveObject** per recuperare un puntatore a un oggetto in esecuzione che è stato registrato con OLE e quindi le query per questo puntatore intelligente del tipo di interfaccia. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. `Release` viene chiamato per diminuire il conteggio dei riferimenti del puntatore incapsulato in precedenza. Questa routine restituisce il valore HRESULT per indicare esito positivo o negativo.  
  
-   **GetActiveObject (**`rclsid`**)** Collega a un'istanza esistente di un oggetto dato un `CLSID`.  
  
-   **GetActiveObject (**`clsidString`**)** Collega a un'istanza esistente di un oggetto data una stringa Unicode che contiene una `CLSID` (a partire da "**{**") o un `ProgID`.  
  
-   **GetActiveObject (**`clsidStringA`**)** Collega a un'istanza esistente di un oggetto data una stringa di caratteri multibyte che contiene una `CLSID` (a partire da "**{**") o un oggetto `ProgID`. Le chiamate [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072), che presuppone che la stringa sia la tabella codici ANSI anziché una tabella codici OEM.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
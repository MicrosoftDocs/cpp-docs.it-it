---
title: _com_ptr_t::CreateInstance | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::CreateInstance
dev_langs:
- C++
helpviewer_keywords:
- CreateInstance method [C++]
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bde476af66ae0a5a560019db29d25385c718e517
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43201802"
---
# <a name="comptrtcreateinstance"></a>_com_ptr_t::CreateInstance
**Sezione specifica Microsoft**  
  
 Crea una nuova istanza di un oggetto dato un `CLSID` o `ProgID`.  
  
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
 *rclsid*  
 Il `CLSID` di un oggetto.  
  
 *clsidString*  
 Una stringa Unicode che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.  
  
 *clsidStringA*  
 Una stringa multibyte che utilizza la tabella codici ANSI, che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.  
  
 *dwClsContext*  
 Contesto del codice eseguibile in esecuzione.  
  
 *pOuter*  
 Unknown esterno di [aggregazione](../atl/aggregation.md).  
  
## <a name="remarks"></a>Note  
 Queste funzioni membro chiamano `CoCreateInstance` per creare un nuovo oggetto COM e delle query per questo tipo di interfaccia del puntatore intelligente. Il puntatore risultante viene incapsulato in questo oggetto `_com_ptr_t`. `Release` viene chiamato per diminuire il conteggio dei riferimenti del puntatore incapsulato in precedenza. Questa routine restituisce il valore HRESULT per indicare esito positivo o negativo.  
  
-   **CreateInstance (***rclsid* **,***dwClsContext***)** crea una nuova istanza in esecuzione di un oggetto dato un `CLSID`.  
  
-   **CreateInstance (***clsidString* **,***dwClsContext***)** crea una nuova istanza in esecuzione di un oggetto dato un Stringa Unicode che contiene un `CLSID` (a partire da "**{**") o un `ProgID`.  
  
-   **CreateInstance (***clsidStringA* **,***dwClsContext***)** crea una nuova istanza in esecuzione di un oggetto dato un stringa di caratteri multibyte che contiene un `CLSID` (a partire da "**{**") o un `ProgID`. Le chiamate [MultiByteToWideChar](/windows/desktop/api/stringapiset/nf-stringapiset-multibytetowidechar), che presuppone che la stringa sia la tabella codici ANSI anziché una tabella codici OEM.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
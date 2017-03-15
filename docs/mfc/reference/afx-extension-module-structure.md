---
title: Struttura AFX_EXTENSION_MODULE | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AFX_EXTENSION_MODULE
dev_langs:
- C++
helpviewer_keywords:
- AFX_EXTENSION_MODULE structure
ms.assetid: b85a989c-d0c5-4b28-b53c-dad45b75704e
caps.latest.revision: 11
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
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: f2699316266e9cc061fa898c4176e36ae8323b33
ms.lasthandoff: 02/24/2017

---
# <a name="afxextensionmodule-structure"></a>Struttura AFX_EXTENSION_MODULE
Il `AFX_EXTENSION_MODULE` viene utilizzato durante l'inizializzazione della DLL di estensione MFC per mantenere lo stato del modulo DLL di estensione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct AFX_EXTENSION_MODULE  
{  
    BOOL bInitialized;  
    HMODULE hModule;  
    HMODULE hResource;  
    CRuntimeClass* pFirstSharedClass;  
    COleObjectFactory* pFirstSharedFactory;  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 *bInitialized*  
 **TRUE** se è stato inizializzato il modulo di DLL con `AfxInitExtensionModule`.  
  
 `hModule`  
 Specifica l'handle del modulo DLL.  
  
 *hResource*  
 Specifica l'handle del modulo DLL risorsa personalizzata.  
  
 *pFirstSharedClass*  
 Un puntatore alle informazioni (i `CRuntimeClass` struttura) sulla classe di runtime prima del modulo DLL. Utilizzato per fornire l'inizio dell'elenco di classi di runtime.  
  
 *pFirstSharedFactory*  
 Puntatore al primo oggetto factory del modulo DLL (un `COleObjectFactory` oggetto). Utilizzato per fornire l'inizio dell'elenco classe factory.  
  
## <a name="remarks"></a>Note  
 Estensione MFC DLL è necessario fare due cose nella loro `DllMain` funzione:  
  
-   Chiamare [AfxInitExtensionModule](http://msdn.microsoft.com/library/15f0c820-ff34-4da6-8077-79afbbb8dac1) e controllare il valore restituito.  
  
-   Creare un **CDynLinkLibrary** se prevede di esportare la DLL dell'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetti o ha le proprie risorse personalizzati.  
  
 Il `AFX_EXTENSION_MODULE` struttura viene utilizzata per contenere una copia dell'estensione di stato del modulo DLL, tra cui la classe di oggetti di runtime che sono stati inizializzati dalla DLL di estensione come parte della costruzione di un oggetto statico normale eseguita prima una copia `DllMain` viene immesso. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL N.&2;](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_1.cpp)]  
  
 Le informazioni del modulo archiviate nel `AFX_EXTENSION_MODULE` struttura può essere copiata il **CDynLinkLibrary** oggetto. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL N.&5;](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxInitExtensionModule](http://msdn.microsoft.com/library/15f0c820-ff34-4da6-8077-79afbbb8dac1)   
 [AfxTermExtensionModule](http://msdn.microsoft.com/library/b64de402-f1e3-4c26-9823-08c07876aaaa)



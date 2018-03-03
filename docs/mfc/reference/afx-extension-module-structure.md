---
title: Struttura AFX_EXTENSION_MODULE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AFX_EXTENSION_MODULE
dev_langs:
- C++
helpviewer_keywords:
- AFX_EXTENSION_MODULE structure [MFC]
ms.assetid: b85a989c-d0c5-4b28-b53c-dad45b75704e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b4ac896fb16aa3c338cadd6273e226eebe986ae7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="afxextensionmodule-structure"></a>Struttura AFX_EXTENSION_MODULE
Il `AFX_EXTENSION_MODULE` viene utilizzata durante l'inizializzazione di DLL di estensione MFC per contenere lo stato del modulo DLL estensione MFC.  
  
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
 **TRUE** se il modulo DLL è stato inizializzato con `AfxInitExtensionModule`.  
  
 `hModule`  
 Specifica l'handle del modulo DLL.  
  
 *hResource*  
 Specifica l'handle del modulo DLL risorsa personalizzata.  
  
 *pFirstSharedClass*  
 Un puntatore alle informazioni (il `CRuntimeClass` struttura) sulla prima classe di runtime del modulo DLL. Utilizzato per fornire l'inizio dell'elenco di classi di runtime.  
  
 *pFirstSharedFactory*  
 Puntatore alla factory oggetto prima del modulo DLL (un `COleObjectFactory` oggetto). Utilizzato per fornire l'inizio dell'elenco di factory di classe.  
  
## <a name="remarks"></a>Note  
 Estensione MFC DLL è necessario eseguire due operazioni nella loro `DllMain` funzione:  
  
-   Chiamare [AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule) e controllare il valore restituito.  
  
-   Creare un **CDynLinkLibrary** oggetto se di esportazione di DLL [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetti o ha un proprio risorse personalizzate.  
  
 Il `AFX_EXTENSION_MODULE` struttura viene utilizzata per tenere una copia dell'estensione di MFC, lo stato del modulo DLL, tra cui una copia degli oggetti di classe di runtime che sono state inizializzate dalla DLL di estensione MFC come parte della costruzione di un normale oggetto statico eseguita prima `DllMain` è immesso. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#2](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_1.cpp)]  
  
 Le informazioni sul modulo archiviati nel `AFX_EXTENSION_MODULE` struttura può essere copiata il **CDynLinkLibrary** oggetto. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#5](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule)   
 [AfxTermExtensionModule](extension-dll-macros.md#afxtermextensionmodule)


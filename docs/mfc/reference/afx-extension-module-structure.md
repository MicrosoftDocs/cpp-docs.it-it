---
title: Struttura AFX_EXTENSION_MODULE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- AFX_EXTENSION_MODULE
dev_langs:
- C++
helpviewer_keywords:
- AFX_EXTENSION_MODULE structure [MFC]
ms.assetid: b85a989c-d0c5-4b28-b53c-dad45b75704e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 65f1f2a6416ef93395f7ec73b27a89bf44e2d885
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37339384"
---
# <a name="afxextensionmodule-structure"></a>Struttura AFX_EXTENSION_MODULE
Il `AFX_EXTENSION_MODULE` usato durante l'inizializzazione di DLL estensione MFC per mantenere lo stato del modulo di DLL estensione MFC.  
  
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
 TRUE se il modulo DLL è stato inizializzato con `AfxInitExtensionModule`.  
  
 *hModule*  
 Specifica l'handle del modulo DLL.  
  
 *hResource*  
 Specifica l'handle del modulo DLL risorsa personalizzata.  
  
 *pFirstSharedClass*  
 Un puntatore alle informazioni (i `CRuntimeClass` struttura) sulla classe di runtime prima del modulo DLL. Utilizzato per fornire l'inizio dell'elenco di classi di runtime.  
  
 *pFirstSharedFactory*  
 Un puntatore alla factory di oggetto prima del modulo DLL (un `COleObjectFactory` oggetto). Utilizzato per fornire l'inizio dell'elenco di factory di classe.  
  
## <a name="remarks"></a>Note  
 MFC di estensione DLL di dover fare due cose nella loro `DllMain` funzione:  
  
-   Chiamare [AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule) e controllare il valore restituito.  
  
-   Creare un `CDynLinkLibrary` dell'oggetto se prevede di esportare il file DLL [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetti o ha un proprio risorse personalizzate.  
  
 Il `AFX_EXTENSION_MODULE` struttura viene usata per contenere una copia dell'estensione MFC lo stato del modulo DLL, tra cui una copia degli oggetti classe runtime che sono state inizializzate dalla DLL di estensione MFC come parte della costruzione di oggetti statici normali eseguita prima `DllMain` è immesso. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#2](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_1.cpp)]  
  
 Le informazioni del modulo archiviate nel `AFX_EXTENSION_MODULE` struttura può essere facilmente copiata nel `CDynLinkLibrary` oggetto. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#5](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule)   
 [AfxTermExtensionModule](extension-dll-macros.md#afxtermextensionmodule)


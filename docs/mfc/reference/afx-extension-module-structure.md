---
title: Struttura AFX_EXTENSION_MODULE | Documenti Microsoft
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
ms.openlocfilehash: e741f172d0dfe528a166fad087460fd9ae18c0f3
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951182"
---
# <a name="afxextensionmodule-structure"></a>Struttura AFX_EXTENSION_MODULE
Il `AFX_EXTENSION_MODULE` utilizzato durante l'inizializzazione della DLL di estensione MFC per contenere lo stato del modulo DLL estensione MFC.  
  
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
  
 *modulo hModule*  
 Specifica l'handle del modulo DLL.  
  
 *hResource*  
 Specifica l'handle del modulo DLL risorsa personalizzata.  
  
 *pFirstSharedClass*  
 Un puntatore alle informazioni (il `CRuntimeClass` struttura) sulla classe di runtime prima del modulo DLL. Utilizzato per fornire l'inizio dell'elenco di classi di runtime.  
  
 *pFirstSharedFactory*  
 Un puntatore al primo oggetto factory del modulo DLL (un `COleObjectFactory` oggetto). Utilizzato per fornire l'inizio dell'elenco di factory di classe.  
  
## <a name="remarks"></a>Note  
 Estensione MFC DLL è necessario eseguire due operazioni nella loro `DllMain` funzione:  
  
-   Chiamare [AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule) e controllare il valore restituito.  
  
-   Creare una `CDynLinkLibrary` dell'oggetto se prevede di esportare il file DLL [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetti o ha un proprio risorse personalizzate.  
  
 Il `AFX_EXTENSION_MODULE` struttura viene usata per contenere una copia dell'estensione MFC stato del modulo DLL, tra cui la classe di oggetti di runtime che sono state inizializzate dalla DLL di estensione MFC come parte della costruzione di un normale oggetto statico eseguita prima una copia `DllMain` è immesso. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#2](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_1.cpp)]  
  
 Le informazioni di modulo archiviate nel `AFX_EXTENSION_MODULE` struttura può essere copiata il `CDynLinkLibrary` oggetto. Ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#5](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule)   
 [AfxTermExtensionModule](extension-dll-macros.md#afxtermextensionmodule)


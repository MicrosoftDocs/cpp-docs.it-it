---
description: 'Altre informazioni su: struttura AFX_EXTENSION_MODULE'
title: Struttura AFX_EXTENSION_MODULE
ms.date: 11/04/2016
f1_keywords:
- AFX_EXTENSION_MODULE
helpviewer_keywords:
- AFX_EXTENSION_MODULE structure [MFC]
ms.assetid: b85a989c-d0c5-4b28-b53c-dad45b75704e
ms.openlocfilehash: d3a5abd449f13a06aa5d7388b2dd2926a6011973
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248229"
---
# <a name="afx_extension_module-structure"></a>Struttura AFX_EXTENSION_MODULE

`AFX_EXTENSION_MODULE`Viene utilizzato durante l'inizializzazione delle DLL di estensione MFC per mantenere lo stato del modulo DLL dell'estensione MFC.

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

*bInitialized*<br/>
TRUE se il modulo DLL è stato inizializzato con `AfxInitExtensionModule` .

*hModule*<br/>
Specifica l'handle del modulo DLL.

*hResource*<br/>
Specifica l'handle del modulo di risorse personalizzate DLL.

*pFirstSharedClass*<br/>
Puntatore alle informazioni ( `CRuntimeClass` struttura) sulla prima classe di runtime del modulo dll. Utilizzato per fornire l'inizio dell'elenco di classi di Runtime.

*pFirstSharedFactory*<br/>
Puntatore alla prima factory di oggetti del modulo DLL ( `COleObjectFactory` oggetto). Utilizzato per fornire l'inizio dell'elenco di class factory.

## <a name="remarks"></a>Commenti

Le DLL dell'estensione MFC devono eseguire due operazioni nella propria `DllMain` funzione:

- Chiamare [AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule) e controllare il valore restituito.

- Creare un `CDynLinkLibrary` oggetto se la DLL esporterà oggetti [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) o ha risorse personalizzate.

La `AFX_EXTENSION_MODULE` struttura viene utilizzata per contenere una copia dello stato del modulo DLL dell'estensione MFC, inclusa una copia degli oggetti della classe di runtime inizializzati dalla DLL dell'estensione MFC come parte della normale costruzione di oggetti statici eseguita prima che `DllMain` venga immesso. Ad esempio:

[!code-cpp[NVC_MFC_DLL#2](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_1.cpp)]

Le informazioni sul modulo archiviate nella `AFX_EXTENSION_MODULE` struttura possono essere copiate nell' `CDynLinkLibrary` oggetto. Ad esempio:

[!code-cpp[NVC_MFC_DLL#5](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_2.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[AfxInitExtensionModule](extension-dll-macros.md#afxinitextensionmodule)<br/>
[AfxTermExtensionModule](extension-dll-macros.md#afxtermextensionmodule)

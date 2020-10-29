---
title: Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata
ms.date: 08/20/2019
f1_keywords:
- vc.codewiz.atl.support
helpviewer_keywords:
- MFC, ATL support
- ATL, MFC projects
ms.assetid: aa66bad0-008f-4886-94c1-2a0a0d04bce4
ms.openlocfilehash: aeac01ce58deb429f14058c06524dff53abde060
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924445"
---
# <a name="details-of-atl-support-added-by-the-atl-wizard"></a>Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata

::: moniker range=">=msvc-160"

Quando si [aggiunge il supporto ATL a un eseguibile o una DLL MFC esistente](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), in Visual Studio viene aggiunto un file di intestazione denominato *Framework. h* per impostazione predefinita, che contiene le `#include` `#define` direttive del preprocessore e per consentire l'uso di ATL nel progetto. Non vengono aggiunti file o classi aggiuntivi, come è stato fatto nelle versioni precedenti di Visual Studio.

::: moniker-end

::: moniker range="<=msvc-150"

Quando si [aggiunge il supporto ATL a un eseguibile o a una DLL MFC esistente](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), Visual Studio apporta le seguenti modifiche al progetto MFC esistente (in questo esempio, il progetto viene chiamato `MFCEXE` ):

- Vengono aggiunti due nuovi file, ovvero un file con estensione IDL e un file con estensione RGS, usati per registrare il server.

- Nell'intestazione dell'applicazione principale e nei file di implementazione (Mfcexe. h e Mfcexe. cpp) viene aggiunta una nuova classe (derivata da `CAtlMFCModule` ). Oltre alla nuova classe, il codice viene aggiunto a `InitInstance` per la registrazione. Il codice viene inoltre aggiunto alla `ExitInstance` funzione per revocare l'oggetto classe. Nel file di intestazione, infine, due nuovi file di intestazione (Initguid. h e Mfcexe_i. c) sono inclusi nel file di implementazione, dichiarando e inizializzando i nuovi GUID per la `CAtlMFCModule` classe derivata da.

- Per registrare correttamente il server, viene aggiunta una voce per il nuovo file con estensione RGS al file di risorse del progetto.

::: moniker-end

## <a name="notes-for-dll-projects"></a>Note per i progetti DLL

Quando si aggiunge il supporto ATL a un progetto DLL MFC, vengono visualizzate alcune differenze. Il codice viene aggiunto alle `DLLRegisterServer` `DLLUnregisterServer` funzioni e per la registrazione e l'annullamento della registrazione della dll. Il codice viene aggiunto anche a [DllCanUnloadNow](../../atl/reference/catldllmodulet-class.md#dllcanunloadnow) e [DllGetClassObject](../../atl/reference/catldllmodulet-class.md#dllgetclassobject).

## <a name="see-also"></a>Vedere anche

[Supporto ATL in un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigate-code-cpp.md)

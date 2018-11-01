---
title: Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.atl.support
helpviewer_keywords:
- MFC, ATL support
- ATL, MFC projects
ms.assetid: aa66bad0-008f-4886-94c1-2a0a0d04bce4
ms.openlocfilehash: 5684e1f53e9df120feca89cbb6b2ba70bd38d439
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50564775"
---
# <a name="details-of-atl-support-added-by-the-atl-wizard"></a>Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata

Quando si [Aggiungi supporto ATL a un file eseguibile MFC o una DLL esistente](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), con Visual C++, le modifiche seguenti al progetto MFC esistente (in questo esempio, il progetto viene chiamato `MFCEXE`):

- Vengono aggiunti due nuovi file (un file IDL e un file con estensione RGS, usato per registrare il server).

- Nei file di intestazione e di implementazione dell'applicazione principale (Mfcexe. h e Mfcexe. cpp), una nuova classe (derivata da `CAtlMFCModule`) viene aggiunto. Oltre alla nuova classe, viene aggiunto codice a `InitInstance` per la registrazione. Viene inoltre aggiunto codice per il `ExitInstance` funzione per revocare l'oggetto della classe. Nel file di intestazione, infine, due nuovi file di intestazione (Initguid. h e Mfcexe_i. c) sono inclusi nel file di implementazione, dichiarare e inizializzare il nuovo GUID per il `CAtlMFCModule`-classe derivata.

- Per registrare il server in modo corretto, viene aggiunta una voce per il nuovo file con estensione RGS al file di risorse del progetto.

## <a name="notes-for-dll-projects"></a>Note per i progetti DLL

Quando si aggiunge il supporto ATL a un progetto DLL MFC, si noterà alcune differenze. Viene aggiunto codice per il `DLLRegisterServer` e `DLLUnregisterServer` funzioni per la registrazione e l'annullamento della registrazione della DLL. Il codice viene inoltre aggiunto a [DllCanUnloadNow](../../atl/reference/catldllmodulet-class.md#dllcanunloadnow) e [DllGetClassObject](../../atl/reference/catldllmodulet-class.md#dllgetclassobject).

## <a name="see-also"></a>Vedere anche

[Supporto ATL in un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)

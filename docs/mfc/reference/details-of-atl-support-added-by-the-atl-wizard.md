---
title: Dettagli del supporto ATL aggiunto dalla procedura guidata ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.atl.support
dev_langs:
- C++
helpviewer_keywords:
- MFC, ATL support
- ATL, MFC projects
ms.assetid: aa66bad0-008f-4886-94c1-2a0a0d04bce4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ffe43c33e4b371f6d5dcf5dc7da327b11328af7
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121379"
---
# <a name="details-of-atl-support-added-by-the-atl-wizard"></a>Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata
Quando si [Aggiungi supporto ATL a un file eseguibile MFC o una DLL esistente](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), Visual C++ rende le modifiche seguenti al progetto MFC esistente (in questo esempio viene chiamato il progetto `MFCEXE`):  
  
-   Vengono aggiunti due nuovi file (un file IDL e un file con estensione RGS, utilizzato per registrare il server).  
  
-   Nei file di intestazione e nell'implementazione dell'applicazione principale (Mfcexe. h e Mfcexe. cpp), una nuova classe (derivata da `CAtlMFCModule`) viene aggiunto. Oltre alla nuova classe, viene aggiunto codice a `InitInstance` per la registrazione. Viene inoltre aggiunto codice per il `ExitInstance` funzione per rilasciare l'oggetto della classe. Infine, due nuovi file di intestazione (Initguid. h e Mfcexe_i. c) vengono inclusi nel file di implementazione, dichiarare e inizializzare il nuovo GUID per il `CAtlMFCModule`-classe derivata.  
  
-   Per registrare il server in modo corretto, viene aggiunta una voce per il nuovo file con estensione RGS ai file di risorse del progetto.  
  
## <a name="notes-for-dll-projects"></a>Note per i progetti DLL  
 Quando si aggiunge il supporto ATL a un progetto DLL MFC, si noterà alcune differenze. Viene aggiunto codice per il `DLLRegisterServer` e `DLLUnregisterServer` funzioni per la registrazione e annullamento della registrazione della DLL. Viene inoltre aggiunto codice alla [DllCanUnloadNow](../../atl/reference/catldllmodulet-class.md#dllcanunloadnow) e [DllGetClassObject](../../atl/reference/catldllmodulet-class.md#dllgetclassobject).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto ATL in un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)

---
title: 'Risorse localizzate in applicazioni MFC: DLL Satellite | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- multiple language support [C++]
- localization [C++], MFC resources
- localized resources [C++]
- MFC DLLs [C++], localizing
- DLLs [C++], localizing MFC
- resources [MFC], localizing
- resource-only DLLs [C++]
- resource-only DLLs [C++], MFC applications
- satellite DLLs [C++]
ms.assetid: 3a1100ae-a9c8-47b5-adbd-cbedef5992ef
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dc97e73998c581a40ed7d344b1ade5ca90b94ac2
ms.sourcegitcommit: a5916b48541f804a79891ff04e246628b5f9a24a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/09/2018
---
# <a name="localized-resources-in-mfc-applications-satellite-dlls"></a>Risorse localizzate in applicazioni MFC: DLL satellite
Versione MFC 7.0 e versioni successive fornisce supporto avanzato per le DLL satellite, una funzionalità che aiuta a creare applicazioni localizzate in più lingue. Una DLL satellite è un [DLL di sole risorse](../build/creating-a-resource-only-dll.md) che contiene risorse di un'applicazione localizzate per una particolare lingua. Quando l'applicazione inizia l'esecuzione, MFC carica automaticamente la risorsa localizzata più appropriata per l'ambiente. Ad esempio, è un'applicazione con le risorse di lingua inglese con due DLL satellite, una che contiene una traduzione francese delle risorse e l'altro contenente una traduzione in lingua tedesca. Quando l'applicazione viene eseguita in un sistema in lingua inglese, utilizza le risorse in lingua inglese. Se eseguita in un sistema francese, Usa le risorse in francese. Se eseguita in un sistema tedesco, Usa le risorse in tedesco.  
  
 Per supportare le risorse localizzate in un'applicazione MFC, MFC tenta di caricare una DLL satellite che contengono risorse localizzate in una lingua specifica. Le DLL satellite sono denominate *NomeApplicazioneXXX*. dll, in cui *ApplicationName* è il nome del .exe o utilizzo di MFC, dll e *XXX* è il codice di tre lettere per la lingua le risorse (ad esempio, "ENU" o "DEU").  
  
 MFC tenta di caricare la DLL risorse per tutte le lingue seguenti nell'ordine, arrestandosi quando ne viene trovato uno:  
  
1. Dell'interfaccia utente lingua predefinita dell'utente corrente, come restituito dall'API Win32 GetUserDefaultUILanguage().  
  
2.  Lingua di interfaccia utente predefinita dell'utente corrente, senza alcuna sottolingua (vale a dire ENC [inglese (Canada)] diventa ita [Stati Uniti English]).  
  
3.  La lingua predefinita del sistema dell'interfaccia utente, come restituito dall'API GetSystemDefaultUILanguage (). Su altre piattaforme, questa è la lingua del sistema operativo stesso.  
  
4.  La lingua predefinita del sistema dell'interfaccia utente, senza alcuna sottolingua specifica.  
  
5.  Una lingua fittizia con il codice di 3 lettere loc.  
  
 MFC non trova tutte le DLL satellite, Usa qualsiasi risorsa è contenuti nell'applicazione stessa.  
  
 Ad esempio, si supponga che un'applicazione LangExample.exe utilizza MFC e se è in esecuzione in un sistema di interfaccia utente più. la lingua dell'interfaccia utente del sistema è ENU [Stati Uniti Inglese] e lingua dell'interfaccia utente dell'utente corrente è impostata su FRC [francese (Canada)]. MFC è per le DLL seguenti nell'ordine seguente:  
  
1.  LangExampleFRC.dll (lingua dell'interfaccia utente dell'utente).  
  
2.  EsempioLinguaFRA. dll (lingua dell'interfaccia utente dell'utente senza la varietà di lingua, in questo esempio francese (Francia).  
  
3.  LangExampleENU.dll (lingua dell'interfaccia utente del sistema).  
  
4.  LangExampleLOC.dll.  
  
 Se nessuna di queste DLL vengono trovata, MFC utilizza le risorse in LangExample.exe.  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)   
 [TN057: localizzazione di componenti MFC](../mfc/tn057-localization-of-mfc-components.md)
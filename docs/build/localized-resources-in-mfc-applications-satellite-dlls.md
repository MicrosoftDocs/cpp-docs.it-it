---
title: 'Risorse localizzate in applicazioni MFC: DLL satellite'
ms.date: 11/04/2016
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
ms.openlocfilehash: e9f9b751da6339cbe8f352bdb7eee4b7af2c359b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50658003"
---
# <a name="localized-resources-in-mfc-applications-satellite-dlls"></a>Risorse localizzate in applicazioni MFC: DLL satellite

Versione MFC 7.0 e versioni successive offre supporto avanzato per le DLL satellite, una funzionalità che aiuta nella creazione di applicazioni localizzate in più lingue. Una DLL satellite è una [DLL di sole risorse](../build/creating-a-resource-only-dll.md) che contiene le risorse di un'applicazione localizzate per una determinata lingua. Quando l'applicazione inizia l'esecuzione, MFC carica automaticamente la risorsa localizzata più appropriata per l'ambiente. Ad esempio, hai un'applicazione con le risorse di lingua inglese con due DLL satellite, una che contiene una traduzione in francese di risorse e l'altro che contiene una traduzione in tedesco. Quando l'applicazione viene eseguita in un sistema in lingua inglese, Usa le risorse in lingua inglese. Se eseguito in un sistema francese, Usa le risorse francesi. Se eseguito in un sistema tedesco, Usa le risorse in tedesco.

Per supportare le risorse localizzate in un'applicazione MFC, MFC tenta di caricare una DLL satellite che contiene risorse localizzate per una lingua specifica. Le DLL satellite sono denominate *NomeApplicazioneXXX*. dll, dove *ApplicationName* è il nome di .exe o DLL utilizza MFC, e *XXX* è riportato il codice di tre lettere per la lingua le risorse (ad esempio, "ENU" o "DEU").

MFC tenta di caricare la DLL risorse per ognuna delle lingue seguenti nell'ordine, arrestandosi quando ne trova uno:

1. Dell'interfaccia utente lingua predefinita dell'utente corrente, come restituito dall'API Win32 GetUserDefaultUILanguage().

1. Lingua di interfaccia utente predefinita dell'utente corrente, senza alcuna sottolingua (vale a dire, ENC [inglese (Canada)] diventa ita [US Inglese]).

1. La lingua predefinita del sistema dell'interfaccia utente, come restituito dall'API di GetSystemDefaultUILanguage (). In altre piattaforme, questa è la lingua del sistema operativo stesso.

1. La lingua predefinita del sistema dell'interfaccia utente, senza alcuna sottolingua.

1. Un linguaggio fittizio con il codice di 3 lettere loc.

Se non trova tutte le DLL satellite MFC, Usa tutte le risorse sono contenute nell'applicazione stessa.

Ad esempio, si supponga che un'applicazione LangExample.exe utilizza MFC e venga eseguito in un sistema di interfaccia utente più; la lingua dell'interfaccia utente del sistema è ita [US Inglese] e lingua della UI dell'utente corrente è impostata su FRC [francese (Canada)]. MFC è simile per le DLL seguenti nell'ordine seguente:

1. LangExampleFRC.dll (lingua dell'interfaccia utente dell'utente).

1. EsempioLinguaFRA. dll (lingua dell'interfaccia utente dell'utente senza la varietà di lingua, in questo esempio francese (Francia).

1. LangExampleENU.dll (lingua dell'interfaccia utente del sistema).

1. LangExampleLOC.dll.

Se nessuna di queste DLL vengono trovata, MFC Usa le risorse in LangExample.exe.

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)<br/>
[TN057: localizzazione di componenti MFC](../mfc/tn057-localization-of-mfc-components.md)
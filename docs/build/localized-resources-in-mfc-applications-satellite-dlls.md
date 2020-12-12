---
description: 'Altre informazioni su: risorse localizzate in applicazioni MFC: dll satellite'
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
ms.openlocfilehash: 4af771999c97af40ffe50399c77e91aec1af992a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176470"
---
# <a name="localized-resources-in-mfc-applications-satellite-dlls"></a>Risorse localizzate in applicazioni MFC: DLL satellite

MFC versione 7,0 e versioni successive offre supporto avanzato per le DLL satellite, una funzionalità che consente di creare applicazioni localizzate per più linguaggi. Una DLL satellite è una [dll di sole risorse](creating-a-resource-only-dll.md) che contiene le risorse di un'applicazione localizzate per una lingua specifica. Quando viene avviata l'esecuzione dell'applicazione, MFC carica automaticamente la risorsa localizzata più appropriata per l'ambiente. Ad esempio, è possibile disporre di un'applicazione con risorse della lingua inglese con due DLL satellite, una contenente una traduzione in francese delle risorse e l'altra contenente una traduzione in tedesco. Quando l'applicazione viene eseguita in un sistema di lingua inglese, utilizza le risorse in lingua inglese. Se eseguito in un sistema francese, USA le risorse francesi; Se eseguito in un sistema tedesco, USA le risorse tedesche.

Per supportare le risorse localizzate in un'applicazione MFC, MFC tenta di caricare una DLL satellite contenente le risorse localizzate in una lingua specifica. Le DLL satellite sono denominate *NomeApplicazioneXXX*. dll, dove *ApplicationName* è il nome del file con estensione exe o dll che Usa MFC e *xxx* è il codice di tre lettere per la lingua delle risorse (ad esempio,' ità o ' deu ').

MFC tenta di caricare la DLL di risorse per ogni lingua seguente in ordine, arrestandosi quando ne viene trovata una:

1. Lingua predefinita dell'interfaccia utente dell'utente corrente, come restituita dall'API Win32 GetUserDefaultUILanguage ().

1. La lingua predefinita dell'interfaccia utente dell'utente corrente, senza una lingua specifica, ovvero ENC [Canadian English] diventa ita [US English].

1. La lingua dell'interfaccia utente predefinita del sistema, come restituita dall'API GetSystemDefaultUILanguage (). Su altre piattaforme, questo è il linguaggio del sistema operativo stesso.

1. Lingua predefinita dell'interfaccia utente del sistema, senza alcun linguaggio specifico.

1. Una lingua falsa con il codice di 3 lettere LOC.

Se MFC non trova alcuna DLL satellite, utilizzerà tutte le risorse contenute nell'applicazione stessa.

Si supponga, ad esempio, che un'applicazione LangExample.exe usi MFC e sia in esecuzione in un sistema a più interfacce utente. la lingua dell'interfaccia utente del sistema è ita [US English] e la lingua dell'interfaccia utente dell'utente corrente è impostata su FRC [Canadian francese]. MFC Cerca le DLL seguenti nell'ordine seguente:

1. LangExampleFRC.dll (lingua dell'interfaccia utente dell'utente).

1. LangExampleFRA.dll (lingua dell'interfaccia utente senza il linguaggio sublingua, in questo esempio francese (Francia).

1. LangExampleENU.dll (lingua dell'interfaccia utente del sistema).

1. LangExampleLOC.dll.

Se nessuna di queste dll viene trovata, MFC utilizza le risorse in LangExample.exe.

## <a name="see-also"></a>Vedi anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)<br/>
[TN057: localizzazione di componenti MFC](../mfc/tn057-localization-of-mfc-components.md)

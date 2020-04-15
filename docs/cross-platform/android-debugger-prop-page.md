---
title: Proprietà del debugger Android (C
ms.date: 10/23/2017
ms.assetid: 789f7a1c-38b4-41d0-809b-14f4d96c8116
f1_keywords:
- VC.Project.AndroidDebugger.DebuggerType
- VC.Project.AndroidDebugger.AndroidDeviceID
- VC.Project.AndroidDebugger.PackagePath
- VC.Project.AndroidDebugger.LaunchActivity
ms.openlocfilehash: 23fd871f030593607cf374870b96e09d8bc2da7a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374207"
---
# <a name="android-debugger-properties"></a>Proprietà del debugger Android

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Tipo di debugger | Specifica quale tipo di codice sottoporre al debug. | **Solo nativo**<br /><br />**Solo Java** |
| Destinazione di debug | Specifica l'emulatore o il dispositivo da usare per il debug. Se non sono in esecuzione emulatori, utilizzare 'Android Virtual Device (AVD) Manager' per avviare un dispositivo. |
| Pacchetto da avviare | Specifica il percorso del file con estensione *apk* di cui verrà eseguito il debug. Questa opzione avvia il pacchetto (APK) quando viene eseguito il debug dell'applicazione. |
| Attività di avvio | L'attività Android da usare per avviare l'applicazione deve essere uguale a quella usata nel manifesto Premere Applica per recuperare l'elenco da *AndroidManifest.xml* e popolarlo dinamicamente. |
| Percorsi aggiuntivi di ricerca dei simboli | Percorso aggiuntivo di ricerca per i simboli di debug. |
| Percorsi aggiuntivi di ricerca origine Java | Percorsi di ricerca aggiuntivi per i file di origine Java. (Si applica solo quando il tipo di debugger è solo Java). |

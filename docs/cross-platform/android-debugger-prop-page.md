---
title: Proprietà del debugger AndroidC++()
ms.date: 10/23/2017
ms.assetid: 789f7a1c-38b4-41d0-809b-14f4d96c8116
f1_keywords:
- VC.Project.AndroidDebugger.DebuggerType
- VC.Project.AndroidDebugger.AndroidDeviceID
- VC.Project.AndroidDebugger.PackagePath
- VC.Project.AndroidDebugger.LaunchActivity
ms.openlocfilehash: 3ac896b384181e4e2b436368f39a343d35fe321a
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446890"
---
# <a name="android-debugger-properties"></a>Proprietà del debugger Android

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Tipo di debugger | Specifica quale tipo di codice sottoporre al debug. | **Solo nativo**<br /><br />**Solo Java** |
| Destinazione di debug | Specifica l'emulatore o il dispositivo da usare per il debug. Se nessun emulatore è in esecuzione, usare ' Android Virtual Device (AVD) Manager ' per avviare un dispositivo. |
| Pacchetto da avviare | Specifica il percorso del file con estensione *apk* di cui verrà eseguito il debug. Questa opzione avvia il pacchetto (APK) quando viene eseguito il debug dell'applicazione. |
| Attività di avvio | L'attività Android da usare per avviare l'applicazione deve essere uguale a quella usata nel manifesto Scegliere Applica per recuperare l'elenco da *AndroidManifest.xml* e popolarlo dinamicamente. |
| Percorsi aggiuntivi di ricerca dei simboli | Percorso aggiuntivo di ricerca per i simboli di debug. |
| Percorsi aggiuntivi di ricerca origine Java | Percorsi di ricerca aggiuntivi per i file di origine Java. (Si applica solo quando il tipo di debugger è solo Java). |

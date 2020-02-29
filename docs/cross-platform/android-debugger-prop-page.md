---
title: Proprietà del debugger AndroidC++()
ms.date: 10/23/2017
ms.assetid: 789f7a1c-38b4-41d0-809b-14f4d96c8116
f1_keywords:
- VC.Project.AndroidDebugger.DebuggerType
- VC.Project.AndroidDebugger.AndroidDeviceID
- VC.Project.AndroidDebugger.PackagePath
- VC.Project.AndroidDebugger.LaunchActivity
ms.openlocfilehash: 8ff6e539828d697e103c820d05565969f6afb910
ms.sourcegitcommit: a673f6a54cc97e3d4cd032b10aa8dce7f0539d39
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/28/2020
ms.locfileid: "78177528"
---
# <a name="android-debugger-properties"></a>Proprietà del debugger Android

Proprietà | Descrizione | Opzioni
--- | ---| ---
Tipo di debugger | Specifica quale tipo di codice sottoporre al debug. | **Solo nativo**<br>**Solo Java**<br>
Destinazione di debug | Specifica l'emulatore o il dispositivo da usare per il debug. Se nessun emulatore è in esecuzione, usare ' Android Virtual Device (AVD) Manager ' per avviare un dispositivo.
Pacchetto da avviare | Specifica il percorso del file con estensione *apk* di cui verrà eseguito il debug. Questa opzione avvia il pacchetto (APK) quando viene eseguito il debug dell'applicazione.
Attività di avvio | L'attività Android da usare per avviare l'applicazione deve essere uguale a quella usata nel manifesto Scegliere Applica per recuperare l'elenco da *AndroidManifest.xml* e popolarlo dinamicamente.
Percorsi aggiuntivi di ricerca dei simboli | Percorso aggiuntivo di ricerca per i simboli di debug.
Percorsi aggiuntivi di ricerca origine Java | Percorsi di ricerca aggiuntivi per i file di origine Java. (Si applica solo quando il tipo di debugger è solo Java).

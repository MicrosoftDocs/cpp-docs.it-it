---
description: 'Altre informazioni su: proprietà del debugger Android'
title: Proprietà del debugger Android (C++)
ms.date: 10/23/2017
ms.assetid: 789f7a1c-38b4-41d0-809b-14f4d96c8116
f1_keywords:
- VC.Project.AndroidDebugger.DebuggerType
- VC.Project.AndroidDebugger.AndroidDeviceID
- VC.Project.AndroidDebugger.PackagePath
- VC.Project.AndroidDebugger.LaunchActivity
ms.openlocfilehash: 27068b56421860b1e77b6cacf7e2ef4fae147a24
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136526"
---
# <a name="android-debugger-properties"></a>Proprietà del debugger Android

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Tipo di debugger | Specifica quale tipo di codice sottoporre al debug. | **Solo nativo**<br /><br />**Solo Java** |
| Destinazione di debug | Specifica l'emulatore o il dispositivo da usare per il debug. Se nessun emulatore è in esecuzione, usare ' Android Virtual Device (AVD) Manager ' per avviare un dispositivo. |
| Pacchetto da avviare | Specifica il percorso del file con *estensione APK* di cui verrà eseguito il debug. Questa opzione avvia il pacchetto (APK) quando viene eseguito il debug dell'applicazione. |
| Attività di avvio | L'attività Android da usare per avviare l'applicazione deve essere uguale a quella usata nel manifesto Fare clic su Applica per recuperare l'elenco da *AndroidManifest.xml* e popolarlo dinamicamente. |
| Percorsi aggiuntivi di ricerca dei simboli | Percorso aggiuntivo di ricerca per i simboli di debug. |
| Percorsi aggiuntivi di ricerca origine Java | Percorsi di ricerca aggiuntivi per i file di origine Java. (Si applica solo quando il tipo di debugger è solo Java). |

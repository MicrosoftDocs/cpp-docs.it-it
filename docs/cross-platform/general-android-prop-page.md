---
description: 'Altre informazioni su: Proprietà generali del progetto (Android C++)'
title: Proprietà dei progetti generali (Android C++)
ms.date: 10/23/2017
ms.assetid: 65f4868b-b864-4989-a275-1e51869ef599
f1_keywords:
- VC.Project.VCConfiguration.Android.OutputDirectory
- VC.Project.VCConfiguration.Android.IntermediateDirectory
- VC.Project.VCConfiguration.Android.TargetName
- VC.Project.VCConfiguration.Android.TargetExt
- VC.Project.VCConfiguration.Android.DeleteExtensionsOnClean
- VC.Project.VCConfiguration.Android.BuildLogFile
- VC.Project.VCConfiguration.Android.PlatformToolset
- VC.Project.VCConfiguration.Android.ConfigurationType
- VC.Project.VCConfiguration.UseOfSTL
- VC.Project.VCConfiguration.ThumbMode
ms.openlocfilehash: 84f45afad9cc36eb0fbe5b2dd1da895b3e50fcea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319235"
---
# <a name="general-project-properties-android-c"></a>Proprietà dei progetti generali (Android C++)

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Directory di output | Specifica un percorso relativo della directory dei file di output. Può includere variabili di ambiente. |
| Directory intermedia | Specifica un percorso relativo della directory dei file intermedi. Può includere variabili di ambiente. |
| Nome destinazione | Specifica un nome file generato dal progetto. |
| Estensione di destinazione | Specifica un'estensione di file generata dal progetto. (Esempio: estensione *exe* o *dll*) |
| Estensioni da eliminare durante la pulitura | Elenco con valori delimitati da punti e virgola con supporto dei caratteri jolly che indica i file della directory intermedia da eliminare durante la pulitura o la ricompilazione. |
| File del log di compilazione | Specifica il file del log di compilazione in cui scrivere quando è abilitata la funzione di log di compilazione. |
| Set di strumenti della piattaforma | Specifica il set di strumenti usato per compilare la configurazione corrente. Se non è impostato, viene usato il set di strumenti predefinito |
| Tipo configurazione | Specifica il tipo di output generato da questa configurazione. | **Libreria dinamica (. so)** -libreria dinamica (*. so*)<br>**Libreria statica (a)**: libreria statica (estensione *a*)<br>**Utilità**: utilità<br>**Makefile**: makefile<br> |
| Livello API di destinazione | Livello dell'API di Android NDK di destinazione di questa configurazione. |
| Uso di STL | Specifica la libreria standard C++ da usare per questa configurazione. | **Libreria di runtime C++ minima (system)**<br>**Libreria statica di runtime C++ (gabi++_static)**<br>**Libreria condivisa di runtime C++ (gabi++_shared)**<br>**Libreria statica di runtime STLport (stlport_static)**<br>**Libreria condivisa di runtime STLport (stlport_shared)**<br>**Libreria statica STL GNU (gnustl_static)**<br>**Libreria condivisa STL GNU (gnustl_shared)**<br>**Libreria statica libc++ LLVM (c++_static)**<br>**Libreria condivisa libc++ LLVM (c++_shared)**<br> |
| Modalità Thumb | Generare il codice che viene eseguito per la microarchitettura thumb. Si applica solo per l'architettura ARM. | **Thumb**<br>**ARM**<br>**Disabilitato**<br> |

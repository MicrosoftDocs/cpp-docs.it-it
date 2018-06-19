---
title: Proprietà generali (progetto Linux C++) | Microsoft Docs
ms.custom: ''
ms.date: 9/26/2017
ms.technology:
- vs-ide-general
ms.tgt_pltfrm: Linux
ms.topic: conceptual
ms.assetid: 56c800a9-3df9-4196-87b2-81adb00e4767
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: 82dbdb4b2978860faba4e31c756ab0b69928e080
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33331617"
---
# <a name="general-properties-linux-c"></a>Proprietà generali (Linux C++)

Proprietà | Descrizione | Scelte
--- | ---| ---
Directory di output | Specifica un percorso relativo della directory dei file di output. Può includere variabili di ambiente.
Directory intermedia | Specifica un percorso relativo della directory dei file intermedi. Può includere variabili di ambiente.
Target Name | Specifica un nome file che verrà generato dal progetto.
Estensione di destinazione | Specifica un'estensione file che verrà generata dal progetto. (ad esempio, .a).
Estensioni da eliminare durante la pulitura | Elenco con valori delimitati da punti e virgola con supporto dei caratteri jolly che indica i file della directory intermedia da eliminare durante la pulitura o la ricompilazione.
File del log di compilazione | Specifica il file del log di compilazione in cui scrivere quando è abilitata la funzione di log di compilazione.
Set di strumenti della piattaforma | Specifica il set di strumenti usato per compilare la configurazione corrente. Se non è impostato, viene usato il set di strumenti predefinito
Computer di compilazione remota | Computer o dispositivo di destinazione da usare per operazioni di compilazione, distribuzione e debug in remoto.
Directory radice di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo.
Directory del progetto di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo per il progetto.
Tipo di configurazione | Specifica il tipo di output generato da questa configurazione. | **Libreria dinamica (so)**: libreria dinamica (so)<br>**Libreria statica (a)**: libreria statica (a)<br>**Applicazione (.out)**: applicazione (out)<br>**Makefile**: makefile<br>
Uso di STL | Specifica la libreria standard C++ da usare per questa configurazione. | **Libreria C++ standard GNU condivisa**<br>**Libreria C++ standard GNU statica (-static)**<br>

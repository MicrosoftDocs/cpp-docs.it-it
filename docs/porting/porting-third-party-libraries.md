---
title: Porting di librerie di terze parti | Microsoft Docs
ms.custom: ''
ms.date: 01/10/2017
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- 3rd-party libraries
- vspkg
ms.assetid: b055ed20-8a9e-45b2-ac2a-e3d94271c009
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0e831f5441d62a4430fe036be70f1bec5ac99c98
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33849717"
---
# <a name="porting-third-party-libraries"></a>Porting di librerie di terze parti

Quando si aggiorna un progetto alla versione corrente di Visual C++, è necessario aggiornare anche le eventuali librerie usate dal progetto, in modo che sia le librerie sia il progetto siano compilati con la stessa versione del compilatore. Per altre informazioni, vedere [Panoramica dei potenziali problemi di aggiornamento](overview-of-potential-upgrade-issues-visual-cpp.md). 

## <a name="introducing-vcpkg"></a>Introduzione a vcpkg
In passato la ricerca e l'aggiornamento delle librerie di terze parti potevano essere attività complesse. Per semplificare l'acquisizione e la ricompilazione di librerie C++ open source di terze parti, il team di Visual C++ ha creato uno strumento della riga di comando denominato **VC++ Packaging Tool** o **vcpkg**. Vcpkg dispone di un catalogo ricercabile contenente molte delle librerie C++ open source più diffuse. È possibile installare qualsiasi libreria del catalogo direttamente dalla riga di comando di vcpkg. Quando si installa una libreria, Vcpkg crea una struttura di directory nel computer in uso e aggiunge i componenti .h, .lib e binari in tale cartella. È possibile usare questa cartella nella riga di comando di compilazione o integrarla in Visual Studio 2015 o versione successiva con il comando vcpkg integrate install. Dopo l'integrazione di un percorso di libreria, Visual Studio consente di trovarlo e aggiungerlo a qualsiasi nuovo progetto creato. Per usare una libreria è sufficiente includerla con #include e Visual Studio aggiungerà il percorso .lib alle impostazioni del progetto e copierà la DLL nella cartella della soluzione. Per altre informazioni, vedere [vcpkg: gestione pacchetti per C++](../vcpkg.md).


## <a name="reporting-issues"></a>Segnalazione di problemi
Se la libreria desiderata non è presente nel catalogo vcpkg, è possibile segnalare il problema nel [repository GitHub](https://github.com/Microsoft/vcpkg/issues), dove la community e il team di Visual C++ potranno visualizzarlo ed eventualmente creare il file di porting corrispondente.

Per le librerie di proprietà di terze parti (non open source) è consigliabile contattare il provider della libreria. Tuttavia, può essere utile per Microsoft ricevere la segnalazione delle librerie proprietarie in uso che bloccano l'elaborazione e di quelle che risultano affidabili. Usare l'indirizzo vcupgrade@microsoft.com.

  
## <a name="see-also"></a>Vedere anche  
 [Guida al porting e aggiornamento in Visual C++](visual-cpp-porting-and-upgrading-guide.md)

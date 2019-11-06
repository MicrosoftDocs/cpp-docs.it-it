---
title: Conversione di librerie di terze parti
ms.date: 10/29/2019
helpviewer_keywords:
- 3rd-party libraries
- vspkg
ms.assetid: b055ed20-8a9e-45b2-ac2a-e3d94271c009
ms.openlocfilehash: 89460af1ad0b356f4f5952141636a9f067131750
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627196"
---
# <a name="porting-third-party-libraries"></a>Porting di librerie di terze parti

Quando si aggiorna un progetto da Visual Studio 2013 o versione precedente alla versione corrente di Visual C++, è necessario aggiornare anche tutte le librerie usate dal progetto, in modo che la libreria e il progetto siano compilati con la stessa versione e la stessa versione del compilatore. Se non si ha accesso al codice sorgente della libreria e la libreria non è disponibile tramite vcpkg, è necessario ottenere un file binario aggiornato dal fornitore della libreria. Per altre informazioni, vedere [Panoramica dei potenziali problemi di aggiornamento](overview-of-potential-upgrade-issues-visual-cpp.md).

Quando si aggiorna un'applicazione da Visual Studio 2015 o Visual Studio 2017 a Visual Studio 2019, non è necessario aggiornare le dipendenze perché il codice generato da queste tre versioni è compatibile con binario. Per altre informazioni, vedere [ C++ compatibilità binaria tra Visual Studio 2015 e Visual Studio 2019](binary-compat-2015-2017.md).

## <a name="vcpkg-for-open-source-libraries"></a>vcpkg per le librerie open source

In passato la ricerca e l'aggiornamento delle librerie di terze parti potevano essere attività complesse. Per semplificare l'acquisizione e la ricompilazione C++ di librerie open source di terze parti, C++ il team visuale ha creato uno strumento da riga di comando denominato strumento per la creazione di **pacchetti VC + +** o **vcpkg**. Vcpkg dispone di un catalogo ricercabile contenente molte delle librerie C++ open source più diffuse. È possibile installare qualsiasi libreria del catalogo direttamente dalla riga di comando di vcpkg. Quando si installa una libreria, Vcpkg crea una struttura di directory nel computer in uso e aggiunge i componenti .h, .lib e binari in tale cartella. È possibile usare questa cartella nella riga di comando di compilazione o integrarla in Visual Studio 2015 o versione successiva con il comando vcpkg integrate install. Dopo l'integrazione di un percorso di libreria, Visual Studio consente di trovarlo e aggiungerlo a qualsiasi nuovo progetto creato. Per usare una libreria è sufficiente includerla con `#include` e Visual Studio aggiungerà automaticamente il percorso .lib alle impostazioni del progetto e copierà la DLL nella cartella della soluzione. Per altre informazioni, vedere [vcpkg: gestione pacchetti per C++](../build/vcpkg.md).

## <a name="reporting-issues"></a>Segnalazione di problemi

Se la libreria open source non è presente nel catalogo di **vcpkg** , è possibile aprire un problema nel [repository GitHub](https://github.com/Microsoft/vcpkg/issues) in cui la community e il team C++ visivo possono visualizzarlo e potenzialmente creare il file di porta per questa libreria.

## <a name="see-also"></a>Vedere anche

[Guida al porting e aggiornamento in Visual C++](visual-cpp-porting-and-upgrading-guide.md)

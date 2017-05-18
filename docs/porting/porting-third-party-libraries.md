---
title: Porting di librerie di terze parti | Microsoft Docs
ms.custom: 
ms.date: 01/10/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- 3rd-party libraries
- vspkg
ms.assetid: b055ed20-8a9e-45b2-ac2a-e3d94271c009
caps.latest.revision: 0
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: 8630a5c0b97b85e0dc75e8b470974bb7d223a511
ms.openlocfilehash: 1d85010b6068d52d8522875a3c47561ad777d345
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---

# <a name="porting-third-party-libraries"></a>Porting di librerie di terze parti

Quando si aggiorna un progetto alla versione corrente di Visual C++, è necessario aggiornare anche le eventuali librerie usate dal progetto, in modo che sia le librerie sia il progetto siano compilati con la stessa versione del compilatore. Per altre informazioni, vedere [Panoramica dei potenziali problemi di aggiornamento](overview-of-potential-upgrade-issues-visual-cpp.md). 

## <a name="introducing-vcpkg"></a>Introduzione a vcpkg
In passato la ricerca e l'aggiornamento delle librerie di terze parti potevano essere attività complesse. Per semplificare l'acquisizione e la ricompilazione di librerie C++ open source di terze parti, il team di Visual C++ ha creato uno strumento della riga di comando denominato **VC++ Packaging Tool** o **vcpkg**. Vcpkg dispone di un catalogo ricercabile contenente molte delle librerie C++ open source più diffuse. È possibile installare qualsiasi libreria del catalogo direttamente dalla riga di comando di vcpkg. Quando si installa una libreria, Vcpkg crea una struttura di directory nel computer in uso e aggiunge i componenti .h, .lib e binari in tale cartella. È possibile usare questa cartella nella riga di comando di compilazione o integrarla in Visual Studio 2015 o versione successiva con il comando vcpkg integrate install. Dopo l'integrazione di un percorso di libreria, Visual Studio consente di trovarlo e aggiungerlo a qualsiasi nuovo progetto creato. Per usare una libreria è sufficiente includerla con #include e Visual Studio aggiungerà il percorso .lib alle impostazioni del progetto e copierà la DLL nella cartella della soluzione.

## <a name="acquisition-and-usage"></a>Acquisizione e uso

È possibile scaricare vcpkg da [repository GitHub vcpkg][vcpkg](https://github.com/Microsoft/vcpkg/).

 - Per cercare una libreria nel catalogo: vcpkg search <LibName>
 - Per acquisire una libreria (ad esempio Boost): vcpkg install boost
 - Per elencare le librerie attualmente installate: vcpkg list

Il post di blog [Vcpkg: a tool to acquire and build C++ open source libraries on Windows](https://blogs.msdn.microsoft.com/vcblog/2016/09/19/vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows/) (Vcpkg: uno strumento per acquisire e compilare librerie C++ open source in Windows) spiega il funzionamento di vcpkg e include l'elenco delle librerie supportate. L'elenco viene aggiornato ogni settimana.

## <a name="reporting-issues"></a>Segnalazione di problemi
Se la libreria desiderata non è presente nel catalogo vcpkg, è possibile segnalare il problema nel [repository GitHub](https://github.com/Microsoft/vcpkg/issues), dove la community e il team di Visual C++ potranno visualizzarlo ed eventualmente creare il file di porting corrispondente.

Per le librerie di proprietà di terze parti (non open source) è consigliabile contattare il provider della libreria. Tuttavia, può essere utile per Microsoft ricevere la segnalazione delle librerie proprietarie in uso che bloccano l'elaborazione e di quelle che risultano affidabili. Usare l'indirizzo vcupgrade@microsoft.com.

  
## <a name="see-also"></a>Vedere anche  
 [Guida al porting e aggiornamento in Visual C++](visual-cpp-porting-and-upgrading-guide.md)


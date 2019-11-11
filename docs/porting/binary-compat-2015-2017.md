---
title: C++compatibilità binaria tra Visual Studio 2015 e Visual Studio 2019
description: Viene descritto il funzionamento della compatibilità binaria tra i file compilati C++ in Visual Studio 2015, 2017 e 2019. Un pacchetto Microsoft C++ Visual Redistributable Package funziona per tutte e tre le versioni.
ms.date: 11/07/2019
helpviewer_keywords:
- binary compatibility, Visual C++
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
ms.openlocfilehash: e41c34abe25deefe100f525044faeac0b0c3054a
ms.sourcegitcommit: eb254b4462a58d219376ff501bf768bd1adc07ae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/11/2019
ms.locfileid: "73912874"
---
# <a name="c-binary-compatibility-between-visual-studio-2015-and-visual-studio-2019"></a>C++compatibilità binaria tra Visual Studio 2015 e Visual Studio 2019

In Microsoft Visual Studio 2013 e versioni precedenti, la compatibilità binaria non è garantita tra i file oggetto (obj), le librerie statiche (LIBs), le librerie a collegamento dinamico (dll) e i file eseguibili (exe) compilati usando versioni diverse del set di strumenti del compilatore e librerie di Runtime.

In Visual Studio 2015 e versioni successive il numero principale del set di strumenti C++ è 14 (v140 per Visual Studio 2015, v141 per Visual Studio 2017 e v142 per Visual Studio 2019). Questa numerazione riflette il fatto che sia le librerie di runtime che le applicazioni compilate con una qualsiasi di queste versioni del compilatore sono compatibili con binario. Pertanto, se si dispone di una libreria di terze parti compilata con Visual Studio 2015, non è necessario ricompilarla per utilizzarla da un'applicazione compilata con Visual Studio 2017 o Visual Studio 2019.

L'unica eccezione a questa regola è che le librerie statiche o i file oggetto compilati con l'opzione del compilatore `/GL` *non* sono compatibili con il formato binario.

Quando si combinano file binari compilati con diverse versioni C++ supportate del set di strumenti Microsoft ( C++ MSVC), il pacchetto Visual ridistribuibile in cui viene eseguita l'applicazione non può essere meno recente di qualsiasi versione del set di strumenti usata per compilare l'app o le librerie che usa.

## <a name="upgrade-the-microsoft-visual-c-redistributable-from-visual-studio-2015-or-2017-to-visual-studio-2019"></a>Aggiornare Microsoft Visual C++ Redistributable da visual studio 2015 o 2017 a visual studio 2019

Poiché è stata mantenuta la compatibilità binaria e la versione principale (14) è stata mantenuta C++ in Microsoft Visual Redistributable per visual studio 2015, 2017 e 2019, è possibile installare una sola C++ versione di Visual ridistribuibile da tali utenti in qualsiasi momento. Una versione più recente sovrascrive una versione precedente già installata. Se si dispone di Visual C++ Redistributable da visual studio 2015 o 2017 e successivamente si installa visual studio 2019, la versione 2019 sovrascrive la versione precedente. Poiché si garantisce che la versione più recente includa tutte le funzionalità più recenti e correzioni di bug (incluse le correzioni di sicurezza), è sempre consigliabile eseguire l'aggiornamento alla versione più recente disponibile.

Analogamente, non è possibile installare una versione precedente di Visual C++ Redistributable in un computer in cui è già installata una versione più recente. L'installazione di C++ Visual Redistributable da visual studio 2015 o 2017 in un computer in cui è già installata la versione 2019 comporta un errore di installazione. L'errore è simile al seguente:

```Output
0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.
```

Questo errore è stato progettato. Si consiglia di mantenere installata la versione più recente.

## <a name="see-also"></a>Vedere anche

* [Cronologia delle modifiche di Visual C++](../porting/visual-cpp-change-history-2003-2015.md)
* [I download più recenti C++ di Visual Redistributable supportati](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads) 

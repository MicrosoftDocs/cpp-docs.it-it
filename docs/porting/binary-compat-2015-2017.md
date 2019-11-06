---
title: C++compatibilità binaria tra Visual Studio 2015 e Visual Studio 2019
ms.date: 10/17/2019
helpviewer_keywords:
- binary compatibility, Visual C++
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
ms.openlocfilehash: 761f6187a8b30ecb4214821c7f91d1b26e9c647c
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627018"
---
# <a name="c-binary-compatibility-between-visual-studio-2015-and-visual-studio-2019"></a>C++compatibilità binaria tra Visual Studio 2015 e Visual Studio 2019

In Visual Studio 2013 e versioni precedenti, la compatibilità binaria tra file oggetto (OBJ), librerie statiche (LIB), librerie dinamiche (DLL) ed eseguibili (EXE) compilati usando versioni diverse del set di strumenti del compilatore e delle librerie di runtime non era garantita. 

In Visual Studio 2015 e versioni successive il numero principale del set di strumenti C++ è 14 (v140 per Visual Studio 2015, v141 per Visual Studio 2017 e v142 per Visual Studio 2019). Ciò riflette il fatto che sia le librerie di runtime che le applicazioni compilate con una qualsiasi di queste versioni del compilatore sono compatibili con binario. Ciò significa che se si ha una libreria di terze parti compilata in Visual Studio 2015, non è necessario ricompilarla per utilizzarla da un'applicazione compilata con Visual Studio 2017 o Visual Studio 2019.

L'unica eccezione a questa regola è costituita dalle librerie statiche o dai file oggetto compilati con l'opzione `/GL` del compilatore, che non presentano la compatibilità binaria.

Quando si combinano file binari compilati con diverse versioni supportate del set di C++ strumenti MSVC, l'oggetto visivo ridistribuibile in cui viene eseguita l'applicazione non può essere precedente a qualsiasi versione del set di strumenti usata per compilare l'app o le librerie che utilizza.

## <a name="upgrade-microsoft-visual-c-redistributable-from-visual-studio-2015-or-2017-to-visual-studio-2019"></a>Aggiornare Microsoft Visual C++ Redistributable da visual studio 2015 o 2017 a visual studio 2019

Poiché è stata mantenuta la compatibilità binaria e la versione principale (14) è stata mantenuta per C++ Visual Redistributable per visual studio 2015, 2017 e 2019, è possibile installare una sola C++ versione di Visual ridistribuibile da tali utenti in qualsiasi momento. Una versione più recente sovrascrive una versione precedente installata. Se si dispone di Visual C++ Redistributable da visual studio 2015 o 2017 e successivamente si installa 2019, la versione 2019 sovrascriverà una versione precedente. Poiché si garantisce che la versione più recente includa tutte le funzionalità più recenti e correzioni di bug, incluse le correzioni per la sicurezza, è sempre consigliabile eseguire l'aggiornamento alla versione più recente disponibile.

Analogamente, non è consentita l'installazione di una C++ versione precedente di Visual ridistribuibile in un computer in cui ne esiste già una più recente. L'installazione di C++ Visual Redistributable da visual studio 2015 o 2017 in un computer in cui è già installato 2019 avrà come risultato un errore di installazione. L'errore ha un aspetto simile al seguente:

```
*0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.*.
```

Questo errore è stato progettato. È consigliabile mantenere installato quello più recente.

## <a name="see-also"></a>Vedere anche

* [Cronologia delle modifiche di Visual C++](../porting/visual-cpp-change-history-2003-2015.md)
* [I download più recenti C++ di Visual Redistributable supportati](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads) 

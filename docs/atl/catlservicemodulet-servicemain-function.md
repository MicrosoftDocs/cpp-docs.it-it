---
title: 'Funzione funzione CAtlServiceModuleT:: ServiceMain'
ms.date: 11/04/2016
helpviewer_keywords:
- ServiceMain method
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
ms.openlocfilehash: b79767d4c1696174f90a325ea152ccc7939ed9fe
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491718"
---
# <a name="catlservicemoduletservicemain-function"></a>Funzione funzione CAtlServiceModuleT:: ServiceMain

Gestione controllo servizi (SCM) chiama `ServiceMain` quando si apre l'applicazione del pannello di controllo servizi, si seleziona il servizio e si fa clic su **Avvia**.

Dopo la chiamata `ServiceMain`a SCM, un servizio deve fornire al gestore SCM una funzione del gestore. Questa funzione consente a SCM di ottenere lo stato del servizio e passare istruzioni specifiche, ad esempio la sospensione o l'arresto. SCM ottiene questa funzione quando il servizio passa `_Handler` alla funzione API Win32 [RegisterServiceCtrlHandler](/windows/win32/api/winsvc/nf-winsvc-registerservicectrlhandlerw). (`_Handler` è una funzione membro statica che chiama il [gestore](../atl/reference/catlservicemodulet-class.md#handler)della funzione membro non statico).

All'avvio, un servizio deve informare anche il SCM dello stato corrente. Questa operazione viene eseguita passando SERVICE_START_PENDING alla funzione API Win32, [SetServiceStatus](/windows/win32/api/winsvc/nf-winsvc-setservicestatus).

`ServiceMain`chiama `CAtlExeModuleT::InitializeCom`quindi, che chiama la funzione API Win32 [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex). Per impostazione predefinita `InitializeCom` , passa il flag COINIT_MULTITHREADED alla funzione. Questo flag indica che il programma deve essere un server a thread libero.

A questo `CAtlServiceModuleT::Run` punto, viene chiamato per eseguire il lavoro principale del servizio. `Run`continua a essere eseguito fino a quando il servizio non viene arrestato.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)<br/>
[Funzione CAtlServiceModuleT:: ServiceMain](../atl/reference/catlservicemodulet-class.md#servicemain)

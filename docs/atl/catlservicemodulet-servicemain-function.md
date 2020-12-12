---
description: 'Altre informazioni su: funzione funzione CAtlServiceModuleT:: ServiceMain'
title: 'Funzione funzione CAtlServiceModuleT:: ServiceMain'
ms.date: 11/04/2016
helpviewer_keywords:
- ServiceMain method
ms.assetid: f21408c1-1919-4dec-88d8-bf5b39ac9808
ms.openlocfilehash: 97093d13a2f13ea0d6bd4ba5db46bef45d239cc9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148330"
---
# <a name="catlservicemoduletservicemain-function"></a>Funzione funzione CAtlServiceModuleT:: ServiceMain

Gestione controllo servizi (SCM) chiama `ServiceMain` quando si apre l'applicazione del pannello di controllo servizi, si seleziona il servizio e si fa clic su **Avvia**.

Dopo la chiamata `ServiceMain` a SCM, un servizio deve fornire al gestore SCM una funzione del gestore. Questa funzione consente a SCM di ottenere lo stato del servizio e passare istruzioni specifiche, ad esempio la sospensione o l'arresto. SCM ottiene questa funzione quando il servizio passa `_Handler` alla funzione API Win32 [RegisterServiceCtrlHandler](/windows/win32/api/winsvc/nf-winsvc-registerservicectrlhandlerw). ( `_Handler` è una funzione membro statica che chiama il [gestore](../atl/reference/catlservicemodulet-class.md#handler)della funzione membro non statico).

All'avvio, un servizio deve informare anche il SCM dello stato corrente. Questa operazione viene eseguita passando SERVICE_START_PENDING alla funzione API Win32 [SetServiceStatus](/windows/win32/api/winsvc/nf-winsvc-setservicestatus).

`ServiceMain` chiama quindi `CAtlExeModuleT::InitializeCom` , che chiama la funzione API Win32 [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex). Per impostazione predefinita, `InitializeCom` passa il flag di COINIT_MULTITHREADED alla funzione. Questo flag indica che il programma deve essere un server a thread libero.

A questo punto, `CAtlServiceModuleT::Run` viene chiamato per eseguire il lavoro principale del servizio. `Run` continua a essere eseguito fino a quando il servizio non viene arrestato.

## <a name="see-also"></a>Vedi anche

[Services](../atl/atl-services.md)<br/>
[Funzione CAtlServiceModuleT:: ServiceMain](../atl/reference/catlservicemodulet-class.md#servicemain)

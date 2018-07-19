---
title: 'Funzione CAtlServiceModuleT:: Start | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- CServiceModule.Start
- CServiceModule::Start
dev_langs:
- C++
helpviewer_keywords:
- Start method
ms.assetid: b5193a23-41bc-42d2-8d55-3eb43dc62238
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5ef614f4cbc3f097e6f790a49c0b599817f9b59c
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37849185"
---
# <a name="catlservicemoduletstart-function"></a>Funzione CAtlServiceModuleT:: Start
Quando viene eseguito il servizio, `_tWinMain` chiamate `CAtlServiceModuleT::WinMain`, che a sua volta chiama `CAtlServiceModuleT::Start`.  
  
 `CAtlServiceModuleT::Start` imposta una matrice di `SERVICE_TABLE_ENTRY` strutture che eseguono il mapping di ogni servizio per la propria funzione di avvio. Questa matrice viene quindi passata alla funzione API Win32 [StartServiceCtrlDispatcher](http://msdn.microsoft.com/library/windows/desktop/ms686324). In teoria, un file EXE in grado di gestire più servizi e la matrice può avere più `SERVICE_TABLE_ENTRY` strutture. Tuttavia, un servizio generato ATL supporta attualmente solo un servizio per ogni file EXE. Pertanto, la matrice ha una singola voce che contiene il nome del servizio e `_ServiceMain` come funzione di avvio. `_ServiceMain` è una funzione membro statico della `CAtlServiceModuleT` che chiama la funzione membro non statico, `ServiceMain`.  
  
> [!NOTE]
>  Errore di `StartServiceCtrlDispatcher` per la connessione al controllo di service manager (SCM) indica probabilmente che il programma non è in esecuzione come servizio. In questo caso, il programma chiama `CAtlServiceModuleT::Run` direttamente in modo che il programma può essere eseguito come server locale. Per altre informazioni sull'esecuzione del programma come server locale, vedere [suggerimenti sul debug](../atl/debugging-tips.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)


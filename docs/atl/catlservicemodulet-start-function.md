---
title: 'Funzione CAtlServiceModuleT:: Start | Documenti Microsoft'
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
ms.openlocfilehash: da8d7358c634416941a551c93c6a2772549a3fd2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32357277"
---
# <a name="catlservicemoduletstart-function"></a>Funzione CAtlServiceModuleT:: Start
Quando viene eseguito il servizio, **tWinMain** chiamate **CAtlServiceModuleT:: WinMain**, che a sua volta chiama `CAtlServiceModuleT::Start`.  
  
 `CAtlServiceModuleT::Start` imposta una matrice di **SERVICE_TABLE_ENTRY** strutture che eseguono il mapping di ogni servizio per la propria funzione di avvio. Questa matrice viene quindi passata alla funzione API Win32, [StartServiceCtrlDispatcher](http://msdn.microsoft.com/library/windows/desktop/ms686324). In teoria, un file EXE in grado di gestire più servizi e la matrice può avere più **SERVICE_TABLE_ENTRY** strutture. Attualmente, tuttavia, un servizio generato ATL supporta un solo servizio per i file EXE. Pertanto, la matrice dispone di una singola voce che contiene il nome del servizio e **ServiceMain** come funzione di avvio. **ServiceMain** è una funzione membro statico di `CAtlServiceModuleT` che chiama la funzione membro non statiche, `ServiceMain`.  
  
> [!NOTE]
>  Errore di **StartServiceCtrlDispatcher** per la connessione per il controllo del servizio Gestione (controllo servizi SCM) indica probabilmente che il programma non è in esecuzione come servizio. In questo caso, il programma chiama `CAtlServiceModuleT::Run` direttamente in modo che il programma può essere eseguito come server locale. Per ulteriori informazioni sull'esecuzione del programma come server locale, vedere [suggerimenti per il debug](../atl/debugging-tips.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)


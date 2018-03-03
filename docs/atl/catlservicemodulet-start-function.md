---
title: 'Funzione CAtlServiceModuleT:: Start | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CServiceModule.Start
- CServiceModule::Start
dev_langs:
- C++
helpviewer_keywords:
- Start method
ms.assetid: b5193a23-41bc-42d2-8d55-3eb43dc62238
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5d4ee7899cda213bf8d8cfd529fd7609976e20d4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlservicemoduletstart-function"></a>Funzione CAtlServiceModuleT:: Start
Quando viene eseguito il servizio, **tWinMain** chiamate **CAtlServiceModuleT:: WinMain**, che a sua volta chiama `CAtlServiceModuleT::Start`.  
  
 `CAtlServiceModuleT::Start`imposta una matrice di **SERVICE_TABLE_ENTRY** strutture che eseguono il mapping di ogni servizio per la propria funzione di avvio. Questa matrice viene quindi passata alla funzione API Win32, [StartServiceCtrlDispatcher](http://msdn.microsoft.com/library/windows/desktop/ms686324). In teoria, un file EXE in grado di gestire più servizi e la matrice può avere più **SERVICE_TABLE_ENTRY** strutture. Attualmente, tuttavia, un servizio generato ATL supporta un solo servizio per i file EXE. Pertanto, la matrice dispone di una singola voce che contiene il nome del servizio e **ServiceMain** come funzione di avvio. **ServiceMain** è una funzione membro statico di `CAtlServiceModuleT` che chiama la funzione membro non statico, `ServiceMain`.  
  
> [!NOTE]
>  Errore di **StartServiceCtrlDispatcher** per la connessione per il controllo del servizio Gestione (controllo servizi SCM) indica probabilmente che il programma non è in esecuzione come servizio. In questo caso, il programma chiama `CAtlServiceModuleT::Run` direttamente in modo che il programma può essere eseguito come server locale. Per ulteriori informazioni sull'esecuzione del programma come server locale, vedere [suggerimenti per il debug](../atl/debugging-tips.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT:: Start](../atl/reference/catlservicemodulet-class.md#start)


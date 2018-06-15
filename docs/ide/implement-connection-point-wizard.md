---
title: Implementazione guidata punto di connessione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.impl.cp.overview
dev_langs:
- C++
helpviewer_keywords:
- Implement Connection Point Wizard [C++]
ms.assetid: c117f6c6-30f0-4adb-82b4-b1f34e0f0fa8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef2f7efa92de3714170e403ea50b5f486c8367d6
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33323758"
---
# <a name="implement-connection-point-wizard"></a>Implementazione guidata punto di connessione
Questa procedura guidata consente di implementare un punto di connessione per un oggetto COM. Un oggetto collegabile, ovvero un'origine, può esporre un punto di connessione per le proprie interfacce o per qualsiasi interfaccia in uscita. Visual C++ e Windows offrono entrambi librerie dei tipi con interfacce in uscita. Ogni interfaccia in uscita può essere implementata da un client in un oggetto, ovvero un sink.  
  
 Per altre informazioni, vedere [Punti di connessione ATL](../atl/atl-connection-points.md).  
  
 **Available type libraries** (Librerie dei tipi disponibili)  
 Visualizza le librerie dei tipi disponibili contenenti le definizioni delle interfacce per le quali è possibile implementare i punti di connessione. Fare clic sul pulsante con i puntini di sospensione per individuare un file contenente la libreria dei tipi da usare.  
  
 **Posizione**  
 Visualizza il percorso della libreria dei tipi attualmente selezionata nell'elenco **Available type libraries** (Librerie dei tipi disponibili).  
  
 **Interfacce**  
 Visualizza le interfacce le cui definizioni sono contenute nella libreria dei tipi attualmente selezionata nella casella **Available type libraries** (Librerie dei tipi disponibili).  
  
|Pulsante Trasferimento|Descrizione|  
|---------------------|-----------------|  
|**>**|Aggiunge all'elenco **Implementa punti di connessione** il nome dell'interfaccia attualmente selezionata nell'elenco **Interfacce**.|  
|**>>**|Aggiunge all'elenco **Implementa punti di connessione** i nomi di tutte le interfacce disponibili nell'elenco **Interfacce**.|  
|**<**|Rimuove il nome dell'interfaccia attualmente selezionata nell'elenco **Implementa punti di connessione**.|  
|**<<**|Rimuove i nomi di tutte le interfacce presenti nell'elenco **Implementa punti di connessione**.|  
  
 **Implementa punti di connessione**  
 Visualizza i nomi delle interfacce per cui si implementano i punti di connessione quando si fa clic **Fine**.  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di un punto di connessione](../ide/implementing-a-connection-point-visual-cpp.md)
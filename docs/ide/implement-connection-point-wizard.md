---
title: Implementazione guidata punto di connessione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.impl.cp.overview
dev_langs: C++
helpviewer_keywords: Implement Connection Point Wizard [C++]
ms.assetid: c117f6c6-30f0-4adb-82b4-b1f34e0f0fa8
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f29b4f25d937c2f538373ff85819f7315150e712
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implement-connection-point-wizard"></a>Implementazione guidata punto di connessione
Questa procedura guidata implementa un punto di connessione per un oggetto COM. Un oggetto collegabile (vale a dire un'origine) è possibile esporre un punto di connessione per le proprie interfacce o per qualsiasi interfaccia in uscita. Visual C++ e Windows forniscono librerie dei tipi che dispongono di interfacce in uscita. Ogni interfaccia in uscita può essere implementata da un client su un oggetto (vale a dire un sink).  
  
 Per ulteriori informazioni, vedere [punti di connessione ATL](../atl/atl-connection-points.md).  
  
 **Librerie dei tipi disponibili**  
 Consente di visualizzare le librerie dei tipi disponibili che contiene le definizioni di interfaccia per cui è possibile implementare i punti di connessione. Fare clic sul pulsante con i puntini di sospensione per individuare un file contenente la libreria dei tipi da utilizzare.  
  
 **Percorso**  
 Visualizza il percorso della libreria dei tipi attualmente selezionato nel **librerie dei tipi disponibili** elenco.  
  
 **Interfacce**  
 Visualizza le interfacce le cui definizioni sono contenuti nella libreria dei tipi attualmente selezionata nel **librerie dei tipi disponibili** casella.  
  
|Pulsante di trasferimento|Descrizione|  
|---------------------|-----------------|  
|**>**|Aggiunge il **implementare i punti di connessione** il nome dell'interfaccia attualmente selezionato nell'elenco il **interfacce** elenco.|  
|**>>**|Aggiunge il **implementare i punti di connessione** elenco i nomi di tutte le interfacce disponibili nel **interfacce** elenco.|  
|**<**|Rimuove il nome dell'interfaccia attualmente selezionato nel **implementare i punti di connessione** elenco.|  
|**<<**|Rimuove tutti i nomi attualmente nell'interfaccia di **implementare i punti di connessione** elenco.|  
  
 **Implementare i punti di connessione**  
 Visualizza i nomi delle interfacce per cui si implementano i punti di connessione quando si fa clic **fine**.  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di un punto di connessione](../ide/implementing-a-connection-point-visual-cpp.md)
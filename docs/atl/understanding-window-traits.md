---
title: Tratti di finestra ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: window traits
ms.assetid: c90cf850-9e91-49da-9cf3-ad4efb30347d
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fda95e4517d2717a89310a8e49a0c5b337feebcf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="understanding-window-traits"></a>Informazioni sulle caratteristiche di finestra
Le classi tratti finestra forniscono un metodo semplice per la standardizzazione stili utilizzati per la creazione di un oggetto finestra ATL. Tratti finestra sono accettati come parametri di modello da [CWindowImpl](../atl/reference/cwindowimpl-class.md) e altre classi di finestra ATL allo scopo di fornire stili finestra a livello di classe predefiniti.  
  
 Se l'autore di un'istanza di finestra non ne fornisce gli stili in modo esplicito nella chiamata a [crea](../atl/reference/cwindowimpl-class.md#create), è possibile utilizzare una classe traits per assicurarsi che la finestra è ancora creata con gli stili corretti. È anche possibile verificare che alcuni stili sono impostati per tutte le istanze di tale classe di finestra mentre altri da impostare per ogni istanza.  
  
## <a name="atl-window-traits-templates"></a>Modelli di tratti di finestra ATL  
 ATL fornisce due modelli di tratti finestra che consentono di impostare gli stili predefiniti in fase di compilazione utilizzando i parametri di modello.  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[CWinTraits](../atl/reference/cwintraits-class.md)|Utilizzare questo modello quando si desidera fornire stili finestra che verranno utilizzati solo quando gli altri stili non vengono specificati nella chiamata a predefiniti **crea**. Gli stili forniti in fase di esecuzione hanno la precedenza sugli stili impostati in fase di compilazione.|  
|[CWinTraitsOR](../atl/reference/cwintraitsor-class.md)|Utilizzare questa classe quando si desidera specificare gli stili che devono essere sempre impostati per la classe di finestra. Gli stili forniti in fase di esecuzione vengono combinati con gli stili impostati in fase di compilazione utilizzando l'operatore OR bit per bit.|  
  
 Oltre a questi modelli, ATL fornisce una serie di predefiniti specializzazioni di `CWinTraits` modello per le combinazioni di stili di finestra comunemente utilizzate. Vedere il [CWinTraits](../atl/reference/cwintraits-class.md) fare riferimento alla documentazione per i dettagli completi.  
  
## <a name="custom-window-traits"></a>Tratti di finestra personalizzati  
 Nel caso improbabile specializzazione di uno dei modelli forniti da ATL non è sufficiente ed è necessario creare la propria classe traits, è sufficiente creare una classe che implementa due funzioni statiche: `GetWndStyle` e **GetWndStyleEx** :  
  
 [!code-cpp[NVC_ATL_Windowing#68](../atl/codesnippet/cpp/understanding-window-traits_1.h)]  
  
 Ognuna di queste funzioni viene passato un valore di stile in fase di esecuzione che è possibile utilizzare per produrre un valore di stile. Se la classe di tratti finestra viene utilizzata come argomento del modello a una classe di finestra ATL, i valori di stile passati alle funzioni statiche saranno passati come argomenti di stile per [crea](../atl/reference/cwindowimpl-class.md#create).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)


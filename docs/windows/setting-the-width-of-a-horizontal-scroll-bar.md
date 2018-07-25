---
title: Impostazione della larghezza di una barra di scorrimento orizzontale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- list controls, scroll bar width
- CListBox::SetHorizontalExtent
- controls [C++], scroll bar
- scroll bars, displaying in controls
- horizontal scroll bar width
- CListBox class, scroll bar width
- scroll bars, width
ms.assetid: 51dad141-aa0b-46a3-a82c-46b80d603d94
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 34545a01c01146992c7d88ecabec1a29a7b438f2
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892793"
---
# <a name="setting-the-width-of-a-horizontal-scroll-bar"></a>Impostazione della larghezza di una barra di scorrimento orizzontale
Quando si aggiunge una casella di riepilogo con una barra di scorrimento orizzontale per una finestra di dialogo utilizzando le classi MFC, la barra di scorrimento non verrà visualizzati automaticamente nell'applicazione.  
  
### <a name="to-make-the-scroll-bar-appear"></a>Per visualizzare la barra scorrimento  
  
1.  Impostare una larghezza massima per l'elemento più ampio chiamando [CListBox:: SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) nel codice.  
  
     Senza questo valore è impostato, la barra di scorrimento non verranno visualizzati, anche quando gli elementi nella casella di riepilogo sono più ampio rispetto alla casella.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)


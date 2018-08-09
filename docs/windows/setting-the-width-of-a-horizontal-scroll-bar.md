---
title: Impostazione della larghezza di una barra di scorrimento orizzontale | Microsoft Docs
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
ms.openlocfilehash: 54b68ec8f780fc8022543813b412eaff2045cbdf
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39645604"
---
# <a name="setting-the-width-of-a-horizontal-scroll-bar"></a>Impostazione della larghezza di una barra di scorrimento orizzontale
Quando si aggiunge una casella di riepilogo con una barra di scorrimento orizzontale per una finestra di dialogo utilizzando le classi MFC, la barra di scorrimento non verrà visualizzata automaticamente nell'applicazione.  
  
### <a name="to-make-the-scroll-bar-appear"></a>Per visualizzare la barra scorrimento  
  
1.  Impostare una larghezza massima per l'elemento più largo chiamando [CListBox:: SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) nel codice.  
  
     Senza questo valore è impostato, la barra di scorrimento non verranno visualizzati, anche quando gli elementi nella casella di riepilogo sono larghi della casella.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)
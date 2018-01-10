---
title: Allocazione di risorse GDI | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- resources [MFC], printing
- GDI objects [MFC], allocating during printing
- printing [MFC], allocating GDI resources
ms.assetid: cef7e94d-5a27-4aea-a9ee-8369fc895d3a
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7420dbdc1f7560eae9bc5b1a15954c3d68b59678
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="allocating-gdi-resources"></a>Allocazione di risorse GDI
Questo articolo descrive come allocare e deallocare gli oggetti Graphics Device Interface (GDI) di Windows necessari per la stampa.  
  
> [!NOTE]
>  GDI+ è incluso in Windows XP ed è disponibile come componente ridistribuibile per Windows NT 4.0 SP6, Windows 2000, Windows 98 e Windows Me. Per scaricare l'ultimo file ridistribuibile, vedere [http://www.microsoft.com/msdownload/platformsdk/sdkupdate/psdkredist.htm](http://www.microsoft.com/msdownload/platformsdk/sdkupdate/psdkredist.htm). Per ulteriori informazioni, vedere la documentazione di GDI+ SDK all'indirizzo: [http://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/GDIPlus/GDIPlus.asp](http://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/gdiplus/gdiplus.asp).  
  
 Si supponga di dover usare determinati tipi di carattere, penne o altri oggetti GDI per la stampa, ma non per la visualizzazione sullo schermo. A causa della quantità di memoria che richiedono, non è conveniente allocare questi oggetti all'avvio dell'applicazione. Quando l'applicazione non stampa un documento, la memoria potrebbe essere necessaria per altri scopi. È preferibile allocare gli oggetti all'avvio della stampa e quindi eliminarli al termine.  
  
 Per allocare questi oggetti GDI, eseguire l'override di [OnBeginPrinting](../mfc/reference/cview-class.md#onbeginprinting) funzione membro. Questa funzione è particolarmente adatta a questo scopo per due motivi: il framework chiama questa funzione una sola volta all'inizio di ogni processo di stampa e, a differenza [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting), questa funzione dispone di accesso per il [CDC](../mfc/reference/cdc-class.md) oggetto che rappresenta il driver di dispositivo stampante. È possibile archiviare questi oggetti per l'utilizzo durante il processo di stampa definendo variabili membro nella classe di visualizzazione che puntano a oggetti GDI (ad esempio, **CFont \***  membri e così via).  
  
 Per utilizzare gli oggetti GDI creati, selezionarli nel contesto di dispositivo stampante nel [OnPrint](../mfc/reference/cview-class.md#onprint) funzione membro. Se sono necessari oggetti GDI diversi per diverse pagine del documento, è possibile esaminare il `m_nCurPage` appartenente il [CPrintInfo](../mfc/reference/cprintinfo-structure.md) struttura e selezionare l'oggetto GDI di conseguenza. Se è necessario un oggetto GDI per diverse pagine consecutive, in Windows è necessario selezionarlo nel contesto di dispositivo ogni volta che viene chiamato `OnPrint`.  
  
 Per deallocare questi oggetti GDI, eseguire l'override di [OnEndPrinting](../mfc/reference/cview-class.md#onendprinting) funzione membro. Il framework chiama questa funzione alla fine di ogni processo di stampa, permettendo di deallocare oggetti GDI specifici della stampa prima che l'applicazione torni ad altre attività.  
  
## <a name="see-also"></a>Vedere anche  
 [Stampa](../mfc/printing.md)   
 [Procedura di stampa predefinita](../mfc/how-default-printing-is-done.md)


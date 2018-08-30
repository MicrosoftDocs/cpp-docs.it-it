---
title: Allocazione di risorse GDI | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- resources [MFC], printing
- GDI objects [MFC], allocating during printing
- printing [MFC], allocating GDI resources
ms.assetid: cef7e94d-5a27-4aea-a9ee-8369fc895d3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0f7923d36abcd0e9f6b7cb9e97072f5782178919
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208048"
---
# <a name="allocating-gdi-resources"></a>Allocazione di risorse GDI
Questo articolo descrive come allocare e deallocare gli oggetti Graphics Device Interface (GDI) di Windows necessari per la stampa.  
  
> [!NOTE]
>  Per altre informazioni, vedere la documentazione di GDI+ SDK all'indirizzo: [ https://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/GDIPlus/GDIPlus.asp ](https://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/gdiplus/gdiplus.asp).  
  
 Si supponga di dover usare determinati tipi di carattere, penne o altri oggetti GDI per la stampa, ma non per la visualizzazione sullo schermo. A causa della quantità di memoria che richiedono, non è conveniente allocare questi oggetti all'avvio dell'applicazione. Quando l'applicazione non stampa un documento, la memoria potrebbe essere necessaria per altri scopi. È preferibile allocare gli oggetti all'avvio della stampa e quindi eliminarli al termine.  
  
 Per allocare questi oggetti GDI, eseguire l'override di [OnBeginPrinting](../mfc/reference/cview-class.md#onbeginprinting) funzione membro. Questa funzione è particolarmente adatta a questo scopo per due motivi: il framework chiama questa funzione una sola volta all'inizio di ogni processo di stampa e, a differenza [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting), questa funzione può accedere al [CDC](../mfc/reference/cdc-class.md) oggetto che rappresenta il driver di dispositivo stampante. È possibile archiviare questi oggetti per l'uso durante il processo di stampa definendo variabili membro nella classe di visualizzazione che puntano agli oggetti GDI (ad esempio, `CFont *` membri e così via).  
  
 Per usare gli oggetti GDI creati, selezionarli nel contesto di dispositivo stampante nel [OnPrint](../mfc/reference/cview-class.md#onprint) funzione membro. Se sono necessari oggetti GDI diversi per diverse pagine del documento, è possibile esaminare i `m_nCurPage` membro della [CPrintInfo](../mfc/reference/cprintinfo-structure.md) strutturare e selezionare l'oggetto GDI di conseguenza. Se è necessario un oggetto GDI per diverse pagine consecutive, in Windows è necessario selezionarlo nel contesto di dispositivo ogni volta che viene chiamato `OnPrint`.  
  
 Per deallocare questi oggetti GDI, eseguire l'override di [OnEndPrinting](../mfc/reference/cview-class.md#onendprinting) funzione membro. Il framework chiama questa funzione alla fine di ogni processo di stampa, permettendo di deallocare oggetti GDI specifici della stampa prima che l'applicazione torni ad altre attività.  
  
## <a name="see-also"></a>Vedere anche  
 [Stampa](../mfc/printing.md)   
 [Procedura di stampa predefinita](../mfc/how-default-printing-is-done.md)


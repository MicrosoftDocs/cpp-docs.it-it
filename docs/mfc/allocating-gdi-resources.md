---
title: Allocazione di risorse GDI
ms.date: 06/03/2019
helpviewer_keywords:
- resources [MFC], printing
- GDI objects [MFC], allocating during printing
- printing [MFC], allocating GDI resources
ms.assetid: cef7e94d-5a27-4aea-a9ee-8369fc895d3a
ms.openlocfilehash: 672a9a2ce103ae7f53f61ae955f77276eb1d2945
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69509271"
---
# <a name="allocating-gdi-resources"></a>Allocazione di risorse GDI

Questo articolo descrive come allocare e deallocare gli oggetti Graphics Device Interface (GDI) di Windows necessari per la stampa.

> [!NOTE]
>  Per ulteriori informazioni, vedere la [documentazione di GDI+ SDK](/windows/win32/gdiplus/-gdiplus-gdi-start).

Si supponga di dover usare determinati tipi di carattere, penne o altri oggetti GDI per la stampa, ma non per la visualizzazione sullo schermo. A causa della quantità di memoria che richiedono, non è conveniente allocare questi oggetti all'avvio dell'applicazione. Quando l'applicazione non stampa un documento, la memoria potrebbe essere necessaria per altri scopi. È preferibile allocare gli oggetti all'avvio della stampa e quindi eliminarli al termine.

Per allocare questi oggetti GDI, eseguire l'override della funzione membro [OnBeginPrinting](../mfc/reference/cview-class.md#onbeginprinting) . Questa funzione è particolarmente adatta a questo scopo per due motivi: il Framework chiama questa funzione una volta all'inizio di ogni processo di stampa e, a differenza di [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting), questa funzione ha accesso all'oggetto [CDC](../mfc/reference/cdc-class.md) che rappresenta il dispositivo di stampa driver. È possibile archiviare questi oggetti da utilizzare durante il processo di stampa definendo le variabili membro nella classe di visualizzazione che puntano a oggetti GDI (ad `CFont *` esempio, membri e così via).

Per usare gli oggetti GDI creati, selezionarli nel contesto di dispositivo della stampante nella funzione membro [OnPrint](../mfc/reference/cview-class.md#onprint) . Se sono necessari oggetti GDI diversi per pagine diverse del documento, è possibile esaminare il `m_nCurPage` membro della struttura [CPrintInfo](../mfc/reference/cprintinfo-structure.md) e selezionare di conseguenza l'oggetto GDI. Se è necessario un oggetto GDI per diverse pagine consecutive, in Windows è necessario selezionarlo nel contesto di dispositivo ogni volta che viene chiamato `OnPrint`.

Per deallocare questi oggetti GDI, eseguire l'override della funzione membro [OnEndPrinting](../mfc/reference/cview-class.md#onendprinting) . Il framework chiama questa funzione alla fine di ogni processo di stampa, permettendo di deallocare oggetti GDI specifici della stampa prima che l'applicazione torni ad altre attività.

## <a name="see-also"></a>Vedere anche

[Stampa](../mfc/printing.md)<br/>
[Procedura di stampa predefinita](../mfc/how-default-printing-is-done.md)

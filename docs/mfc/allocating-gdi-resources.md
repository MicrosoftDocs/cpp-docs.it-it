---
title: Allocazione di risorse GDI
ms.date: 06/03/2019
helpviewer_keywords:
- resources [MFC], printing
- GDI objects [MFC], allocating during printing
- printing [MFC], allocating GDI resources
ms.assetid: cef7e94d-5a27-4aea-a9ee-8369fc895d3a
ms.openlocfilehash: f0cadac5320a8c6e91eb3b1989d1fb3c0c701eb0
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623243"
---
# <a name="allocating-gdi-resources"></a>Allocazione di risorse GDI

Questo articolo descrive come allocare e deallocare gli oggetti Graphics Device Interface (GDI) di Windows necessari per la stampa.

> [!NOTE]
> Per ulteriori informazioni, vedere la [documentazione di GDI+ SDK](/windows/win32/gdiplus/-gdiplus-gdi-start).

Si supponga di dover usare determinati tipi di carattere, penne o altri oggetti GDI per la stampa, ma non per la visualizzazione sullo schermo. A causa della quantità di memoria che richiedono, non è conveniente allocare questi oggetti all'avvio dell'applicazione. Quando l'applicazione non stampa un documento, la memoria potrebbe essere necessaria per altri scopi. È preferibile allocare gli oggetti all'avvio della stampa e quindi eliminarli al termine.

Per allocare questi oggetti GDI, eseguire l'override della funzione membro [OnBeginPrinting](reference/cview-class.md#onbeginprinting) . Questa funzione è particolarmente adatta a questo scopo per due motivi: il Framework chiama questa funzione una volta all'inizio di ogni processo di stampa e, a differenza di [OnPreparePrinting](reference/cview-class.md#onprepareprinting), questa funzione ha accesso all'oggetto [CDC](reference/cdc-class.md) che rappresenta il driver di dispositivo stampante. È possibile archiviare questi oggetti da utilizzare durante il processo di stampa definendo le variabili membro nella classe di visualizzazione che puntano a oggetti GDI (ad esempio, `CFont *` membri e così via).

Per usare gli oggetti GDI creati, selezionarli nel contesto di dispositivo della stampante nella funzione membro [OnPrint](reference/cview-class.md#onprint) . Se sono necessari oggetti GDI diversi per pagine diverse del documento, è possibile esaminare il `m_nCurPage` membro della struttura [CPrintInfo](reference/cprintinfo-structure.md) e selezionare di conseguenza l'oggetto GDI. Se è necessario un oggetto GDI per diverse pagine consecutive, in Windows è necessario selezionarlo nel contesto di dispositivo ogni volta che viene chiamato `OnPrint`.

Per deallocare questi oggetti GDI, eseguire l'override della funzione membro [OnEndPrinting](reference/cview-class.md#onendprinting) . Il framework chiama questa funzione alla fine di ogni processo di stampa, permettendo di deallocare oggetti GDI specifici della stampa prima che l'applicazione torni ad altre attività.

## <a name="see-also"></a>Vedere anche

[Stampa](printing.md)<br/>
[Procedura di stampa predefinita](how-default-printing-is-done.md)

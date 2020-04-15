---
title: 'Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite'
ms.date: 09/12/2018
f1_keywords:
- CLSID_CPicturePropPage
- CLSID_CColorPropPage
- CLSID_CFontPropPage
helpviewer_keywords:
- picture stock property pages [MFC]
- CLSID_CFontPropPage [MFC]
- color stock property pages [MFC]
- CLSID_CColorPropPage [MFC]
- fonts [MFC], ActiveX controls
- stock properties [MFC], stock property pages
- CLSID_CPicturePropPage [MFC]
- MFC ActiveX controls [MFC], property pages
ms.assetid: 22638d86-ff3e-4124-933e-54b7c2a25968
ms.openlocfilehash: 13a0edb72657c9ffad00dcb909019bdfe4b87e11
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358208"
---
# <a name="mfc-activex-controls-using-stock-property-pages"></a>Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite

In questo articolo vengono illustrate le pagine delle proprietà predefinite disponibili per i controlli ActiveX e come utilizzarle.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Per altre informazioni sull'uso delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:For more information on using property pages in an ActiveX control, see the following articles:

- [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)

- [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)

MFC fornisce tre pagine delle proprietà predefinite `CLSID_CColorPropPage` `CLSID_CFontPropPage`da `CLSID_CPicturePropPage`utilizzare con i controlli ActiveX: , e . Queste pagine visualizzano un'interfaccia utente per le proprietà predefinite, font e immagine, rispettivamente.

Per incorporare queste pagine delle proprietà in un controllo, aggiungere i relativi ID al codice che inizializza la matrice di ID della pagina delle proprietà del controllo. Nell'esempio seguente, questo codice, che si trova nel file di implementazione del controllo (. CPP), inizializza la matrice in modo che contenga tutte `CMyPropPage` e tre le pagine delle proprietà predefinite e la pagina delle proprietà predefinita (denominata in questo esempio):

[!code-cpp[NVC_MFC_AxOpt#21](../mfc/codesnippet/cpp/mfc-activex-controls-using-stock-property-pages_1.cpp)]

Si noti che il conteggio delle pagine delle proprietà, nella macro BEGIN_PROPPAGEIDS, è 4. Rappresenta il numero di pagine delle proprietà supportate dal controllo ActiveX.

Dopo aver apportato queste modifiche, ricompilare il progetto. Il controllo dispone ora di pagine delle proprietà per le proprietà del tipo di carattere, dell'immagine e del colore.

> [!NOTE]
> Se non è possibile accedere alle pagine delle proprietà di supporto del controllo, è possibile che la DLL MFC (MFCxx.DLL) non sia stata registrata correttamente con il sistema operativo corrente. Ciò è in genere il risultato dell'installazione di Visual C, in un sistema operativo diverso da quello attualmente in esecuzione.

> [!TIP]
> Se le pagine delle proprietà predefinite non sono visibili (vedere nota precedente), registrare la DLL eseguendo RegSvr32.exe dalla riga di comando con il nome del percorso completo della DLL.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)

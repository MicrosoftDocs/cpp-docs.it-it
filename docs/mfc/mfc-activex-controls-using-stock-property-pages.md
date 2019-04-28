---
title: 'Controlli ActiveX MFC: Uso delle pagine proprietà predefinite'
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
ms.openlocfilehash: b73a027422cfe9cbf03afece400c1b513cace151
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62239335"
---
# <a name="mfc-activex-controls-using-stock-property-pages"></a>Controlli ActiveX MFC: Uso delle pagine proprietà predefinite

Questo articolo illustra le pagine delle proprietà predefinite disponibili per i controlli ActiveX e come usarli.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Per altre informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:

- [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)

- [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)

MFC offre tre pagine delle proprietà predefinite per l'uso con i controlli ActiveX: `CLSID_CColorPropPage`, `CLSID_CFontPropPage`, e `CLSID_CPicturePropPage`. Queste pagine visualizzano un'interfaccia utente per colore azionario, tipo di carattere e proprietà delle immagini, rispettivamente.

Per incorporare queste pagine delle proprietà in un controllo, aggiungere i relativi ID al codice di inizializzazione di una matrice di ID di pagina delle proprietà del controllo. Nell'esempio seguente, questo codice, che si trova nel file di implementazione del controllo (. CPP), consente di inizializzare la matrice per contenere tutti i tre pagine proprietà predefinite e la pagina delle proprietà predefinita (denominata `CMyPropPage` in questo esempio):

[!code-cpp[NVC_MFC_AxOpt#21](../mfc/codesnippet/cpp/mfc-activex-controls-using-stock-property-pages_1.cpp)]

Si noti che il conteggio delle pagine delle proprietà, in BEGIN_PROPPAGEIDS (macro) è 4. Rappresenta il numero di pagine delle proprietà supportate dal controllo ActiveX.

Dopo aver apportate queste modifiche, ricompilare il progetto. A questo punto, il controllo contiene pagine delle proprietà per il tipo di carattere, immagine e le proprietà di colore.

> [!NOTE]
>  Se le pagine delle proprietà predefinite di controllo non è accessibile, è possibile che le DLL MFC (MFCxx. dll) non è stata registrata correttamente con il sistema operativo corrente. Ciò comporta in genere di installare Visual C++ in un sistema operativo diverso da quello attualmente in esecuzione.

> [!TIP]
>  Se non sono visibili le pagine delle proprietà predefinite (vedere la nota precedente), registrare la DLL esegue RegSvr32.exe dalla riga di comando con il nome e percorso completo alla DLL.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)

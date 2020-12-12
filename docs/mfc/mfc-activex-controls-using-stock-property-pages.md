---
description: 'Ulteriori informazioni su: controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite'
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
ms.openlocfilehash: 37cb6e5b5dfa08c5e7935064a66c2c77fe8dcde6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133055"
---
# <a name="mfc-activex-controls-using-stock-property-pages"></a>Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite

Questo articolo illustra le pagine delle proprietà predefinite disponibili per i controlli ActiveX e il modo in cui usarle.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:

- [Controlli ActiveX MFC: pagine delle proprietà](mfc-activex-controls-property-pages.md)

- [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](mfc-activex-controls-adding-another-custom-property-page.md)

MFC fornisce tre pagine di proprietà predefinite da utilizzare con i controlli ActiveX: `CLSID_CColorPropPage` , `CLSID_CFontPropPage` e `CLSID_CPicturePropPage` . In queste pagine viene visualizzata un'interfaccia utente per le proprietà colore, tipo di carattere e immagine, rispettivamente.

Per incorporare queste pagine delle proprietà in un controllo, aggiungere gli ID al codice che inizializza la matrice di ID della pagina delle proprietà del controllo. Nell'esempio seguente, questo codice si trova nel file di implementazione del controllo (. CPP), Inizializza la matrice in modo che contenga tutte e tre le pagine delle proprietà predefinite e la pagina delle proprietà predefinita (denominata `CMyPropPage` in questo esempio):

[!code-cpp[NVC_MFC_AxOpt#21](codesnippet/cpp/mfc-activex-controls-using-stock-property-pages_1.cpp)]

Si noti che il conteggio delle pagine delle proprietà, nella BEGIN_PROPPAGEIDS macro, è 4. Rappresenta il numero di pagine delle proprietà supportate dal controllo ActiveX.

Dopo aver apportato queste modifiche, ricompilare il progetto. Il controllo dispone ora di pagine delle proprietà per le proprietà relative a tipo di carattere, immagine e colore.

> [!NOTE]
> Se non è possibile accedere alle pagine delle proprietà predefinite del controllo, il problema potrebbe essere dovuto al fatto che la DLL MFC (MFCxx.DLL) non è stata registrata correttamente con il sistema operativo corrente. Questo in genere risulta dall'installazione di Visual C++ in un sistema operativo diverso da quello attualmente in esecuzione.

> [!TIP]
> Se le pagine delle proprietà predefinite non sono visibili (vedere la nota precedente), registrare la DLL eseguendo RegSvr32.exe dalla riga di comando con il nome percorso completo della DLL.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: aggiunta di proprietà predefinite](mfc-activex-controls-adding-stock-properties.md)

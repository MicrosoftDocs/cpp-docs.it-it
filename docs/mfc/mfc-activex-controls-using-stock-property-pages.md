---
title: 'Controlli ActiveX MFC: Utilizzo delle pagine proprietà predefinite | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CLSID_CPicturePropPage
- CLSID_CColorPropPage
- CLSID_CFontPropPage
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5eb8dc1bbdc496072df829531b0f10aaaca069a8
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932195"
---
# <a name="mfc-activex-controls-using-stock-property-pages"></a>Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite
Questo articolo vengono descritte le pagine delle proprietà predefinite disponibili per i controlli ActiveX e come utilizzarle.  
  
 Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:  
  
-   [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)  
  
-   [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)  
  
 MFC offre tre pagine proprietà predefinite per l'uso con i controlli ActiveX: `CLSID_CColorPropPage`, `CLSID_CFontPropPage`, e `CLSID_CPicturePropPage`. Queste pagine visualizzano un'interfaccia utente per colore azionario, tipo di carattere e proprietà immagine, rispettivamente.  
  
 Per incorporare queste pagine delle proprietà in un controllo, aggiungere i relativi ID al codice di inizializzazione di una matrice di ID di pagina delle proprietà del controllo. Nell'esempio seguente, questo codice, che si trova nel file di implementazione del controllo (. CPP), consente di inizializzare la matrice deve contenere tutti i tre pagine delle proprietà predefinite e la pagina delle proprietà predefinito (denominato `CMyPropPage` in questo esempio):  
  
 [!code-cpp[NVC_MFC_AxOpt#21](../mfc/codesnippet/cpp/mfc-activex-controls-using-stock-property-pages_1.cpp)]  
  
 Si noti che il conteggio delle pagine delle proprietà, nella macro BEGIN_PROPPAGEIDS è 4. Rappresenta il numero di pagine delle proprietà supportate dal controllo ActiveX.  
  
 Dopo avere apportate queste modifiche, ricompilare il progetto. Ora il controllo dispone di pagine delle proprietà per il tipo di carattere, immagini e le proprietà dei colori.  
  
> [!NOTE]
>  Se le pagine delle proprietà predefinite non sono accessibili, è possibile che la DLL MFC (MFCxx. dll) non è stata registrata correttamente con il sistema operativo corrente. Ciò comporta in genere di installare Visual C++ in un sistema operativo diverso da quello attualmente in esecuzione.  
  
> [!TIP]
>  Se non sono visibili le pagine delle proprietà predefinite (vedere nota precedente), registrare la DLL eseguendo RegSvr32.exe dalla riga di comando con il nome e percorso completo della DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)


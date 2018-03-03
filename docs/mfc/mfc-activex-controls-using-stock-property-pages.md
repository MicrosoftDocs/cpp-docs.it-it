---
title: "Controlli ActiveX MFC: Utilizzo pagine delle proprietà predefinite | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ed2d8cd6c852a15c4190c16c049e29577b754ce7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-using-stock-property-pages"></a>Controlli ActiveX MFC: utilizzo delle pagine delle proprietà predefinite
In questo articolo vengono illustrate le pagine delle proprietà predefinite disponibili per i controlli ActiveX e come utilizzarle.  
  
 Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:  
  
-   [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)  
  
-   [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)  
  
 MFC fornisce tre pagine delle proprietà predefinite per l'utilizzo con controlli ActiveX: **CLSID_CColorPropPage**, **CLSID_CFontPropPage**, e **CLSID_CPicturePropPage**. Queste pagine visualizzano un'interfaccia utente per predefinite colore, carattere e la proprietà immagine, rispettivamente.  
  
 Per incorporare queste pagine delle proprietà in un controllo, aggiungere i relativi ID per il codice di inizializzazione di una matrice di ID di pagina delle proprietà del controllo. Nell'esempio seguente, questo codice, si trova nel file di implementazione del controllo (. CPP), consente di inizializzare la matrice per contenere tutti i tre pagine delle proprietà predefinite e la pagina delle proprietà predefinite (denominato `CMyPropPage` in questo esempio):  
  
 [!code-cpp[NVC_MFC_AxOpt#21](../mfc/codesnippet/cpp/mfc-activex-controls-using-stock-property-pages_1.cpp)]  
  
 Si noti che il numero di proprietà, in pagine di `BEGIN_PROPPAGEIDS` (macro), è 4. Rappresenta il numero di pagine delle proprietà supportate dal controllo ActiveX.  
  
 Dopo avere apportate queste modifiche, ricompilare il progetto. Ora il controllo dispone di pagine delle proprietà per il tipo di carattere, immagini e le proprietà dei colori.  
  
> [!NOTE]
>  Se le pagine delle proprietà predefinite non sono accessibili, è possibile che la DLL MFC (MFCxx.DLL) non è stata registrata correttamente con il sistema operativo corrente. Questo inconveniente si verifica l'installazione di Visual C++ in un sistema operativo diverso da quello attualmente in esecuzione.  
  
> [!TIP]
>  Se le pagine delle proprietà predefinite non sono visibili (vedere nota precedente), registrare la DLL eseguendo RegSvr32.exe dalla riga di comando con il nome e percorso completo della DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)


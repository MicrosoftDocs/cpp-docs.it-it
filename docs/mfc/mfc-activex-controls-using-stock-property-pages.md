---
title: "Controlli ActiveX MFC: utilizzo delle pagine delle propriet&#224; predefinite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLSID_CPicturePropPage"
  - "CLSID_CColorPropPage"
  - "CLSID_CFontPropPage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLSID_CColorPropPage"
  - "CLSID_CFontPropPage"
  - "CLSID_CPicturePropPage"
  - "pagine proprietà predefinite colore"
  - "tipi di carattere, controlli ActiveX"
  - "MFC (controlli ActiveX), proprietà (pagine)"
  - "pagine proprietà predefinite immagine"
  - "proprietà predefinite, pagine proprietà predefinite"
ms.assetid: 22638d86-ff3e-4124-933e-54b7c2a25968
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: utilizzo delle pagine delle propriet&#224; predefinite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo vengono discusse le pagine di proprietà predefinite disponibili per i controlli ActiveX e come utilizzarle.  
  
 Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:  
  
-   [Controlli ActiveX MFC: pagine delle proprietà](../mfc/mfc-activex-controls-property-pages.md)  
  
-   [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)  
  
 MFC fornisce tre pagine delle proprietà predefinite da utilizzare con i controlli ActiveX: **CLSID\_CColorPropPage**, **CLSID\_CFontPropPage** e **CLSID\_CPicturePropPage**.  Queste pagine visualizzano un'interfaccia utente per colore predefinito, il tipo di carattere e proprietà d'immagine, rispettivamente.  
  
 Per includere queste pagine delle proprietà in un controllo, aggiungere i relativi ID al codice che inizializza la matrice del controllo della pagina delle proprietà ID.  Nell'esempio seguente, questo codice, che si trova nel file di implementazione del controllo \(.CPP\), inizializza la matrice per contenere tutte e tre le pagine delle proprietà predefinite e la pagina delle proprietà predefinita \( denominato `CMyPropPage` in questo esempio\):  
  
 [!code-cpp[NVC_MFC_AxOpt#21](../mfc/codesnippet/CPP/mfc-activex-controls-using-stock-property-pages_1.cpp)]  
  
 Si noti che il conteggio delle pagine delle proprietà, nella macro `BEGIN_PROPPAGEIDS`, è 4.  Questo rappresenta il numero di pagine delle proprietà supportate dal controllo ActiveX.  
  
 Dopo che queste modifiche sono state apportate, ricompilare il progetto.  Il controllo presenta pagine delle proprietà per il tipo di carattere, immagini e le proprietà dei colori.  
  
> [!NOTE]
>  Se le pagine delle proprietà delle azioni di controllo non sono accessibili, è possibile che la DLL MFC \(MFCxx.DLL\) non sia stata registrata correttamente con il sistema operativo corrente.  In genere è il risultato dell'installazione di Visual C\+\+ in un sistema operativo differente da quello attualmente in esecuzione.  
  
> [!TIP]
>  Se le pagine delle proprietà predefinite non sono visibili \(vedere nota precedente\), registrare la DLL mediante RegSvr32.exe dalla riga di comando con il percorso completo della DLL.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: aggiunta di proprietà predefinite](../mfc/mfc-activex-controls-adding-stock-properties.md)
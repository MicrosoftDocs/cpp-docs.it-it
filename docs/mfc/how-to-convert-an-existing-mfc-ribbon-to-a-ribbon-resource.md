---
title: 'Procedura: convertire una barra multifunzione MFC esistente in una risorsa Ribbon'
ms.date: 11/04/2016
helpviewer_keywords:
- ribbon resource, converting from an MFC ribbon
- MFC ribbon, converting to a ribbon resource
ms.assetid: 324b7ff6-58f9-4691-96a9-9836a79d0fb6
ms.openlocfilehash: 56f36c977453d338b9e9bbd2462c1a8830ffe258
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620063"
---
# <a name="how-to-convert-an-existing-mfc-ribbon-to-a-ribbon-resource"></a>Procedura: convertire una barra multifunzione MFC esistente in una risorsa Ribbon

Le risorse barra multifunzione sono più facili da visualizzare, modificare e gestire rispetto alle barre multifunzione codificate manualmente. In questo argomento viene descritto come convertire una barra multifunzione codificata manualmente in un progetto MFC in una risorsa barra multifunzione.

È necessario disporre di un progetto MFC esistente con codice che utilizza le classi della barra multifunzione MFC, ad esempio la [classe CMFCRibbonBar](reference/cmfcribbonbar-class.md).

### <a name="to-convert-an-mfc-ribbon-to-a-ribbon-resource"></a>Per convertire una barra multifunzione MFC in una risorsa barra multifunzione

1. In Visual Studio, in un progetto MFC esistente, aprire il file di origine in cui `CMFCRibbonBar` viene inizializzato l'oggetto. In genere, è il file mainfrm.cpp. Aggiungere il codice seguente dopo il codice di inizializzazione per la barra multifunzione.

```
    m_wndRibbonBar.SaveToXMLFile("RibbonOutput.xml");
```

   Salvare e chiudere il file.

1. Compilare ed eseguire l'applicazione MFC, quindi aprire RibbonOutput.txt nel Blocco Note e copiarne il contenuto.

1. In Visual Studio scegliere **Aggiungi risorsa**dal menu **progetto** . Nella finestra di dialogo **Aggiungi risorsa** selezionare **barra multifunzione** e quindi fare clic su **nuovo**.

   In Visual Studio verrà creata una risorsa barra multifunzione che verrà aperta nella visualizzazione Progettazione. L'ID di risorsa della barra multifunzione è IDR_RIBBON1, che viene visualizzato nella **visualizzazione risorse**. La barra multifunzione viene definita nel file XML ribbon1.mfcribbon-ms.

1. In Visual Studio, aprire ribbon1.mfcribbon-ms, eliminarne il contenuto, quindi incollarvi il contenuto del file RibbonOutput.txt copiato precedentemente. Salvare e chiudere il file ribbon1.mfcribbon-ms.

1. Aprire nuovamente il file sorgente in cui viene inizializzato l'oggetto CMFCRibbonBar (in genere mainfrm.cpp) e commentare il codice della barra multifunzione esistente. Aggiungere il codice seguente dopo il codice commentato.

```
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);
```

1. Compilare il progetto ed eseguire il programma.

## <a name="see-also"></a>Vedere anche

[Finestra di progettazione della barra multifunzione (MFC)](ribbon-designer-mfc.md)

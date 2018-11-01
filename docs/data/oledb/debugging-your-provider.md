---
title: Debug del provider
ms.date: 11/04/2016
helpviewer_keywords:
- debugging [C++], providers
- OLE DB providers, debugging
- Visual C++ debugger, debugging providers
- Visual C++ debugger
ms.assetid: 90d4e7db-06ea-4de0-a7f4-4f3751d50d93
ms.openlocfilehash: e79719075bcd98733031abd63708bea861388cff
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466217"
---
# <a name="debugging-your-provider"></a>Debug del provider

Esistono due modi per eseguire il debug del provider:

- Poiché i provider vengono creati nel processo, è possibile creare codice consumer usando i modelli consumer OLE DB e il passaggio in un provider normalmente.

- È possibile usare l'utilità ITEST fornito con Visual C++.

## <a name="to-use-the-itest-utility"></a>Usare l'utilità ITEST

1. Aprire il progetto del provider.

1. Nel **progetti** menu, fare clic su **impostazioni**.

1. Nel **pagine delle proprietà** della finestra di dialogo fare clic sui **Debug** scheda.

1. Nel **eseguibile per sessione di Debug** , selezionare l'applicazione ITEST.

1. Impostare punti di interruzione e quindi eseguire il debug come di consueto.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
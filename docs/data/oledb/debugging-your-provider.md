---
title: Debug del provider
ms.date: 10/29/2018
helpviewer_keywords:
- debugging [C++], providers
- OLE DB providers, debugging
- Visual C++ debugger, debugging providers
- Visual C++ debugger
ms.assetid: 90d4e7db-06ea-4de0-a7f4-4f3751d50d93
ms.openlocfilehash: 21d4cb455413c3f7cbcbed02cdd4c364a469426d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62176148"
---
# <a name="debugging-your-provider"></a>Debug del provider

Esistono due modi per eseguire il debug del provider:

- Poiché i provider vengono creati nel processo, è possibile creare codice consumer usando i modelli consumer OLE DB e il passaggio in un provider normalmente.

- È possibile usare varie utilità forniti con Visual C++.

## <a name="to-use-debugging"></a>Eseguire il debug

1. Aprire il progetto del provider.

1. Nel **progetti** menu, fare clic su **proprietà**.

1. Nel **pagine delle proprietà** finestra di dialogo, fare clic sul **debug** scheda.

1. Selezionare opzioni come richiesto, selezionare **OK**.

1. Impostare punti di interruzione e quindi eseguire il debug come di consueto.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)